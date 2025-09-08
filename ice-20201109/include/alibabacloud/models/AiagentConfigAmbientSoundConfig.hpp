// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGAMBIENTSOUNDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGAMBIENTSOUNDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigAmbientSoundConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigAmbientSoundConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigAmbientSoundConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    AIAgentConfigAmbientSoundConfig() = default ;
    AIAgentConfigAmbientSoundConfig(const AIAgentConfigAmbientSoundConfig &) = default ;
    AIAgentConfigAmbientSoundConfig(AIAgentConfigAmbientSoundConfig &&) = default ;
    AIAgentConfigAmbientSoundConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigAmbientSoundConfig() = default ;
    AIAgentConfigAmbientSoundConfig& operator=(const AIAgentConfigAmbientSoundConfig &) = default ;
    AIAgentConfigAmbientSoundConfig& operator=(AIAgentConfigAmbientSoundConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->volume_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AIAgentConfigAmbientSoundConfig& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline AIAgentConfigAmbientSoundConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
