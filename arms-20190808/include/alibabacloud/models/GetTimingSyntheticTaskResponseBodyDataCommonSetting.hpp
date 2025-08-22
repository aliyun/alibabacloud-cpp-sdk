// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATACOMMONSETTING_HPP_
#define ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATACOMMONSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomPrometheusSetting.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomVPCSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTimingSyntheticTaskResponseBodyDataCommonSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTimingSyntheticTaskResponseBodyDataCommonSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHost, customHost_);
      DARABONBA_PTR_TO_JSON(CustomPrometheusSetting, customPrometheusSetting_);
      DARABONBA_PTR_TO_JSON(CustomVPCSetting, customVPCSetting_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(IsOpenTrace, isOpenTrace_);
      DARABONBA_PTR_TO_JSON(MonitorSamples, monitorSamples_);
      DARABONBA_PTR_TO_JSON(TraceClientType, traceClientType_);
      DARABONBA_PTR_TO_JSON(XtraceRegion, xtraceRegion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTimingSyntheticTaskResponseBodyDataCommonSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHost, customHost_);
      DARABONBA_PTR_FROM_JSON(CustomPrometheusSetting, customPrometheusSetting_);
      DARABONBA_PTR_FROM_JSON(CustomVPCSetting, customVPCSetting_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(IsOpenTrace, isOpenTrace_);
      DARABONBA_PTR_FROM_JSON(MonitorSamples, monitorSamples_);
      DARABONBA_PTR_FROM_JSON(TraceClientType, traceClientType_);
      DARABONBA_PTR_FROM_JSON(XtraceRegion, xtraceRegion_);
    };
    GetTimingSyntheticTaskResponseBodyDataCommonSetting() = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSetting(const GetTimingSyntheticTaskResponseBodyDataCommonSetting &) = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSetting(GetTimingSyntheticTaskResponseBodyDataCommonSetting &&) = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTimingSyntheticTaskResponseBodyDataCommonSetting() = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSetting& operator=(const GetTimingSyntheticTaskResponseBodyDataCommonSetting &) = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSetting& operator=(GetTimingSyntheticTaskResponseBodyDataCommonSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customHost_ != nullptr
        && this->customPrometheusSetting_ != nullptr && this->customVPCSetting_ != nullptr && this->ipType_ != nullptr && this->isOpenTrace_ != nullptr && this->monitorSamples_ != nullptr
        && this->traceClientType_ != nullptr && this->xtraceRegion_ != nullptr; };
    // customHost Field Functions 
    bool hasCustomHost() const { return this->customHost_ != nullptr;};
    void deleteCustomHost() { this->customHost_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost & customHost() const { DARABONBA_PTR_GET_CONST(customHost_, Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost customHost() { DARABONBA_PTR_GET(customHost_, Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setCustomHost(const Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost & customHost) { DARABONBA_PTR_SET_VALUE(customHost_, customHost) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setCustomHost(Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost && customHost) { DARABONBA_PTR_SET_RVALUE(customHost_, customHost) };


    // customPrometheusSetting Field Functions 
    bool hasCustomPrometheusSetting() const { return this->customPrometheusSetting_ != nullptr;};
    void deleteCustomPrometheusSetting() { this->customPrometheusSetting_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomPrometheusSetting & customPrometheusSetting() const { DARABONBA_PTR_GET_CONST(customPrometheusSetting_, Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomPrometheusSetting) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomPrometheusSetting customPrometheusSetting() { DARABONBA_PTR_GET(customPrometheusSetting_, Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomPrometheusSetting) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setCustomPrometheusSetting(const Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomPrometheusSetting & customPrometheusSetting) { DARABONBA_PTR_SET_VALUE(customPrometheusSetting_, customPrometheusSetting) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setCustomPrometheusSetting(Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomPrometheusSetting && customPrometheusSetting) { DARABONBA_PTR_SET_RVALUE(customPrometheusSetting_, customPrometheusSetting) };


    // customVPCSetting Field Functions 
    bool hasCustomVPCSetting() const { return this->customVPCSetting_ != nullptr;};
    void deleteCustomVPCSetting() { this->customVPCSetting_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomVPCSetting & customVPCSetting() const { DARABONBA_PTR_GET_CONST(customVPCSetting_, Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomVPCSetting) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomVPCSetting customVPCSetting() { DARABONBA_PTR_GET(customVPCSetting_, Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomVPCSetting) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setCustomVPCSetting(const Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomVPCSetting & customVPCSetting) { DARABONBA_PTR_SET_VALUE(customVPCSetting_, customVPCSetting) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setCustomVPCSetting(Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomVPCSetting && customVPCSetting) { DARABONBA_PTR_SET_RVALUE(customVPCSetting_, customVPCSetting) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline int32_t ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setIpType(int32_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // isOpenTrace Field Functions 
    bool hasIsOpenTrace() const { return this->isOpenTrace_ != nullptr;};
    void deleteIsOpenTrace() { this->isOpenTrace_ = nullptr;};
    inline bool isOpenTrace() const { DARABONBA_PTR_GET_DEFAULT(isOpenTrace_, false) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setIsOpenTrace(bool isOpenTrace) { DARABONBA_PTR_SET_VALUE(isOpenTrace_, isOpenTrace) };


    // monitorSamples Field Functions 
    bool hasMonitorSamples() const { return this->monitorSamples_ != nullptr;};
    void deleteMonitorSamples() { this->monitorSamples_ = nullptr;};
    inline int32_t monitorSamples() const { DARABONBA_PTR_GET_DEFAULT(monitorSamples_, 0) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setMonitorSamples(int32_t monitorSamples) { DARABONBA_PTR_SET_VALUE(monitorSamples_, monitorSamples) };


    // traceClientType Field Functions 
    bool hasTraceClientType() const { return this->traceClientType_ != nullptr;};
    void deleteTraceClientType() { this->traceClientType_ = nullptr;};
    inline int32_t traceClientType() const { DARABONBA_PTR_GET_DEFAULT(traceClientType_, 0) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setTraceClientType(int32_t traceClientType) { DARABONBA_PTR_SET_VALUE(traceClientType_, traceClientType) };


    // xtraceRegion Field Functions 
    bool hasXtraceRegion() const { return this->xtraceRegion_ != nullptr;};
    void deleteXtraceRegion() { this->xtraceRegion_ = nullptr;};
    inline string xtraceRegion() const { DARABONBA_PTR_GET_DEFAULT(xtraceRegion_, "") };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSetting& setXtraceRegion(string xtraceRegion) { DARABONBA_PTR_SET_VALUE(xtraceRegion_, xtraceRegion) };


  protected:
    // The custom host.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost> customHost_ = nullptr;
    // The reserved parameters.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomPrometheusSetting> customPrometheusSetting_ = nullptr;
    // User VPC information. If the dial-up is to the Alibaba Cloud intranet address, you need to configure the VPC information.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomVPCSetting> customVPCSetting_ = nullptr;
    // The IP version. Valid values:
    // 
    // *   0: A version is automatically selected.
    // *   1: IPv4
    // *   2: IPv6
    std::shared_ptr<int32_t> ipType_ = nullptr;
    // Whether to enable tracing.
    std::shared_ptr<bool> isOpenTrace_ = nullptr;
    // Specifies whether to evenly distribute monitoring samples. Valid values:
    // 
    // *   0: No
    // *   1: Yes
    std::shared_ptr<int32_t> monitorSamples_ = nullptr;
    // Tracing client type:
    // 
    // - 0: ARMS Agent
    // - 1: Open Telemetry
    // - 2: Jaeger
    std::shared_ptr<int32_t> traceClientType_ = nullptr;
    // Tracing data reporting region.
    std::shared_ptr<string> xtraceRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
