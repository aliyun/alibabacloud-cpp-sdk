// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYBUILDRISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYBUILDRISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageListByBuildRiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListByBuildRiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskKey, riskKey_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListByBuildRiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskKey, riskKey_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeImageListByBuildRiskRequest() = default ;
    DescribeImageListByBuildRiskRequest(const DescribeImageListByBuildRiskRequest &) = default ;
    DescribeImageListByBuildRiskRequest(DescribeImageListByBuildRiskRequest &&) = default ;
    DescribeImageListByBuildRiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListByBuildRiskRequest() = default ;
    DescribeImageListByBuildRiskRequest& operator=(const DescribeImageListByBuildRiskRequest &) = default ;
    DescribeImageListByBuildRiskRequest& operator=(DescribeImageListByBuildRiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && this->criteriaType_ == nullptr && this->currentPage_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->riskKey_ == nullptr
        && this->riskLevel_ == nullptr && this->status_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeImageListByBuildRiskRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string getCriteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline DescribeImageListByBuildRiskRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageListByBuildRiskRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageListByBuildRiskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageListByBuildRiskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskKey Field Functions 
    bool hasRiskKey() const { return this->riskKey_ != nullptr;};
    void deleteRiskKey() { this->riskKey_ = nullptr;};
    inline string getRiskKey() const { DARABONBA_PTR_GET_DEFAULT(riskKey_, "") };
    inline DescribeImageListByBuildRiskRequest& setRiskKey(string riskKey) { DARABONBA_PTR_SET_VALUE(riskKey_, riskKey) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageListByBuildRiskRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageListByBuildRiskRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The attribute value of the condition parameter.
    shared_ptr<string> criteria_ {};
    // The property name of the condition parameters. Values:
    //  - **RepoNamespace**: Namespace.
    //  - **RepoName**: Repository name.
    shared_ptr<string> criteriaType_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The key of the risk. You can call the [DescribeImageBuildRiskList](~~~~) operation to obtain the value of RiskKey.
    shared_ptr<string> riskKey_ {};
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    shared_ptr<string> riskLevel_ {};
    // The status of the alert event. Valid values:
    // 
    // *   **0**: unhandled.
    // *   **1**: ignored.
    // *   **2**: false positive.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
