// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulListResponseBodyVulRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VulRecords, vulRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VulRecords, vulRecords_);
    };
    DescribeVulListResponseBody() = default ;
    DescribeVulListResponseBody(const DescribeVulListResponseBody &) = default ;
    DescribeVulListResponseBody(DescribeVulListResponseBody &&) = default ;
    DescribeVulListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListResponseBody() = default ;
    DescribeVulListResponseBody& operator=(const DescribeVulListResponseBody &) = default ;
    DescribeVulListResponseBody& operator=(DescribeVulListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vulRecords_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVulListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVulListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeVulListResponseBodyVulRecords> & vulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeVulListResponseBodyVulRecords>) };
    inline vector<DescribeVulListResponseBodyVulRecords> vulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeVulListResponseBodyVulRecords>) };
    inline DescribeVulListResponseBody& setVulRecords(const vector<DescribeVulListResponseBodyVulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeVulListResponseBody& setVulRecords(vector<DescribeVulListResponseBodyVulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The value of NextToken that is returned when the NextToken method is used.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of vulnerabilities returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the vulnerability.
    std::shared_ptr<vector<DescribeVulListResponseBodyVulRecords>> vulRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
