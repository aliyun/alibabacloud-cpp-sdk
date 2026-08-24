// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULSCANSCHEDULEDSTRATEGIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVULSCANSCHEDULEDSTRATEGIESREQUEST_HPP_
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
  class ListVulScanScheduledStrategiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulScanScheduledStrategiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyIds, strategyIds_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulScanScheduledStrategiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyIds, strategyIds_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListVulScanScheduledStrategiesRequest() = default ;
    ListVulScanScheduledStrategiesRequest(const ListVulScanScheduledStrategiesRequest &) = default ;
    ListVulScanScheduledStrategiesRequest(ListVulScanScheduledStrategiesRequest &&) = default ;
    ListVulScanScheduledStrategiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulScanScheduledStrategiesRequest() = default ;
    ListVulScanScheduledStrategiesRequest& operator=(const ListVulScanScheduledStrategiesRequest &) = default ;
    ListVulScanScheduledStrategiesRequest& operator=(ListVulScanScheduledStrategiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->matchMode_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->strategyIds_ == nullptr && this->strategyName_ == nullptr
        && this->userGroupId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListVulScanScheduledStrategiesRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline ListVulScanScheduledStrategiesRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVulScanScheduledStrategiesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVulScanScheduledStrategiesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyIds Field Functions 
    bool hasStrategyIds() const { return this->strategyIds_ != nullptr;};
    void deleteStrategyIds() { this->strategyIds_ = nullptr;};
    inline const vector<string> & getStrategyIds() const { DARABONBA_PTR_GET_CONST(strategyIds_, vector<string>) };
    inline vector<string> getStrategyIds() { DARABONBA_PTR_GET(strategyIds_, vector<string>) };
    inline ListVulScanScheduledStrategiesRequest& setStrategyIds(const vector<string> & strategyIds) { DARABONBA_PTR_SET_VALUE(strategyIds_, strategyIds) };
    inline ListVulScanScheduledStrategiesRequest& setStrategyIds(vector<string> && strategyIds) { DARABONBA_PTR_SET_RVALUE(strategyIds_, strategyIds) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline ListVulScanScheduledStrategiesRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListVulScanScheduledStrategiesRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The page number of the current page in a paging query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // Filters by the matching mode of the effective scope. Valid values:
    // - **UserGroupAll**: Takes effect for all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: Takes effect only for users in specified user groups.
    shared_ptr<string> matchMode_ {};
    // The number of entries per page in a paging query. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // Filters by enabled status. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> status_ {};
    // The IDs of scheduled vulnerability scan policies used for filtering. A maximum of 100 IDs can be specified. Duplicate IDs are not allowed.
    shared_ptr<vector<string>> strategyIds_ {};
    // The policy name. Fuzzy match is supported. The name can be up to 128 characters in length.
    shared_ptr<string> strategyName_ {};
    // The user group ID. Used to filter records whose effective scope includes the specified user group. You can obtain the value from the following operation:
    // - [ListUserGroups](~~ListUserGroups~~): lists user groups.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
