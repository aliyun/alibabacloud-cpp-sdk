// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANSCHEDULEDSTRATEGIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANSCHEDULEDSTRATEGIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVirusScanScheduledStrategiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanScheduledStrategiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PerformanceModes, performanceModes_);
      DARABONBA_PTR_TO_JSON(ScanModes, scanModes_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyIds, strategyIds_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanScheduledStrategiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PerformanceModes, performanceModes_);
      DARABONBA_PTR_FROM_JSON(ScanModes, scanModes_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyIds, strategyIds_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListVirusScanScheduledStrategiesRequest() = default ;
    ListVirusScanScheduledStrategiesRequest(const ListVirusScanScheduledStrategiesRequest &) = default ;
    ListVirusScanScheduledStrategiesRequest(ListVirusScanScheduledStrategiesRequest &&) = default ;
    ListVirusScanScheduledStrategiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanScheduledStrategiesRequest() = default ;
    ListVirusScanScheduledStrategiesRequest& operator=(const ListVirusScanScheduledStrategiesRequest &) = default ;
    ListVirusScanScheduledStrategiesRequest& operator=(ListVirusScanScheduledStrategiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->performanceModes_ == nullptr && this->scanModes_ == nullptr && this->status_ == nullptr && this->strategyIds_ == nullptr
        && this->strategyName_ == nullptr && this->userGroupId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListVirusScanScheduledStrategiesRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVirusScanScheduledStrategiesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // performanceModes Field Functions 
    bool hasPerformanceModes() const { return this->performanceModes_ != nullptr;};
    void deletePerformanceModes() { this->performanceModes_ = nullptr;};
    inline const vector<string> & getPerformanceModes() const { DARABONBA_PTR_GET_CONST(performanceModes_, vector<string>) };
    inline vector<string> getPerformanceModes() { DARABONBA_PTR_GET(performanceModes_, vector<string>) };
    inline ListVirusScanScheduledStrategiesRequest& setPerformanceModes(const vector<string> & performanceModes) { DARABONBA_PTR_SET_VALUE(performanceModes_, performanceModes) };
    inline ListVirusScanScheduledStrategiesRequest& setPerformanceModes(vector<string> && performanceModes) { DARABONBA_PTR_SET_RVALUE(performanceModes_, performanceModes) };


    // scanModes Field Functions 
    bool hasScanModes() const { return this->scanModes_ != nullptr;};
    void deleteScanModes() { this->scanModes_ = nullptr;};
    inline const vector<string> & getScanModes() const { DARABONBA_PTR_GET_CONST(scanModes_, vector<string>) };
    inline vector<string> getScanModes() { DARABONBA_PTR_GET(scanModes_, vector<string>) };
    inline ListVirusScanScheduledStrategiesRequest& setScanModes(const vector<string> & scanModes) { DARABONBA_PTR_SET_VALUE(scanModes_, scanModes) };
    inline ListVirusScanScheduledStrategiesRequest& setScanModes(vector<string> && scanModes) { DARABONBA_PTR_SET_RVALUE(scanModes_, scanModes) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVirusScanScheduledStrategiesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyIds Field Functions 
    bool hasStrategyIds() const { return this->strategyIds_ != nullptr;};
    void deleteStrategyIds() { this->strategyIds_ = nullptr;};
    inline const vector<string> & getStrategyIds() const { DARABONBA_PTR_GET_CONST(strategyIds_, vector<string>) };
    inline vector<string> getStrategyIds() { DARABONBA_PTR_GET(strategyIds_, vector<string>) };
    inline ListVirusScanScheduledStrategiesRequest& setStrategyIds(const vector<string> & strategyIds) { DARABONBA_PTR_SET_VALUE(strategyIds_, strategyIds) };
    inline ListVirusScanScheduledStrategiesRequest& setStrategyIds(vector<string> && strategyIds) { DARABONBA_PTR_SET_RVALUE(strategyIds_, strategyIds) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline ListVirusScanScheduledStrategiesRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListVirusScanScheduledStrategiesRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The page number of the current page in paging. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // The number of entries per page in paging. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The collection of scan performance modes. Duplicate values are not allowed.
    shared_ptr<vector<string>> performanceModes_ {};
    // The collection of scan path scopes. Duplicate values are not allowed.
    shared_ptr<vector<string>> scanModes_ {};
    // Filters policies by enabled status. Valid values:
    // - **Enabled**: enabled.
    // - **Disabled**: disabled.
    shared_ptr<string> status_ {};
    // The collection of virus scheduled scan policy IDs. Duplicate values are not allowed.
    shared_ptr<vector<string>> strategyIds_ {};
    // The policy name. Fuzzy match is supported. The name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> strategyName_ {};
    // The user group ID. This parameter is used to filter policies whose effective scope includes the specified user group. You can obtain the value from:
    // - [ListUserGroups](~~ListUserGroups~~): lists user groups.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
