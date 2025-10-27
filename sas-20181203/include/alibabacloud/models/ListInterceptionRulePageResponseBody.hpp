// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONRULEPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONRULEPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInterceptionRulePageResponseBodyInterceptionRuleList.hpp>
#include <alibabacloud/models/ListInterceptionRulePageResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInterceptionRulePageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionRulePageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InterceptionRuleList, interceptionRuleList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionRulePageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InterceptionRuleList, interceptionRuleList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInterceptionRulePageResponseBody() = default ;
    ListInterceptionRulePageResponseBody(const ListInterceptionRulePageResponseBody &) = default ;
    ListInterceptionRulePageResponseBody(ListInterceptionRulePageResponseBody &&) = default ;
    ListInterceptionRulePageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionRulePageResponseBody() = default ;
    ListInterceptionRulePageResponseBody& operator=(const ListInterceptionRulePageResponseBody &) = default ;
    ListInterceptionRulePageResponseBody& operator=(ListInterceptionRulePageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interceptionRuleList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // interceptionRuleList Field Functions 
    bool hasInterceptionRuleList() const { return this->interceptionRuleList_ != nullptr;};
    void deleteInterceptionRuleList() { this->interceptionRuleList_ = nullptr;};
    inline const vector<ListInterceptionRulePageResponseBodyInterceptionRuleList> & interceptionRuleList() const { DARABONBA_PTR_GET_CONST(interceptionRuleList_, vector<ListInterceptionRulePageResponseBodyInterceptionRuleList>) };
    inline vector<ListInterceptionRulePageResponseBodyInterceptionRuleList> interceptionRuleList() { DARABONBA_PTR_GET(interceptionRuleList_, vector<ListInterceptionRulePageResponseBodyInterceptionRuleList>) };
    inline ListInterceptionRulePageResponseBody& setInterceptionRuleList(const vector<ListInterceptionRulePageResponseBodyInterceptionRuleList> & interceptionRuleList) { DARABONBA_PTR_SET_VALUE(interceptionRuleList_, interceptionRuleList) };
    inline ListInterceptionRulePageResponseBody& setInterceptionRuleList(vector<ListInterceptionRulePageResponseBodyInterceptionRuleList> && interceptionRuleList) { DARABONBA_PTR_SET_RVALUE(interceptionRuleList_, interceptionRuleList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListInterceptionRulePageResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListInterceptionRulePageResponseBodyPageInfo) };
    inline ListInterceptionRulePageResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListInterceptionRulePageResponseBodyPageInfo) };
    inline ListInterceptionRulePageResponseBody& setPageInfo(const ListInterceptionRulePageResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListInterceptionRulePageResponseBody& setPageInfo(ListInterceptionRulePageResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterceptionRulePageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the defense rules.
    std::shared_ptr<vector<ListInterceptionRulePageResponseBodyInterceptionRuleList>> interceptionRuleList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListInterceptionRulePageResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
