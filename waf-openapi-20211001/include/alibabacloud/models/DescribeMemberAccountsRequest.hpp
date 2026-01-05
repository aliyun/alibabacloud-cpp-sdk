// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEMBERACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEMBERACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeMemberAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMemberAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMemberAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeMemberAccountsRequest() = default ;
    DescribeMemberAccountsRequest(const DescribeMemberAccountsRequest &) = default ;
    DescribeMemberAccountsRequest(DescribeMemberAccountsRequest &&) = default ;
    DescribeMemberAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMemberAccountsRequest() = default ;
    DescribeMemberAccountsRequest& operator=(const DescribeMemberAccountsRequest &) = default ;
    DescribeMemberAccountsRequest& operator=(DescribeMemberAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountStatus_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->sourceIp_ == nullptr; };
    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeMemberAccountsRequest& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMemberAccountsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMemberAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeMemberAccountsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeMemberAccountsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The status of the member that you want to query.
    // 
    // *   **enabled**: managed.
    // *   **disabled**: not managed.
    // *   **disabling**: being deleted.
    shared_ptr<string> accountStatus_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The source IP address of the request. The system specifies this parameter.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
