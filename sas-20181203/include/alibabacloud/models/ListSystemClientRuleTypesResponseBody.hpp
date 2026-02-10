// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSystemClientRuleTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemClientRuleTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleTypes, ruleTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemClientRuleTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleTypes, ruleTypes_);
    };
    ListSystemClientRuleTypesResponseBody() = default ;
    ListSystemClientRuleTypesResponseBody(const ListSystemClientRuleTypesResponseBody &) = default ;
    ListSystemClientRuleTypesResponseBody(ListSystemClientRuleTypesResponseBody &&) = default ;
    ListSystemClientRuleTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemClientRuleTypesResponseBody() = default ;
    ListSystemClientRuleTypesResponseBody& operator=(const ListSystemClientRuleTypesResponseBody &) = default ;
    ListSystemClientRuleTypesResponseBody& operator=(ListSystemClientRuleTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleTypes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemClientRuleTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleTypes Field Functions 
    bool hasRuleTypes() const { return this->ruleTypes_ != nullptr;};
    void deleteRuleTypes() { this->ruleTypes_ = nullptr;};
    inline const vector<string> & getRuleTypes() const { DARABONBA_PTR_GET_CONST(ruleTypes_, vector<string>) };
    inline vector<string> getRuleTypes() { DARABONBA_PTR_GET(ruleTypes_, vector<string>) };
    inline ListSystemClientRuleTypesResponseBody& setRuleTypes(const vector<string> & ruleTypes) { DARABONBA_PTR_SET_VALUE(ruleTypes_, ruleTypes) };
    inline ListSystemClientRuleTypesResponseBody& setRuleTypes(vector<string> && ruleTypes) { DARABONBA_PTR_SET_RVALUE(ruleTypes_, ruleTypes) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the rule types.
    shared_ptr<vector<string>> ruleTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
