// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONRECORDSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONRECORDSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListActionRecordsResponseBodyResultStatusInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListActionRecordsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionRecordsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(actionName, actionName_);
      DARABONBA_ANY_TO_JSON(actionParams, actionParams_);
      DARABONBA_PTR_TO_JSON(actionResultAccessList, actionResultAccessList_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(metaNow, metaNow_);
      DARABONBA_PTR_TO_JSON(metaOld, metaOld_);
      DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
      DARABONBA_PTR_TO_JSON(process, process_);
      DARABONBA_ANY_TO_JSON(recordDiff, recordDiff_);
      DARABONBA_PTR_TO_JSON(recordIds, recordIds_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(stateType, stateType_);
      DARABONBA_PTR_TO_JSON(statusInfo, statusInfo_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(userInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(userType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionRecordsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(actionName, actionName_);
      DARABONBA_ANY_FROM_JSON(actionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(actionResultAccessList, actionResultAccessList_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(metaNow, metaNow_);
      DARABONBA_PTR_FROM_JSON(metaOld, metaOld_);
      DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(process, process_);
      DARABONBA_ANY_FROM_JSON(recordDiff, recordDiff_);
      DARABONBA_PTR_FROM_JSON(recordIds, recordIds_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(stateType, stateType_);
      DARABONBA_PTR_FROM_JSON(statusInfo, statusInfo_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(userInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(userType, userType_);
    };
    ListActionRecordsResponseBodyResult() = default ;
    ListActionRecordsResponseBodyResult(const ListActionRecordsResponseBodyResult &) = default ;
    ListActionRecordsResponseBodyResult(ListActionRecordsResponseBodyResult &&) = default ;
    ListActionRecordsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionRecordsResponseBodyResult() = default ;
    ListActionRecordsResponseBodyResult& operator=(const ListActionRecordsResponseBodyResult &) = default ;
    ListActionRecordsResponseBodyResult& operator=(ListActionRecordsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionName_ != nullptr
        && this->actionParams_ != nullptr && this->actionResultAccessList_ != nullptr && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->metaNow_ != nullptr
        && this->metaOld_ != nullptr && this->ownerId_ != nullptr && this->process_ != nullptr && this->recordDiff_ != nullptr && this->recordIds_ != nullptr
        && this->requestId_ != nullptr && this->startTime_ != nullptr && this->stateType_ != nullptr && this->statusInfo_ != nullptr && this->userId_ != nullptr
        && this->userInfo_ != nullptr && this->userType_ != nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline ListActionRecordsResponseBodyResult& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // actionParams Field Functions 
    bool hasActionParams() const { return this->actionParams_ != nullptr;};
    void deleteActionParams() { this->actionParams_ = nullptr;};
    inline     const Darabonba::Json & actionParams() const { DARABONBA_GET(actionParams_) };
    Darabonba::Json & actionParams() { DARABONBA_GET(actionParams_) };
    inline ListActionRecordsResponseBodyResult& setActionParams(const Darabonba::Json & actionParams) { DARABONBA_SET_VALUE(actionParams_, actionParams) };
    inline ListActionRecordsResponseBodyResult& setActionParams(Darabonba::Json & actionParams) { DARABONBA_SET_RVALUE(actionParams_, actionParams) };


    // actionResultAccessList Field Functions 
    bool hasActionResultAccessList() const { return this->actionResultAccessList_ != nullptr;};
    void deleteActionResultAccessList() { this->actionResultAccessList_ = nullptr;};
    inline const vector<string> & actionResultAccessList() const { DARABONBA_PTR_GET_CONST(actionResultAccessList_, vector<string>) };
    inline vector<string> actionResultAccessList() { DARABONBA_PTR_GET(actionResultAccessList_, vector<string>) };
    inline ListActionRecordsResponseBodyResult& setActionResultAccessList(const vector<string> & actionResultAccessList) { DARABONBA_PTR_SET_VALUE(actionResultAccessList_, actionResultAccessList) };
    inline ListActionRecordsResponseBodyResult& setActionResultAccessList(vector<string> && actionResultAccessList) { DARABONBA_PTR_SET_RVALUE(actionResultAccessList_, actionResultAccessList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListActionRecordsResponseBodyResult& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListActionRecordsResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metaNow Field Functions 
    bool hasMetaNow() const { return this->metaNow_ != nullptr;};
    void deleteMetaNow() { this->metaNow_ = nullptr;};
    inline string metaNow() const { DARABONBA_PTR_GET_DEFAULT(metaNow_, "") };
    inline ListActionRecordsResponseBodyResult& setMetaNow(string metaNow) { DARABONBA_PTR_SET_VALUE(metaNow_, metaNow) };


    // metaOld Field Functions 
    bool hasMetaOld() const { return this->metaOld_ != nullptr;};
    void deleteMetaOld() { this->metaOld_ = nullptr;};
    inline string metaOld() const { DARABONBA_PTR_GET_DEFAULT(metaOld_, "") };
    inline ListActionRecordsResponseBodyResult& setMetaOld(string metaOld) { DARABONBA_PTR_SET_VALUE(metaOld_, metaOld) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListActionRecordsResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline ListActionRecordsResponseBodyResult& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // recordDiff Field Functions 
    bool hasRecordDiff() const { return this->recordDiff_ != nullptr;};
    void deleteRecordDiff() { this->recordDiff_ = nullptr;};
    inline     const Darabonba::Json & recordDiff() const { DARABONBA_GET(recordDiff_) };
    Darabonba::Json & recordDiff() { DARABONBA_GET(recordDiff_) };
    inline ListActionRecordsResponseBodyResult& setRecordDiff(const Darabonba::Json & recordDiff) { DARABONBA_SET_VALUE(recordDiff_, recordDiff) };
    inline ListActionRecordsResponseBodyResult& setRecordDiff(Darabonba::Json & recordDiff) { DARABONBA_SET_RVALUE(recordDiff_, recordDiff) };


    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<string> & recordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<string>) };
    inline vector<string> recordIds() { DARABONBA_PTR_GET(recordIds_, vector<string>) };
    inline ListActionRecordsResponseBodyResult& setRecordIds(const vector<string> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline ListActionRecordsResponseBodyResult& setRecordIds(vector<string> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActionRecordsResponseBodyResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListActionRecordsResponseBodyResult& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stateType Field Functions 
    bool hasStateType() const { return this->stateType_ != nullptr;};
    void deleteStateType() { this->stateType_ = nullptr;};
    inline string stateType() const { DARABONBA_PTR_GET_DEFAULT(stateType_, "") };
    inline ListActionRecordsResponseBodyResult& setStateType(string stateType) { DARABONBA_PTR_SET_VALUE(stateType_, stateType) };


    // statusInfo Field Functions 
    bool hasStatusInfo() const { return this->statusInfo_ != nullptr;};
    void deleteStatusInfo() { this->statusInfo_ = nullptr;};
    inline const vector<Models::ListActionRecordsResponseBodyResultStatusInfo> & statusInfo() const { DARABONBA_PTR_GET_CONST(statusInfo_, vector<Models::ListActionRecordsResponseBodyResultStatusInfo>) };
    inline vector<Models::ListActionRecordsResponseBodyResultStatusInfo> statusInfo() { DARABONBA_PTR_GET(statusInfo_, vector<Models::ListActionRecordsResponseBodyResultStatusInfo>) };
    inline ListActionRecordsResponseBodyResult& setStatusInfo(const vector<Models::ListActionRecordsResponseBodyResultStatusInfo> & statusInfo) { DARABONBA_PTR_SET_VALUE(statusInfo_, statusInfo) };
    inline ListActionRecordsResponseBodyResult& setStatusInfo(vector<Models::ListActionRecordsResponseBodyResultStatusInfo> && statusInfo) { DARABONBA_PTR_SET_RVALUE(statusInfo_, statusInfo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListActionRecordsResponseBodyResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline string userInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
    inline ListActionRecordsResponseBodyResult& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline ListActionRecordsResponseBodyResult& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> actionName_ = nullptr;
    Darabonba::Json actionParams_ = nullptr;
    std::shared_ptr<vector<string>> actionResultAccessList_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> metaNow_ = nullptr;
    std::shared_ptr<string> metaOld_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> process_ = nullptr;
    Darabonba::Json recordDiff_ = nullptr;
    std::shared_ptr<vector<string>> recordIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> stateType_ = nullptr;
    std::shared_ptr<vector<Models::ListActionRecordsResponseBodyResultStatusInfo>> statusInfo_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userInfo_ = nullptr;
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
