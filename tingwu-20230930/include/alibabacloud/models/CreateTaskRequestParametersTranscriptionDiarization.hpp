// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSTRANSCRIPTIONDIARIZATION_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSTRANSCRIPTIONDIARIZATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersTranscriptionDiarization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersTranscriptionDiarization& obj) { 
      DARABONBA_PTR_TO_JSON(SpeakerCount, speakerCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersTranscriptionDiarization& obj) { 
      DARABONBA_PTR_FROM_JSON(SpeakerCount, speakerCount_);
    };
    CreateTaskRequestParametersTranscriptionDiarization() = default ;
    CreateTaskRequestParametersTranscriptionDiarization(const CreateTaskRequestParametersTranscriptionDiarization &) = default ;
    CreateTaskRequestParametersTranscriptionDiarization(CreateTaskRequestParametersTranscriptionDiarization &&) = default ;
    CreateTaskRequestParametersTranscriptionDiarization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersTranscriptionDiarization() = default ;
    CreateTaskRequestParametersTranscriptionDiarization& operator=(const CreateTaskRequestParametersTranscriptionDiarization &) = default ;
    CreateTaskRequestParametersTranscriptionDiarization& operator=(CreateTaskRequestParametersTranscriptionDiarization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->speakerCount_ != nullptr; };
    // speakerCount Field Functions 
    bool hasSpeakerCount() const { return this->speakerCount_ != nullptr;};
    void deleteSpeakerCount() { this->speakerCount_ = nullptr;};
    inline int32_t speakerCount() const { DARABONBA_PTR_GET_DEFAULT(speakerCount_, 0) };
    inline CreateTaskRequestParametersTranscriptionDiarization& setSpeakerCount(int32_t speakerCount) { DARABONBA_PTR_SET_VALUE(speakerCount_, speakerCount) };


  protected:
    std::shared_ptr<int32_t> speakerCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
