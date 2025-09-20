// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETAUDIOFILTERAUDIO_HPP_
#define ALIBABACLOUD_MODELS_TARGETAUDIOFILTERAUDIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetAudioFilterAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetAudioFilterAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Mixing, mixing_);
    };
    friend void from_json(const Darabonba::Json& j, TargetAudioFilterAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Mixing, mixing_);
    };
    TargetAudioFilterAudio() = default ;
    TargetAudioFilterAudio(const TargetAudioFilterAudio &) = default ;
    TargetAudioFilterAudio(TargetAudioFilterAudio &&) = default ;
    TargetAudioFilterAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetAudioFilterAudio() = default ;
    TargetAudioFilterAudio& operator=(const TargetAudioFilterAudio &) = default ;
    TargetAudioFilterAudio& operator=(TargetAudioFilterAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mixing_ != nullptr; };
    // mixing Field Functions 
    bool hasMixing() const { return this->mixing_ != nullptr;};
    void deleteMixing() { this->mixing_ = nullptr;};
    inline bool mixing() const { DARABONBA_PTR_GET_DEFAULT(mixing_, false) };
    inline TargetAudioFilterAudio& setMixing(bool mixing) { DARABONBA_PTR_SET_VALUE(mixing_, mixing) };


  protected:
    std::shared_ptr<bool> mixing_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
