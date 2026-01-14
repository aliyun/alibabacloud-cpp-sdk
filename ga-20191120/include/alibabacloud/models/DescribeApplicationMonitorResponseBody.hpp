// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeApplicationMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(DetectEnable, detectEnable_);
      DARABONBA_PTR_TO_JSON(DetectThreshold, detectThreshold_);
      DARABONBA_PTR_TO_JSON(DetectTimes, detectTimes_);
      DARABONBA_PTR_TO_JSON(IspCityList, ispCityList_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(DetectEnable, detectEnable_);
      DARABONBA_PTR_FROM_JSON(DetectThreshold, detectThreshold_);
      DARABONBA_PTR_FROM_JSON(DetectTimes, detectTimes_);
      DARABONBA_PTR_FROM_JSON(IspCityList, ispCityList_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeApplicationMonitorResponseBody() = default ;
    DescribeApplicationMonitorResponseBody(const DescribeApplicationMonitorResponseBody &) = default ;
    DescribeApplicationMonitorResponseBody(DescribeApplicationMonitorResponseBody &&) = default ;
    DescribeApplicationMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationMonitorResponseBody() = default ;
    DescribeApplicationMonitorResponseBody& operator=(const DescribeApplicationMonitorResponseBody &) = default ;
    DescribeApplicationMonitorResponseBody& operator=(DescribeApplicationMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspCityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspCityList& obj) { 
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(CityName, cityName_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(IspName, ispName_);
      };
      friend void from_json(const Darabonba::Json& j, IspCityList& obj) { 
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(CityName, cityName_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      };
      IspCityList() = default ;
      IspCityList(const IspCityList &) = default ;
      IspCityList(IspCityList &&) = default ;
      IspCityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IspCityList() = default ;
      IspCityList& operator=(const IspCityList &) = default ;
      IspCityList& operator=(IspCityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->city_ == nullptr
        && this->cityName_ == nullptr && this->isp_ == nullptr && this->ispName_ == nullptr; };
      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline IspCityList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // cityName Field Functions 
      bool hasCityName() const { return this->cityName_ != nullptr;};
      void deleteCityName() { this->cityName_ = nullptr;};
      inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
      inline IspCityList& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline IspCityList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // ispName Field Functions 
      bool hasIspName() const { return this->ispName_ != nullptr;};
      void deleteIspName() { this->ispName_ = nullptr;};
      inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
      inline IspCityList& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    protected:
      // The ID of the city in which the probe point of the ISP is deployed.
      shared_ptr<string> city_ {};
      // The name of the city in which the probe point of the ISP is deployed.
      shared_ptr<string> cityName_ {};
      // The probe point ID of the ISP.
      shared_ptr<string> isp_ {};
      // The probe point name of the ISP.
      shared_ptr<string> ispName_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->address_ == nullptr && this->detectEnable_ == nullptr && this->detectThreshold_ == nullptr && this->detectTimes_ == nullptr && this->ispCityList_ == nullptr
        && this->listenerId_ == nullptr && this->optionsJson_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->silenceTime_ == nullptr
        && this->state_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeApplicationMonitorResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeApplicationMonitorResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // detectEnable Field Functions 
    bool hasDetectEnable() const { return this->detectEnable_ != nullptr;};
    void deleteDetectEnable() { this->detectEnable_ = nullptr;};
    inline bool getDetectEnable() const { DARABONBA_PTR_GET_DEFAULT(detectEnable_, false) };
    inline DescribeApplicationMonitorResponseBody& setDetectEnable(bool detectEnable) { DARABONBA_PTR_SET_VALUE(detectEnable_, detectEnable) };


    // detectThreshold Field Functions 
    bool hasDetectThreshold() const { return this->detectThreshold_ != nullptr;};
    void deleteDetectThreshold() { this->detectThreshold_ = nullptr;};
    inline int32_t getDetectThreshold() const { DARABONBA_PTR_GET_DEFAULT(detectThreshold_, 0) };
    inline DescribeApplicationMonitorResponseBody& setDetectThreshold(int32_t detectThreshold) { DARABONBA_PTR_SET_VALUE(detectThreshold_, detectThreshold) };


    // detectTimes Field Functions 
    bool hasDetectTimes() const { return this->detectTimes_ != nullptr;};
    void deleteDetectTimes() { this->detectTimes_ = nullptr;};
    inline int32_t getDetectTimes() const { DARABONBA_PTR_GET_DEFAULT(detectTimes_, 0) };
    inline DescribeApplicationMonitorResponseBody& setDetectTimes(int32_t detectTimes) { DARABONBA_PTR_SET_VALUE(detectTimes_, detectTimes) };


    // ispCityList Field Functions 
    bool hasIspCityList() const { return this->ispCityList_ != nullptr;};
    void deleteIspCityList() { this->ispCityList_ = nullptr;};
    inline const vector<DescribeApplicationMonitorResponseBody::IspCityList> & getIspCityList() const { DARABONBA_PTR_GET_CONST(ispCityList_, vector<DescribeApplicationMonitorResponseBody::IspCityList>) };
    inline vector<DescribeApplicationMonitorResponseBody::IspCityList> getIspCityList() { DARABONBA_PTR_GET(ispCityList_, vector<DescribeApplicationMonitorResponseBody::IspCityList>) };
    inline DescribeApplicationMonitorResponseBody& setIspCityList(const vector<DescribeApplicationMonitorResponseBody::IspCityList> & ispCityList) { DARABONBA_PTR_SET_VALUE(ispCityList_, ispCityList) };
    inline DescribeApplicationMonitorResponseBody& setIspCityList(vector<DescribeApplicationMonitorResponseBody::IspCityList> && ispCityList) { DARABONBA_PTR_SET_RVALUE(ispCityList_, ispCityList) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DescribeApplicationMonitorResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string getOptionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline DescribeApplicationMonitorResponseBody& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationMonitorResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline DescribeApplicationMonitorResponseBody& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeApplicationMonitorResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeApplicationMonitorResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeApplicationMonitorResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The ID of the GA instance on which the origin probing task ran.
    shared_ptr<string> acceleratorId_ {};
    // The URL or IP address that was probed.
    shared_ptr<string> address_ {};
    // Indicates whether the automatic diagnostics feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> detectEnable_ {};
    // The threshold that is used to trigger automatic diagnostics.
    // 
    // If the availability of the origin server drops below the specified threshold, the automatic diagnostics feature is triggered.
    shared_ptr<int32_t> detectThreshold_ {};
    // The number of times that are required to reach the threshold before the automatic diagnostics feature is triggered.
    shared_ptr<int32_t> detectTimes_ {};
    // The probe points of the Internet service provider (ISP).
    shared_ptr<vector<DescribeApplicationMonitorResponseBody::IspCityList>> ispCityList_ {};
    // The ID of the listener on which the origin probing task ran.
    shared_ptr<string> listenerId_ {};
    // The extended options of the listener protocol that is used by the origin probing task. The options vary based on the listener protocol.
    shared_ptr<string> optionsJson_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The silence period of the automatic diagnostics feature. This parameter indicates the interval at which the automatic diagnostics feature is triggered. If the availability rate does not return to normal after GA triggers automatic diagnostics, GA must wait until the silence period ends before GA can trigger another automatic diagnostic.
    // 
    // If the number of consecutive times that the availability rate drops below the automatic diagnostics threshold reaches the value of **DetectTimes**, the automatic diagnostics feature is triggered. The automatic diagnostics feature is not triggered again within the silence period regardless of whether the availability rate remains below the threshold. If the availability rate does not return to normal after the silence period ends, the automatic diagnostics feature is triggered again.
    // 
    // Unit: seconds.
    shared_ptr<int32_t> silenceTime_ {};
    // The status of the origin probing task. Valid values:
    // 
    // *   **init**
    // *   **active**
    // *   **updating**
    // *   **inactive**
    // *   **deleting**
    shared_ptr<string> state_ {};
    // The ID of the origin probing task.
    shared_ptr<string> taskId_ {};
    // The name of the origin probing task.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
