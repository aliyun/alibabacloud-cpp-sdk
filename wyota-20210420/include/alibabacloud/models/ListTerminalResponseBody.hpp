// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTERMINALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTERMINALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class ListTerminalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTerminalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTerminalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTerminalResponseBody() = default ;
    ListTerminalResponseBody(const ListTerminalResponseBody &) = default ;
    ListTerminalResponseBody(ListTerminalResponseBody &&) = default ;
    ListTerminalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTerminalResponseBody() = default ;
    ListTerminalResponseBody& operator=(const ListTerminalResponseBody &) = default ;
    ListTerminalResponseBody& operator=(ListTerminalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(BindUserCount, bindUserCount_);
        DARABONBA_PTR_TO_JSON(BindUserId, bindUserId_);
        DARABONBA_PTR_TO_JSON(BuildId, buildId_);
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(InManage, inManage_);
        DARABONBA_PTR_TO_JSON(Ipv4, ipv4_);
        DARABONBA_PTR_TO_JSON(LastLoginUser, lastLoginUser_);
        DARABONBA_PTR_TO_JSON(LocationInfo, locationInfo_);
        DARABONBA_PTR_TO_JSON(LockSettings, lockSettings_);
        DARABONBA_PTR_TO_JSON(LoginUser, loginUser_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(BindUserCount, bindUserCount_);
        DARABONBA_PTR_FROM_JSON(BindUserId, bindUserId_);
        DARABONBA_PTR_FROM_JSON(BuildId, buildId_);
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(InManage, inManage_);
        DARABONBA_PTR_FROM_JSON(Ipv4, ipv4_);
        DARABONBA_PTR_FROM_JSON(LastLoginUser, lastLoginUser_);
        DARABONBA_PTR_FROM_JSON(LocationInfo, locationInfo_);
        DARABONBA_PTR_FROM_JSON(LockSettings, lockSettings_);
        DARABONBA_PTR_FROM_JSON(LoginUser, loginUser_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->bindUserCount_ == nullptr && this->bindUserId_ == nullptr && this->buildId_ == nullptr && this->clientType_ == nullptr && this->desktopId_ == nullptr
        && this->inManage_ == nullptr && this->ipv4_ == nullptr && this->lastLoginUser_ == nullptr && this->locationInfo_ == nullptr && this->lockSettings_ == nullptr
        && this->loginUser_ == nullptr && this->model_ == nullptr && this->onlineStatus_ == nullptr && this->serialNumber_ == nullptr && this->terminalGroupId_ == nullptr
        && this->uuid_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Data& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // bindUserCount Field Functions 
      bool hasBindUserCount() const { return this->bindUserCount_ != nullptr;};
      void deleteBindUserCount() { this->bindUserCount_ = nullptr;};
      inline int32_t getBindUserCount() const { DARABONBA_PTR_GET_DEFAULT(bindUserCount_, 0) };
      inline Data& setBindUserCount(int32_t bindUserCount) { DARABONBA_PTR_SET_VALUE(bindUserCount_, bindUserCount) };


      // bindUserId Field Functions 
      bool hasBindUserId() const { return this->bindUserId_ != nullptr;};
      void deleteBindUserId() { this->bindUserId_ = nullptr;};
      inline string getBindUserId() const { DARABONBA_PTR_GET_DEFAULT(bindUserId_, "") };
      inline Data& setBindUserId(string bindUserId) { DARABONBA_PTR_SET_VALUE(bindUserId_, bindUserId) };


      // buildId Field Functions 
      bool hasBuildId() const { return this->buildId_ != nullptr;};
      void deleteBuildId() { this->buildId_ = nullptr;};
      inline string getBuildId() const { DARABONBA_PTR_GET_DEFAULT(buildId_, "") };
      inline Data& setBuildId(string buildId) { DARABONBA_PTR_SET_VALUE(buildId_, buildId) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
      inline Data& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Data& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // inManage Field Functions 
      bool hasInManage() const { return this->inManage_ != nullptr;};
      void deleteInManage() { this->inManage_ = nullptr;};
      inline bool getInManage() const { DARABONBA_PTR_GET_DEFAULT(inManage_, false) };
      inline Data& setInManage(bool inManage) { DARABONBA_PTR_SET_VALUE(inManage_, inManage) };


      // ipv4 Field Functions 
      bool hasIpv4() const { return this->ipv4_ != nullptr;};
      void deleteIpv4() { this->ipv4_ = nullptr;};
      inline string getIpv4() const { DARABONBA_PTR_GET_DEFAULT(ipv4_, "") };
      inline Data& setIpv4(string ipv4) { DARABONBA_PTR_SET_VALUE(ipv4_, ipv4) };


      // lastLoginUser Field Functions 
      bool hasLastLoginUser() const { return this->lastLoginUser_ != nullptr;};
      void deleteLastLoginUser() { this->lastLoginUser_ = nullptr;};
      inline string getLastLoginUser() const { DARABONBA_PTR_GET_DEFAULT(lastLoginUser_, "") };
      inline Data& setLastLoginUser(string lastLoginUser) { DARABONBA_PTR_SET_VALUE(lastLoginUser_, lastLoginUser) };


      // locationInfo Field Functions 
      bool hasLocationInfo() const { return this->locationInfo_ != nullptr;};
      void deleteLocationInfo() { this->locationInfo_ = nullptr;};
      inline string getLocationInfo() const { DARABONBA_PTR_GET_DEFAULT(locationInfo_, "") };
      inline Data& setLocationInfo(string locationInfo) { DARABONBA_PTR_SET_VALUE(locationInfo_, locationInfo) };


      // lockSettings Field Functions 
      bool hasLockSettings() const { return this->lockSettings_ != nullptr;};
      void deleteLockSettings() { this->lockSettings_ = nullptr;};
      inline bool getLockSettings() const { DARABONBA_PTR_GET_DEFAULT(lockSettings_, false) };
      inline Data& setLockSettings(bool lockSettings) { DARABONBA_PTR_SET_VALUE(lockSettings_, lockSettings) };


      // loginUser Field Functions 
      bool hasLoginUser() const { return this->loginUser_ != nullptr;};
      void deleteLoginUser() { this->loginUser_ = nullptr;};
      inline string getLoginUser() const { DARABONBA_PTR_GET_DEFAULT(loginUser_, "") };
      inline Data& setLoginUser(string loginUser) { DARABONBA_PTR_SET_VALUE(loginUser_, loginUser) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Data& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // onlineStatus Field Functions 
      bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
      void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
      inline bool getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, false) };
      inline Data& setOnlineStatus(bool onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline Data& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // terminalGroupId Field Functions 
      bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
      void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
      inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
      inline Data& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<int32_t> bindUserCount_ {};
      shared_ptr<string> bindUserId_ {};
      shared_ptr<string> buildId_ {};
      shared_ptr<int32_t> clientType_ {};
      shared_ptr<string> desktopId_ {};
      shared_ptr<bool> inManage_ {};
      shared_ptr<string> ipv4_ {};
      shared_ptr<string> lastLoginUser_ {};
      shared_ptr<string> locationInfo_ {};
      shared_ptr<bool> lockSettings_ {};
      shared_ptr<string> loginUser_ {};
      shared_ptr<string> model_ {};
      shared_ptr<bool> onlineStatus_ {};
      shared_ptr<string> serialNumber_ {};
      shared_ptr<string> terminalGroupId_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTerminalResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTerminalResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTerminalResponseBody::Data>) };
    inline vector<ListTerminalResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTerminalResponseBody::Data>) };
    inline ListTerminalResponseBody& setData(const vector<ListTerminalResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTerminalResponseBody& setData(vector<ListTerminalResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTerminalResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTerminalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTerminalResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTerminalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTerminalResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTerminalResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListTerminalResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
