// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEMBERACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEMBERACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DeleteMemberAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMemberAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberAccountId, memberAccountId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMemberAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberAccountId, memberAccountId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DeleteMemberAccountRequest() = default ;
    DeleteMemberAccountRequest(const DeleteMemberAccountRequest &) = default ;
    DeleteMemberAccountRequest(DeleteMemberAccountRequest &&) = default ;
    DeleteMemberAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMemberAccountRequest() = default ;
    DeleteMemberAccountRequest& operator=(const DeleteMemberAccountRequest &) = default ;
    DeleteMemberAccountRequest& operator=(DeleteMemberAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->memberAccountId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->sourceIp_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteMemberAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberAccountId Field Functions 
    bool hasMemberAccountId() const { return this->memberAccountId_ != nullptr;};
    void deleteMemberAccountId() { this->memberAccountId_ = nullptr;};
    inline string getMemberAccountId() const { DARABONBA_PTR_GET_DEFAULT(memberAccountId_, "") };
    inline DeleteMemberAccountRequest& setMemberAccountId(string memberAccountId) { DARABONBA_PTR_SET_VALUE(memberAccountId_, memberAccountId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMemberAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DeleteMemberAccountRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DeleteMemberAccountRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The Alibaba Cloud account ID of the managed member.
    // 
    // This parameter is required.
    shared_ptr<string> memberAccountId_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The source IP address of the request. The system automatically obtains the value of this parameter.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
