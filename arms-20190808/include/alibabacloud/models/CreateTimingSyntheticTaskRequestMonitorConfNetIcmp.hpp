// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONFNETICMP_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONFNETICMP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestMonitorConfNetICMP : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestMonitorConfNetICMP& obj) { 
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(PackageNum, packageNum_);
      DARABONBA_PTR_TO_JSON(PackageSize, packageSize_);
      DARABONBA_PTR_TO_JSON(SplitPackage, splitPackage_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TracertEnable, tracertEnable_);
      DARABONBA_PTR_TO_JSON(TracertNumMax, tracertNumMax_);
      DARABONBA_PTR_TO_JSON(TracertTimeout, tracertTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestMonitorConfNetICMP& obj) { 
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(PackageNum, packageNum_);
      DARABONBA_PTR_FROM_JSON(PackageSize, packageSize_);
      DARABONBA_PTR_FROM_JSON(SplitPackage, splitPackage_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TracertEnable, tracertEnable_);
      DARABONBA_PTR_FROM_JSON(TracertNumMax, tracertNumMax_);
      DARABONBA_PTR_FROM_JSON(TracertTimeout, tracertTimeout_);
    };
    CreateTimingSyntheticTaskRequestMonitorConfNetICMP() = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetICMP(const CreateTimingSyntheticTaskRequestMonitorConfNetICMP &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetICMP(CreateTimingSyntheticTaskRequestMonitorConfNetICMP &&) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetICMP(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestMonitorConfNetICMP() = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetICMP& operator=(const CreateTimingSyntheticTaskRequestMonitorConfNetICMP &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetICMP& operator=(CreateTimingSyntheticTaskRequestMonitorConfNetICMP &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->interval_ != nullptr
        && this->packageNum_ != nullptr && this->packageSize_ != nullptr && this->splitPackage_ != nullptr && this->targetUrl_ != nullptr && this->timeout_ != nullptr
        && this->tracertEnable_ != nullptr && this->tracertNumMax_ != nullptr && this->tracertTimeout_ != nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // packageNum Field Functions 
    bool hasPackageNum() const { return this->packageNum_ != nullptr;};
    void deletePackageNum() { this->packageNum_ = nullptr;};
    inline int32_t packageNum() const { DARABONBA_PTR_GET_DEFAULT(packageNum_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setPackageNum(int32_t packageNum) { DARABONBA_PTR_SET_VALUE(packageNum_, packageNum) };


    // packageSize Field Functions 
    bool hasPackageSize() const { return this->packageSize_ != nullptr;};
    void deletePackageSize() { this->packageSize_ = nullptr;};
    inline int32_t packageSize() const { DARABONBA_PTR_GET_DEFAULT(packageSize_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setPackageSize(int32_t packageSize) { DARABONBA_PTR_SET_VALUE(packageSize_, packageSize) };


    // splitPackage Field Functions 
    bool hasSplitPackage() const { return this->splitPackage_ != nullptr;};
    void deleteSplitPackage() { this->splitPackage_ = nullptr;};
    inline bool splitPackage() const { DARABONBA_PTR_GET_DEFAULT(splitPackage_, false) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setSplitPackage(bool splitPackage) { DARABONBA_PTR_SET_VALUE(splitPackage_, splitPackage) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // tracertEnable Field Functions 
    bool hasTracertEnable() const { return this->tracertEnable_ != nullptr;};
    void deleteTracertEnable() { this->tracertEnable_ = nullptr;};
    inline bool tracertEnable() const { DARABONBA_PTR_GET_DEFAULT(tracertEnable_, false) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setTracertEnable(bool tracertEnable) { DARABONBA_PTR_SET_VALUE(tracertEnable_, tracertEnable) };


    // tracertNumMax Field Functions 
    bool hasTracertNumMax() const { return this->tracertNumMax_ != nullptr;};
    void deleteTracertNumMax() { this->tracertNumMax_ = nullptr;};
    inline int32_t tracertNumMax() const { DARABONBA_PTR_GET_DEFAULT(tracertNumMax_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setTracertNumMax(int32_t tracertNumMax) { DARABONBA_PTR_SET_VALUE(tracertNumMax_, tracertNumMax) };


    // tracertTimeout Field Functions 
    bool hasTracertTimeout() const { return this->tracertTimeout_ != nullptr;};
    void deleteTracertTimeout() { this->tracertTimeout_ = nullptr;};
    inline int64_t tracertTimeout() const { DARABONBA_PTR_GET_DEFAULT(tracertTimeout_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetICMP& setTracertTimeout(int64_t tracertTimeout) { DARABONBA_PTR_SET_VALUE(tracertTimeout_, tracertTimeout) };


  protected:
    // The interval at which ICMP packets are sent. Unit: milliseconds. Minimum value: 200. Maximum value: 2000. Default value: 200.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The number of ICMP packets that are sent. Minimum value: 1. Maximum value: 50. Default value: 4.
    std::shared_ptr<int32_t> packageNum_ = nullptr;
    // The size of each ICMP packet. Unit: bytes. Valid values: 32, 64, 128, 256, 512, 1024, 1080, and 1450.
    std::shared_ptr<int32_t> packageSize_ = nullptr;
    // Specifies whether to split ICMP packets. Default value: true.
    std::shared_ptr<bool> splitPackage_ = nullptr;
    // The destination IP address or domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // The timeout period for the ICMP synthetic test. Unit: milliseconds. Minimum value: 1000. Maximum value: 300000. Default value: 20000.
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
