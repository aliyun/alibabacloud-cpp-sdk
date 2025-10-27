// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClientUserDefineRulesResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListClientUserDefineRulesResponseBodyUserDefineRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClientUserDefineRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUserDefineRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRuleList, userDefineRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientUserDefineRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRuleList, userDefineRuleList_);
    };
    ListClientUserDefineRulesResponseBody() = default ;
    ListClientUserDefineRulesResponseBody(const ListClientUserDefineRulesResponseBody &) = default ;
    ListClientUserDefineRulesResponseBody(ListClientUserDefineRulesResponseBody &&) = default ;
    ListClientUserDefineRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUserDefineRulesResponseBody() = default ;
    ListClientUserDefineRulesResponseBody& operator=(const ListClientUserDefineRulesResponseBody &) = default ;
    ListClientUserDefineRulesResponseBody& operator=(ListClientUserDefineRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->userDefineRuleList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListClientUserDefineRulesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListClientUserDefineRulesResponseBodyPageInfo) };
    inline ListClientUserDefineRulesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListClientUserDefineRulesResponseBodyPageInfo) };
    inline ListClientUserDefineRulesResponseBody& setPageInfo(const ListClientUserDefineRulesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListClientUserDefineRulesResponseBody& setPageInfo(ListClientUserDefineRulesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientUserDefineRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRuleList Field Functions 
    bool hasUserDefineRuleList() const { return this->userDefineRuleList_ != nullptr;};
    void deleteUserDefineRuleList() { this->userDefineRuleList_ = nullptr;};
    inline const vector<ListClientUserDefineRulesResponseBodyUserDefineRuleList> & userDefineRuleList() const { DARABONBA_PTR_GET_CONST(userDefineRuleList_, vector<ListClientUserDefineRulesResponseBodyUserDefineRuleList>) };
    inline vector<ListClientUserDefineRulesResponseBodyUserDefineRuleList> userDefineRuleList() { DARABONBA_PTR_GET(userDefineRuleList_, vector<ListClientUserDefineRulesResponseBodyUserDefineRuleList>) };
    inline ListClientUserDefineRulesResponseBody& setUserDefineRuleList(const vector<ListClientUserDefineRulesResponseBodyUserDefineRuleList> & userDefineRuleList) { DARABONBA_PTR_SET_VALUE(userDefineRuleList_, userDefineRuleList) };
    inline ListClientUserDefineRulesResponseBody& setUserDefineRuleList(vector<ListClientUserDefineRulesResponseBodyUserDefineRuleList> && userDefineRuleList) { DARABONBA_PTR_SET_RVALUE(userDefineRuleList_, userDefineRuleList) };


  protected:
    // The pagination information.
    std::shared_ptr<ListClientUserDefineRulesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the rules.
    std::shared_ptr<vector<ListClientUserDefineRulesResponseBodyUserDefineRuleList>> userDefineRuleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
