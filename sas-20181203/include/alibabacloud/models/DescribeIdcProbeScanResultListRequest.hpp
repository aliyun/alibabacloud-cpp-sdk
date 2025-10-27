// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDCPROBESCANRESULTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDCPROBESCANRESULTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeIdcProbeScanResultListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdcProbeScanResultListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FoundEndTime, foundEndTime_);
      DARABONBA_PTR_TO_JSON(FoundStartTime, foundStartTime_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdcProbeScanResultListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FoundEndTime, foundEndTime_);
      DARABONBA_PTR_FROM_JSON(FoundStartTime, foundStartTime_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIdcProbeScanResultListRequest() = default ;
    DescribeIdcProbeScanResultListRequest(const DescribeIdcProbeScanResultListRequest &) = default ;
    DescribeIdcProbeScanResultListRequest(DescribeIdcProbeScanResultListRequest &&) = default ;
    DescribeIdcProbeScanResultListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdcProbeScanResultListRequest() = default ;
    DescribeIdcProbeScanResultListRequest& operator=(const DescribeIdcProbeScanResultListRequest &) = default ;
    DescribeIdcProbeScanResultListRequest& operator=(DescribeIdcProbeScanResultListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && return this->currentPage_ == nullptr && return this->foundEndTime_ == nullptr && return this->foundStartTime_ == nullptr && return this->logicalExp_ == nullptr && return this->pageSize_ == nullptr
        && return this->status_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeIdcProbeScanResultListRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeIdcProbeScanResultListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // foundEndTime Field Functions 
    bool hasFoundEndTime() const { return this->foundEndTime_ != nullptr;};
    void deleteFoundEndTime() { this->foundEndTime_ = nullptr;};
    inline int64_t foundEndTime() const { DARABONBA_PTR_GET_DEFAULT(foundEndTime_, 0L) };
    inline DescribeIdcProbeScanResultListRequest& setFoundEndTime(int64_t foundEndTime) { DARABONBA_PTR_SET_VALUE(foundEndTime_, foundEndTime) };


    // foundStartTime Field Functions 
    bool hasFoundStartTime() const { return this->foundStartTime_ != nullptr;};
    void deleteFoundStartTime() { this->foundStartTime_ = nullptr;};
    inline int64_t foundStartTime() const { DARABONBA_PTR_GET_DEFAULT(foundStartTime_, 0L) };
    inline DescribeIdcProbeScanResultListRequest& setFoundStartTime(int64_t foundStartTime) { DARABONBA_PTR_SET_VALUE(foundStartTime_, foundStartTime) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string logicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline DescribeIdcProbeScanResultListRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIdcProbeScanResultListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIdcProbeScanResultListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The search conditions for assets. This parameter is in the JSON format. The value is case-sensitive.
    // 
    // >  A search condition can be the instance ID, instance name, VPC ID, region, or public IP address. You can call the [DescribeIdcAssetCriteria](https://help.aliyun.com/document_detail/2842671.html) operation to query supported search conditions.
    std::shared_ptr<string> criteria_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end time of the scan.
    std::shared_ptr<int64_t> foundEndTime_ = nullptr;
    // The start time of the scan.
    std::shared_ptr<int64_t> foundStartTime_ = nullptr;
    // The logical operator that combines multiple search conditions. Valid values:
    // 
    // *   **OR******
    // *   **AND******
    std::shared_ptr<string> logicalExp_ = nullptr;
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The statuses of the corresponding probes. Separate multiple values with commas (,). Valid values:
    // 
    // *   **0**: The probe is valid.
    // *   **1**: The probe is ignored.
    // *   **2**: The probe is invalid.
    // *   **3**: The probe expired.
    // *   **4**: The probe does not exist.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
