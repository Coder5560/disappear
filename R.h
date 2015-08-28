#pragma once

namespace R{

	enum class NodeState{
		EMPTY,EMPTY_SUGGEST,FILL,FILL_MOVING
	};

	enum class NodeType{
		NORMAL_NODE, END_NODE
	};

	enum class Direction {
		TOP_LEFT,TOP_RIGHT,LEFT,RIGHT,BOTTOM_LEFT,BOTTOM_RIGHT
	};
}