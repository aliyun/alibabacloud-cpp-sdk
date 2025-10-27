// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODYCLUSTERNETWORK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODYCLUSTERNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterNetworkResponseBodyClusterNetworkEdge.hpp>
#include <alibabacloud/models/DescribeClusterNetworkResponseBodyClusterNetworkNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterNetworkResponseBodyClusterNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetworkResponseBodyClusterNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(Edge, edge_);
      DARABONBA_PTR_TO_JSON(Node, node_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetworkResponseBodyClusterNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(Edge, edge_);
      DARABONBA_PTR_FROM_JSON(Node, node_);
    };
    DescribeClusterNetworkResponseBodyClusterNetwork() = default ;
    DescribeClusterNetworkResponseBodyClusterNetwork(const DescribeClusterNetworkResponseBodyClusterNetwork &) = default ;
    DescribeClusterNetworkResponseBodyClusterNetwork(DescribeClusterNetworkResponseBodyClusterNetwork &&) = default ;
    DescribeClusterNetworkResponseBodyClusterNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetworkResponseBodyClusterNetwork() = default ;
    DescribeClusterNetworkResponseBodyClusterNetwork& operator=(const DescribeClusterNetworkResponseBodyClusterNetwork &) = default ;
    DescribeClusterNetworkResponseBodyClusterNetwork& operator=(DescribeClusterNetworkResponseBodyClusterNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edge_ == nullptr
        && return this->node_ == nullptr; };
    // edge Field Functions 
    bool hasEdge() const { return this->edge_ != nullptr;};
    void deleteEdge() { this->edge_ = nullptr;};
    inline const vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkEdge> & edge() const { DARABONBA_PTR_GET_CONST(edge_, vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkEdge>) };
    inline vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkEdge> edge() { DARABONBA_PTR_GET(edge_, vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkEdge>) };
    inline DescribeClusterNetworkResponseBodyClusterNetwork& setEdge(const vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkEdge> & edge) { DARABONBA_PTR_SET_VALUE(edge_, edge) };
    inline DescribeClusterNetworkResponseBodyClusterNetwork& setEdge(vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkEdge> && edge) { DARABONBA_PTR_SET_RVALUE(edge_, edge) };


    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkNode> & node() const { DARABONBA_PTR_GET_CONST(node_, vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkNode>) };
    inline vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkNode> node() { DARABONBA_PTR_GET(node_, vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkNode>) };
    inline DescribeClusterNetworkResponseBodyClusterNetwork& setNode(const vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkNode> & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline DescribeClusterNetworkResponseBodyClusterNetwork& setNode(vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkNode> && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


  protected:
    // An array that consists of information about the topology edge.
    std::shared_ptr<vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkEdge>> edge_ = nullptr;
    // An array that consists of information about the node.
    std::shared_ptr<vector<Models::DescribeClusterNetworkResponseBodyClusterNetworkNode>> node_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
