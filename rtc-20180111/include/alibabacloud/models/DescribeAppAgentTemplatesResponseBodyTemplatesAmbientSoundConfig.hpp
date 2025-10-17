// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPAGENTTEMPLATESRESPONSEBODYTEMPLATESAMBIENTSOUNDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPAGENTTEMPLATESRESPONSEBODYTEMPLATESAMBIENTSOUNDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SoundId, soundId_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SoundId, soundId_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig() = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig(const DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig &) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig(DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig &&) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig() = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig& operator=(const DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig &) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig& operator=(DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->soundId_ == nullptr
        && return this->volume_ == nullptr; };
    // soundId Field Functions 
    bool hasSoundId() const { return this->soundId_ != nullptr;};
    void deleteSoundId() { this->soundId_ = nullptr;};
    inline string soundId() const { DARABONBA_PTR_GET_DEFAULT(soundId_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig& setSoundId(string soundId) { DARABONBA_PTR_SET_VALUE(soundId_, soundId) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> soundId_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
