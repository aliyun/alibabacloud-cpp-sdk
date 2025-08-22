// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATABONREESDKCONFIGSAMPLINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATABONREESDKCONFIGSAMPLINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(samplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(samplingType, samplingType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(samplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(samplingType, samplingType_);
    };
    GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig() = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig(const GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig &) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig(GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig &&) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig() = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig& operator=(const GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig &) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig& operator=(GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->samplingRate_ != nullptr
        && this->samplingType_ != nullptr; };
    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline int32_t samplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig& setSamplingRate(int32_t samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // samplingType Field Functions 
    bool hasSamplingType() const { return this->samplingType_ != nullptr;};
    void deleteSamplingType() { this->samplingType_ = nullptr;};
    inline int32_t samplingType() const { DARABONBA_PTR_GET_DEFAULT(samplingType_, 0) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig& setSamplingType(int32_t samplingType) { DARABONBA_PTR_SET_VALUE(samplingType_, samplingType) };


  protected:
    // Sampling rate: between (0, 1000], a thousandth.
    std::shared_ptr<int32_t> samplingRate_ = nullptr;
    // Sampling type, currently only session random sampling is supported, that is, fixed transmission: 1.
    std::shared_ptr<int32_t> samplingType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
