// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMIZEDVOICEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMIZEDVOICEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitCustomizedVoiceJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomizedVoiceJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomizedVoiceJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
    };
    SubmitCustomizedVoiceJobResponseBodyData() = default ;
    SubmitCustomizedVoiceJobResponseBodyData(const SubmitCustomizedVoiceJobResponseBodyData &) = default ;
    SubmitCustomizedVoiceJobResponseBodyData(SubmitCustomizedVoiceJobResponseBodyData &&) = default ;
    SubmitCustomizedVoiceJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomizedVoiceJobResponseBodyData() = default ;
    SubmitCustomizedVoiceJobResponseBodyData& operator=(const SubmitCustomizedVoiceJobResponseBodyData &) = default ;
    SubmitCustomizedVoiceJobResponseBodyData& operator=(SubmitCustomizedVoiceJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->voiceId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitCustomizedVoiceJobResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline SubmitCustomizedVoiceJobResponseBodyData& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
    // The ID of the human voice cloning job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The voice ID.
    std::shared_ptr<string> voiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
