// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETARGETLISTBYBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETARGETLISTBYBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateTargetListByBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTargetListByBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(OperationList, operationList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTargetListByBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(OperationList, operationList_);
    };
    UpdateTargetListByBatchRequest() = default ;
    UpdateTargetListByBatchRequest(const UpdateTargetListByBatchRequest &) = default ;
    UpdateTargetListByBatchRequest(UpdateTargetListByBatchRequest &&) = default ;
    UpdateTargetListByBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTargetListByBatchRequest() = default ;
    UpdateTargetListByBatchRequest& operator=(const UpdateTargetListByBatchRequest &) = default ;
    UpdateTargetListByBatchRequest& operator=(UpdateTargetListByBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationList& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, OperationList& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
      };
      OperationList() = default ;
      OperationList(const OperationList &) = default ;
      OperationList(OperationList &&) = default ;
      OperationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationList() = default ;
      OperationList& operator=(const OperationList &) = default ;
      OperationList& operator=(OperationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->operation_ == nullptr && this->uuid_ == nullptr && this->vpcInstanceId_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline OperationList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline OperationList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline OperationList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vpcInstanceId Field Functions 
      bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
      void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
      inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
      inline OperationList& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


    protected:
      // The ID of the server group.
      // 
      // >  You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of server groups.
      shared_ptr<string> groupId_ {};
      // The operation type. Valid values:
      // 
      // *   **add**: the add operation.
      // *   **del**: the remove operation.
      shared_ptr<string> operation_ {};
      // The UUID of the server.
      // 
      // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
      shared_ptr<string> uuid_ {};
      // The ID of the VPC-connected instance.
      shared_ptr<string> vpcInstanceId_ {};
    };

    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->operationList_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline UpdateTargetListByBatchRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // operationList Field Functions 
    bool hasOperationList() const { return this->operationList_ != nullptr;};
    void deleteOperationList() { this->operationList_ = nullptr;};
    inline const vector<UpdateTargetListByBatchRequest::OperationList> & getOperationList() const { DARABONBA_PTR_GET_CONST(operationList_, vector<UpdateTargetListByBatchRequest::OperationList>) };
    inline vector<UpdateTargetListByBatchRequest::OperationList> getOperationList() { DARABONBA_PTR_GET(operationList_, vector<UpdateTargetListByBatchRequest::OperationList>) };
    inline UpdateTargetListByBatchRequest& setOperationList(const vector<UpdateTargetListByBatchRequest::OperationList> & operationList) { DARABONBA_PTR_SET_VALUE(operationList_, operationList) };
    inline UpdateTargetListByBatchRequest& setOperationList(vector<UpdateTargetListByBatchRequest::OperationList> && operationList) { DARABONBA_PTR_SET_RVALUE(operationList_, operationList) };


  protected:
    // The ID of the release batch.
    // 
    // This parameter is required.
    shared_ptr<int64_t> batchId_ {};
    // The operations on assets.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateTargetListByBatchRequest::OperationList>> operationList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
