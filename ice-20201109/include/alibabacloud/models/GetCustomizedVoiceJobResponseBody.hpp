// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomizedVoiceJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizedVoiceJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizedVoiceJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomizedVoiceJobResponseBody() = default ;
    GetCustomizedVoiceJobResponseBody(const GetCustomizedVoiceJobResponseBody &) = default ;
    GetCustomizedVoiceJobResponseBody(GetCustomizedVoiceJobResponseBody &&) = default ;
    GetCustomizedVoiceJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizedVoiceJobResponseBody() = default ;
    GetCustomizedVoiceJobResponseBody& operator=(const GetCustomizedVoiceJobResponseBody &) = default ;
    GetCustomizedVoiceJobResponseBody& operator=(GetCustomizedVoiceJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomizedVoiceJob, customizedVoiceJob_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomizedVoiceJob, customizedVoiceJob_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomizedVoiceJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomizedVoiceJob& obj) { 
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
        friend void from_json(const Darabonba::Json& j, CustomizedVoiceJob& obj) { 
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
        CustomizedVoiceJob() = default ;
        CustomizedVoiceJob(const CustomizedVoiceJob &) = default ;
        CustomizedVoiceJob(CustomizedVoiceJob &&) = default ;
        CustomizedVoiceJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomizedVoiceJob() = default ;
        CustomizedVoiceJob& operator=(const CustomizedVoiceJob &) = default ;
        CustomizedVoiceJob& operator=(CustomizedVoiceJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->gender_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->scenario_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr && this->voiceDesc_ == nullptr && this->voiceId_ == nullptr && this->voiceName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline CustomizedVoiceJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
        inline CustomizedVoiceJob& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline CustomizedVoiceJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline CustomizedVoiceJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // scenario Field Functions 
        bool hasScenario() const { return this->scenario_ != nullptr;};
        void deleteScenario() { this->scenario_ = nullptr;};
        inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
        inline CustomizedVoiceJob& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CustomizedVoiceJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CustomizedVoiceJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // voiceDesc Field Functions 
        bool hasVoiceDesc() const { return this->voiceDesc_ != nullptr;};
        void deleteVoiceDesc() { this->voiceDesc_ = nullptr;};
        inline string getVoiceDesc() const { DARABONBA_PTR_GET_DEFAULT(voiceDesc_, "") };
        inline CustomizedVoiceJob& setVoiceDesc(string voiceDesc) { DARABONBA_PTR_SET_VALUE(voiceDesc_, voiceDesc) };


        // voiceId Field Functions 
        bool hasVoiceId() const { return this->voiceId_ != nullptr;};
        void deleteVoiceId() { this->voiceId_ = nullptr;};
        inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
        inline CustomizedVoiceJob& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


        // voiceName Field Functions 
        bool hasVoiceName() const { return this->voiceName_ != nullptr;};
        void deleteVoiceName() { this->voiceName_ = nullptr;};
        inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
        inline CustomizedVoiceJob& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


      protected:
        // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The gender. Valid values:
        // 
        // *   female
        // *   male
        shared_ptr<string> gender_ {};
        // The ID of the human voice cloning job.
        shared_ptr<string> jobId_ {};
        // The status description.
        shared_ptr<string> message_ {};
        // The scenario. Valid values:
        // 
        // *   story
        // *   interaction
        // *   navigation
        shared_ptr<string> scenario_ {};
        // The job state. Valid values:
        // 
        // *   Initialization
        // *   AudioDetecting
        // *   PreTraining
        // *   Training
        // *   Success
        // *   Fail
        shared_ptr<string> status_ {};
        // The type of the human voice cloning job. Valid values:
        // 
        // *   Basic
        // *   Standard
        shared_ptr<string> type_ {};
        // The voice description.
        shared_ptr<string> voiceDesc_ {};
        // The voice ID.
        shared_ptr<string> voiceId_ {};
        // The voice name.
        shared_ptr<string> voiceName_ {};
      };

      virtual bool empty() const override { return this->customizedVoiceJob_ == nullptr; };
      // customizedVoiceJob Field Functions 
      bool hasCustomizedVoiceJob() const { return this->customizedVoiceJob_ != nullptr;};
      void deleteCustomizedVoiceJob() { this->customizedVoiceJob_ = nullptr;};
      inline const Data::CustomizedVoiceJob & getCustomizedVoiceJob() const { DARABONBA_PTR_GET_CONST(customizedVoiceJob_, Data::CustomizedVoiceJob) };
      inline Data::CustomizedVoiceJob getCustomizedVoiceJob() { DARABONBA_PTR_GET(customizedVoiceJob_, Data::CustomizedVoiceJob) };
      inline Data& setCustomizedVoiceJob(const Data::CustomizedVoiceJob & customizedVoiceJob) { DARABONBA_PTR_SET_VALUE(customizedVoiceJob_, customizedVoiceJob) };
      inline Data& setCustomizedVoiceJob(Data::CustomizedVoiceJob && customizedVoiceJob) { DARABONBA_PTR_SET_RVALUE(customizedVoiceJob_, customizedVoiceJob) };


    protected:
      // The information about the human voice cloning job.
      shared_ptr<Data::CustomizedVoiceJob> customizedVoiceJob_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomizedVoiceJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomizedVoiceJobResponseBody::Data) };
    inline GetCustomizedVoiceJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomizedVoiceJobResponseBody::Data) };
    inline GetCustomizedVoiceJobResponseBody& setData(const GetCustomizedVoiceJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomizedVoiceJobResponseBody& setData(GetCustomizedVoiceJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomizedVoiceJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomizedVoiceJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned if the request was successful.
    shared_ptr<GetCustomizedVoiceJobResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
