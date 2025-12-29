// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASDEVICEMODELSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASDEVICEMODELSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasDeviceModelStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasDeviceModelStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasDeviceModelStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeVerifyPersonasDeviceModelStatisticsResponseBody() = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBody(const DescribeVerifyPersonasDeviceModelStatisticsResponseBody &) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBody(DescribeVerifyPersonasDeviceModelStatisticsResponseBody &&) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasDeviceModelStatisticsResponseBody() = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBody& operator=(const DescribeVerifyPersonasDeviceModelStatisticsResponseBody &) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBody& operator=(DescribeVerifyPersonasDeviceModelStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(AllDeviceCnt, allDeviceCnt_);
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(AllDeviceCnt, allDeviceCnt_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceCnt, deviceCnt_);
          DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
          DARABONBA_PTR_TO_JSON(DeviceRate, deviceRate_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceCnt, deviceCnt_);
          DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
          DARABONBA_PTR_FROM_JSON(DeviceRate, deviceRate_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceCnt_ == nullptr
        && this->deviceModel_ == nullptr && this->deviceRate_ == nullptr; };
        // deviceCnt Field Functions 
        bool hasDeviceCnt() const { return this->deviceCnt_ != nullptr;};
        void deleteDeviceCnt() { this->deviceCnt_ = nullptr;};
        inline int64_t getDeviceCnt() const { DARABONBA_PTR_GET_DEFAULT(deviceCnt_, 0L) };
        inline Items& setDeviceCnt(int64_t deviceCnt) { DARABONBA_PTR_SET_VALUE(deviceCnt_, deviceCnt) };


        // deviceModel Field Functions 
        bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
        void deleteDeviceModel() { this->deviceModel_ = nullptr;};
        inline string getDeviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
        inline Items& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


        // deviceRate Field Functions 
        bool hasDeviceRate() const { return this->deviceRate_ != nullptr;};
        void deleteDeviceRate() { this->deviceRate_ = nullptr;};
        inline string getDeviceRate() const { DARABONBA_PTR_GET_DEFAULT(deviceRate_, "") };
        inline Items& setDeviceRate(string deviceRate) { DARABONBA_PTR_SET_VALUE(deviceRate_, deviceRate) };


      protected:
        // Number of devices.
        shared_ptr<int64_t> deviceCnt_ {};
        // Device model
        shared_ptr<string> deviceModel_ {};
        // The ratio of this device model to the total number of devices.
        shared_ptr<string> deviceRate_ {};
      };

      virtual bool empty() const override { return this->allDeviceCnt_ == nullptr
        && this->items_ == nullptr; };
      // allDeviceCnt Field Functions 
      bool hasAllDeviceCnt() const { return this->allDeviceCnt_ != nullptr;};
      void deleteAllDeviceCnt() { this->allDeviceCnt_ = nullptr;};
      inline int64_t getAllDeviceCnt() const { DARABONBA_PTR_GET_DEFAULT(allDeviceCnt_, 0L) };
      inline ResultObject& setAllDeviceCnt(int64_t allDeviceCnt) { DARABONBA_PTR_SET_VALUE(allDeviceCnt_, allDeviceCnt) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ResultObject::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ResultObject::Items>) };
      inline vector<ResultObject::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ResultObject::Items>) };
      inline ResultObject& setItems(const vector<ResultObject::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ResultObject& setItems(vector<ResultObject::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // Total number of devices.
      shared_ptr<int64_t> allDeviceCnt_ {};
      // List of data for different phone models.
      shared_ptr<vector<ResultObject::Items>> items_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeVerifyPersonasDeviceModelStatisticsResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeVerifyPersonasDeviceModelStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeVerifyPersonasDeviceModelStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBody& setResultObject(const DescribeVerifyPersonasDeviceModelStatisticsResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBody& setResultObject(DescribeVerifyPersonasDeviceModelStatisticsResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Query result.
    shared_ptr<DescribeVerifyPersonasDeviceModelStatisticsResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
