// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTCENTERRULENAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTCENTERRULENAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventCenterRuleNameResponseBodyRuleNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListEventCenterRuleNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventCenterRuleNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventCenterRuleNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
    };
    ListEventCenterRuleNameResponseBody() = default ;
    ListEventCenterRuleNameResponseBody(const ListEventCenterRuleNameResponseBody &) = default ;
    ListEventCenterRuleNameResponseBody(ListEventCenterRuleNameResponseBody &&) = default ;
    ListEventCenterRuleNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventCenterRuleNameResponseBody() = default ;
    ListEventCenterRuleNameResponseBody& operator=(const ListEventCenterRuleNameResponseBody &) = default ;
    ListEventCenterRuleNameResponseBody& operator=(ListEventCenterRuleNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->isSuccess_ != nullptr && this->requestId_ != nullptr && this->ruleNames_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEventCenterRuleNameResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListEventCenterRuleNameResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventCenterRuleNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline const vector<ListEventCenterRuleNameResponseBodyRuleNames> & ruleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<ListEventCenterRuleNameResponseBodyRuleNames>) };
    inline vector<ListEventCenterRuleNameResponseBodyRuleNames> ruleNames() { DARABONBA_PTR_GET(ruleNames_, vector<ListEventCenterRuleNameResponseBodyRuleNames>) };
    inline ListEventCenterRuleNameResponseBody& setRuleNames(const vector<ListEventCenterRuleNameResponseBodyRuleNames> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline ListEventCenterRuleNameResponseBody& setRuleNames(vector<ListEventCenterRuleNameResponseBodyRuleNames> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


  protected:
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of names of event notification rules.
    std::shared_ptr<vector<ListEventCenterRuleNameResponseBodyRuleNames>> ruleNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
