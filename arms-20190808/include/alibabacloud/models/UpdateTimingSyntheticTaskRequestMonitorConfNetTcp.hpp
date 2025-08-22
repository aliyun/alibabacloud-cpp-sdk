// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFNETTCP_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFNETTCP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequestMonitorConfNetTCP : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectTimes, connectTimes_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TracertEnable, tracertEnable_);
      DARABONBA_PTR_TO_JSON(TracertNumMax, tracertNumMax_);
      DARABONBA_PTR_TO_JSON(TracertTimeout, tracertTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectTimes, connectTimes_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TracertEnable, tracertEnable_);
      DARABONBA_PTR_FROM_JSON(TracertNumMax, tracertNumMax_);
      DARABONBA_PTR_FROM_JSON(TracertTimeout, tracertTimeout_);
    };
    UpdateTimingSyntheticTaskRequestMonitorConfNetTCP() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetTCP(const UpdateTimingSyntheticTaskRequestMonitorConfNetTCP &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetTCP(UpdateTimingSyntheticTaskRequestMonitorConfNetTCP &&) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetTCP(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequestMonitorConfNetTCP() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& operator=(const UpdateTimingSyntheticTaskRequestMonitorConfNetTCP &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& operator=(UpdateTimingSyntheticTaskRequestMonitorConfNetTCP &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectTimes_ != nullptr
        && this->interval_ != nullptr && this->targetUrl_ != nullptr && this->timeout_ != nullptr && this->tracertEnable_ != nullptr && this->tracertNumMax_ != nullptr
        && this->tracertTimeout_ != nullptr; };
    // connectTimes Field Functions 
    bool hasConnectTimes() const { return this->connectTimes_ != nullptr;};
    void deleteConnectTimes() { this->connectTimes_ = nullptr;};
    inline int32_t connectTimes() const { DARABONBA_PTR_GET_DEFAULT(connectTimes_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& setConnectTimes(int32_t connectTimes) { DARABONBA_PTR_SET_VALUE(connectTimes_, connectTimes) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // tracertEnable Field Functions 
    bool hasTracertEnable() const { return this->tracertEnable_ != nullptr;};
    void deleteTracertEnable() { this->tracertEnable_ = nullptr;};
    inline bool tracertEnable() const { DARABONBA_PTR_GET_DEFAULT(tracertEnable_, false) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& setTracertEnable(bool tracertEnable) { DARABONBA_PTR_SET_VALUE(tracertEnable_, tracertEnable) };


    // tracertNumMax Field Functions 
    bool hasTracertNumMax() const { return this->tracertNumMax_ != nullptr;};
    void deleteTracertNumMax() { this->tracertNumMax_ = nullptr;};
    inline int32_t tracertNumMax() const { DARABONBA_PTR_GET_DEFAULT(tracertNumMax_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& setTracertNumMax(int32_t tracertNumMax) { DARABONBA_PTR_SET_VALUE(tracertNumMax_, tracertNumMax) };


    // tracertTimeout Field Functions 
    bool hasTracertTimeout() const { return this->tracertTimeout_ != nullptr;};
    void deleteTracertTimeout() { this->tracertTimeout_ = nullptr;};
    inline int64_t tracertTimeout() const { DARABONBA_PTR_GET_DEFAULT(tracertTimeout_, 0L) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetTCP& setTracertTimeout(int64_t tracertTimeout) { DARABONBA_PTR_SET_VALUE(tracertTimeout_, tracertTimeout) };


  protected:
    // The number of TCP connections that are established. Minimum value: 1. Maximum value: 16. Default value: 4.
    std::shared_ptr<int32_t> connectTimes_ = nullptr;
    // The interval at which TCP connections are established. Unit: milliseconds. Minimum value: 200. Maximum value: 10000. Default value: 200.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The IP address of the destination host.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // The timeout period for the TCP synthetic test. Unit: milliseconds. Minimum value: 1000. Maximum value: 300000. Default value: 20000.
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // Specifies whether to enable the tracert command. Default value: true.
    std::shared_ptr<bool> tracertEnable_ = nullptr;
    // The maximum number of hops for the tracert command. Minimum value: 1. Maximum value: 128. Default value: 20.
    std::shared_ptr<int32_t> tracertNumMax_ = nullptr;
    // The timeout period of the tracert command. Unit: milliseconds. Minimum value: 1000. Maximum value: 300000. Default value: 60000.
    std::shared_ptr<int64_t> tracertTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
