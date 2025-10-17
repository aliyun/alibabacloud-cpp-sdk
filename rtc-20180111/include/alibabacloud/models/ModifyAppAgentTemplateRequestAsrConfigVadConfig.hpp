// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPAGENTTEMPLATEREQUESTASRCONFIGVADCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPAGENTTEMPLATEREQUESTASRCONFIGVADCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppAgentTemplateRequestAsrConfigVadConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppAgentTemplateRequestAsrConfigVadConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InterruptSpeechDuration, interruptSpeechDuration_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppAgentTemplateRequestAsrConfigVadConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InterruptSpeechDuration, interruptSpeechDuration_);
    };
    ModifyAppAgentTemplateRequestAsrConfigVadConfig() = default ;
    ModifyAppAgentTemplateRequestAsrConfigVadConfig(const ModifyAppAgentTemplateRequestAsrConfigVadConfig &) = default ;
    ModifyAppAgentTemplateRequestAsrConfigVadConfig(ModifyAppAgentTemplateRequestAsrConfigVadConfig &&) = default ;
    ModifyAppAgentTemplateRequestAsrConfigVadConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppAgentTemplateRequestAsrConfigVadConfig() = default ;
    ModifyAppAgentTemplateRequestAsrConfigVadConfig& operator=(const ModifyAppAgentTemplateRequestAsrConfigVadConfig &) = default ;
    ModifyAppAgentTemplateRequestAsrConfigVadConfig& operator=(ModifyAppAgentTemplateRequestAsrConfigVadConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interruptSpeechDuration_ == nullptr; };
    // interruptSpeechDuration Field Functions 
    bool hasInterruptSpeechDuration() const { return this->interruptSpeechDuration_ != nullptr;};
    void deleteInterruptSpeechDuration() { this->interruptSpeechDuration_ = nullptr;};
    inline int32_t interruptSpeechDuration() const { DARABONBA_PTR_GET_DEFAULT(interruptSpeechDuration_, 0) };
    inline ModifyAppAgentTemplateRequestAsrConfigVadConfig& setInterruptSpeechDuration(int32_t interruptSpeechDuration) { DARABONBA_PTR_SET_VALUE(interruptSpeechDuration_, interruptSpeechDuration) };


  protected:
    std::shared_ptr<int32_t> interruptSpeechDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
