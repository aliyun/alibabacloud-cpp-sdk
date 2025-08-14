// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDIOTO2DAVATARVIDEOTASKREQUESTAUDIOINFO_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDIOTO2DAVATARVIDEOTASKREQUESTAUDIOINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo() = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo(const SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo &) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo(SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo &&) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo() = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo& operator=(const SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo &) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo& operator=(SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sampleRate_ != nullptr; };
    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    std::shared_ptr<int32_t> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
