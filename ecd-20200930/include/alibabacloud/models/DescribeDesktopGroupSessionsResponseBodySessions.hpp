// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSESSIONSRESPONSEBODYSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSESSIONSRESPONSEBODYSESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopGroupSessionsResponseBodySessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupSessionsResponseBodySessions& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
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
      DARABONBA_PTR_TO_JSON(TotalConnectionDuration, totalConnectionDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupSessionsResponseBodySessions& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
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
      DARABONBA_PTR_FROM_JSON(TotalConnectionDuration, totalConnectionDuration_);
    };
    DescribeDesktopGroupSessionsResponseBodySessions() = default ;
    DescribeDesktopGroupSessionsResponseBodySessions(const DescribeDesktopGroupSessionsResponseBodySessions &) = default ;
    DescribeDesktopGroupSessionsResponseBodySessions(DescribeDesktopGroupSessionsResponseBodySessions &&) = default ;
    DescribeDesktopGroupSessionsResponseBodySessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupSessionsResponseBodySessions() = default ;
    DescribeDesktopGroupSessionsResponseBodySessions& operator=(const DescribeDesktopGroupSessionsResponseBodySessions &) = default ;
    DescribeDesktopGroupSessionsResponseBodySessions& operator=(DescribeDesktopGroupSessionsResponseBodySessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr
        && this->clientOS_ != nullptr && this->clientVersion_ != nullptr && this->desktopGroupId_ != nullptr && this->desktopGroupName_ != nullptr && this->desktopId_ != nullptr
        && this->endUserApplyCoordinateTime_ != nullptr && this->endUserId_ != nullptr && this->lastSessionEndTime_ != nullptr && this->lastSessionStartTime_ != nullptr && this->latestConnectionTime_ != nullptr
        && this->officeSiteId_ != nullptr && this->officeSiteName_ != nullptr && this->osType_ != nullptr && this->ownType_ != nullptr && this->protocolType_ != nullptr
        && this->sessionIdleTime_ != nullptr && this->sessionStatus_ != nullptr && this->totalConnectionDuration_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string clientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string desktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // endUserApplyCoordinateTime Field Functions 
    bool hasEndUserApplyCoordinateTime() const { return this->endUserApplyCoordinateTime_ != nullptr;};
    void deleteEndUserApplyCoordinateTime() { this->endUserApplyCoordinateTime_ = nullptr;};
    inline int64_t endUserApplyCoordinateTime() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyCoordinateTime_, 0L) };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setEndUserApplyCoordinateTime(int64_t endUserApplyCoordinateTime) { DARABONBA_PTR_SET_VALUE(endUserApplyCoordinateTime_, endUserApplyCoordinateTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // lastSessionEndTime Field Functions 
    bool hasLastSessionEndTime() const { return this->lastSessionEndTime_ != nullptr;};
    void deleteLastSessionEndTime() { this->lastSessionEndTime_ = nullptr;};
    inline string lastSessionEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastSessionEndTime_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setLastSessionEndTime(string lastSessionEndTime) { DARABONBA_PTR_SET_VALUE(lastSessionEndTime_, lastSessionEndTime) };


    // lastSessionStartTime Field Functions 
    bool hasLastSessionStartTime() const { return this->lastSessionStartTime_ != nullptr;};
    void deleteLastSessionStartTime() { this->lastSessionStartTime_ = nullptr;};
    inline string lastSessionStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastSessionStartTime_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setLastSessionStartTime(string lastSessionStartTime) { DARABONBA_PTR_SET_VALUE(lastSessionStartTime_, lastSessionStartTime) };


    // latestConnectionTime Field Functions 
    bool hasLatestConnectionTime() const { return this->latestConnectionTime_ != nullptr;};
    void deleteLatestConnectionTime() { this->latestConnectionTime_ = nullptr;};
    inline int64_t latestConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(latestConnectionTime_, 0L) };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setLatestConnectionTime(int64_t latestConnectionTime) { DARABONBA_PTR_SET_VALUE(latestConnectionTime_, latestConnectionTime) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline int32_t ownType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0) };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setOwnType(int32_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // sessionIdleTime Field Functions 
    bool hasSessionIdleTime() const { return this->sessionIdleTime_ != nullptr;};
    void deleteSessionIdleTime() { this->sessionIdleTime_ = nullptr;};
    inline int64_t sessionIdleTime() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTime_, 0L) };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setSessionIdleTime(int64_t sessionIdleTime) { DARABONBA_PTR_SET_VALUE(sessionIdleTime_, sessionIdleTime) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // totalConnectionDuration Field Functions 
    bool hasTotalConnectionDuration() const { return this->totalConnectionDuration_ != nullptr;};
    void deleteTotalConnectionDuration() { this->totalConnectionDuration_ = nullptr;};
    inline int64_t totalConnectionDuration() const { DARABONBA_PTR_GET_DEFAULT(totalConnectionDuration_, 0L) };
    inline DescribeDesktopGroupSessionsResponseBodySessions& setTotalConnectionDuration(int64_t totalConnectionDuration) { DARABONBA_PTR_SET_VALUE(totalConnectionDuration_, totalConnectionDuration) };


  protected:
    // The IP address of the client.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The OS that the client runs.
    std::shared_ptr<string> clientOS_ = nullptr;
    // The version of the client.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The ID of the desktop group.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The name of the desktop group.
    std::shared_ptr<string> desktopGroupName_ = nullptr;
    // If the session is being established, the value of this parameter indicates the ID of the current cloud desktop. If the session is disconnected, the value of this parameter indicates the ID of the cloud desktop that was most recently connected.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The point in time when the end user applies for administrator assistance.
    std::shared_ptr<int64_t> endUserApplyCoordinateTime_ = nullptr;
    // The ID of the end user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The end time of the most recent connection.
    std::shared_ptr<string> lastSessionEndTime_ = nullptr;
    // The start time of the most recent connection.
    std::shared_ptr<string> lastSessionStartTime_ = nullptr;
    // The duration of the most recent session.
    std::shared_ptr<int64_t> latestConnectionTime_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The OS. Valid values:
    // 
    // *   Windows
    // *   Linux
    std::shared_ptr<string> osType_ = nullptr;
    // The type of the session.
    // 
    // Valid values:
    // 
    // *   0: single-session
    // *   1: multi-session
    std::shared_ptr<int32_t> ownType_ = nullptr;
    // The type of the protocol.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The duration during which the cloud desktop stays in the Idle state.
    std::shared_ptr<int64_t> sessionIdleTime_ = nullptr;
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
    std::shared_ptr<string> sessionStatus_ = nullptr;
    // The total duration of the sessions.
    std::shared_ptr<int64_t> totalConnectionDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
