// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATERULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATERULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeCategoryTemplateRuleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCategoryTemplateRuleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCategoryTemplateRuleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCategoryTemplateRuleListRequest() = default ;
    DescribeCategoryTemplateRuleListRequest(const DescribeCategoryTemplateRuleListRequest &) = default ;
    DescribeCategoryTemplateRuleListRequest(DescribeCategoryTemplateRuleListRequest &&) = default ;
    DescribeCategoryTemplateRuleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCategoryTemplateRuleListRequest() = default ;
    DescribeCategoryTemplateRuleListRequest& operator=(const DescribeCategoryTemplateRuleListRequest &) = default ;
    DescribeCategoryTemplateRuleListRequest& operator=(DescribeCategoryTemplateRuleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->featureType_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->riskLevelId_ == nullptr && return this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCategoryTemplateRuleListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeCategoryTemplateRuleListRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCategoryTemplateRuleListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCategoryTemplateRuleListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeCategoryTemplateRuleListRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCategoryTemplateRuleListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Simplified Chinese
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sensitivity level of the data that is not compliant with the rule. Valid values: **1** to **11**. Default value: **null**.
    // 
    // *   **1**: No sensitive data is detected.
    // *   **2**: specifies the S1 sensitivity level.
    // *   **3**: specifies the S2 sensitivity level.
    // *   **4**: specifies the S3 sensitivity level.
    // *   **5**: specifies the S4 sensitivity level.
    // *   **6**: specifies the S5 sensitivity level.
    // *   **7**: specifies the S6 sensitivity level.
    // *   **8**: specifies the S7 sensitivity level.
    // *   **9**: specifies the S8 sensitivity level.
    // *   **10**: specifies the S9 sensitivity level.
    // *   **11**: specifies the S10 sensitivity level.
    // *   **null**: specifies all preceding sensitivity levels.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The status of the rule. Default value: **null**. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    // *   **null**: all states
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
