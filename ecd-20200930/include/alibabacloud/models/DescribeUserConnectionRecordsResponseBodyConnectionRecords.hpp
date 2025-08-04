// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTIONRECORDSRESPONSEBODYCONNECTIONRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTIONRECORDSRESPONSEBODYCONNECTIONRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserConnectionRecordsResponseBodyConnectionRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConnectionRecordsResponseBodyConnectionRecords& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_TO_JSON(ConnectEndTime, connectEndTime_);
      DARABONBA_PTR_TO_JSON(ConnectStartTime, connectStartTime_);
      DARABONBA_PTR_TO_JSON(ConnectionRecordId, connectionRecordId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConnectionRecordsResponseBodyConnectionRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_FROM_JSON(ConnectEndTime, connectEndTime_);
      DARABONBA_PTR_FROM_JSON(ConnectStartTime, connectStartTime_);
      DARABONBA_PTR_FROM_JSON(ConnectionRecordId, connectionRecordId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
    };
    DescribeUserConnectionRecordsResponseBodyConnectionRecords() = default ;
    DescribeUserConnectionRecordsResponseBodyConnectionRecords(const DescribeUserConnectionRecordsResponseBodyConnectionRecords &) = default ;
    DescribeUserConnectionRecordsResponseBodyConnectionRecords(DescribeUserConnectionRecordsResponseBodyConnectionRecords &&) = default ;
    DescribeUserConnectionRecordsResponseBodyConnectionRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConnectionRecordsResponseBodyConnectionRecords() = default ;
    DescribeUserConnectionRecordsResponseBodyConnectionRecords& operator=(const DescribeUserConnectionRecordsResponseBodyConnectionRecords &) = default ;
    DescribeUserConnectionRecordsResponseBodyConnectionRecords& operator=(DescribeUserConnectionRecordsResponseBodyConnectionRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectDuration_ != nullptr
        && this->connectEndTime_ != nullptr && this->connectStartTime_ != nullptr && this->connectionRecordId_ != nullptr && this->desktopId_ != nullptr && this->desktopName_ != nullptr; };
    // connectDuration Field Functions 
    bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
    void deleteConnectDuration() { this->connectDuration_ = nullptr;};
    inline string connectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, "") };
    inline DescribeUserConnectionRecordsResponseBodyConnectionRecords& setConnectDuration(string connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


    // connectEndTime Field Functions 
    bool hasConnectEndTime() const { return this->connectEndTime_ != nullptr;};
    void deleteConnectEndTime() { this->connectEndTime_ = nullptr;};
    inline string connectEndTime() const { DARABONBA_PTR_GET_DEFAULT(connectEndTime_, "") };
    inline DescribeUserConnectionRecordsResponseBodyConnectionRecords& setConnectEndTime(string connectEndTime) { DARABONBA_PTR_SET_VALUE(connectEndTime_, connectEndTime) };


    // connectStartTime Field Functions 
    bool hasConnectStartTime() const { return this->connectStartTime_ != nullptr;};
    void deleteConnectStartTime() { this->connectStartTime_ = nullptr;};
    inline string connectStartTime() const { DARABONBA_PTR_GET_DEFAULT(connectStartTime_, "") };
    inline DescribeUserConnectionRecordsResponseBodyConnectionRecords& setConnectStartTime(string connectStartTime) { DARABONBA_PTR_SET_VALUE(connectStartTime_, connectStartTime) };


    // connectionRecordId Field Functions 
    bool hasConnectionRecordId() const { return this->connectionRecordId_ != nullptr;};
    void deleteConnectionRecordId() { this->connectionRecordId_ = nullptr;};
    inline string connectionRecordId() const { DARABONBA_PTR_GET_DEFAULT(connectionRecordId_, "") };
    inline DescribeUserConnectionRecordsResponseBodyConnectionRecords& setConnectionRecordId(string connectionRecordId) { DARABONBA_PTR_SET_VALUE(connectionRecordId_, connectionRecordId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeUserConnectionRecordsResponseBodyConnectionRecords& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeUserConnectionRecordsResponseBodyConnectionRecords& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


  protected:
    // The connection duration. Unit: milliseconds.
    std::shared_ptr<string> connectDuration_ = nullptr;
    // The time when the end user disconnected from the cloud computer.
    std::shared_ptr<string> connectEndTime_ = nullptr;
    // The time when the end user connected to the cloud computer.
    std::shared_ptr<string> connectStartTime_ = nullptr;
    // The ID of the connection record.
    std::shared_ptr<string> connectionRecordId_ = nullptr;
    // The ID of the cloud computer to which the end user connected.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The name of the cloud computer to which the end user connected.
    std::shared_ptr<string> desktopName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
