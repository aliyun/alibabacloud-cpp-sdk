// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerAuthorizationRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAuthorizationRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consumerAuthorizationRuleIds, consumerAuthorizationRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAuthorizationRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerAuthorizationRuleIds, consumerAuthorizationRuleIds_);
    };
    CreateConsumerAuthorizationRulesResponseBodyData() = default ;
    CreateConsumerAuthorizationRulesResponseBodyData(const CreateConsumerAuthorizationRulesResponseBodyData &) = default ;
    CreateConsumerAuthorizationRulesResponseBodyData(CreateConsumerAuthorizationRulesResponseBodyData &&) = default ;
    CreateConsumerAuthorizationRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAuthorizationRulesResponseBodyData() = default ;
    CreateConsumerAuthorizationRulesResponseBodyData& operator=(const CreateConsumerAuthorizationRulesResponseBodyData &) = default ;
    CreateConsumerAuthorizationRulesResponseBodyData& operator=(CreateConsumerAuthorizationRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerAuthorizationRuleIds_ == nullptr; };
    // consumerAuthorizationRuleIds Field Functions 
    bool hasConsumerAuthorizationRuleIds() const { return this->consumerAuthorizationRuleIds_ != nullptr;};
    void deleteConsumerAuthorizationRuleIds() { this->consumerAuthorizationRuleIds_ = nullptr;};
    inline const vector<string> & consumerAuthorizationRuleIds() const { DARABONBA_PTR_GET_CONST(consumerAuthorizationRuleIds_, vector<string>) };
    inline vector<string> consumerAuthorizationRuleIds() { DARABONBA_PTR_GET(consumerAuthorizationRuleIds_, vector<string>) };
    inline CreateConsumerAuthorizationRulesResponseBodyData& setConsumerAuthorizationRuleIds(const vector<string> & consumerAuthorizationRuleIds) { DARABONBA_PTR_SET_VALUE(consumerAuthorizationRuleIds_, consumerAuthorizationRuleIds) };
    inline CreateConsumerAuthorizationRulesResponseBodyData& setConsumerAuthorizationRuleIds(vector<string> && consumerAuthorizationRuleIds) { DARABONBA_PTR_SET_RVALUE(consumerAuthorizationRuleIds_, consumerAuthorizationRuleIds) };


  protected:
    // The authentication rule IDs.
    std::shared_ptr<vector<string>> consumerAuthorizationRuleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
