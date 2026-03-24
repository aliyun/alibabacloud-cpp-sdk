// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCHECKRESULTREQUEST_HPP_
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
  class ListClusterCheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterCheckResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckKey, checkKey_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterCheckResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckKey, checkKey_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListClusterCheckResultRequest() = default ;
    ListClusterCheckResultRequest(const ListClusterCheckResultRequest &) = default ;
    ListClusterCheckResultRequest(ListClusterCheckResultRequest &&) = default ;
    ListClusterCheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterCheckResultRequest() = default ;
    ListClusterCheckResultRequest& operator=(const ListClusterCheckResultRequest &) = default ;
    ListClusterCheckResultRequest& operator=(ListClusterCheckResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkKey_ == nullptr
        && this->clusterId_ == nullptr && this->currentPage_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->riskLevels_ == nullptr
        && this->sortType_ == nullptr && this->statuses_ == nullptr; };
    // checkKey Field Functions 
    bool hasCheckKey() const { return this->checkKey_ != nullptr;};
    void deleteCheckKey() { this->checkKey_ = nullptr;};
    inline string getCheckKey() const { DARABONBA_PTR_GET_DEFAULT(checkKey_, "") };
    inline ListClusterCheckResultRequest& setCheckKey(string checkKey) { DARABONBA_PTR_SET_VALUE(checkKey_, checkKey) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterCheckResultRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListClusterCheckResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListClusterCheckResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClusterCheckResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevels Field Functions 
    bool hasRiskLevels() const { return this->riskLevels_ != nullptr;};
    void deleteRiskLevels() { this->riskLevels_ = nullptr;};
    inline const vector<string> & getRiskLevels() const { DARABONBA_PTR_GET_CONST(riskLevels_, vector<string>) };
    inline vector<string> getRiskLevels() { DARABONBA_PTR_GET(riskLevels_, vector<string>) };
    inline ListClusterCheckResultRequest& setRiskLevels(const vector<string> & riskLevels) { DARABONBA_PTR_SET_VALUE(riskLevels_, riskLevels) };
    inline ListClusterCheckResultRequest& setRiskLevels(vector<string> && riskLevels) { DARABONBA_PTR_SET_RVALUE(riskLevels_, riskLevels) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline ListClusterCheckResultRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListClusterCheckResultRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListClusterCheckResultRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // Fuzzy search key for check items.
    shared_ptr<string> checkKey_ {};
    // Cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // Page number for the current page in a paginated query. The default value is **1**.
    shared_ptr<int32_t> currentPage_ {};
    // Language type for requests and responses. The default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    // 
    // This parameter is required.
    shared_ptr<string> lang_ {};
    // Number of records to display per page when performing a paginated query. The default value is **20**, indicating 20 records per page.
    shared_ptr<int32_t> pageSize_ {};
    // List of risk levels.
    shared_ptr<vector<string>> riskLevels_ {};
    // Custom sorting type. Values:
    // 
    // - **RISK_LEVEL**: Risk level.
    // - **STATUS**: Check item status.
    shared_ptr<string> sortType_ {};
    // List of check item statuses.
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
