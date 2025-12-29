// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASOSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASOSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasOsStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasOsStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasOsStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeVerifyPersonasOsStatisticsResponseBody() = default ;
    DescribeVerifyPersonasOsStatisticsResponseBody(const DescribeVerifyPersonasOsStatisticsResponseBody &) = default ;
    DescribeVerifyPersonasOsStatisticsResponseBody(DescribeVerifyPersonasOsStatisticsResponseBody &&) = default ;
    DescribeVerifyPersonasOsStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasOsStatisticsResponseBody() = default ;
    DescribeVerifyPersonasOsStatisticsResponseBody& operator=(const DescribeVerifyPersonasOsStatisticsResponseBody &) = default ;
    DescribeVerifyPersonasOsStatisticsResponseBody& operator=(DescribeVerifyPersonasOsStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(AllDeviceCnt, allDeviceCnt_);
        DARABONBA_PTR_TO_JSON(DeviceAndroidCnt, deviceAndroidCnt_);
        DARABONBA_PTR_TO_JSON(DeviceAndroidRate, deviceAndroidRate_);
        DARABONBA_PTR_TO_JSON(DeviceIosCnt, deviceIosCnt_);
        DARABONBA_PTR_TO_JSON(DeviceIosRate, deviceIosRate_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(AllDeviceCnt, allDeviceCnt_);
        DARABONBA_PTR_FROM_JSON(DeviceAndroidCnt, deviceAndroidCnt_);
        DARABONBA_PTR_FROM_JSON(DeviceAndroidRate, deviceAndroidRate_);
        DARABONBA_PTR_FROM_JSON(DeviceIosCnt, deviceIosCnt_);
        DARABONBA_PTR_FROM_JSON(DeviceIosRate, deviceIosRate_);
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
      virtual bool empty() const override { return this->allDeviceCnt_ == nullptr
        && this->deviceAndroidCnt_ == nullptr && this->deviceAndroidRate_ == nullptr && this->deviceIosCnt_ == nullptr && this->deviceIosRate_ == nullptr; };
      // allDeviceCnt Field Functions 
      bool hasAllDeviceCnt() const { return this->allDeviceCnt_ != nullptr;};
      void deleteAllDeviceCnt() { this->allDeviceCnt_ = nullptr;};
      inline int64_t getAllDeviceCnt() const { DARABONBA_PTR_GET_DEFAULT(allDeviceCnt_, 0L) };
      inline ResultObject& setAllDeviceCnt(int64_t allDeviceCnt) { DARABONBA_PTR_SET_VALUE(allDeviceCnt_, allDeviceCnt) };


      // deviceAndroidCnt Field Functions 
      bool hasDeviceAndroidCnt() const { return this->deviceAndroidCnt_ != nullptr;};
      void deleteDeviceAndroidCnt() { this->deviceAndroidCnt_ = nullptr;};
      inline int64_t getDeviceAndroidCnt() const { DARABONBA_PTR_GET_DEFAULT(deviceAndroidCnt_, 0L) };
      inline ResultObject& setDeviceAndroidCnt(int64_t deviceAndroidCnt) { DARABONBA_PTR_SET_VALUE(deviceAndroidCnt_, deviceAndroidCnt) };


      // deviceAndroidRate Field Functions 
      bool hasDeviceAndroidRate() const { return this->deviceAndroidRate_ != nullptr;};
      void deleteDeviceAndroidRate() { this->deviceAndroidRate_ = nullptr;};
      inline string getDeviceAndroidRate() const { DARABONBA_PTR_GET_DEFAULT(deviceAndroidRate_, "") };
      inline ResultObject& setDeviceAndroidRate(string deviceAndroidRate) { DARABONBA_PTR_SET_VALUE(deviceAndroidRate_, deviceAndroidRate) };


      // deviceIosCnt Field Functions 
      bool hasDeviceIosCnt() const { return this->deviceIosCnt_ != nullptr;};
      void deleteDeviceIosCnt() { this->deviceIosCnt_ = nullptr;};
      inline int64_t getDeviceIosCnt() const { DARABONBA_PTR_GET_DEFAULT(deviceIosCnt_, 0L) };
      inline ResultObject& setDeviceIosCnt(int64_t deviceIosCnt) { DARABONBA_PTR_SET_VALUE(deviceIosCnt_, deviceIosCnt) };


      // deviceIosRate Field Functions 
      bool hasDeviceIosRate() const { return this->deviceIosRate_ != nullptr;};
      void deleteDeviceIosRate() { this->deviceIosRate_ = nullptr;};
      inline string getDeviceIosRate() const { DARABONBA_PTR_GET_DEFAULT(deviceIosRate_, "") };
      inline ResultObject& setDeviceIosRate(string deviceIosRate) { DARABONBA_PTR_SET_VALUE(deviceIosRate_, deviceIosRate) };


    protected:
      // Total number of authenticated devices.
      shared_ptr<int64_t> allDeviceCnt_ {};
      // Number of authenticated Android devices.
      shared_ptr<int64_t> deviceAndroidCnt_ {};
      // Proportion of Android devices.
      shared_ptr<string> deviceAndroidRate_ {};
      // Number of authenticated iOS devices.
      shared_ptr<int64_t> deviceIosCnt_ {};
      // Proportion of iOS devices.
      shared_ptr<string> deviceIosRate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyPersonasOsStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeVerifyPersonasOsStatisticsResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeVerifyPersonasOsStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyPersonasOsStatisticsResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeVerifyPersonasOsStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyPersonasOsStatisticsResponseBody& setResultObject(const DescribeVerifyPersonasOsStatisticsResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeVerifyPersonasOsStatisticsResponseBody& setResultObject(DescribeVerifyPersonasOsStatisticsResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Processing result.
    shared_ptr<DescribeVerifyPersonasOsStatisticsResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
