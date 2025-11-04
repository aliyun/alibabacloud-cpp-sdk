// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICEJOBRESPONSEBODYDATACUSTOMIZEDVOICEJOB_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICEJOBRESPONSEBODYDATACUSTOMIZEDVOICEJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VoiceDesc, voiceDesc_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VoiceDesc, voiceDesc_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
    };
    GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob() = default ;
    GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob(const GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob &) = default ;
    GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob(GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob &&) = default ;
    GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob() = default ;
    GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& operator=(const GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob &) = default ;
    GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& operator=(GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->gender_ == nullptr && return this->jobId_ == nullptr && return this->message_ == nullptr && return this->scenario_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr && return this->voiceDesc_ == nullptr && return this->voiceId_ == nullptr && return this->voiceName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // voiceDesc Field Functions 
    bool hasVoiceDesc() const { return this->voiceDesc_ != nullptr;};
    void deleteVoiceDesc() { this->voiceDesc_ = nullptr;};
    inline string voiceDesc() const { DARABONBA_PTR_GET_DEFAULT(voiceDesc_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setVoiceDesc(string voiceDesc) { DARABONBA_PTR_SET_VALUE(voiceDesc_, voiceDesc) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string voiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


  protected:
    // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The gender. Valid values:
    // 
    // *   female
    // *   male
    std::shared_ptr<string> gender_ = nullptr;
    // The ID of the human voice cloning job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The status description.
    std::shared_ptr<string> message_ = nullptr;
    // The scenario. Valid values:
    // 
    // *   story
    // *   interaction
    // *   navigation
    std::shared_ptr<string> scenario_ = nullptr;
    // The job state. Valid values:
    // 
    // *   Initialization
    // *   AudioDetecting
    // *   PreTraining
    // *   Training
    // *   Success
    // *   Fail
    std::shared_ptr<string> status_ = nullptr;
    // The type of the human voice cloning job. Valid values:
    // 
    // *   Basic
    // *   Standard
    std::shared_ptr<string> type_ = nullptr;
    // The voice description.
    std::shared_ptr<string> voiceDesc_ = nullptr;
    // The voice ID.
    std::shared_ptr<string> voiceId_ = nullptr;
    // The voice name.
    std::shared_ptr<string> voiceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
