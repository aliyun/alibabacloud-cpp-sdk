// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RangeId, rangeId_);
      DARABONBA_PTR_TO_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RangeId, rangeId_);
      DARABONBA_PTR_FROM_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeDataAssetsRequest() = default ;
    DescribeDataAssetsRequest(const DescribeDataAssetsRequest &) = default ;
    DescribeDataAssetsRequest(DescribeDataAssetsRequest &&) = default ;
    DescribeDataAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAssetsRequest() = default ;
    DescribeDataAssetsRequest& operator=(const DescribeDataAssetsRequest &) = default ;
    DescribeDataAssetsRequest& operator=(DescribeDataAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->lang_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr && this->rangeId_ == nullptr && this->riskLevels_ == nullptr
        && this->ruleId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataAssetsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataAssetsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataAssetsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataAssetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rangeId Field Functions 
    bool hasRangeId() const { return this->rangeId_ != nullptr;};
    void deleteRangeId() { this->rangeId_ = nullptr;};
    inline int32_t getRangeId() const { DARABONBA_PTR_GET_DEFAULT(rangeId_, 0) };
    inline DescribeDataAssetsRequest& setRangeId(int32_t rangeId) { DARABONBA_PTR_SET_VALUE(rangeId_, rangeId) };


    // riskLevels Field Functions 
    bool hasRiskLevels() const { return this->riskLevels_ != nullptr;};
    void deleteRiskLevels() { this->riskLevels_ = nullptr;};
    inline string getRiskLevels() const { DARABONBA_PTR_GET_DEFAULT(riskLevels_, "") };
    inline DescribeDataAssetsRequest& setRiskLevels(string riskLevels) { DARABONBA_PTR_SET_VALUE(riskLevels_, riskLevels) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDataAssetsRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Simplified Chinese
    // *   **en_us**: English
    shared_ptr<string> lang_ {};
    // The keyword that is used to search for data assets. Fuzzy search is supported.
    shared_ptr<string> name_ {};
    // The number of entries to return on each page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the data asset that you want to query. Valid values:
    // 
    // *   **1**: MaxCompute project
    // *   **2**: MaxCompute table
    // *   **3**: MaxCompute package
    // *   **11**: AnalyticDB for MySQL database
    // *   **12**: AnalyticDB for MySQL table
    // *   **21**: Object Storage Service (OSS) bucket
    // *   **22**: OSS object
    // *   **31**: Tablestore instance
    // *   **32**: Tablestore table
    // *   **51**: ApsaraDB RDS database
    // *   **52**: ApsaraDB RDS table
    // *   **61**: self-managed database hosted on an Elastic Compute Service (ECS) instance
    // *   **62**: self-managed table hosted on an ECS instance
    // *   **71**: PolarDB-X database
    // *   **72**: PolarDB-X table
    // *   **81**: PolarDB database
    // *   **82**: PolarDB table
    // *   **91**: AnalyticDB for PostgreSQL database
    // *   **92**: AnalyticDB for PostgreSQL table
    shared_ptr<int32_t> rangeId_ {};
    // The sensitivity level of the data asset. Separate multiple sensitivity levels with commas (,). Valid values:
    // 
    // *   **2**: S1, indicating the low sensitivity level
    // *   **3**: S2, indicating the medium sensitivity level
    // *   **4**: S3, indicating the high sensitivity level
    // *   **5**: S4, indicating the highest sensitivity level
    shared_ptr<string> riskLevels_ {};
    // The unique ID of the sensitive data detection rule that the data assets to be queried hit.
    // 
    // > If you query sensitive data detection results based on the sensitive data detection rule that the data assets hit, you can call the [DescribeRules](~~DescribeRules~~) operation to query the ID of the sensitive data detection rule.
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
