// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTIONRECORDSRESPONSEBODY_HPP_
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
  class DescribeUserConnectionRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConnectionRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionRecords, connectionRecords_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConnectionRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionRecords, connectionRecords_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserConnectionRecordsResponseBody() = default ;
    DescribeUserConnectionRecordsResponseBody(const DescribeUserConnectionRecordsResponseBody &) = default ;
    DescribeUserConnectionRecordsResponseBody(DescribeUserConnectionRecordsResponseBody &&) = default ;
    DescribeUserConnectionRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConnectionRecordsResponseBody() = default ;
    DescribeUserConnectionRecordsResponseBody& operator=(const DescribeUserConnectionRecordsResponseBody &) = default ;
    DescribeUserConnectionRecordsResponseBody& operator=(DescribeUserConnectionRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConnectionRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnectionRecords& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
        DARABONBA_PTR_TO_JSON(ConnectEndTime, connectEndTime_);
        DARABONBA_PTR_TO_JSON(ConnectStartTime, connectStartTime_);
        DARABONBA_PTR_TO_JSON(ConnectionRecordId, connectionRecordId_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      };
      friend void from_json(const Darabonba::Json& j, ConnectionRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
        DARABONBA_PTR_FROM_JSON(ConnectEndTime, connectEndTime_);
        DARABONBA_PTR_FROM_JSON(ConnectStartTime, connectStartTime_);
        DARABONBA_PTR_FROM_JSON(ConnectionRecordId, connectionRecordId_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      };
      ConnectionRecords() = default ;
      ConnectionRecords(const ConnectionRecords &) = default ;
      ConnectionRecords(ConnectionRecords &&) = default ;
      ConnectionRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnectionRecords() = default ;
      ConnectionRecords& operator=(const ConnectionRecords &) = default ;
      ConnectionRecords& operator=(ConnectionRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectDuration_ == nullptr
        && this->connectEndTime_ == nullptr && this->connectStartTime_ == nullptr && this->connectionRecordId_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr; };
      // connectDuration Field Functions 
      bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
      void deleteConnectDuration() { this->connectDuration_ = nullptr;};
      inline string getConnectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, "") };
      inline ConnectionRecords& setConnectDuration(string connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


      // connectEndTime Field Functions 
      bool hasConnectEndTime() const { return this->connectEndTime_ != nullptr;};
      void deleteConnectEndTime() { this->connectEndTime_ = nullptr;};
      inline string getConnectEndTime() const { DARABONBA_PTR_GET_DEFAULT(connectEndTime_, "") };
      inline ConnectionRecords& setConnectEndTime(string connectEndTime) { DARABONBA_PTR_SET_VALUE(connectEndTime_, connectEndTime) };


      // connectStartTime Field Functions 
      bool hasConnectStartTime() const { return this->connectStartTime_ != nullptr;};
      void deleteConnectStartTime() { this->connectStartTime_ = nullptr;};
      inline string getConnectStartTime() const { DARABONBA_PTR_GET_DEFAULT(connectStartTime_, "") };
      inline ConnectionRecords& setConnectStartTime(string connectStartTime) { DARABONBA_PTR_SET_VALUE(connectStartTime_, connectStartTime) };


      // connectionRecordId Field Functions 
      bool hasConnectionRecordId() const { return this->connectionRecordId_ != nullptr;};
      void deleteConnectionRecordId() { this->connectionRecordId_ = nullptr;};
      inline string getConnectionRecordId() const { DARABONBA_PTR_GET_DEFAULT(connectionRecordId_, "") };
      inline ConnectionRecords& setConnectionRecordId(string connectionRecordId) { DARABONBA_PTR_SET_VALUE(connectionRecordId_, connectionRecordId) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline ConnectionRecords& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline ConnectionRecords& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    protected:
      // The connection duration. Unit: milliseconds.
      shared_ptr<string> connectDuration_ {};
      // The time when the end user disconnected from the cloud computer.
      shared_ptr<string> connectEndTime_ {};
      // The time when the end user connected to the cloud computer.
      shared_ptr<string> connectStartTime_ {};
      // The ID of the connection record.
      shared_ptr<string> connectionRecordId_ {};
      // The ID of the cloud computer to which the end user connected.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud computer to which the end user connected.
      shared_ptr<string> desktopName_ {};
    };

    virtual bool empty() const override { return this->connectionRecords_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // connectionRecords Field Functions 
    bool hasConnectionRecords() const { return this->connectionRecords_ != nullptr;};
    void deleteConnectionRecords() { this->connectionRecords_ = nullptr;};
    inline const vector<DescribeUserConnectionRecordsResponseBody::ConnectionRecords> & getConnectionRecords() const { DARABONBA_PTR_GET_CONST(connectionRecords_, vector<DescribeUserConnectionRecordsResponseBody::ConnectionRecords>) };
    inline vector<DescribeUserConnectionRecordsResponseBody::ConnectionRecords> getConnectionRecords() { DARABONBA_PTR_GET(connectionRecords_, vector<DescribeUserConnectionRecordsResponseBody::ConnectionRecords>) };
    inline DescribeUserConnectionRecordsResponseBody& setConnectionRecords(const vector<DescribeUserConnectionRecordsResponseBody::ConnectionRecords> & connectionRecords) { DARABONBA_PTR_SET_VALUE(connectionRecords_, connectionRecords) };
    inline DescribeUserConnectionRecordsResponseBody& setConnectionRecords(vector<DescribeUserConnectionRecordsResponseBody::ConnectionRecords> && connectionRecords) { DARABONBA_PTR_SET_RVALUE(connectionRecords_, connectionRecords) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserConnectionRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserConnectionRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The connection records.
    shared_ptr<vector<DescribeUserConnectionRecordsResponseBody::ConnectionRecords>> connectionRecords_ {};
    // The token that is used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
