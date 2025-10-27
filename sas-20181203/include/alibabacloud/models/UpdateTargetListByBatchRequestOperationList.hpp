// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETARGETLISTBYBATCHREQUESTOPERATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETARGETLISTBYBATCHREQUESTOPERATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateTargetListByBatchRequestOperationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTargetListByBatchRequestOperationList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTargetListByBatchRequestOperationList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    UpdateTargetListByBatchRequestOperationList() = default ;
    UpdateTargetListByBatchRequestOperationList(const UpdateTargetListByBatchRequestOperationList &) = default ;
    UpdateTargetListByBatchRequestOperationList(UpdateTargetListByBatchRequestOperationList &&) = default ;
    UpdateTargetListByBatchRequestOperationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTargetListByBatchRequestOperationList() = default ;
    UpdateTargetListByBatchRequestOperationList& operator=(const UpdateTargetListByBatchRequestOperationList &) = default ;
    UpdateTargetListByBatchRequestOperationList& operator=(UpdateTargetListByBatchRequestOperationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->operation_ == nullptr && return this->uuid_ == nullptr && return this->vpcInstanceId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateTargetListByBatchRequestOperationList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline UpdateTargetListByBatchRequestOperationList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UpdateTargetListByBatchRequestOperationList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline UpdateTargetListByBatchRequestOperationList& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The ID of the server group.
    // 
    // >  You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of server groups.
    std::shared_ptr<string> groupId_ = nullptr;
    // The operation type. Valid values:
    // 
    // *   **add**: the add operation.
    // *   **del**: the remove operation.
    std::shared_ptr<string> operation_ = nullptr;
    // The UUID of the server.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the VPC-connected instance.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
