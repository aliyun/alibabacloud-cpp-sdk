// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHDNSGTMINSTANCESTRATEGYMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHDNSGTMINSTANCESTRATEGYMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SwitchDnsGtmInstanceStrategyModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchDnsGtmInstanceStrategyModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchDnsGtmInstanceStrategyModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
    };
    SwitchDnsGtmInstanceStrategyModeRequest() = default ;
    SwitchDnsGtmInstanceStrategyModeRequest(const SwitchDnsGtmInstanceStrategyModeRequest &) = default ;
    SwitchDnsGtmInstanceStrategyModeRequest(SwitchDnsGtmInstanceStrategyModeRequest &&) = default ;
    SwitchDnsGtmInstanceStrategyModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchDnsGtmInstanceStrategyModeRequest() = default ;
    SwitchDnsGtmInstanceStrategyModeRequest& operator=(const SwitchDnsGtmInstanceStrategyModeRequest &) = default ;
    SwitchDnsGtmInstanceStrategyModeRequest& operator=(SwitchDnsGtmInstanceStrategyModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->lang_ == nullptr && return this->strategyMode_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SwitchDnsGtmInstanceStrategyModeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SwitchDnsGtmInstanceStrategyModeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string strategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline SwitchDnsGtmInstanceStrategyModeRequest& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


  protected:
    // The ID of the GTM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
    // The access policy type. Valid values:
    // 
    // *   GEO: geographical location-based
    // *   LATENCY: latency-based
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
