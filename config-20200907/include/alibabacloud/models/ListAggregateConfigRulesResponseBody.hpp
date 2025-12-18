// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateConfigRulesResponseBodyConfigRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateConfigRulesResponseBody() = default ;
    ListAggregateConfigRulesResponseBody(const ListAggregateConfigRulesResponseBody &) = default ;
    ListAggregateConfigRulesResponseBody(ListAggregateConfigRulesResponseBody &&) = default ;
    ListAggregateConfigRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigRulesResponseBody() = default ;
    ListAggregateConfigRulesResponseBody& operator=(const ListAggregateConfigRulesResponseBody &) = default ;
    ListAggregateConfigRulesResponseBody& operator=(ListAggregateConfigRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRules_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRules Field Functions 
    bool hasConfigRules() const { return this->configRules_ != nullptr;};
    void deleteConfigRules() { this->configRules_ = nullptr;};
    inline const ListAggregateConfigRulesResponseBodyConfigRules & configRules() const { DARABONBA_PTR_GET_CONST(configRules_, ListAggregateConfigRulesResponseBodyConfigRules) };
    inline ListAggregateConfigRulesResponseBodyConfigRules configRules() { DARABONBA_PTR_GET(configRules_, ListAggregateConfigRulesResponseBodyConfigRules) };
    inline ListAggregateConfigRulesResponseBody& setConfigRules(const ListAggregateConfigRulesResponseBodyConfigRules & configRules) { DARABONBA_PTR_SET_VALUE(configRules_, configRules) };
    inline ListAggregateConfigRulesResponseBody& setConfigRules(ListAggregateConfigRulesResponseBodyConfigRules && configRules) { DARABONBA_PTR_SET_RVALUE(configRules_, configRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateConfigRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried rules.
    std::shared_ptr<ListAggregateConfigRulesResponseBodyConfigRules> configRules_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
