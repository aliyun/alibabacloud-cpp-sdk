// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSystemClientRulesResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListSystemClientRulesResponseBodyRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSystemClientRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemClientRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemClientRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    ListSystemClientRulesResponseBody() = default ;
    ListSystemClientRulesResponseBody(const ListSystemClientRulesResponseBody &) = default ;
    ListSystemClientRulesResponseBody(ListSystemClientRulesResponseBody &&) = default ;
    ListSystemClientRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemClientRulesResponseBody() = default ;
    ListSystemClientRulesResponseBody& operator=(const ListSystemClientRulesResponseBody &) = default ;
    ListSystemClientRulesResponseBody& operator=(ListSystemClientRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->ruleList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListSystemClientRulesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListSystemClientRulesResponseBodyPageInfo) };
    inline ListSystemClientRulesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListSystemClientRulesResponseBodyPageInfo) };
    inline ListSystemClientRulesResponseBody& setPageInfo(const ListSystemClientRulesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListSystemClientRulesResponseBody& setPageInfo(ListSystemClientRulesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemClientRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<ListSystemClientRulesResponseBodyRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<ListSystemClientRulesResponseBodyRuleList>) };
    inline vector<ListSystemClientRulesResponseBodyRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<ListSystemClientRulesResponseBodyRuleList>) };
    inline ListSystemClientRulesResponseBody& setRuleList(const vector<ListSystemClientRulesResponseBodyRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListSystemClientRulesResponseBody& setRuleList(vector<ListSystemClientRulesResponseBodyRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The pagination information.
    std::shared_ptr<ListSystemClientRulesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the system defense rules.
    std::shared_ptr<vector<ListSystemClientRulesResponseBodyRuleList>> ruleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
