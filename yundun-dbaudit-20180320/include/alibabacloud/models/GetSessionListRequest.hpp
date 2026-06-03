// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetSessionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionList, actionList_);
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(ClientIpList, clientIpList_);
      DARABONBA_PTR_TO_JSON(ClientProgramList, clientProgramList_);
      DARABONBA_PTR_TO_JSON(DbHostList, dbHostList_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbUserList, dbUserList_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSessionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(ClientIpList, clientIpList_);
      DARABONBA_PTR_FROM_JSON(ClientProgramList, clientProgramList_);
      DARABONBA_PTR_FROM_JSON(DbHostList, dbHostList_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbUserList, dbUserList_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    GetSessionListRequest() = default ;
    GetSessionListRequest(const GetSessionListRequest &) = default ;
    GetSessionListRequest(GetSessionListRequest &&) = default ;
    GetSessionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionListRequest() = default ;
    GetSessionListRequest& operator=(const GetSessionListRequest &) = default ;
    GetSessionListRequest& operator=(GetSessionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionList_ == nullptr
        && this->beginDate_ == nullptr && this->clientIpList_ == nullptr && this->clientProgramList_ == nullptr && this->dbHostList_ == nullptr && this->dbId_ == nullptr
        && this->dbUserList_ == nullptr && this->endDate_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->sessionId_ == nullptr; };
    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline const vector<string> & getActionList() const { DARABONBA_PTR_GET_CONST(actionList_, vector<string>) };
    inline vector<string> getActionList() { DARABONBA_PTR_GET(actionList_, vector<string>) };
    inline GetSessionListRequest& setActionList(const vector<string> & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
    inline GetSessionListRequest& setActionList(vector<string> && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline GetSessionListRequest& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // clientIpList Field Functions 
    bool hasClientIpList() const { return this->clientIpList_ != nullptr;};
    void deleteClientIpList() { this->clientIpList_ = nullptr;};
    inline const vector<string> & getClientIpList() const { DARABONBA_PTR_GET_CONST(clientIpList_, vector<string>) };
    inline vector<string> getClientIpList() { DARABONBA_PTR_GET(clientIpList_, vector<string>) };
    inline GetSessionListRequest& setClientIpList(const vector<string> & clientIpList) { DARABONBA_PTR_SET_VALUE(clientIpList_, clientIpList) };
    inline GetSessionListRequest& setClientIpList(vector<string> && clientIpList) { DARABONBA_PTR_SET_RVALUE(clientIpList_, clientIpList) };


    // clientProgramList Field Functions 
    bool hasClientProgramList() const { return this->clientProgramList_ != nullptr;};
    void deleteClientProgramList() { this->clientProgramList_ = nullptr;};
    inline const vector<string> & getClientProgramList() const { DARABONBA_PTR_GET_CONST(clientProgramList_, vector<string>) };
    inline vector<string> getClientProgramList() { DARABONBA_PTR_GET(clientProgramList_, vector<string>) };
    inline GetSessionListRequest& setClientProgramList(const vector<string> & clientProgramList) { DARABONBA_PTR_SET_VALUE(clientProgramList_, clientProgramList) };
    inline GetSessionListRequest& setClientProgramList(vector<string> && clientProgramList) { DARABONBA_PTR_SET_RVALUE(clientProgramList_, clientProgramList) };


    // dbHostList Field Functions 
    bool hasDbHostList() const { return this->dbHostList_ != nullptr;};
    void deleteDbHostList() { this->dbHostList_ = nullptr;};
    inline const vector<string> & getDbHostList() const { DARABONBA_PTR_GET_CONST(dbHostList_, vector<string>) };
    inline vector<string> getDbHostList() { DARABONBA_PTR_GET(dbHostList_, vector<string>) };
    inline GetSessionListRequest& setDbHostList(const vector<string> & dbHostList) { DARABONBA_PTR_SET_VALUE(dbHostList_, dbHostList) };
    inline GetSessionListRequest& setDbHostList(vector<string> && dbHostList) { DARABONBA_PTR_SET_RVALUE(dbHostList_, dbHostList) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline GetSessionListRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbUserList Field Functions 
    bool hasDbUserList() const { return this->dbUserList_ != nullptr;};
    void deleteDbUserList() { this->dbUserList_ = nullptr;};
    inline const vector<string> & getDbUserList() const { DARABONBA_PTR_GET_CONST(dbUserList_, vector<string>) };
    inline vector<string> getDbUserList() { DARABONBA_PTR_GET(dbUserList_, vector<string>) };
    inline GetSessionListRequest& setDbUserList(const vector<string> & dbUserList) { DARABONBA_PTR_SET_VALUE(dbUserList_, dbUserList) };
    inline GetSessionListRequest& setDbUserList(vector<string> && dbUserList) { DARABONBA_PTR_SET_RVALUE(dbUserList_, dbUserList) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetSessionListRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSessionListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetSessionListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetSessionListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSessionListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSessionListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetSessionListRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<vector<string>> actionList_ {};
    // This parameter is required.
    shared_ptr<string> beginDate_ {};
    shared_ptr<vector<string>> clientIpList_ {};
    shared_ptr<vector<string>> clientProgramList_ {};
    shared_ptr<vector<string>> dbHostList_ {};
    shared_ptr<int32_t> dbId_ {};
    shared_ptr<vector<string>> dbUserList_ {};
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
