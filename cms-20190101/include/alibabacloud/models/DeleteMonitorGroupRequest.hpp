// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMONITORGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMONITORGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMonitorGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMonitorGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMonitorGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteMonitorGroupRequest() = default ;
    DeleteMonitorGroupRequest(const DeleteMonitorGroupRequest &) = default ;
    DeleteMonitorGroupRequest(DeleteMonitorGroupRequest &&) = default ;
    DeleteMonitorGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMonitorGroupRequest() = default ;
    DeleteMonitorGroupRequest& operator=(const DeleteMonitorGroupRequest &) = default ;
    DeleteMonitorGroupRequest& operator=(DeleteMonitorGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->groupId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteMonitorGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteMonitorGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DeleteMonitorGroupRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMonitorGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Ensures the idempotence of the request. You can generate a parameter value on your client to ensure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters and can be up to 64 characters in length. For more information, see How to ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to execute a dry run on the request, including checks on permissions and instance status. Valid values:
    // 
    // - **false** (default): Sends a normal request. If the check succeeds, the name and description of the routing table are directly modified.
    // - **true**: Sends a check request to only perform the check, and the name and description of the routing table are not modified. The check items include whether required parameters are specified and the request format. If the check fails, the corresponding error is returned. If the check succeeds, the error code `DryRunOperation` is returned.
    shared_ptr<bool> dryRun_ {};
    // The ID of the application group.
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
