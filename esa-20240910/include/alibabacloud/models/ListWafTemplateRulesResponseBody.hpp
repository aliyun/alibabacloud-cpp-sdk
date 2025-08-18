// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWafTemplateRulesResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafTemplateRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafTemplateRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafTemplateRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ListWafTemplateRulesResponseBody() = default ;
    ListWafTemplateRulesResponseBody(const ListWafTemplateRulesResponseBody &) = default ;
    ListWafTemplateRulesResponseBody(ListWafTemplateRulesResponseBody &&) = default ;
    ListWafTemplateRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafTemplateRulesResponseBody() = default ;
    ListWafTemplateRulesResponseBody& operator=(const ListWafTemplateRulesResponseBody &) = default ;
    ListWafTemplateRulesResponseBody& operator=(ListWafTemplateRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->rules_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafTemplateRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ListWafTemplateRulesResponseBodyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ListWafTemplateRulesResponseBodyRules>) };
    inline vector<ListWafTemplateRulesResponseBodyRules> rules() { DARABONBA_PTR_GET(rules_, vector<ListWafTemplateRulesResponseBodyRules>) };
    inline ListWafTemplateRulesResponseBody& setRules(const vector<ListWafTemplateRulesResponseBodyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListWafTemplateRulesResponseBody& setRules(vector<ListWafTemplateRulesResponseBodyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of returned template rules.
    std::shared_ptr<vector<ListWafTemplateRulesResponseBodyRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
