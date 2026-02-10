// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTEVENTREQUEST_HPP_
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
  class ListFileProtectEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListFileProtectEventRequest() = default ;
    ListFileProtectEventRequest(const ListFileProtectEventRequest &) = default ;
    ListFileProtectEventRequest(ListFileProtectEventRequest &&) = default ;
    ListFileProtectEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectEventRequest() = default ;
    ListFileProtectEventRequest& operator=(const ListFileProtectEventRequest &) = default ;
    ListFileProtectEventRequest& operator=(ListFileProtectEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevels_ == nullptr
        && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->operation_ == nullptr && this->pageSize_ == nullptr && this->ruleName_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr; };
    // alertLevels Field Functions 
    bool hasAlertLevels() const { return this->alertLevels_ != nullptr;};
    void deleteAlertLevels() { this->alertLevels_ = nullptr;};
    inline const vector<int32_t> & getAlertLevels() const { DARABONBA_PTR_GET_CONST(alertLevels_, vector<int32_t>) };
    inline vector<int32_t> getAlertLevels() { DARABONBA_PTR_GET(alertLevels_, vector<int32_t>) };
    inline ListFileProtectEventRequest& setAlertLevels(const vector<int32_t> & alertLevels) { DARABONBA_PTR_SET_VALUE(alertLevels_, alertLevels) };
    inline ListFileProtectEventRequest& setAlertLevels(vector<int32_t> && alertLevels) { DARABONBA_PTR_SET_RVALUE(alertLevels_, alertLevels) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListFileProtectEventRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListFileProtectEventRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFileProtectEventRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListFileProtectEventRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListFileProtectEventRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListFileProtectEventRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ListFileProtectEventRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListFileProtectEventRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListFileProtectEventRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListFileProtectEventRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFileProtectEventRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListFileProtectEventRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The severities of alerts.
    shared_ptr<vector<int32_t>> alertLevels_ {};
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The end timestamp of the query.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID of the asset.
    shared_ptr<string> instanceId_ {};
    // The name of the server.
    shared_ptr<string> instanceName_ {};
    // The public IP address of the server.
    shared_ptr<string> internetIp_ {};
    // The private IP address of the server.
    shared_ptr<string> intranetIp_ {};
    // Type of operation on a file. eg:
    // 
    // - **DELETE**: delete the file.
    // - **WRITE**: write the file.
    // - **READ**: read the file.
    // - **RENAME**: rename the file.
    // - **CHOWN**: set the file owner and file association group operations.
    shared_ptr<string> operation_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
    // The start timestamp of the query.
    shared_ptr<int64_t> startTime_ {};
    // The status of the event. Valid values:
    // 
    // *   0: unhandled
    // *   1: handled
    // *   2: added to the whitelist
    // *   3: ignored
    shared_ptr<string> status_ {};
    // The UUID of the server.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUID of the server.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
