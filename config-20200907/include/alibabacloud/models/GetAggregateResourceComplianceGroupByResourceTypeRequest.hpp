// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYRESOURCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYRESOURCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceGroupByResourceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceGroupByResourceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleIds, configRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceGroupByResourceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleIds, configRuleIds_);
    };
    GetAggregateResourceComplianceGroupByResourceTypeRequest() = default ;
    GetAggregateResourceComplianceGroupByResourceTypeRequest(const GetAggregateResourceComplianceGroupByResourceTypeRequest &) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeRequest(GetAggregateResourceComplianceGroupByResourceTypeRequest &&) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceGroupByResourceTypeRequest() = default ;
    GetAggregateResourceComplianceGroupByResourceTypeRequest& operator=(const GetAggregateResourceComplianceGroupByResourceTypeRequest &) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeRequest& operator=(GetAggregateResourceComplianceGroupByResourceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->configRuleIds_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateResourceComplianceGroupByResourceTypeRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // configRuleIds Field Functions 
    bool hasConfigRuleIds() const { return this->configRuleIds_ != nullptr;};
    void deleteConfigRuleIds() { this->configRuleIds_ = nullptr;};
    inline string configRuleIds() const { DARABONBA_PTR_GET_DEFAULT(configRuleIds_, "") };
    inline GetAggregateResourceComplianceGroupByResourceTypeRequest& setConfigRuleIds(string configRuleIds) { DARABONBA_PTR_SET_VALUE(configRuleIds_, configRuleIds) };


  protected:
    // The ID of the account group.
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The ID of the rule. Separate multiple rule IDs with commas (,).
    std::shared_ptr<string> configRuleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
