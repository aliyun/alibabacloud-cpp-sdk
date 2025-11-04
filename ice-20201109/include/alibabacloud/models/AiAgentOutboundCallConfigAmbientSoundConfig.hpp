// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGAMBIENTSOUNDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGAMBIENTSOUNDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfigAmbientSoundConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfigAmbientSoundConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfigAmbientSoundConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    AIAgentOutboundCallConfigAmbientSoundConfig() = default ;
    AIAgentOutboundCallConfigAmbientSoundConfig(const AIAgentOutboundCallConfigAmbientSoundConfig &) = default ;
    AIAgentOutboundCallConfigAmbientSoundConfig(AIAgentOutboundCallConfigAmbientSoundConfig &&) = default ;
    AIAgentOutboundCallConfigAmbientSoundConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfigAmbientSoundConfig() = default ;
    AIAgentOutboundCallConfigAmbientSoundConfig& operator=(const AIAgentOutboundCallConfigAmbientSoundConfig &) = default ;
    AIAgentOutboundCallConfigAmbientSoundConfig& operator=(AIAgentOutboundCallConfigAmbientSoundConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->volume_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AIAgentOutboundCallConfigAmbientSoundConfig& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline AIAgentOutboundCallConfigAmbientSoundConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
