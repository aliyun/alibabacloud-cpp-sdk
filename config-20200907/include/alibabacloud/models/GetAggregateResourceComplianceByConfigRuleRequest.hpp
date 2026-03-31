// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceByConfigRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceByConfigRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceByConfigRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    GetAggregateResourceComplianceByConfigRuleRequest() = default ;
    GetAggregateResourceComplianceByConfigRuleRequest(const GetAggregateResourceComplianceByConfigRuleRequest &) = default ;
    GetAggregateResourceComplianceByConfigRuleRequest(GetAggregateResourceComplianceByConfigRuleRequest &&) = default ;
    GetAggregateResourceComplianceByConfigRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceByConfigRuleRequest() = default ;
    GetAggregateResourceComplianceByConfigRuleRequest& operator=(const GetAggregateResourceComplianceByConfigRuleRequest &) = default ;
    GetAggregateResourceComplianceByConfigRuleRequest& operator=(GetAggregateResourceComplianceByConfigRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->complianceType_ == nullptr && this->configRuleId_ == nullptr && this->resourceAccountId_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateResourceComplianceByConfigRuleRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline GetAggregateResourceComplianceByConfigRuleRequest& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline GetAggregateResourceComplianceByConfigRuleRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // resourceAccountId Field Functions 
    bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
    void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
    inline int64_t getResourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
    inline GetAggregateResourceComplianceByConfigRuleRequest& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetAggregateResourceComplianceByConfigRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The compliance evaluation result of the resources. Valid values:
    // 
    // *   COMPLIANT: The resource is evaluated as compliant.
    // *   NON_COMPLIANT: The resource is evaluated as incompliant.
    // *   NOT_APPLICABLE: The rule does not apply to your resources.
    // *   INSUFFICIENT_DATA: No resource data is available.
    shared_ptr<string> complianceType_ {};
    // The ID of the rule.
    // 
    // For more information about how to obtain the ID of a rule, see [ListAggregateConfigRules](https://help.aliyun.com/document_detail/264148.html).
    // 
    // This parameter is required.
    shared_ptr<string> configRuleId_ {};
    // The ID of the Alibaba Cloud account to which the resources in the account group belong.
    // 
    // > You can use either the ResourceAccountId or ResourceOwnerId parameter. We recommend that you use the ResourceAccountId parameter.
    shared_ptr<int64_t> resourceAccountId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
