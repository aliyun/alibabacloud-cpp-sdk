// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineCheckSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineCheckSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineCheckSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
    };
    DescribeImageBaselineCheckSummaryRequest() = default ;
    DescribeImageBaselineCheckSummaryRequest(const DescribeImageBaselineCheckSummaryRequest &) = default ;
    DescribeImageBaselineCheckSummaryRequest(DescribeImageBaselineCheckSummaryRequest &&) = default ;
    DescribeImageBaselineCheckSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineCheckSummaryRequest() = default ;
    DescribeImageBaselineCheckSummaryRequest& operator=(const DescribeImageBaselineCheckSummaryRequest &) = default ;
    DescribeImageBaselineCheckSummaryRequest& operator=(DescribeImageBaselineCheckSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->criteria_ == nullptr && return this->criteriaType_ == nullptr && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr
        && return this->riskLevel_ == nullptr && return this->scanRange_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeImageBaselineCheckSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeImageBaselineCheckSummaryRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string criteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline DescribeImageBaselineCheckSummaryRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageBaselineCheckSummaryRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageBaselineCheckSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageBaselineCheckSummaryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageBaselineCheckSummaryRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & scanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> scanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeImageBaselineCheckSummaryRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeImageBaselineCheckSummaryRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


  protected:
    // The ID of the specified container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the ID of the container cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The search condition for the image baseline.
    std::shared_ptr<string> criteria_ = nullptr;
    // The type of the search condition. Valid values:
    // 
    // *   **BaselineNameAlias**: baseline name
    // *   **BaselineClassAlias**: baseline category
    std::shared_ptr<string> criteriaType_ = nullptr;
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The severity of the image baseline that you want to query. Separate multiple severities with commas (,). Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The types of the assets that you want to scan.
    std::shared_ptr<vector<string>> scanRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
