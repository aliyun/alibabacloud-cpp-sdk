// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSESSIONSRESPONSEBODYSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSESSIONSRESPONSEBODYSESSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopSessionsResponseBodySessionsResourceGroups.hpp>
#include <alibabacloud/models/DescribeDesktopSessionsResponseBodySessionsTerminalInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopSessionsResponseBodySessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopSessionsResponseBodySessions& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
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
    friend void from_json(const Darabonba::Json& j, DescribeDesktopSessionsResponseBodySessions& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
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
    DescribeDesktopSessionsResponseBodySessions() = default ;
    DescribeDesktopSessionsResponseBodySessions(const DescribeDesktopSessionsResponseBodySessions &) = default ;
    DescribeDesktopSessionsResponseBodySessions(DescribeDesktopSessionsResponseBodySessions &&) = default ;
    DescribeDesktopSessionsResponseBodySessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopSessionsResponseBodySessions() = default ;
    DescribeDesktopSessionsResponseBodySessions& operator=(const DescribeDesktopSessionsResponseBodySessions &) = default ;
    DescribeDesktopSessionsResponseBodySessions& operator=(DescribeDesktopSessionsResponseBodySessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr
        && this->clientOS_ != nullptr && this->clientVersion_ != nullptr && this->desktopId_ != nullptr && this->desktopName_ != nullptr && this->endUserApplyCoordinateTime_ != nullptr
        && this->endUserId_ != nullptr && this->latestConnectionTime_ != nullptr && this->officeSiteId_ != nullptr && this->officeSiteName_ != nullptr && this->osSessionStatus_ != nullptr
        && this->osType_ != nullptr && this->protocolType_ != nullptr && this->resourceGroups_ != nullptr && this->sessionEndTime_ != nullptr && this->sessionIdleTime_ != nullptr
        && this->sessionStartTime_ != nullptr && this->sessionStatus_ != nullptr && this->subPayType_ != nullptr && this->terminalInfo_ != nullptr && this->totalConnectionTime_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string clientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // endUserApplyCoordinateTime Field Functions 
    bool hasEndUserApplyCoordinateTime() const { return this->endUserApplyCoordinateTime_ != nullptr;};
    void deleteEndUserApplyCoordinateTime() { this->endUserApplyCoordinateTime_ = nullptr;};
    inline int64_t endUserApplyCoordinateTime() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyCoordinateTime_, 0L) };
    inline DescribeDesktopSessionsResponseBodySessions& setEndUserApplyCoordinateTime(int64_t endUserApplyCoordinateTime) { DARABONBA_PTR_SET_VALUE(endUserApplyCoordinateTime_, endUserApplyCoordinateTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // latestConnectionTime Field Functions 
    bool hasLatestConnectionTime() const { return this->latestConnectionTime_ != nullptr;};
    void deleteLatestConnectionTime() { this->latestConnectionTime_ = nullptr;};
    inline int64_t latestConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(latestConnectionTime_, 0L) };
    inline DescribeDesktopSessionsResponseBodySessions& setLatestConnectionTime(int64_t latestConnectionTime) { DARABONBA_PTR_SET_VALUE(latestConnectionTime_, latestConnectionTime) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // osSessionStatus Field Functions 
    bool hasOsSessionStatus() const { return this->osSessionStatus_ != nullptr;};
    void deleteOsSessionStatus() { this->osSessionStatus_ = nullptr;};
    inline string osSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(osSessionStatus_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setOsSessionStatus(string osSessionStatus) { DARABONBA_PTR_SET_VALUE(osSessionStatus_, osSessionStatus) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline const vector<Models::DescribeDesktopSessionsResponseBodySessionsResourceGroups> & resourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<Models::DescribeDesktopSessionsResponseBodySessionsResourceGroups>) };
    inline vector<Models::DescribeDesktopSessionsResponseBodySessionsResourceGroups> resourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<Models::DescribeDesktopSessionsResponseBodySessionsResourceGroups>) };
    inline DescribeDesktopSessionsResponseBodySessions& setResourceGroups(const vector<Models::DescribeDesktopSessionsResponseBodySessionsResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
    inline DescribeDesktopSessionsResponseBodySessions& setResourceGroups(vector<Models::DescribeDesktopSessionsResponseBodySessionsResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


    // sessionEndTime Field Functions 
    bool hasSessionEndTime() const { return this->sessionEndTime_ != nullptr;};
    void deleteSessionEndTime() { this->sessionEndTime_ = nullptr;};
    inline string sessionEndTime() const { DARABONBA_PTR_GET_DEFAULT(sessionEndTime_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setSessionEndTime(string sessionEndTime) { DARABONBA_PTR_SET_VALUE(sessionEndTime_, sessionEndTime) };


    // sessionIdleTime Field Functions 
    bool hasSessionIdleTime() const { return this->sessionIdleTime_ != nullptr;};
    void deleteSessionIdleTime() { this->sessionIdleTime_ = nullptr;};
    inline int64_t sessionIdleTime() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTime_, 0L) };
    inline DescribeDesktopSessionsResponseBodySessions& setSessionIdleTime(int64_t sessionIdleTime) { DARABONBA_PTR_SET_VALUE(sessionIdleTime_, sessionIdleTime) };


    // sessionStartTime Field Functions 
    bool hasSessionStartTime() const { return this->sessionStartTime_ != nullptr;};
    void deleteSessionStartTime() { this->sessionStartTime_ = nullptr;};
    inline string sessionStartTime() const { DARABONBA_PTR_GET_DEFAULT(sessionStartTime_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setSessionStartTime(string sessionStartTime) { DARABONBA_PTR_SET_VALUE(sessionStartTime_, sessionStartTime) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string subPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline DescribeDesktopSessionsResponseBodySessions& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // terminalInfo Field Functions 
    bool hasTerminalInfo() const { return this->terminalInfo_ != nullptr;};
    void deleteTerminalInfo() { this->terminalInfo_ = nullptr;};
    inline const Models::DescribeDesktopSessionsResponseBodySessionsTerminalInfo & terminalInfo() const { DARABONBA_PTR_GET_CONST(terminalInfo_, Models::DescribeDesktopSessionsResponseBodySessionsTerminalInfo) };
    inline Models::DescribeDesktopSessionsResponseBodySessionsTerminalInfo terminalInfo() { DARABONBA_PTR_GET(terminalInfo_, Models::DescribeDesktopSessionsResponseBodySessionsTerminalInfo) };
    inline DescribeDesktopSessionsResponseBodySessions& setTerminalInfo(const Models::DescribeDesktopSessionsResponseBodySessionsTerminalInfo & terminalInfo) { DARABONBA_PTR_SET_VALUE(terminalInfo_, terminalInfo) };
    inline DescribeDesktopSessionsResponseBodySessions& setTerminalInfo(Models::DescribeDesktopSessionsResponseBodySessionsTerminalInfo && terminalInfo) { DARABONBA_PTR_SET_RVALUE(terminalInfo_, terminalInfo) };


    // totalConnectionTime Field Functions 
    bool hasTotalConnectionTime() const { return this->totalConnectionTime_ != nullptr;};
    void deleteTotalConnectionTime() { this->totalConnectionTime_ = nullptr;};
    inline int64_t totalConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(totalConnectionTime_, 0L) };
    inline DescribeDesktopSessionsResponseBodySessions& setTotalConnectionTime(int64_t totalConnectionTime) { DARABONBA_PTR_SET_VALUE(totalConnectionTime_, totalConnectionTime) };


  protected:
    // The IP address of the client.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The client OS.
    std::shared_ptr<string> clientOS_ = nullptr;
    // The client version.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The name of the cloud computer.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The duration of the remote assistance. Unit: seconds.
    std::shared_ptr<int64_t> endUserApplyCoordinateTime_ = nullptr;
    // The ID of the end user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The duration of the last connection to the cloud computer. Unit: seconds.
    std::shared_ptr<int64_t> latestConnectionTime_ = nullptr;
    // The ID of the office network.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The name of the office network.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // Indicates whether the switch to check session status of cloud computers is turned on.
    std::shared_ptr<string> osSessionStatus_ = nullptr;
    // The OS.
    // 
    // Valid values:
    // 
    // *   Linux
    // *   Windows
    std::shared_ptr<string> osType_ = nullptr;
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   HDX
    // *   ASP
    std::shared_ptr<string> protocolType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDesktopSessionsResponseBodySessionsResourceGroups>> resourceGroups_ = nullptr;
    // The end time of the session.
    std::shared_ptr<string> sessionEndTime_ = nullptr;
    // The idle duration of the session. Unit: seconds.
    std::shared_ptr<int64_t> sessionIdleTime_ = nullptr;
    // The start time of the session.
    std::shared_ptr<string> sessionStartTime_ = nullptr;
    // The state of the session.
    // 
    // Valid values:
    // 
    // *   Connected
    // *   Disconnected
    std::shared_ptr<string> sessionStatus_ = nullptr;
    // The billing method of cloud computers.
    // 
    // Valid values:
    // 
    // *   duration: hourly plan (available for users in the whitelist)
    // *   postPaid: pay-as-you-go
    // *   monthPackage: monthly subscription (120-hour computing plan and 250-hour computing plan)
    // *   prePaid: monthly subscription (Unlimited computing plan)
    std::shared_ptr<string> subPayType_ = nullptr;
    std::shared_ptr<Models::DescribeDesktopSessionsResponseBodySessionsTerminalInfo> terminalInfo_ = nullptr;
    // The total connection duration. Unit: seconds.
    std::shared_ptr<int64_t> totalConnectionTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
