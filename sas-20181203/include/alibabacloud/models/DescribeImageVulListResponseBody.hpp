// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageVulListResponseBodyVulRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageVulListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageVulListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VulRecords, vulRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageVulListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VulRecords, vulRecords_);
    };
    DescribeImageVulListResponseBody() = default ;
    DescribeImageVulListResponseBody(const DescribeImageVulListResponseBody &) = default ;
    DescribeImageVulListResponseBody(DescribeImageVulListResponseBody &&) = default ;
    DescribeImageVulListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageVulListResponseBody() = default ;
    DescribeImageVulListResponseBody& operator=(const DescribeImageVulListResponseBody &) = default ;
    DescribeImageVulListResponseBody& operator=(DescribeImageVulListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vulRecords_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageVulListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageVulListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageVulListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImageVulListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeImageVulListResponseBodyVulRecords> & vulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeImageVulListResponseBodyVulRecords>) };
    inline vector<DescribeImageVulListResponseBodyVulRecords> vulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeImageVulListResponseBodyVulRecords>) };
    inline DescribeImageVulListResponseBody& setVulRecords(const vector<DescribeImageVulListResponseBodyVulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeImageVulListResponseBody& setVulRecords(vector<DescribeImageVulListResponseBodyVulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned per page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of vulnerabilities returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // An array that consists of the vulnerabilities.
    std::shared_ptr<vector<DescribeImageVulListResponseBodyVulRecords>> vulRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
