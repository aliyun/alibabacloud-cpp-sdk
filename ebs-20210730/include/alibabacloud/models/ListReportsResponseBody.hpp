// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListReportsResponseBodyHistoryReports.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ListReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HistoryReports, historyReports_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoryReports, historyReports_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListReportsResponseBody() = default ;
    ListReportsResponseBody(const ListReportsResponseBody &) = default ;
    ListReportsResponseBody(ListReportsResponseBody &&) = default ;
    ListReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportsResponseBody() = default ;
    ListReportsResponseBody& operator=(const ListReportsResponseBody &) = default ;
    ListReportsResponseBody& operator=(ListReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historyReports_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // historyReports Field Functions 
    bool hasHistoryReports() const { return this->historyReports_ != nullptr;};
    void deleteHistoryReports() { this->historyReports_ = nullptr;};
    inline const vector<ListReportsResponseBodyHistoryReports> & historyReports() const { DARABONBA_PTR_GET_CONST(historyReports_, vector<ListReportsResponseBodyHistoryReports>) };
    inline vector<ListReportsResponseBodyHistoryReports> historyReports() { DARABONBA_PTR_GET(historyReports_, vector<ListReportsResponseBodyHistoryReports>) };
    inline ListReportsResponseBody& setHistoryReports(const vector<ListReportsResponseBodyHistoryReports> & historyReports) { DARABONBA_PTR_SET_VALUE(historyReports_, historyReports) };
    inline ListReportsResponseBody& setHistoryReports(vector<ListReportsResponseBodyHistoryReports> && historyReports) { DARABONBA_PTR_SET_RVALUE(historyReports_, historyReports) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListReportsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListReportsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListReportsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Historical reports.
    std::shared_ptr<vector<ListReportsResponseBodyHistoryReports>> historyReports_ = nullptr;
    // Query token (Token), the value is the NextToken parameter value returned from the previous API call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Page number for paginated queries.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Number of records per page for paginated queries.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID, an identifier generated by Alibaba Cloud for this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total count.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
