// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopGroupSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDesktopGroupSessionsResponseBody() = default ;
    DescribeDesktopGroupSessionsResponseBody(const DescribeDesktopGroupSessionsResponseBody &) = default ;
    DescribeDesktopGroupSessionsResponseBody(DescribeDesktopGroupSessionsResponseBody &&) = default ;
    DescribeDesktopGroupSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupSessionsResponseBody() = default ;
    DescribeDesktopGroupSessionsResponseBody& operator=(const DescribeDesktopGroupSessionsResponseBody &) = default ;
    DescribeDesktopGroupSessionsResponseBody& operator=(DescribeDesktopGroupSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
        DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(EndUserApplyCoordinateTime, endUserApplyCoordinateTime_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(LastSessionEndTime, lastSessionEndTime_);
        DARABONBA_PTR_TO_JSON(LastSessionStartTime, lastSessionStartTime_);
        DARABONBA_PTR_TO_JSON(LatestConnectionTime, latestConnectionTime_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OwnType, ownType_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(SessionIdleTime, sessionIdleTime_);
        DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_TO_JSON(TerminalInfo, terminalInfo_);
        DARABONBA_PTR_TO_JSON(TotalConnectionDuration, totalConnectionDuration_);
      };
      friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
        DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(EndUserApplyCoordinateTime, endUserApplyCoordinateTime_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(LastSessionEndTime, lastSessionEndTime_);
        DARABONBA_PTR_FROM_JSON(LastSessionStartTime, lastSessionStartTime_);
        DARABONBA_PTR_FROM_JSON(LatestConnectionTime, latestConnectionTime_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(SessionIdleTime, sessionIdleTime_);
        DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_FROM_JSON(TerminalInfo, terminalInfo_);
        DARABONBA_PTR_FROM_JSON(TotalConnectionDuration, totalConnectionDuration_);
      };
      Sessions() = default ;
      Sessions(const Sessions &) = default ;
      Sessions(Sessions &&) = default ;
      Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sessions() = default ;
      Sessions& operator=(const Sessions &) = default ;
      Sessions& operator=(Sessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TerminalInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TerminalInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(ProductName, productName_);
          DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, TerminalInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(ProductName, productName_);
          DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        TerminalInfo() = default ;
        TerminalInfo(const TerminalInfo &) = default ;
        TerminalInfo(TerminalInfo &&) = default ;
        TerminalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TerminalInfo() = default ;
        TerminalInfo& operator=(const TerminalInfo &) = default ;
        TerminalInfo& operator=(TerminalInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->model_ == nullptr
        && this->productName_ == nullptr && this->serialNumber_ == nullptr && this->uuid_ == nullptr; };
        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline TerminalInfo& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline TerminalInfo& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline TerminalInfo& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline TerminalInfo& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // The type of the terminal.
        shared_ptr<string> model_ {};
        // The terminal type.
        shared_ptr<string> productName_ {};
        // Terminal Serial Number
        shared_ptr<string> serialNumber_ {};
        // The terminal UUID.
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->clientIp_ == nullptr && this->clientOS_ == nullptr && this->clientVersion_ == nullptr && this->desktopGroupId_ == nullptr && this->desktopGroupName_ == nullptr
        && this->desktopId_ == nullptr && this->directoryType_ == nullptr && this->endUserApplyCoordinateTime_ == nullptr && this->endUserId_ == nullptr && this->lastSessionEndTime_ == nullptr
        && this->lastSessionStartTime_ == nullptr && this->latestConnectionTime_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->osType_ == nullptr
        && this->ownType_ == nullptr && this->protocolType_ == nullptr && this->sessionIdleTime_ == nullptr && this->sessionStatus_ == nullptr && this->terminalInfo_ == nullptr
        && this->totalConnectionDuration_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline Sessions& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Sessions& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // clientOS Field Functions 
      bool hasClientOS() const { return this->clientOS_ != nullptr;};
      void deleteClientOS() { this->clientOS_ = nullptr;};
      inline string getClientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
      inline Sessions& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline Sessions& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline Sessions& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopGroupName Field Functions 
      bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
      void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
      inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
      inline Sessions& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Sessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Sessions& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // endUserApplyCoordinateTime Field Functions 
      bool hasEndUserApplyCoordinateTime() const { return this->endUserApplyCoordinateTime_ != nullptr;};
      void deleteEndUserApplyCoordinateTime() { this->endUserApplyCoordinateTime_ = nullptr;};
      inline int64_t getEndUserApplyCoordinateTime() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyCoordinateTime_, 0L) };
      inline Sessions& setEndUserApplyCoordinateTime(int64_t endUserApplyCoordinateTime) { DARABONBA_PTR_SET_VALUE(endUserApplyCoordinateTime_, endUserApplyCoordinateTime) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Sessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // lastSessionEndTime Field Functions 
      bool hasLastSessionEndTime() const { return this->lastSessionEndTime_ != nullptr;};
      void deleteLastSessionEndTime() { this->lastSessionEndTime_ = nullptr;};
      inline string getLastSessionEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastSessionEndTime_, "") };
      inline Sessions& setLastSessionEndTime(string lastSessionEndTime) { DARABONBA_PTR_SET_VALUE(lastSessionEndTime_, lastSessionEndTime) };


      // lastSessionStartTime Field Functions 
      bool hasLastSessionStartTime() const { return this->lastSessionStartTime_ != nullptr;};
      void deleteLastSessionStartTime() { this->lastSessionStartTime_ = nullptr;};
      inline string getLastSessionStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastSessionStartTime_, "") };
      inline Sessions& setLastSessionStartTime(string lastSessionStartTime) { DARABONBA_PTR_SET_VALUE(lastSessionStartTime_, lastSessionStartTime) };


      // latestConnectionTime Field Functions 
      bool hasLatestConnectionTime() const { return this->latestConnectionTime_ != nullptr;};
      void deleteLatestConnectionTime() { this->latestConnectionTime_ = nullptr;};
      inline int64_t getLatestConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(latestConnectionTime_, 0L) };
      inline Sessions& setLatestConnectionTime(int64_t latestConnectionTime) { DARABONBA_PTR_SET_VALUE(latestConnectionTime_, latestConnectionTime) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Sessions& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline Sessions& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Sessions& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // ownType Field Functions 
      bool hasOwnType() const { return this->ownType_ != nullptr;};
      void deleteOwnType() { this->ownType_ = nullptr;};
      inline int32_t getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0) };
      inline Sessions& setOwnType(int32_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Sessions& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // sessionIdleTime Field Functions 
      bool hasSessionIdleTime() const { return this->sessionIdleTime_ != nullptr;};
      void deleteSessionIdleTime() { this->sessionIdleTime_ = nullptr;};
      inline int64_t getSessionIdleTime() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTime_, 0L) };
      inline Sessions& setSessionIdleTime(int64_t sessionIdleTime) { DARABONBA_PTR_SET_VALUE(sessionIdleTime_, sessionIdleTime) };


      // sessionStatus Field Functions 
      bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
      void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
      inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
      inline Sessions& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


      // terminalInfo Field Functions 
      bool hasTerminalInfo() const { return this->terminalInfo_ != nullptr;};
      void deleteTerminalInfo() { this->terminalInfo_ = nullptr;};
      inline const Sessions::TerminalInfo & getTerminalInfo() const { DARABONBA_PTR_GET_CONST(terminalInfo_, Sessions::TerminalInfo) };
      inline Sessions::TerminalInfo getTerminalInfo() { DARABONBA_PTR_GET(terminalInfo_, Sessions::TerminalInfo) };
      inline Sessions& setTerminalInfo(const Sessions::TerminalInfo & terminalInfo) { DARABONBA_PTR_SET_VALUE(terminalInfo_, terminalInfo) };
      inline Sessions& setTerminalInfo(Sessions::TerminalInfo && terminalInfo) { DARABONBA_PTR_SET_RVALUE(terminalInfo_, terminalInfo) };


      // totalConnectionDuration Field Functions 
      bool hasTotalConnectionDuration() const { return this->totalConnectionDuration_ != nullptr;};
      void deleteTotalConnectionDuration() { this->totalConnectionDuration_ = nullptr;};
      inline int64_t getTotalConnectionDuration() const { DARABONBA_PTR_GET_DEFAULT(totalConnectionDuration_, 0L) };
      inline Sessions& setTotalConnectionDuration(int64_t totalConnectionDuration) { DARABONBA_PTR_SET_VALUE(totalConnectionDuration_, totalConnectionDuration) };


    protected:
      // 账号类型
      shared_ptr<string> accountType_ {};
      // The IP address of the client.
      shared_ptr<string> clientIp_ {};
      // The operating system of the client.
      shared_ptr<string> clientOS_ {};
      // The version of the client.
      shared_ptr<string> clientVersion_ {};
      // The ID of the shared cloud computer.
      shared_ptr<string> desktopGroupId_ {};
      // The name of the cloud computer share.
      shared_ptr<string> desktopGroupName_ {};
      // If the session status is Connected, it indicates the ID of the cloud computer that is currently connected. If the session status is Disconnected, it indicates the ID of the cloud computer that was last connected.
      shared_ptr<string> desktopId_ {};
      // 办公网络类型
      shared_ptr<string> directoryType_ {};
      // The point in time when the end user applies for administrator assistance.
      shared_ptr<int64_t> endUserApplyCoordinateTime_ {};
      // The user ID of the terminal that connects to the session.
      shared_ptr<string> endUserId_ {};
      // The end time of the most recent connection.
      shared_ptr<string> lastSessionEndTime_ {};
      // The start time of the most recent connection.
      shared_ptr<string> lastSessionStartTime_ {};
      // The duration of the most recent session. Unit: seconds.
      shared_ptr<int64_t> latestConnectionTime_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The office network name.
      shared_ptr<string> officeSiteName_ {};
      // The operating system type of the cloud computer.
      // 
      // Valid values:
      // 
      // *   linux.
      // *   Windows.
      shared_ptr<string> osType_ {};
      // The type of the session.
      // 
      // Valid values:
      // 
      // *   0: single-session
      // *   1: multi-session
      shared_ptr<int32_t> ownType_ {};
      // The protocol type supported by the rule.
      // 
      // Valid value:
      // 
      // *   High-definition Experience (HDX).
      // *   ASP.
      shared_ptr<string> protocolType_ {};
      // The idle duration of the cloud computer. Unit: seconds.
      shared_ptr<int64_t> sessionIdleTime_ {};
      // The state of the session.
      // 
      // Valid values:
      // 
      // *   Connected
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Disconnected
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> sessionStatus_ {};
      // Terminal Info
      shared_ptr<Sessions::TerminalInfo> terminalInfo_ {};
      // The total duration of the sessions. Unit: seconds.
      shared_ptr<int64_t> totalConnectionDuration_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->sessions_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopGroupSessionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopGroupSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<DescribeDesktopGroupSessionsResponseBody::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<DescribeDesktopGroupSessionsResponseBody::Sessions>) };
    inline vector<DescribeDesktopGroupSessionsResponseBody::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<DescribeDesktopGroupSessionsResponseBody::Sessions>) };
    inline DescribeDesktopGroupSessionsResponseBody& setSessions(const vector<DescribeDesktopGroupSessionsResponseBody::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeDesktopGroupSessionsResponseBody& setSessions(vector<DescribeDesktopGroupSessionsResponseBody::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDesktopGroupSessionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sessions.
    shared_ptr<vector<DescribeDesktopGroupSessionsResponseBody::Sessions>> sessions_ {};
    // The total number of sessions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
