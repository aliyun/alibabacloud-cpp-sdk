// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTCOMMONSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTCOMMONSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestCommonSettingCustomHost.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestCommonSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestCommonSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHost, customHost_);
      DARABONBA_PTR_TO_JSON(CustomPrometheusSetting, customPrometheusSetting_);
      DARABONBA_PTR_TO_JSON(CustomVPCSetting, customVPCSetting_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(IsOpenTrace, isOpenTrace_);
      DARABONBA_PTR_TO_JSON(MonitorSamples, monitorSamples_);
      DARABONBA_PTR_TO_JSON(TraceClientType, traceClientType_);
      DARABONBA_PTR_TO_JSON(XtraceRegion, xtraceRegion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestCommonSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHost, customHost_);
      DARABONBA_PTR_FROM_JSON(CustomPrometheusSetting, customPrometheusSetting_);
      DARABONBA_PTR_FROM_JSON(CustomVPCSetting, customVPCSetting_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(IsOpenTrace, isOpenTrace_);
      DARABONBA_PTR_FROM_JSON(MonitorSamples, monitorSamples_);
      DARABONBA_PTR_FROM_JSON(TraceClientType, traceClientType_);
      DARABONBA_PTR_FROM_JSON(XtraceRegion, xtraceRegion_);
    };
    CreateTimingSyntheticTaskRequestCommonSetting() = default ;
    CreateTimingSyntheticTaskRequestCommonSetting(const CreateTimingSyntheticTaskRequestCommonSetting &) = default ;
    CreateTimingSyntheticTaskRequestCommonSetting(CreateTimingSyntheticTaskRequestCommonSetting &&) = default ;
    CreateTimingSyntheticTaskRequestCommonSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestCommonSetting() = default ;
    CreateTimingSyntheticTaskRequestCommonSetting& operator=(const CreateTimingSyntheticTaskRequestCommonSetting &) = default ;
    CreateTimingSyntheticTaskRequestCommonSetting& operator=(CreateTimingSyntheticTaskRequestCommonSetting &&) = default ;
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
    inline const Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHost & customHost() const { DARABONBA_PTR_GET_CONST(customHost_, Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHost) };
    inline Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHost customHost() { DARABONBA_PTR_GET(customHost_, Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHost) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setCustomHost(const Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHost & customHost) { DARABONBA_PTR_SET_VALUE(customHost_, customHost) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setCustomHost(Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHost && customHost) { DARABONBA_PTR_SET_RVALUE(customHost_, customHost) };


    // customPrometheusSetting Field Functions 
    bool hasCustomPrometheusSetting() const { return this->customPrometheusSetting_ != nullptr;};
    void deleteCustomPrometheusSetting() { this->customPrometheusSetting_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting & customPrometheusSetting() const { DARABONBA_PTR_GET_CONST(customPrometheusSetting_, Models::CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting) };
    inline Models::CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting customPrometheusSetting() { DARABONBA_PTR_GET(customPrometheusSetting_, Models::CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setCustomPrometheusSetting(const Models::CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting & customPrometheusSetting) { DARABONBA_PTR_SET_VALUE(customPrometheusSetting_, customPrometheusSetting) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setCustomPrometheusSetting(Models::CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting && customPrometheusSetting) { DARABONBA_PTR_SET_RVALUE(customPrometheusSetting_, customPrometheusSetting) };


    // customVPCSetting Field Functions 
    bool hasCustomVPCSetting() const { return this->customVPCSetting_ != nullptr;};
    void deleteCustomVPCSetting() { this->customVPCSetting_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting & customVPCSetting() const { DARABONBA_PTR_GET_CONST(customVPCSetting_, Models::CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting) };
    inline Models::CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting customVPCSetting() { DARABONBA_PTR_GET(customVPCSetting_, Models::CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setCustomVPCSetting(const Models::CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting & customVPCSetting) { DARABONBA_PTR_SET_VALUE(customVPCSetting_, customVPCSetting) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setCustomVPCSetting(Models::CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting && customVPCSetting) { DARABONBA_PTR_SET_RVALUE(customVPCSetting_, customVPCSetting) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline int32_t ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setIpType(int32_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // isOpenTrace Field Functions 
    bool hasIsOpenTrace() const { return this->isOpenTrace_ != nullptr;};
    void deleteIsOpenTrace() { this->isOpenTrace_ = nullptr;};
    inline bool isOpenTrace() const { DARABONBA_PTR_GET_DEFAULT(isOpenTrace_, false) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setIsOpenTrace(bool isOpenTrace) { DARABONBA_PTR_SET_VALUE(isOpenTrace_, isOpenTrace) };


    // monitorSamples Field Functions 
    bool hasMonitorSamples() const { return this->monitorSamples_ != nullptr;};
    void deleteMonitorSamples() { this->monitorSamples_ = nullptr;};
    inline int32_t monitorSamples() const { DARABONBA_PTR_GET_DEFAULT(monitorSamples_, 0) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setMonitorSamples(int32_t monitorSamples) { DARABONBA_PTR_SET_VALUE(monitorSamples_, monitorSamples) };


    // traceClientType Field Functions 
    bool hasTraceClientType() const { return this->traceClientType_ != nullptr;};
    void deleteTraceClientType() { this->traceClientType_ = nullptr;};
    inline int32_t traceClientType() const { DARABONBA_PTR_GET_DEFAULT(traceClientType_, 0) };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setTraceClientType(int32_t traceClientType) { DARABONBA_PTR_SET_VALUE(traceClientType_, traceClientType) };


    // xtraceRegion Field Functions 
    bool hasXtraceRegion() const { return this->xtraceRegion_ != nullptr;};
    void deleteXtraceRegion() { this->xtraceRegion_ = nullptr;};
    inline string xtraceRegion() const { DARABONBA_PTR_GET_DEFAULT(xtraceRegion_, "") };
    inline CreateTimingSyntheticTaskRequestCommonSetting& setXtraceRegion(string xtraceRegion) { DARABONBA_PTR_SET_VALUE(xtraceRegion_, xtraceRegion) };


  protected:
    // The custom host settings.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHost> customHost_ = nullptr;
    // The reserved parameters.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting> customPrometheusSetting_ = nullptr;
    // The information about the virtual private cloud (VPC). If the destination URL is an Alibaba Cloud internal endpoint, you need to configure a VPC.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting> customVPCSetting_ = nullptr;
    // The IP version. Valid values:
    // 
    // *   0: A version is automatically selected.
    // *   1: IPv4.
    // *   2: IPv6.
    std::shared_ptr<int32_t> ipType_ = nullptr;
    // Specifies whether to enable tracing.
    std::shared_ptr<bool> isOpenTrace_ = nullptr;
    // Specifies whether to evenly distribute monitoring samples. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int32_t> monitorSamples_ = nullptr;
    // The type of the client for tracing. Valid values:
    // 
    // *   0: ARMS agent
    // *   1: OpenTelemetry
    // *   2: Jaeger
    std::shared_ptr<int32_t> traceClientType_ = nullptr;
    // The region to which trace data is reported.
    std::shared_ptr<string> xtraceRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
