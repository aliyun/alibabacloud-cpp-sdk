// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSESSIONSRESPONSEBODY_HPP_
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
  class DescribeDesktopSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDesktopSessionsResponseBody() = default ;
    DescribeDesktopSessionsResponseBody(const DescribeDesktopSessionsResponseBody &) = default ;
    DescribeDesktopSessionsResponseBody(DescribeDesktopSessionsResponseBody &&) = default ;
    DescribeDesktopSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopSessionsResponseBody() = default ;
    DescribeDesktopSessionsResponseBody& operator=(const DescribeDesktopSessionsResponseBody &) = default ;
    DescribeDesktopSessionsResponseBody& operator=(DescribeDesktopSessionsResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(EndUserApplyCoordinateTime, endUserApplyCoordinateTime_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(LatestConnectionTime, latestConnectionTime_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OsSessionStatus, osSessionStatus_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
        DARABONBA_PTR_TO_JSON(SessionEndTime, sessionEndTime_);
        DARABONBA_PTR_TO_JSON(SessionIdleTime, sessionIdleTime_);
        DARABONBA_PTR_TO_JSON(SessionStartTime, sessionStartTime_);
        DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_TO_JSON(TerminalInfo, terminalInfo_);
        DARABONBA_PTR_TO_JSON(TotalConnectionTime, totalConnectionTime_);
      };
      friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
        DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(EndUserApplyCoordinateTime, endUserApplyCoordinateTime_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(LatestConnectionTime, latestConnectionTime_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OsSessionStatus, osSessionStatus_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
        DARABONBA_PTR_FROM_JSON(SessionEndTime, sessionEndTime_);
        DARABONBA_PTR_FROM_JSON(SessionIdleTime, sessionIdleTime_);
        DARABONBA_PTR_FROM_JSON(SessionStartTime, sessionStartTime_);
        DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_FROM_JSON(TerminalInfo, terminalInfo_);
        DARABONBA_PTR_FROM_JSON(TotalConnectionTime, totalConnectionTime_);
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
        shared_ptr<string> model_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<string> serialNumber_ {};
        shared_ptr<string> uuid_ {};
      };

      class ResourceGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceGroups& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ResourceGroups() = default ;
        ResourceGroups(const ResourceGroups &) = default ;
        ResourceGroups(ResourceGroups &&) = default ;
        ResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceGroups() = default ;
        ResourceGroups& operator=(const ResourceGroups &) = default ;
        ResourceGroups& operator=(ResourceGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ResourceGroups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ResourceGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->clientIp_ == nullptr && this->clientOS_ == nullptr && this->clientVersion_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr
        && this->directoryType_ == nullptr && this->endUserApplyCoordinateTime_ == nullptr && this->endUserId_ == nullptr && this->latestConnectionTime_ == nullptr && this->officeSiteId_ == nullptr
        && this->officeSiteName_ == nullptr && this->osSessionStatus_ == nullptr && this->osType_ == nullptr && this->protocolType_ == nullptr && this->resourceGroups_ == nullptr
        && this->sessionEndTime_ == nullptr && this->sessionIdleTime_ == nullptr && this->sessionStartTime_ == nullptr && this->sessionStatus_ == nullptr && this->subPayType_ == nullptr
        && this->terminalInfo_ == nullptr && this->totalConnectionTime_ == nullptr; };
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


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Sessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Sessions& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


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


      // osSessionStatus Field Functions 
      bool hasOsSessionStatus() const { return this->osSessionStatus_ != nullptr;};
      void deleteOsSessionStatus() { this->osSessionStatus_ = nullptr;};
      inline string getOsSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(osSessionStatus_, "") };
      inline Sessions& setOsSessionStatus(string osSessionStatus) { DARABONBA_PTR_SET_VALUE(osSessionStatus_, osSessionStatus) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Sessions& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Sessions& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // resourceGroups Field Functions 
      bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
      void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
      inline const vector<Sessions::ResourceGroups> & getResourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<Sessions::ResourceGroups>) };
      inline vector<Sessions::ResourceGroups> getResourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<Sessions::ResourceGroups>) };
      inline Sessions& setResourceGroups(const vector<Sessions::ResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
      inline Sessions& setResourceGroups(vector<Sessions::ResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


      // sessionEndTime Field Functions 
      bool hasSessionEndTime() const { return this->sessionEndTime_ != nullptr;};
      void deleteSessionEndTime() { this->sessionEndTime_ = nullptr;};
      inline string getSessionEndTime() const { DARABONBA_PTR_GET_DEFAULT(sessionEndTime_, "") };
      inline Sessions& setSessionEndTime(string sessionEndTime) { DARABONBA_PTR_SET_VALUE(sessionEndTime_, sessionEndTime) };


      // sessionIdleTime Field Functions 
      bool hasSessionIdleTime() const { return this->sessionIdleTime_ != nullptr;};
      void deleteSessionIdleTime() { this->sessionIdleTime_ = nullptr;};
      inline int64_t getSessionIdleTime() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTime_, 0L) };
      inline Sessions& setSessionIdleTime(int64_t sessionIdleTime) { DARABONBA_PTR_SET_VALUE(sessionIdleTime_, sessionIdleTime) };


      // sessionStartTime Field Functions 
      bool hasSessionStartTime() const { return this->sessionStartTime_ != nullptr;};
      void deleteSessionStartTime() { this->sessionStartTime_ = nullptr;};
      inline string getSessionStartTime() const { DARABONBA_PTR_GET_DEFAULT(sessionStartTime_, "") };
      inline Sessions& setSessionStartTime(string sessionStartTime) { DARABONBA_PTR_SET_VALUE(sessionStartTime_, sessionStartTime) };


      // sessionStatus Field Functions 
      bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
      void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
      inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
      inline Sessions& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


      // subPayType Field Functions 
      bool hasSubPayType() const { return this->subPayType_ != nullptr;};
      void deleteSubPayType() { this->subPayType_ = nullptr;};
      inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
      inline Sessions& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


      // terminalInfo Field Functions 
      bool hasTerminalInfo() const { return this->terminalInfo_ != nullptr;};
      void deleteTerminalInfo() { this->terminalInfo_ = nullptr;};
      inline const Sessions::TerminalInfo & getTerminalInfo() const { DARABONBA_PTR_GET_CONST(terminalInfo_, Sessions::TerminalInfo) };
      inline Sessions::TerminalInfo getTerminalInfo() { DARABONBA_PTR_GET(terminalInfo_, Sessions::TerminalInfo) };
      inline Sessions& setTerminalInfo(const Sessions::TerminalInfo & terminalInfo) { DARABONBA_PTR_SET_VALUE(terminalInfo_, terminalInfo) };
      inline Sessions& setTerminalInfo(Sessions::TerminalInfo && terminalInfo) { DARABONBA_PTR_SET_RVALUE(terminalInfo_, terminalInfo) };


      // totalConnectionTime Field Functions 
      bool hasTotalConnectionTime() const { return this->totalConnectionTime_ != nullptr;};
      void deleteTotalConnectionTime() { this->totalConnectionTime_ = nullptr;};
      inline int64_t getTotalConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(totalConnectionTime_, 0L) };
      inline Sessions& setTotalConnectionTime(int64_t totalConnectionTime) { DARABONBA_PTR_SET_VALUE(totalConnectionTime_, totalConnectionTime) };


    protected:
      shared_ptr<string> accountType_ {};
      // The IP address of the client.
      shared_ptr<string> clientIp_ {};
      // The client OS.
      shared_ptr<string> clientOS_ {};
      // The client version.
      shared_ptr<string> clientVersion_ {};
      // The ID of the cloud computer.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud computer.
      shared_ptr<string> desktopName_ {};
      shared_ptr<string> directoryType_ {};
      // The duration of the remote assistance. Unit: seconds.
      shared_ptr<int64_t> endUserApplyCoordinateTime_ {};
      // The ID of the end user.
      shared_ptr<string> endUserId_ {};
      // The duration of the last connection to the cloud computer. Unit: seconds.
      shared_ptr<int64_t> latestConnectionTime_ {};
      // The ID of the office network.
      shared_ptr<string> officeSiteId_ {};
      // The name of the office network.
      shared_ptr<string> officeSiteName_ {};
      // Indicates whether the switch to check session status of cloud computers is turned on.
      shared_ptr<string> osSessionStatus_ {};
      // The OS.
      // 
      // Valid values:
      // 
      // *   Linux
      // *   Windows
      shared_ptr<string> osType_ {};
      // The protocol type.
      // 
      // Valid values:
      // 
      // *   HDX
      // *   ASP
      shared_ptr<string> protocolType_ {};
      shared_ptr<vector<Sessions::ResourceGroups>> resourceGroups_ {};
      // The end time of the session.
      shared_ptr<string> sessionEndTime_ {};
      // The idle duration of the session. Unit: seconds.
      shared_ptr<int64_t> sessionIdleTime_ {};
      // The start time of the session.
      shared_ptr<string> sessionStartTime_ {};
      // The state of the session.
      // 
      // Valid values:
      // 
      // *   Connected
      // *   Disconnected
      shared_ptr<string> sessionStatus_ {};
      // The billing method of cloud computers.
      // 
      // Valid values:
      // 
      // *   duration: hourly plan (available for users in the whitelist)
      // *   postPaid: pay-as-you-go
      // *   monthPackage: monthly subscription (120-hour computing plan and 250-hour computing plan)
      // *   prePaid: monthly subscription (Unlimited computing plan)
      shared_ptr<string> subPayType_ {};
      shared_ptr<Sessions::TerminalInfo> terminalInfo_ {};
      // The total connection duration. Unit: seconds.
      shared_ptr<int64_t> totalConnectionTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sessions_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<DescribeDesktopSessionsResponseBody::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<DescribeDesktopSessionsResponseBody::Sessions>) };
    inline vector<DescribeDesktopSessionsResponseBody::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<DescribeDesktopSessionsResponseBody::Sessions>) };
    inline DescribeDesktopSessionsResponseBody& setSessions(const vector<DescribeDesktopSessionsResponseBody::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeDesktopSessionsResponseBody& setSessions(vector<DescribeDesktopSessionsResponseBody::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDesktopSessionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details of sessions.
    shared_ptr<vector<DescribeDesktopSessionsResponseBody::Sessions>> sessions_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
