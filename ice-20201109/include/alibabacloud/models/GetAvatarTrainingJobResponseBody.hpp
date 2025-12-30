// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVATARTRAININGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAVATARTRAININGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAvatarTrainingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvatarTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvatarTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAvatarTrainingJobResponseBody() = default ;
    GetAvatarTrainingJobResponseBody(const GetAvatarTrainingJobResponseBody &) = default ;
    GetAvatarTrainingJobResponseBody(GetAvatarTrainingJobResponseBody &&) = default ;
    GetAvatarTrainingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvatarTrainingJobResponseBody() = default ;
    GetAvatarTrainingJobResponseBody& operator=(const GetAvatarTrainingJobResponseBody &) = default ;
    GetAvatarTrainingJobResponseBody& operator=(GetAvatarTrainingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarTrainingJob, avatarTrainingJob_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarTrainingJob, avatarTrainingJob_);
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
      class AvatarTrainingJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvatarTrainingJob& obj) { 
          DARABONBA_PTR_TO_JSON(AvatarDescription, avatarDescription_);
          DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
          DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
          DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
          DARABONBA_PTR_TO_JSON(FirstTrainingTime, firstTrainingTime_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(LastTrainingTime, lastTrainingTime_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Portrait, portrait_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
          DARABONBA_PTR_TO_JSON(Transparent, transparent_);
          DARABONBA_PTR_TO_JSON(Video, video_);
        };
        friend void from_json(const Darabonba::Json& j, AvatarTrainingJob& obj) { 
          DARABONBA_PTR_FROM_JSON(AvatarDescription, avatarDescription_);
          DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
          DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
          DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
          DARABONBA_PTR_FROM_JSON(FirstTrainingTime, firstTrainingTime_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(LastTrainingTime, lastTrainingTime_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
          DARABONBA_PTR_FROM_JSON(Transparent, transparent_);
          DARABONBA_PTR_FROM_JSON(Video, video_);
        };
        AvatarTrainingJob() = default ;
        AvatarTrainingJob(const AvatarTrainingJob &) = default ;
        AvatarTrainingJob(AvatarTrainingJob &&) = default ;
        AvatarTrainingJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvatarTrainingJob() = default ;
        AvatarTrainingJob& operator=(const AvatarTrainingJob &) = default ;
        AvatarTrainingJob& operator=(AvatarTrainingJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avatarDescription_ == nullptr
        && this->avatarId_ == nullptr && this->avatarName_ == nullptr && this->avatarType_ == nullptr && this->firstTrainingTime_ == nullptr && this->jobId_ == nullptr
        && this->lastTrainingTime_ == nullptr && this->message_ == nullptr && this->portrait_ == nullptr && this->status_ == nullptr && this->thumbnail_ == nullptr
        && this->transparent_ == nullptr && this->video_ == nullptr; };
        // avatarDescription Field Functions 
        bool hasAvatarDescription() const { return this->avatarDescription_ != nullptr;};
        void deleteAvatarDescription() { this->avatarDescription_ = nullptr;};
        inline string getAvatarDescription() const { DARABONBA_PTR_GET_DEFAULT(avatarDescription_, "") };
        inline AvatarTrainingJob& setAvatarDescription(string avatarDescription) { DARABONBA_PTR_SET_VALUE(avatarDescription_, avatarDescription) };


        // avatarId Field Functions 
        bool hasAvatarId() const { return this->avatarId_ != nullptr;};
        void deleteAvatarId() { this->avatarId_ = nullptr;};
        inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
        inline AvatarTrainingJob& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


        // avatarName Field Functions 
        bool hasAvatarName() const { return this->avatarName_ != nullptr;};
        void deleteAvatarName() { this->avatarName_ = nullptr;};
        inline string getAvatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
        inline AvatarTrainingJob& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


        // avatarType Field Functions 
        bool hasAvatarType() const { return this->avatarType_ != nullptr;};
        void deleteAvatarType() { this->avatarType_ = nullptr;};
        inline string getAvatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
        inline AvatarTrainingJob& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


        // firstTrainingTime Field Functions 
        bool hasFirstTrainingTime() const { return this->firstTrainingTime_ != nullptr;};
        void deleteFirstTrainingTime() { this->firstTrainingTime_ = nullptr;};
        inline string getFirstTrainingTime() const { DARABONBA_PTR_GET_DEFAULT(firstTrainingTime_, "") };
        inline AvatarTrainingJob& setFirstTrainingTime(string firstTrainingTime) { DARABONBA_PTR_SET_VALUE(firstTrainingTime_, firstTrainingTime) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline AvatarTrainingJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // lastTrainingTime Field Functions 
        bool hasLastTrainingTime() const { return this->lastTrainingTime_ != nullptr;};
        void deleteLastTrainingTime() { this->lastTrainingTime_ = nullptr;};
        inline string getLastTrainingTime() const { DARABONBA_PTR_GET_DEFAULT(lastTrainingTime_, "") };
        inline AvatarTrainingJob& setLastTrainingTime(string lastTrainingTime) { DARABONBA_PTR_SET_VALUE(lastTrainingTime_, lastTrainingTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AvatarTrainingJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // portrait Field Functions 
        bool hasPortrait() const { return this->portrait_ != nullptr;};
        void deletePortrait() { this->portrait_ = nullptr;};
        inline string getPortrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
        inline AvatarTrainingJob& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AvatarTrainingJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // thumbnail Field Functions 
        bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
        void deleteThumbnail() { this->thumbnail_ = nullptr;};
        inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
        inline AvatarTrainingJob& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


        // transparent Field Functions 
        bool hasTransparent() const { return this->transparent_ != nullptr;};
        void deleteTransparent() { this->transparent_ = nullptr;};
        inline bool getTransparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
        inline AvatarTrainingJob& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


        // video Field Functions 
        bool hasVideo() const { return this->video_ != nullptr;};
        void deleteVideo() { this->video_ = nullptr;};
        inline string getVideo() const { DARABONBA_PTR_GET_DEFAULT(video_, "") };
        inline AvatarTrainingJob& setVideo(string video) { DARABONBA_PTR_SET_VALUE(video_, video) };


      protected:
        // The description of the digital human.
        shared_ptr<string> avatarDescription_ {};
        // The ID of the digital human.
        shared_ptr<string> avatarId_ {};
        // The name of the digital human.
        shared_ptr<string> avatarName_ {};
        // The type of the digital human.
        shared_ptr<string> avatarType_ {};
        // *   The time when the first training was initiated.
        // *   The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> firstTrainingTime_ {};
        // The ID of the digital human training job.
        shared_ptr<string> jobId_ {};
        // *   The time when the last training was initiated.
        // *   The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> lastTrainingTime_ {};
        // The status description.
        shared_ptr<string> message_ {};
        // The media asset ID of the portrait image.
        shared_ptr<string> portrait_ {};
        // *   The state of the digital human training job.
        // *   Valid values: Init, Queuing, Training, Success, and Fail.
        shared_ptr<string> status_ {};
        // The thumbnail URL.
        shared_ptr<string> thumbnail_ {};
        // Indicates whether the input video supports alpha channels.
        shared_ptr<bool> transparent_ {};
        // The ID of the video used for training.
        shared_ptr<string> video_ {};
      };

      virtual bool empty() const override { return this->avatarTrainingJob_ == nullptr; };
      // avatarTrainingJob Field Functions 
      bool hasAvatarTrainingJob() const { return this->avatarTrainingJob_ != nullptr;};
      void deleteAvatarTrainingJob() { this->avatarTrainingJob_ = nullptr;};
      inline const Data::AvatarTrainingJob & getAvatarTrainingJob() const { DARABONBA_PTR_GET_CONST(avatarTrainingJob_, Data::AvatarTrainingJob) };
      inline Data::AvatarTrainingJob getAvatarTrainingJob() { DARABONBA_PTR_GET(avatarTrainingJob_, Data::AvatarTrainingJob) };
      inline Data& setAvatarTrainingJob(const Data::AvatarTrainingJob & avatarTrainingJob) { DARABONBA_PTR_SET_VALUE(avatarTrainingJob_, avatarTrainingJob) };
      inline Data& setAvatarTrainingJob(Data::AvatarTrainingJob && avatarTrainingJob) { DARABONBA_PTR_SET_RVALUE(avatarTrainingJob_, avatarTrainingJob) };


    protected:
      // The information about the digital human training job.
      shared_ptr<Data::AvatarTrainingJob> avatarTrainingJob_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAvatarTrainingJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAvatarTrainingJobResponseBody::Data) };
    inline GetAvatarTrainingJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAvatarTrainingJobResponseBody::Data) };
    inline GetAvatarTrainingJobResponseBody& setData(const GetAvatarTrainingJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAvatarTrainingJobResponseBody& setData(GetAvatarTrainingJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAvatarTrainingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAvatarTrainingJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned if the request was successful.
    shared_ptr<GetAvatarTrainingJobResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
