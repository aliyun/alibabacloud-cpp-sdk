// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUESTNODEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUESTNODEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ShrinkClusterRequestNodeGroupsNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ShrinkClusterRequestNodeGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShrinkClusterRequestNodeGroups& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, ShrinkClusterRequestNodeGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    ShrinkClusterRequestNodeGroups() = default ;
    ShrinkClusterRequestNodeGroups(const ShrinkClusterRequestNodeGroups &) = default ;
    ShrinkClusterRequestNodeGroups(ShrinkClusterRequestNodeGroups &&) = default ;
    ShrinkClusterRequestNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShrinkClusterRequestNodeGroups() = default ;
    ShrinkClusterRequestNodeGroups& operator=(const ShrinkClusterRequestNodeGroups &) = default ;
    ShrinkClusterRequestNodeGroups& operator=(ShrinkClusterRequestNodeGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeGroupId_ != nullptr
        && this->nodes_ != nullptr; };
    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ShrinkClusterRequestNodeGroups& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::ShrinkClusterRequestNodeGroupsNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::ShrinkClusterRequestNodeGroupsNodes>) };
    inline vector<Models::ShrinkClusterRequestNodeGroupsNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::ShrinkClusterRequestNodeGroupsNodes>) };
    inline ShrinkClusterRequestNodeGroups& setNodes(const vector<Models::ShrinkClusterRequestNodeGroupsNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ShrinkClusterRequestNodeGroups& setNodes(vector<Models::ShrinkClusterRequestNodeGroupsNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The node group ID.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The nodes.
    std::shared_ptr<vector<Models::ShrinkClusterRequestNodeGroupsNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
