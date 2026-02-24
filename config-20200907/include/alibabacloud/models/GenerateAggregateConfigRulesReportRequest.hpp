// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAGGREGATECONFIGRULESREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAGGREGATECONFIGRULESREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateAggregateConfigRulesReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAggregateConfigRulesReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigRuleIds, configRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAggregateConfigRulesReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleIds, configRuleIds_);
    };
    GenerateAggregateConfigRulesReportRequest() = default ;
    GenerateAggregateConfigRulesReportRequest(const GenerateAggregateConfigRulesReportRequest &) = default ;
    GenerateAggregateConfigRulesReportRequest(GenerateAggregateConfigRulesReportRequest &&) = default ;
    GenerateAggregateConfigRulesReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAggregateConfigRulesReportRequest() = default ;
    GenerateAggregateConfigRulesReportRequest& operator=(const GenerateAggregateConfigRulesReportRequest &) = default ;
    GenerateAggregateConfigRulesReportRequest& operator=(GenerateAggregateConfigRulesReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->clientToken_ == nullptr && this->configRuleIds_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GenerateAggregateConfigRulesReportRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GenerateAggregateConfigRulesReportRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configRuleIds Field Functions 
    bool hasConfigRuleIds() const { return this->configRuleIds_ != nullptr;};
    void deleteConfigRuleIds() { this->configRuleIds_ = nullptr;};
    inline string getConfigRuleIds() const { DARABONBA_PTR_GET_DEFAULT(configRuleIds_, "") };
    inline GenerateAggregateConfigRulesReportRequest& setConfigRuleIds(string configRuleIds) { DARABONBA_PTR_SET_VALUE(configRuleIds_, configRuleIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> configRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
