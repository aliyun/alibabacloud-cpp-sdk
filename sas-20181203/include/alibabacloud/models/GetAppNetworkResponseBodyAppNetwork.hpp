// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODYAPPNETWORK_HPP_
#define ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODYAPPNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppNetworkResponseBodyAppNetworkEdge.hpp>
#include <alibabacloud/models/GetAppNetworkResponseBodyAppNetworkNamespace.hpp>
#include <alibabacloud/models/GetAppNetworkResponseBodyAppNetworkNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAppNetworkResponseBodyAppNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppNetworkResponseBodyAppNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(Edge, edge_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Node, node_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppNetworkResponseBodyAppNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(Edge, edge_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Node, node_);
    };
    GetAppNetworkResponseBodyAppNetwork() = default ;
    GetAppNetworkResponseBodyAppNetwork(const GetAppNetworkResponseBodyAppNetwork &) = default ;
    GetAppNetworkResponseBodyAppNetwork(GetAppNetworkResponseBodyAppNetwork &&) = default ;
    GetAppNetworkResponseBodyAppNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppNetworkResponseBodyAppNetwork() = default ;
    GetAppNetworkResponseBodyAppNetwork& operator=(const GetAppNetworkResponseBodyAppNetwork &) = default ;
    GetAppNetworkResponseBodyAppNetwork& operator=(GetAppNetworkResponseBodyAppNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edge_ != nullptr
        && this->namespace_ != nullptr && this->node_ != nullptr; };
    // edge Field Functions 
    bool hasEdge() const { return this->edge_ != nullptr;};
    void deleteEdge() { this->edge_ = nullptr;};
    inline const vector<Models::GetAppNetworkResponseBodyAppNetworkEdge> & edge() const { DARABONBA_PTR_GET_CONST(edge_, vector<Models::GetAppNetworkResponseBodyAppNetworkEdge>) };
    inline vector<Models::GetAppNetworkResponseBodyAppNetworkEdge> edge() { DARABONBA_PTR_GET(edge_, vector<Models::GetAppNetworkResponseBodyAppNetworkEdge>) };
    inline GetAppNetworkResponseBodyAppNetwork& setEdge(const vector<Models::GetAppNetworkResponseBodyAppNetworkEdge> & edge) { DARABONBA_PTR_SET_VALUE(edge_, edge) };
    inline GetAppNetworkResponseBodyAppNetwork& setEdge(vector<Models::GetAppNetworkResponseBodyAppNetworkEdge> && edge) { DARABONBA_PTR_SET_RVALUE(edge_, edge) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const vector<Models::GetAppNetworkResponseBodyAppNetworkNamespace> & _namespace() const { DARABONBA_PTR_GET_CONST(namespace_, vector<Models::GetAppNetworkResponseBodyAppNetworkNamespace>) };
    inline vector<Models::GetAppNetworkResponseBodyAppNetworkNamespace> _namespace() { DARABONBA_PTR_GET(namespace_, vector<Models::GetAppNetworkResponseBodyAppNetworkNamespace>) };
    inline GetAppNetworkResponseBodyAppNetwork& setNamespace(const vector<Models::GetAppNetworkResponseBodyAppNetworkNamespace> & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline GetAppNetworkResponseBodyAppNetwork& setNamespace(vector<Models::GetAppNetworkResponseBodyAppNetworkNamespace> && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const vector<Models::GetAppNetworkResponseBodyAppNetworkNode> & node() const { DARABONBA_PTR_GET_CONST(node_, vector<Models::GetAppNetworkResponseBodyAppNetworkNode>) };
    inline vector<Models::GetAppNetworkResponseBodyAppNetworkNode> node() { DARABONBA_PTR_GET(node_, vector<Models::GetAppNetworkResponseBodyAppNetworkNode>) };
    inline GetAppNetworkResponseBodyAppNetwork& setNode(const vector<Models::GetAppNetworkResponseBodyAppNetworkNode> & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline GetAppNetworkResponseBodyAppNetwork& setNode(vector<Models::GetAppNetworkResponseBodyAppNetworkNode> && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


  protected:
    // The information about the topology edge.
    std::shared_ptr<vector<Models::GetAppNetworkResponseBodyAppNetworkEdge>> edge_ = nullptr;
    // The namespace.
    std::shared_ptr<vector<Models::GetAppNetworkResponseBodyAppNetworkNamespace>> namespace_ = nullptr;
    // The information about the application node.
    std::shared_ptr<vector<Models::GetAppNetworkResponseBodyAppNetworkNode>> node_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
