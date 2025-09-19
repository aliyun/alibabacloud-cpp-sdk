// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulTargetStatisticsResponseBodyTargetStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulTargetStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulTargetStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetStats, targetStats_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulTargetStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetStats, targetStats_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulTargetStatisticsResponseBody() = default ;
    DescribeVulTargetStatisticsResponseBody(const DescribeVulTargetStatisticsResponseBody &) = default ;
    DescribeVulTargetStatisticsResponseBody(DescribeVulTargetStatisticsResponseBody &&) = default ;
    DescribeVulTargetStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulTargetStatisticsResponseBody() = default ;
    DescribeVulTargetStatisticsResponseBody& operator=(const DescribeVulTargetStatisticsResponseBody &) = default ;
    DescribeVulTargetStatisticsResponseBody& operator=(DescribeVulTargetStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->targetStats_ != nullptr && this->totalCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVulTargetStatisticsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulTargetStatisticsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulTargetStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetStats Field Functions 
    bool hasTargetStats() const { return this->targetStats_ != nullptr;};
    void deleteTargetStats() { this->targetStats_ = nullptr;};
    inline const vector<DescribeVulTargetStatisticsResponseBodyTargetStats> & targetStats() const { DARABONBA_PTR_GET_CONST(targetStats_, vector<DescribeVulTargetStatisticsResponseBodyTargetStats>) };
    inline vector<DescribeVulTargetStatisticsResponseBodyTargetStats> targetStats() { DARABONBA_PTR_GET(targetStats_, vector<DescribeVulTargetStatisticsResponseBodyTargetStats>) };
    inline DescribeVulTargetStatisticsResponseBody& setTargetStats(const vector<DescribeVulTargetStatisticsResponseBodyTargetStats> & targetStats) { DARABONBA_PTR_SET_VALUE(targetStats_, targetStats) };
    inline DescribeVulTargetStatisticsResponseBody& setTargetStats(vector<DescribeVulTargetStatisticsResponseBodyTargetStats> && targetStats) { DARABONBA_PTR_SET_RVALUE(targetStats_, targetStats) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulTargetStatisticsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the configurations of the vulnerability scan feature.
    std::shared_ptr<vector<DescribeVulTargetStatisticsResponseBodyTargetStats>> targetStats_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
