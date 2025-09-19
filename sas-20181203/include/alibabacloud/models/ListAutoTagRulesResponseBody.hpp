// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOTAGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOTAGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAutoTagRulesResponseBodyAutoTagRuleList.hpp>
#include <alibabacloud/models/ListAutoTagRulesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAutoTagRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoTagRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoTagRuleList, autoTagRuleList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoTagRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoTagRuleList, autoTagRuleList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAutoTagRulesResponseBody() = default ;
    ListAutoTagRulesResponseBody(const ListAutoTagRulesResponseBody &) = default ;
    ListAutoTagRulesResponseBody(ListAutoTagRulesResponseBody &&) = default ;
    ListAutoTagRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoTagRulesResponseBody() = default ;
    ListAutoTagRulesResponseBody& operator=(const ListAutoTagRulesResponseBody &) = default ;
    ListAutoTagRulesResponseBody& operator=(ListAutoTagRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoTagRuleList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // autoTagRuleList Field Functions 
    bool hasAutoTagRuleList() const { return this->autoTagRuleList_ != nullptr;};
    void deleteAutoTagRuleList() { this->autoTagRuleList_ = nullptr;};
    inline const vector<ListAutoTagRulesResponseBodyAutoTagRuleList> & autoTagRuleList() const { DARABONBA_PTR_GET_CONST(autoTagRuleList_, vector<ListAutoTagRulesResponseBodyAutoTagRuleList>) };
    inline vector<ListAutoTagRulesResponseBodyAutoTagRuleList> autoTagRuleList() { DARABONBA_PTR_GET(autoTagRuleList_, vector<ListAutoTagRulesResponseBodyAutoTagRuleList>) };
    inline ListAutoTagRulesResponseBody& setAutoTagRuleList(const vector<ListAutoTagRulesResponseBodyAutoTagRuleList> & autoTagRuleList) { DARABONBA_PTR_SET_VALUE(autoTagRuleList_, autoTagRuleList) };
    inline ListAutoTagRulesResponseBody& setAutoTagRuleList(vector<ListAutoTagRulesResponseBodyAutoTagRuleList> && autoTagRuleList) { DARABONBA_PTR_SET_RVALUE(autoTagRuleList_, autoTagRuleList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAutoTagRulesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAutoTagRulesResponseBodyPageInfo) };
    inline ListAutoTagRulesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAutoTagRulesResponseBodyPageInfo) };
    inline ListAutoTagRulesResponseBody& setPageInfo(const ListAutoTagRulesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAutoTagRulesResponseBody& setPageInfo(ListAutoTagRulesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutoTagRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The asset auto-tagging rules.
    std::shared_ptr<vector<ListAutoTagRulesResponseBodyAutoTagRuleList>> autoTagRuleList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListAutoTagRulesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
