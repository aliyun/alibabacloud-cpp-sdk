// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONRULEPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONRULEPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInterceptionRulePageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionRulePageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionRulePageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListInterceptionRulePageRequest() = default ;
    ListInterceptionRulePageRequest(const ListInterceptionRulePageRequest &) = default ;
    ListInterceptionRulePageRequest(ListInterceptionRulePageRequest &&) = default ;
    ListInterceptionRulePageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionRulePageRequest() = default ;
    ListInterceptionRulePageRequest& operator=(const ListInterceptionRulePageRequest &) = default ;
    ListInterceptionRulePageRequest& operator=(ListInterceptionRulePageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->criteria_ == nullptr && return this->criteriaType_ == nullptr && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListInterceptionRulePageRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline ListInterceptionRulePageRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string criteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline ListInterceptionRulePageRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListInterceptionRulePageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInterceptionRulePageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the container cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The query condition.
    std::shared_ptr<string> criteria_ = nullptr;
    // The type of the query condition. Valid values:
    // 
    // *   **ID**
    // *   **RULE_NAME**
    // *   **SRC_TARGET**
    // *   **DST_TARGET**
    // *   **DST_PORT**
    // *   **RULE_SWITCH**
    // *   **INTERCEPTOR_TYPE**
    std::shared_ptr<string> criteriaType_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
