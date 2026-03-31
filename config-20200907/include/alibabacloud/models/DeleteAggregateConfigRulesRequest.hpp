// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATECONFIGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATECONFIGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateConfigRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateConfigRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleIds, configRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateConfigRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleIds, configRuleIds_);
    };
    DeleteAggregateConfigRulesRequest() = default ;
    DeleteAggregateConfigRulesRequest(const DeleteAggregateConfigRulesRequest &) = default ;
    DeleteAggregateConfigRulesRequest(DeleteAggregateConfigRulesRequest &&) = default ;
    DeleteAggregateConfigRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateConfigRulesRequest() = default ;
    DeleteAggregateConfigRulesRequest& operator=(const DeleteAggregateConfigRulesRequest &) = default ;
    DeleteAggregateConfigRulesRequest& operator=(DeleteAggregateConfigRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->configRuleIds_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline DeleteAggregateConfigRulesRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // configRuleIds Field Functions 
    bool hasConfigRuleIds() const { return this->configRuleIds_ != nullptr;};
    void deleteConfigRuleIds() { this->configRuleIds_ = nullptr;};
    inline string getConfigRuleIds() const { DARABONBA_PTR_GET_DEFAULT(configRuleIds_, "") };
    inline DeleteAggregateConfigRulesRequest& setConfigRuleIds(string configRuleIds) { DARABONBA_PTR_SET_VALUE(configRuleIds_, configRuleIds) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The rule ID. Separate multiple rule IDs with commas (,).
    // 
    // For more information about how to obtain the ID of a rule, see [ListAggregateConfigRules](https://help.aliyun.com/document_detail/264148.html).
    // 
    // This parameter is required.
    shared_ptr<string> configRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
