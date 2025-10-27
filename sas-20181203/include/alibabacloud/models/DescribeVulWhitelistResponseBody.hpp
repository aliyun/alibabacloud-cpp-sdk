// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulWhitelistResponseBodyVulWhitelists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VulWhitelists, vulWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VulWhitelists, vulWhitelists_);
    };
    DescribeVulWhitelistResponseBody() = default ;
    DescribeVulWhitelistResponseBody(const DescribeVulWhitelistResponseBody &) = default ;
    DescribeVulWhitelistResponseBody(DescribeVulWhitelistResponseBody &&) = default ;
    DescribeVulWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulWhitelistResponseBody() = default ;
    DescribeVulWhitelistResponseBody& operator=(const DescribeVulWhitelistResponseBody &) = default ;
    DescribeVulWhitelistResponseBody& operator=(DescribeVulWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vulWhitelists_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeVulWhitelistResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVulWhitelistResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulWhitelistResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulWhitelistResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulWhitelists Field Functions 
    bool hasVulWhitelists() const { return this->vulWhitelists_ != nullptr;};
    void deleteVulWhitelists() { this->vulWhitelists_ = nullptr;};
    inline const vector<DescribeVulWhitelistResponseBodyVulWhitelists> & vulWhitelists() const { DARABONBA_PTR_GET_CONST(vulWhitelists_, vector<DescribeVulWhitelistResponseBodyVulWhitelists>) };
    inline vector<DescribeVulWhitelistResponseBodyVulWhitelists> vulWhitelists() { DARABONBA_PTR_GET(vulWhitelists_, vector<DescribeVulWhitelistResponseBodyVulWhitelists>) };
    inline DescribeVulWhitelistResponseBody& setVulWhitelists(const vector<DescribeVulWhitelistResponseBodyVulWhitelists> & vulWhitelists) { DARABONBA_PTR_SET_VALUE(vulWhitelists_, vulWhitelists) };
    inline DescribeVulWhitelistResponseBody& setVulWhitelists(vector<DescribeVulWhitelistResponseBodyVulWhitelists> && vulWhitelists) { DARABONBA_PTR_SET_RVALUE(vulWhitelists_, vulWhitelists) };


  protected:
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // An array that consists of information about the whitelist of vulnerabilities.
    std::shared_ptr<vector<DescribeVulWhitelistResponseBodyVulWhitelists>> vulWhitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
