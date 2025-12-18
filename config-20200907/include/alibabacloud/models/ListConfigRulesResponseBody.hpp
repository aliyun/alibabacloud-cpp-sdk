// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConfigRulesResponseBodyConfigRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConfigRulesResponseBody() = default ;
    ListConfigRulesResponseBody(const ListConfigRulesResponseBody &) = default ;
    ListConfigRulesResponseBody(ListConfigRulesResponseBody &&) = default ;
    ListConfigRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRulesResponseBody() = default ;
    ListConfigRulesResponseBody& operator=(const ListConfigRulesResponseBody &) = default ;
    ListConfigRulesResponseBody& operator=(ListConfigRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRules_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRules Field Functions 
    bool hasConfigRules() const { return this->configRules_ != nullptr;};
    void deleteConfigRules() { this->configRules_ = nullptr;};
    inline const ListConfigRulesResponseBodyConfigRules & configRules() const { DARABONBA_PTR_GET_CONST(configRules_, ListConfigRulesResponseBodyConfigRules) };
    inline ListConfigRulesResponseBodyConfigRules configRules() { DARABONBA_PTR_GET(configRules_, ListConfigRulesResponseBodyConfigRules) };
    inline ListConfigRulesResponseBody& setConfigRules(const ListConfigRulesResponseBodyConfigRules & configRules) { DARABONBA_PTR_SET_VALUE(configRules_, configRules) };
    inline ListConfigRulesResponseBody& setConfigRules(ListConfigRulesResponseBodyConfigRules && configRules) { DARABONBA_PTR_SET_RVALUE(configRules_, configRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConfigRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the rules.
    std::shared_ptr<ListConfigRulesResponseBodyConfigRules> configRules_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
