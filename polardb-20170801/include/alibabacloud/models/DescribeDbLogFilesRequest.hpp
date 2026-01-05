// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLogFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLogFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(DescribeSimulateSwitchMode, describeSimulateSwitchMode_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SimulateListId, simulateListId_);
      DARABONBA_PTR_TO_JSON(SimulateModeList, simulateModeList_);
      DARABONBA_PTR_TO_JSON(SimulateStatusList, simulateStatusList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLogFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(DescribeSimulateSwitchMode, describeSimulateSwitchMode_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SimulateListId, simulateListId_);
      DARABONBA_PTR_FROM_JSON(SimulateModeList, simulateModeList_);
      DARABONBA_PTR_FROM_JSON(SimulateStatusList, simulateStatusList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBLogFilesRequest() = default ;
    DescribeDBLogFilesRequest(const DescribeDBLogFilesRequest &) = default ;
    DescribeDBLogFilesRequest(DescribeDBLogFilesRequest &&) = default ;
    DescribeDBLogFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLogFilesRequest() = default ;
    DescribeDBLogFilesRequest& operator=(const DescribeDBLogFilesRequest &) = default ;
    DescribeDBLogFilesRequest& operator=(DescribeDBLogFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBNodeId_ == nullptr && this->describeSimulateSwitchMode_ == nullptr && this->endTime_ == nullptr && this->logType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->simulateListId_ == nullptr && this->simulateModeList_ == nullptr && this->simulateStatusList_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBLogFilesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeDBLogFilesRequest& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // describeSimulateSwitchMode Field Functions 
    bool hasDescribeSimulateSwitchMode() const { return this->describeSimulateSwitchMode_ != nullptr;};
    void deleteDescribeSimulateSwitchMode() { this->describeSimulateSwitchMode_ = nullptr;};
    inline string getDescribeSimulateSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(describeSimulateSwitchMode_, "") };
    inline DescribeDBLogFilesRequest& setDescribeSimulateSwitchMode(string describeSimulateSwitchMode) { DARABONBA_PTR_SET_VALUE(describeSimulateSwitchMode_, describeSimulateSwitchMode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBLogFilesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline DescribeDBLogFilesRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDBLogFilesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBLogFilesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBLogFilesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBLogFilesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDBLogFilesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBLogFilesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // simulateListId Field Functions 
    bool hasSimulateListId() const { return this->simulateListId_ != nullptr;};
    void deleteSimulateListId() { this->simulateListId_ = nullptr;};
    inline string getSimulateListId() const { DARABONBA_PTR_GET_DEFAULT(simulateListId_, "") };
    inline DescribeDBLogFilesRequest& setSimulateListId(string simulateListId) { DARABONBA_PTR_SET_VALUE(simulateListId_, simulateListId) };


    // simulateModeList Field Functions 
    bool hasSimulateModeList() const { return this->simulateModeList_ != nullptr;};
    void deleteSimulateModeList() { this->simulateModeList_ = nullptr;};
    inline string getSimulateModeList() const { DARABONBA_PTR_GET_DEFAULT(simulateModeList_, "") };
    inline DescribeDBLogFilesRequest& setSimulateModeList(string simulateModeList) { DARABONBA_PTR_SET_VALUE(simulateModeList_, simulateModeList) };


    // simulateStatusList Field Functions 
    bool hasSimulateStatusList() const { return this->simulateStatusList_ != nullptr;};
    void deleteSimulateStatusList() { this->simulateStatusList_ = nullptr;};
    inline string getSimulateStatusList() const { DARABONBA_PTR_GET_DEFAULT(simulateStatusList_, "") };
    inline DescribeDBLogFilesRequest& setSimulateStatusList(string simulateStatusList) { DARABONBA_PTR_SET_VALUE(simulateStatusList_, simulateStatusList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBLogFilesRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> DBNodeId_ {};
    shared_ptr<string> describeSimulateSwitchMode_ {};
    shared_ptr<string> endTime_ {};
    // The log type. Valid values:
    // 
    // *   **HaSwitchLogList**: failover logs.
    // 
    // This parameter is required.
    shared_ptr<string> logType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> simulateListId_ {};
    shared_ptr<string> simulateModeList_ {};
    shared_ptr<string> simulateStatusList_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
