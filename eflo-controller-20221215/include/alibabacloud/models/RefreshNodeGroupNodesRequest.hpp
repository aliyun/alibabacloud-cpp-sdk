// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHNODEGROUPNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHNODEGROUPNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class RefreshNodeGroupNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshNodeGroupNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxDisruptiveAction, maxDisruptiveAction_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshNodeGroupNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxDisruptiveAction, maxDisruptiveAction_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
    };
    RefreshNodeGroupNodesRequest() = default ;
    RefreshNodeGroupNodesRequest(const RefreshNodeGroupNodesRequest &) = default ;
    RefreshNodeGroupNodesRequest(RefreshNodeGroupNodesRequest &&) = default ;
    RefreshNodeGroupNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshNodeGroupNodesRequest() = default ;
    RefreshNodeGroupNodesRequest& operator=(const RefreshNodeGroupNodesRequest &) = default ;
    RefreshNodeGroupNodesRequest& operator=(RefreshNodeGroupNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxDisruptiveAction_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodeIds_ == nullptr; };
    // maxDisruptiveAction Field Functions 
    bool hasMaxDisruptiveAction() const { return this->maxDisruptiveAction_ != nullptr;};
    void deleteMaxDisruptiveAction() { this->maxDisruptiveAction_ = nullptr;};
    inline string getMaxDisruptiveAction() const { DARABONBA_PTR_GET_DEFAULT(maxDisruptiveAction_, "") };
    inline RefreshNodeGroupNodesRequest& setMaxDisruptiveAction(string maxDisruptiveAction) { DARABONBA_PTR_SET_VALUE(maxDisruptiveAction_, maxDisruptiveAction) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline RefreshNodeGroupNodesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline RefreshNodeGroupNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline RefreshNodeGroupNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


  protected:
    // The maximum disruptive action level allowed for the refresh operation. The system independently evaluates the action level required to refresh each drifted property of a node and performs the refresh within the specified action level constraint. If the action level required for a property exceeds the specified level, that property is skipped. Action levels in increasing order of disruption: Refresh < Reboot < Reimage.
    // - Refresh (default): only refreshes the configuration in place without restarting or reimaging. Currently applicable only to the RamRoleName property.
    // - Reboot (not currently supported): allows restarting the node for the configuration to take effect. Supported properties include system cloud disk type and all properties supported by Refresh.
    // - Reimage (not currently supported): allows reimaging the node for the configuration to take effect. Supported properties include image ID and all properties supported by Reboot.
    shared_ptr<string> maxDisruptiveAction_ {};
    // The node group ID.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    // The filter scope for node refresh. If not specified, all nodes in the node group are included. <warning>If the instance type is a hypernode, pass the TrayNode ID, not the HyperNodeId.</warning>
    shared_ptr<vector<string>> nodeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
