// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMBERACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMBERACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateMemberAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemberAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberAccountIds, memberAccountIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemberAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberAccountIds, memberAccountIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    CreateMemberAccountsRequest() = default ;
    CreateMemberAccountsRequest(const CreateMemberAccountsRequest &) = default ;
    CreateMemberAccountsRequest(CreateMemberAccountsRequest &&) = default ;
    CreateMemberAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemberAccountsRequest() = default ;
    CreateMemberAccountsRequest& operator=(const CreateMemberAccountsRequest &) = default ;
    CreateMemberAccountsRequest& operator=(CreateMemberAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->memberAccountIds_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->sourceIp_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateMemberAccountsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberAccountIds Field Functions 
    bool hasMemberAccountIds() const { return this->memberAccountIds_ != nullptr;};
    void deleteMemberAccountIds() { this->memberAccountIds_ = nullptr;};
    inline const vector<string> & memberAccountIds() const { DARABONBA_PTR_GET_CONST(memberAccountIds_, vector<string>) };
    inline vector<string> memberAccountIds() { DARABONBA_PTR_GET(memberAccountIds_, vector<string>) };
    inline CreateMemberAccountsRequest& setMemberAccountIds(const vector<string> & memberAccountIds) { DARABONBA_PTR_SET_VALUE(memberAccountIds_, memberAccountIds) };
    inline CreateMemberAccountsRequest& setMemberAccountIds(vector<string> && memberAccountIds) { DARABONBA_PTR_SET_RVALUE(memberAccountIds_, memberAccountIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMemberAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateMemberAccountsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateMemberAccountsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The Alibaba Cloud account IDs of the members that you want to add. You can add up to 10 members at the same time.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> memberAccountIds_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The source IP address of the request. The system automatically obtains the value of this parameter.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
