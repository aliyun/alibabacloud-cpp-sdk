// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONTARGETPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONTARGETPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInterceptionTargetPageResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListInterceptionTargetPageResponseBodyRuleTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInterceptionTargetPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionTargetPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleTargetList, ruleTargetList_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionTargetPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleTargetList, ruleTargetList_);
    };
    ListInterceptionTargetPageResponseBody() = default ;
    ListInterceptionTargetPageResponseBody(const ListInterceptionTargetPageResponseBody &) = default ;
    ListInterceptionTargetPageResponseBody(ListInterceptionTargetPageResponseBody &&) = default ;
    ListInterceptionTargetPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionTargetPageResponseBody() = default ;
    ListInterceptionTargetPageResponseBody& operator=(const ListInterceptionTargetPageResponseBody &) = default ;
    ListInterceptionTargetPageResponseBody& operator=(ListInterceptionTargetPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->ruleTargetList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListInterceptionTargetPageResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListInterceptionTargetPageResponseBodyPageInfo) };
    inline ListInterceptionTargetPageResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListInterceptionTargetPageResponseBodyPageInfo) };
    inline ListInterceptionTargetPageResponseBody& setPageInfo(const ListInterceptionTargetPageResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListInterceptionTargetPageResponseBody& setPageInfo(ListInterceptionTargetPageResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterceptionTargetPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleTargetList Field Functions 
    bool hasRuleTargetList() const { return this->ruleTargetList_ != nullptr;};
    void deleteRuleTargetList() { this->ruleTargetList_ = nullptr;};
    inline const vector<ListInterceptionTargetPageResponseBodyRuleTargetList> & ruleTargetList() const { DARABONBA_PTR_GET_CONST(ruleTargetList_, vector<ListInterceptionTargetPageResponseBodyRuleTargetList>) };
    inline vector<ListInterceptionTargetPageResponseBodyRuleTargetList> ruleTargetList() { DARABONBA_PTR_GET(ruleTargetList_, vector<ListInterceptionTargetPageResponseBodyRuleTargetList>) };
    inline ListInterceptionTargetPageResponseBody& setRuleTargetList(const vector<ListInterceptionTargetPageResponseBodyRuleTargetList> & ruleTargetList) { DARABONBA_PTR_SET_VALUE(ruleTargetList_, ruleTargetList) };
    inline ListInterceptionTargetPageResponseBody& setRuleTargetList(vector<ListInterceptionTargetPageResponseBodyRuleTargetList> && ruleTargetList) { DARABONBA_PTR_SET_RVALUE(ruleTargetList_, ruleTargetList) };


  protected:
    // The pagination information.
    std::shared_ptr<ListInterceptionTargetPageResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the network objects.
    std::shared_ptr<vector<ListInterceptionTargetPageResponseBodyRuleTargetList>> ruleTargetList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
