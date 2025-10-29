// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTRACECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetTraceConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(sampleRatio, sampleRatio_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(servicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(traceType, traceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(sampleRatio, sampleRatio_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(servicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(traceType, traceType_);
    };
    GetTraceConfigResponseBodyData() = default ;
    GetTraceConfigResponseBodyData(const GetTraceConfigResponseBodyData &) = default ;
    GetTraceConfigResponseBodyData(GetTraceConfigResponseBodyData &&) = default ;
    GetTraceConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceConfigResponseBodyData() = default ;
    GetTraceConfigResponseBodyData& operator=(const GetTraceConfigResponseBodyData &) = default ;
    GetTraceConfigResponseBodyData& operator=(GetTraceConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->sampleRatio_ == nullptr && return this->serviceId_ == nullptr && return this->servicePort_ == nullptr && return this->traceType_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetTraceConfigResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // sampleRatio Field Functions 
    bool hasSampleRatio() const { return this->sampleRatio_ != nullptr;};
    void deleteSampleRatio() { this->sampleRatio_ = nullptr;};
    inline int32_t sampleRatio() const { DARABONBA_PTR_GET_DEFAULT(sampleRatio_, 0) };
    inline GetTraceConfigResponseBodyData& setSampleRatio(int32_t sampleRatio) { DARABONBA_PTR_SET_VALUE(sampleRatio_, sampleRatio) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetTraceConfigResponseBodyData& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline string servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
    inline GetTraceConfigResponseBodyData& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // traceType Field Functions 
    bool hasTraceType() const { return this->traceType_ != nullptr;};
    void deleteTraceType() { this->traceType_ = nullptr;};
    inline string traceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
    inline GetTraceConfigResponseBodyData& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


  protected:
    // Whether to Enable Tracing:
    // true: Enabled
    // false: Disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // Sampling Rate
    std::shared_ptr<int32_t> sampleRatio_ = nullptr;
    // Service ID, present when the tracing type is SKYWALKING
    std::shared_ptr<string> serviceId_ = nullptr;
    // 服务端口，链路追踪类型为SKYWALKING时存在该参数
    std::shared_ptr<string> servicePort_ = nullptr;
    // Tracing Type:
    // - XTRACE
    // - SKYWALKING
    // - OPENTELEMETRY
    // - OTSKYWALKING
    std::shared_ptr<string> traceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
