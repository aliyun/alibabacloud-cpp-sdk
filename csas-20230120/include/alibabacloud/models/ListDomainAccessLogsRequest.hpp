// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINACCESSLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINACCESSLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDomainAccessLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainAccessLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockAction, blockAction_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(RemoteHost, remoteHost_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainAccessLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockAction, blockAction_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(RemoteHost, remoteHost_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListDomainAccessLogsRequest() = default ;
    ListDomainAccessLogsRequest(const ListDomainAccessLogsRequest &) = default ;
    ListDomainAccessLogsRequest(ListDomainAccessLogsRequest &&) = default ;
    ListDomainAccessLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainAccessLogsRequest() = default ;
    ListDomainAccessLogsRequest& operator=(const ListDomainAccessLogsRequest &) = default ;
    ListDomainAccessLogsRequest& operator=(ListDomainAccessLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockAction_ == nullptr
        && this->currentPage_ == nullptr && this->department_ == nullptr && this->endTime_ == nullptr && this->pageSize_ == nullptr && this->policyType_ == nullptr
        && this->remoteHost_ == nullptr && this->startTime_ == nullptr && this->userName_ == nullptr; };
    // blockAction Field Functions 
    bool hasBlockAction() const { return this->blockAction_ != nullptr;};
    void deleteBlockAction() { this->blockAction_ = nullptr;};
    inline string getBlockAction() const { DARABONBA_PTR_GET_DEFAULT(blockAction_, "") };
    inline ListDomainAccessLogsRequest& setBlockAction(string blockAction) { DARABONBA_PTR_SET_VALUE(blockAction_, blockAction) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDomainAccessLogsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListDomainAccessLogsRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDomainAccessLogsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDomainAccessLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListDomainAccessLogsRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // remoteHost Field Functions 
    bool hasRemoteHost() const { return this->remoteHost_ != nullptr;};
    void deleteRemoteHost() { this->remoteHost_ = nullptr;};
    inline string getRemoteHost() const { DARABONBA_PTR_GET_DEFAULT(remoteHost_, "") };
    inline ListDomainAccessLogsRequest& setRemoteHost(string remoteHost) { DARABONBA_PTR_SET_VALUE(remoteHost_, remoteHost) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDomainAccessLogsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListDomainAccessLogsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The action taken upon a rule hit. Exact match is used. Valid values:
    // 
    // - Audit: Audit.
    // - Observe: Observe only.
    // - WhiteList: Allowed by whitelist.
    // - Block: Blocked.
    // - Redirect: Redirected to a prompt page.
    shared_ptr<string> blockAction_ {};
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The department. Exact match is used.
    shared_ptr<string> department_ {};
    // The end time of the query. This value is a UNIX timestamp in seconds.
    shared_ptr<int64_t> endTime_ {};
    // The number of entries per page in paging. Valid values: 1 to 1000.
    shared_ptr<int32_t> pageSize_ {};
    // The policy type used to filter results.
    shared_ptr<string> policyType_ {};
    // The destination domain name accessed. Exact match is used.
    shared_ptr<string> remoteHost_ {};
    // The start time of the query. This value is a UNIX timestamp in seconds.
    shared_ptr<int64_t> startTime_ {};
    // The username. Exact match is used.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
