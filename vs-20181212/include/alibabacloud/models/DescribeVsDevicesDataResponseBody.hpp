// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDEVICESDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDEVICESDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDevicesDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDevicesDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DevicesDataPerInterval, devicesDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDevicesDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DevicesDataPerInterval, devicesDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsDevicesDataResponseBody() = default ;
    DescribeVsDevicesDataResponseBody(const DescribeVsDevicesDataResponseBody &) = default ;
    DescribeVsDevicesDataResponseBody(DescribeVsDevicesDataResponseBody &&) = default ;
    DescribeVsDevicesDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDevicesDataResponseBody() = default ;
    DescribeVsDevicesDataResponseBody& operator=(const DescribeVsDevicesDataResponseBody &) = default ;
    DescribeVsDevicesDataResponseBody& operator=(DescribeVsDevicesDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DevicesDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DevicesDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, DevicesDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      DevicesDataPerInterval() = default ;
      DevicesDataPerInterval(const DevicesDataPerInterval &) = default ;
      DevicesDataPerInterval(DevicesDataPerInterval &&) = default ;
      DevicesDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DevicesDataPerInterval() = default ;
      DevicesDataPerInterval& operator=(const DevicesDataPerInterval &) = default ;
      DevicesDataPerInterval& operator=(DevicesDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(DevicesDataValue, devicesDataValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(DevicesDataValue, devicesDataValue_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        DataModule() = default ;
        DataModule(const DataModule &) = default ;
        DataModule(DataModule &&) = default ;
        DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataModule() = default ;
        DataModule& operator=(const DataModule &) = default ;
        DataModule& operator=(DataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->devicesDataValue_ == nullptr
        && this->timeStamp_ == nullptr; };
        // devicesDataValue Field Functions 
        bool hasDevicesDataValue() const { return this->devicesDataValue_ != nullptr;};
        void deleteDevicesDataValue() { this->devicesDataValue_ = nullptr;};
        inline string getDevicesDataValue() const { DARABONBA_PTR_GET_DEFAULT(devicesDataValue_, "") };
        inline DataModule& setDevicesDataValue(string devicesDataValue) { DARABONBA_PTR_SET_VALUE(devicesDataValue_, devicesDataValue) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> devicesDataValue_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<DevicesDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DevicesDataPerInterval::DataModule>) };
      inline vector<DevicesDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<DevicesDataPerInterval::DataModule>) };
      inline DevicesDataPerInterval& setDataModule(const vector<DevicesDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline DevicesDataPerInterval& setDataModule(vector<DevicesDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<DevicesDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->devicesDataPerInterval_ == nullptr
        && this->requestId_ == nullptr; };
    // devicesDataPerInterval Field Functions 
    bool hasDevicesDataPerInterval() const { return this->devicesDataPerInterval_ != nullptr;};
    void deleteDevicesDataPerInterval() { this->devicesDataPerInterval_ = nullptr;};
    inline const DescribeVsDevicesDataResponseBody::DevicesDataPerInterval & getDevicesDataPerInterval() const { DARABONBA_PTR_GET_CONST(devicesDataPerInterval_, DescribeVsDevicesDataResponseBody::DevicesDataPerInterval) };
    inline DescribeVsDevicesDataResponseBody::DevicesDataPerInterval getDevicesDataPerInterval() { DARABONBA_PTR_GET(devicesDataPerInterval_, DescribeVsDevicesDataResponseBody::DevicesDataPerInterval) };
    inline DescribeVsDevicesDataResponseBody& setDevicesDataPerInterval(const DescribeVsDevicesDataResponseBody::DevicesDataPerInterval & devicesDataPerInterval) { DARABONBA_PTR_SET_VALUE(devicesDataPerInterval_, devicesDataPerInterval) };
    inline DescribeVsDevicesDataResponseBody& setDevicesDataPerInterval(DescribeVsDevicesDataResponseBody::DevicesDataPerInterval && devicesDataPerInterval) { DARABONBA_PTR_SET_RVALUE(devicesDataPerInterval_, devicesDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDevicesDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeVsDevicesDataResponseBody::DevicesDataPerInterval> devicesDataPerInterval_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
