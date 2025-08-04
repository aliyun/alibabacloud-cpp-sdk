// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTEVENTSRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTEVENTSRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClientEventsResponseBodyEventsTerminalInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeClientEventsResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(BytesReceived, bytesReceived_);
      DARABONBA_PTR_TO_JSON(BytesSend, bytesSend_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopIp, desktopIp_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TerminalInfo, terminalInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(BytesReceived, bytesReceived_);
      DARABONBA_PTR_FROM_JSON(BytesSend, bytesSend_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopIp, desktopIp_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TerminalInfo, terminalInfo_);
    };
    DescribeClientEventsResponseBodyEvents() = default ;
    DescribeClientEventsResponseBodyEvents(const DescribeClientEventsResponseBodyEvents &) = default ;
    DescribeClientEventsResponseBodyEvents(DescribeClientEventsResponseBodyEvents &&) = default ;
    DescribeClientEventsResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientEventsResponseBodyEvents() = default ;
    DescribeClientEventsResponseBodyEvents& operator=(const DescribeClientEventsResponseBodyEvents &) = default ;
    DescribeClientEventsResponseBodyEvents& operator=(DescribeClientEventsResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->bytesReceived_ != nullptr && this->bytesSend_ != nullptr && this->clientIp_ != nullptr && this->clientOS_ != nullptr && this->clientVersion_ != nullptr
        && this->description_ != nullptr && this->desktopGroupId_ != nullptr && this->desktopGroupName_ != nullptr && this->desktopId_ != nullptr && this->desktopIp_ != nullptr
        && this->desktopName_ != nullptr && this->directoryId_ != nullptr && this->directoryType_ != nullptr && this->endUserId_ != nullptr && this->eventId_ != nullptr
        && this->eventTime_ != nullptr && this->eventType_ != nullptr && this->officeSiteId_ != nullptr && this->officeSiteName_ != nullptr && this->officeSiteType_ != nullptr
        && this->regionId_ != nullptr && this->status_ != nullptr && this->terminalInfo_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeClientEventsResponseBodyEvents& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bytesReceived Field Functions 
    bool hasBytesReceived() const { return this->bytesReceived_ != nullptr;};
    void deleteBytesReceived() { this->bytesReceived_ = nullptr;};
    inline string bytesReceived() const { DARABONBA_PTR_GET_DEFAULT(bytesReceived_, "") };
    inline DescribeClientEventsResponseBodyEvents& setBytesReceived(string bytesReceived) { DARABONBA_PTR_SET_VALUE(bytesReceived_, bytesReceived) };


    // bytesSend Field Functions 
    bool hasBytesSend() const { return this->bytesSend_ != nullptr;};
    void deleteBytesSend() { this->bytesSend_ = nullptr;};
    inline string bytesSend() const { DARABONBA_PTR_GET_DEFAULT(bytesSend_, "") };
    inline DescribeClientEventsResponseBodyEvents& setBytesSend(string bytesSend) { DARABONBA_PTR_SET_VALUE(bytesSend_, bytesSend) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeClientEventsResponseBodyEvents& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string clientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline DescribeClientEventsResponseBodyEvents& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeClientEventsResponseBodyEvents& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeClientEventsResponseBodyEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeClientEventsResponseBodyEvents& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string desktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline DescribeClientEventsResponseBodyEvents& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeClientEventsResponseBodyEvents& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopIp Field Functions 
    bool hasDesktopIp() const { return this->desktopIp_ != nullptr;};
    void deleteDesktopIp() { this->desktopIp_ = nullptr;};
    inline string desktopIp() const { DARABONBA_PTR_GET_DEFAULT(desktopIp_, "") };
    inline DescribeClientEventsResponseBodyEvents& setDesktopIp(string desktopIp) { DARABONBA_PTR_SET_VALUE(desktopIp_, desktopIp) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeClientEventsResponseBodyEvents& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeClientEventsResponseBodyEvents& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryType Field Functions 
    bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
    void deleteDirectoryType() { this->directoryType_ = nullptr;};
    inline string directoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
    inline DescribeClientEventsResponseBodyEvents& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeClientEventsResponseBodyEvents& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeClientEventsResponseBodyEvents& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline DescribeClientEventsResponseBodyEvents& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeClientEventsResponseBodyEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeClientEventsResponseBodyEvents& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeClientEventsResponseBodyEvents& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline DescribeClientEventsResponseBodyEvents& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClientEventsResponseBodyEvents& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeClientEventsResponseBodyEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // terminalInfo Field Functions 
    bool hasTerminalInfo() const { return this->terminalInfo_ != nullptr;};
    void deleteTerminalInfo() { this->terminalInfo_ = nullptr;};
    inline const Models::DescribeClientEventsResponseBodyEventsTerminalInfo & terminalInfo() const { DARABONBA_PTR_GET_CONST(terminalInfo_, Models::DescribeClientEventsResponseBodyEventsTerminalInfo) };
    inline Models::DescribeClientEventsResponseBodyEventsTerminalInfo terminalInfo() { DARABONBA_PTR_GET(terminalInfo_, Models::DescribeClientEventsResponseBodyEventsTerminalInfo) };
    inline DescribeClientEventsResponseBodyEvents& setTerminalInfo(const Models::DescribeClientEventsResponseBodyEventsTerminalInfo & terminalInfo) { DARABONBA_PTR_SET_VALUE(terminalInfo_, terminalInfo) };
    inline DescribeClientEventsResponseBodyEvents& setTerminalInfo(Models::DescribeClientEventsResponseBodyEventsTerminalInfo && terminalInfo) { DARABONBA_PTR_SET_RVALUE(terminalInfo_, terminalInfo) };


  protected:
    // The ID of the Alibaba Cloud account with which the event is associated.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The number of bytes that are received.
    std::shared_ptr<string> bytesReceived_ = nullptr;
    // The number of bytes that are sent.
    std::shared_ptr<string> bytesSend_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The OS that the client runs.
    std::shared_ptr<string> clientOS_ = nullptr;
    // The client version.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The desktop group ID.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The desktop group name.
    std::shared_ptr<string> desktopGroupName_ = nullptr;
    // The cloud desktop ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The IP address of the cloud desktop.
    std::shared_ptr<string> desktopIp_ = nullptr;
    // The cloud desktop name.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The ID of the directory to which the cloud desktop belongs.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The directory type.
    std::shared_ptr<string> directoryType_ = nullptr;
    // The information about the end user that connects to the cloud desktop from the EDS client. The information can be a RAM user ID or an AD username.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The time when the event occurred.
    std::shared_ptr<string> eventTime_ = nullptr;
    // The event type. Valid values:
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the workspace to which the cloud desktop belongs.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The workspace name.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The account type of the workspace.
    // 
    // Valid values:
    // 
    // *   SIMPLE: convenience account
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   AD_CONNECTOR: enterprise AD account
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> officeSiteType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the event. If you set the EventType parameter to `DESKTOP_DISCONNECT` or `GET_CONNECTION_TICKET`, this parameter is returned. Valid values:
    // 
    // *   200\\. The value indicates that the request is successful.
    // *   An error message. The value indicates that the request failed. Example: FailedToGetConnectionTicket.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeClientEventsResponseBodyEventsTerminalInfo> terminalInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
