// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckItemWarningSummaryResponseBodyList.hpp>
#include <alibabacloud/models/ListCheckItemWarningSummaryResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemWarningSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckItemWarningSummaryResponseBody() = default ;
    ListCheckItemWarningSummaryResponseBody(const ListCheckItemWarningSummaryResponseBody &) = default ;
    ListCheckItemWarningSummaryResponseBody(ListCheckItemWarningSummaryResponseBody &&) = default ;
    ListCheckItemWarningSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningSummaryResponseBody() = default ;
    ListCheckItemWarningSummaryResponseBody& operator=(const ListCheckItemWarningSummaryResponseBody &) = default ;
    ListCheckItemWarningSummaryResponseBody& operator=(ListCheckItemWarningSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListCheckItemWarningSummaryResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListCheckItemWarningSummaryResponseBodyList>) };
    inline vector<ListCheckItemWarningSummaryResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListCheckItemWarningSummaryResponseBodyList>) };
    inline ListCheckItemWarningSummaryResponseBody& setList(const vector<ListCheckItemWarningSummaryResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListCheckItemWarningSummaryResponseBody& setList(vector<ListCheckItemWarningSummaryResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckItemWarningSummaryResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckItemWarningSummaryResponseBodyPageInfo) };
    inline ListCheckItemWarningSummaryResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckItemWarningSummaryResponseBodyPageInfo) };
    inline ListCheckItemWarningSummaryResponseBody& setPageInfo(const ListCheckItemWarningSummaryResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckItemWarningSummaryResponseBody& setPageInfo(ListCheckItemWarningSummaryResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckItemWarningSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of check item risk statistics.
    std::shared_ptr<vector<ListCheckItemWarningSummaryResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListCheckItemWarningSummaryResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
