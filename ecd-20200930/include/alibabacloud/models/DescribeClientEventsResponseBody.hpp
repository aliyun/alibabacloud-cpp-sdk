// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTEVENTSRESPONSEBODY_HPP_
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
  class DescribeClientEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClientEventsResponseBody() = default ;
    DescribeClientEventsResponseBody(const DescribeClientEventsResponseBody &) = default ;
    DescribeClientEventsResponseBody(DescribeClientEventsResponseBody &&) = default ;
    DescribeClientEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientEventsResponseBody() = default ;
    DescribeClientEventsResponseBody& operator=(const DescribeClientEventsResponseBody &) = default ;
    DescribeClientEventsResponseBody& operator=(DescribeClientEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
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
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
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
        };
        friend void from_json(const Darabonba::Json& j, TerminalInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(ProductName, productName_);
          DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
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
        && this->productName_ == nullptr && this->serialNumber_ == nullptr; };
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


      protected:
        shared_ptr<string> model_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<string> serialNumber_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bytesReceived_ == nullptr && this->bytesSend_ == nullptr && this->clientIp_ == nullptr && this->clientOS_ == nullptr && this->clientVersion_ == nullptr
        && this->description_ == nullptr && this->desktopGroupId_ == nullptr && this->desktopGroupName_ == nullptr && this->desktopId_ == nullptr && this->desktopIp_ == nullptr
        && this->desktopName_ == nullptr && this->directoryId_ == nullptr && this->directoryType_ == nullptr && this->endUserId_ == nullptr && this->eventId_ == nullptr
        && this->eventTime_ == nullptr && this->eventType_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->officeSiteType_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->terminalInfo_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Events& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // bytesReceived Field Functions 
      bool hasBytesReceived() const { return this->bytesReceived_ != nullptr;};
      void deleteBytesReceived() { this->bytesReceived_ = nullptr;};
      inline string getBytesReceived() const { DARABONBA_PTR_GET_DEFAULT(bytesReceived_, "") };
      inline Events& setBytesReceived(string bytesReceived) { DARABONBA_PTR_SET_VALUE(bytesReceived_, bytesReceived) };


      // bytesSend Field Functions 
      bool hasBytesSend() const { return this->bytesSend_ != nullptr;};
      void deleteBytesSend() { this->bytesSend_ = nullptr;};
      inline string getBytesSend() const { DARABONBA_PTR_GET_DEFAULT(bytesSend_, "") };
      inline Events& setBytesSend(string bytesSend) { DARABONBA_PTR_SET_VALUE(bytesSend_, bytesSend) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Events& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // clientOS Field Functions 
      bool hasClientOS() const { return this->clientOS_ != nullptr;};
      void deleteClientOS() { this->clientOS_ = nullptr;};
      inline string getClientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
      inline Events& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline Events& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Events& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline Events& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopGroupName Field Functions 
      bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
      void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
      inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
      inline Events& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Events& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopIp Field Functions 
      bool hasDesktopIp() const { return this->desktopIp_ != nullptr;};
      void deleteDesktopIp() { this->desktopIp_ = nullptr;};
      inline string getDesktopIp() const { DARABONBA_PTR_GET_DEFAULT(desktopIp_, "") };
      inline Events& setDesktopIp(string desktopIp) { DARABONBA_PTR_SET_VALUE(desktopIp_, desktopIp) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Events& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Events& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Events& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Events& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Events& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
      inline Events& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Events& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Events& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline Events& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline Events& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Events& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Events& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // terminalInfo Field Functions 
      bool hasTerminalInfo() const { return this->terminalInfo_ != nullptr;};
      void deleteTerminalInfo() { this->terminalInfo_ = nullptr;};
      inline const Events::TerminalInfo & getTerminalInfo() const { DARABONBA_PTR_GET_CONST(terminalInfo_, Events::TerminalInfo) };
      inline Events::TerminalInfo getTerminalInfo() { DARABONBA_PTR_GET(terminalInfo_, Events::TerminalInfo) };
      inline Events& setTerminalInfo(const Events::TerminalInfo & terminalInfo) { DARABONBA_PTR_SET_VALUE(terminalInfo_, terminalInfo) };
      inline Events& setTerminalInfo(Events::TerminalInfo && terminalInfo) { DARABONBA_PTR_SET_RVALUE(terminalInfo_, terminalInfo) };


    protected:
      // The ID of the Alibaba Cloud account with which the event is associated.
      shared_ptr<string> aliUid_ {};
      // The number of bytes that are received.
      shared_ptr<string> bytesReceived_ {};
      // The number of bytes that are sent.
      shared_ptr<string> bytesSend_ {};
      // The IP address of the client.
      shared_ptr<string> clientIp_ {};
      // The OS that the client runs.
      shared_ptr<string> clientOS_ {};
      // The client version.
      shared_ptr<string> clientVersion_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The desktop group ID.
      shared_ptr<string> desktopGroupId_ {};
      // The desktop group name.
      shared_ptr<string> desktopGroupName_ {};
      // The cloud desktop ID.
      shared_ptr<string> desktopId_ {};
      // The IP address of the cloud desktop.
      shared_ptr<string> desktopIp_ {};
      // The cloud desktop name.
      shared_ptr<string> desktopName_ {};
      // The ID of the directory to which the cloud desktop belongs.
      shared_ptr<string> directoryId_ {};
      // The directory type.
      shared_ptr<string> directoryType_ {};
      // The information about the end user that connects to the cloud desktop from the EDS client. The information can be a RAM user ID or an AD username.
      shared_ptr<string> endUserId_ {};
      // The event ID.
      shared_ptr<string> eventId_ {};
      // The time when the event occurred.
      shared_ptr<string> eventTime_ {};
      // The event type. Valid values:
      shared_ptr<string> eventType_ {};
      // The ID of the workspace to which the cloud desktop belongs.
      shared_ptr<string> officeSiteId_ {};
      // The workspace name.
      shared_ptr<string> officeSiteName_ {};
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
      shared_ptr<string> officeSiteType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The status of the event. If you set the EventType parameter to `DESKTOP_DISCONNECT` or `GET_CONNECTION_TICKET`, this parameter is returned. Valid values:
      // 
      // *   200\\. The value indicates that the request is successful.
      // *   An error message. The value indicates that the request failed. Example: FailedToGetConnectionTicket.
      shared_ptr<string> status_ {};
      shared_ptr<Events::TerminalInfo> terminalInfo_ {};
    };

    virtual bool empty() const override { return this->events_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeClientEventsResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeClientEventsResponseBody::Events>) };
    inline vector<DescribeClientEventsResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<DescribeClientEventsResponseBody::Events>) };
    inline DescribeClientEventsResponseBody& setEvents(const vector<DescribeClientEventsResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeClientEventsResponseBody& setEvents(vector<DescribeClientEventsResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeClientEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The user events.
    shared_ptr<vector<DescribeClientEventsResponseBody::Events>> events_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
