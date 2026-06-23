// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOWOPERATIONTASKAPPROVALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOWOPERATIONTASKAPPROVALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AllowOperationTaskApprovalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllowOperationTaskApprovalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApproveId, approveId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AllowOperationTaskApprovalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApproveId, approveId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AllowOperationTaskApprovalRequest() = default ;
    AllowOperationTaskApprovalRequest(const AllowOperationTaskApprovalRequest &) = default ;
    AllowOperationTaskApprovalRequest(AllowOperationTaskApprovalRequest &&) = default ;
    AllowOperationTaskApprovalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllowOperationTaskApprovalRequest() = default ;
    AllowOperationTaskApprovalRequest& operator=(const AllowOperationTaskApprovalRequest &) = default ;
    AllowOperationTaskApprovalRequest& operator=(AllowOperationTaskApprovalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approveId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // approveId Field Functions 
    bool hasApproveId() const { return this->approveId_ != nullptr;};
    void deleteApproveId() { this->approveId_ = nullptr;};
    inline string getApproveId() const { DARABONBA_PTR_GET_DEFAULT(approveId_, "") };
    inline AllowOperationTaskApprovalRequest& setApproveId(string approveId) { DARABONBA_PTR_SET_VALUE(approveId_, approveId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AllowOperationTaskApprovalRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllowOperationTaskApprovalRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the O&M task approval.
    // > You can call the ListTodoOpsTaskApprovals operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> approveId_ {};
    // The instance ID of the bastion host.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
