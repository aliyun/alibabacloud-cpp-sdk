// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKRESULTREQUEST_HPP_
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
  class DescribeImageBaselineCheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineCheckResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineCheckResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
    };
    DescribeImageBaselineCheckResultRequest() = default ;
    DescribeImageBaselineCheckResultRequest(const DescribeImageBaselineCheckResultRequest &) = default ;
    DescribeImageBaselineCheckResultRequest(DescribeImageBaselineCheckResultRequest &&) = default ;
    DescribeImageBaselineCheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineCheckResultRequest() = default ;
    DescribeImageBaselineCheckResultRequest& operator=(const DescribeImageBaselineCheckResultRequest &) = default ;
    DescribeImageBaselineCheckResultRequest& operator=(DescribeImageBaselineCheckResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && this->criteriaType_ == nullptr && this->currentPage_ == nullptr && this->imageUuid_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr
        && this->riskLevel_ == nullptr && this->scanRange_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeImageBaselineCheckResultRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string getCriteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline DescribeImageBaselineCheckResultRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageBaselineCheckResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeImageBaselineCheckResultRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageBaselineCheckResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageBaselineCheckResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageBaselineCheckResultRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & getScanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> getScanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeImageBaselineCheckResultRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeImageBaselineCheckResultRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


  protected:
    // The search condition for the image baseline.
    shared_ptr<string> criteria_ {};
    // The type of the search condition. Valid values:
    // 
    // *   **BaselineNameAlias**: baseline name
    // *   **BaselineClassAlias**: baseline category
    shared_ptr<string> criteriaType_ {};
    // The number of the page to return. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The UUID of the image.
    // 
    // This parameter is required.
    shared_ptr<string> imageUuid_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The severity of the image baseline that you want to query. Separate multiple severities with commas (,). By default, all valid values are used. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    shared_ptr<string> riskLevel_ {};
    // The types of the assets that you want to scan.
    shared_ptr<vector<string>> scanRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
