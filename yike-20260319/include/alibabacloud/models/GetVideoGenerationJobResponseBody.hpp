// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOGENERATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOGENERATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class GetVideoGenerationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoGenerationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoGenerationJob, videoGenerationJob_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoGenerationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoGenerationJob, videoGenerationJob_);
    };
    GetVideoGenerationJobResponseBody() = default ;
    GetVideoGenerationJobResponseBody(const GetVideoGenerationJobResponseBody &) = default ;
    GetVideoGenerationJobResponseBody(GetVideoGenerationJobResponseBody &&) = default ;
    GetVideoGenerationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoGenerationJobResponseBody() = default ;
    GetVideoGenerationJobResponseBody& operator=(const GetVideoGenerationJobResponseBody &) = default ;
    GetVideoGenerationJobResponseBody& operator=(GetVideoGenerationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoGenerationJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoGenerationJob& obj) { 
        DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobParameters, jobParameters_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(N, n_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(Resolution, resolution_);
        DARABONBA_PTR_TO_JSON(Scene, scene_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, VideoGenerationJob& obj) { 
        DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobParameters, jobParameters_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(N, n_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      VideoGenerationJob() = default ;
      VideoGenerationJob(const VideoGenerationJob &) = default ;
      VideoGenerationJob(VideoGenerationJob &&) = default ;
      VideoGenerationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoGenerationJob() = default ;
      VideoGenerationJob& operator=(const VideoGenerationJob &) = default ;
      VideoGenerationJob& operator=(VideoGenerationJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aspectRatio_ == nullptr
        && this->duration_ == nullptr && this->errorMessage_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr && this->jobParameters_ == nullptr
        && this->jobType_ == nullptr && this->model_ == nullptr && this->n_ == nullptr && this->output_ == nullptr && this->resolution_ == nullptr
        && this->scene_ == nullptr && this->status_ == nullptr && this->userData_ == nullptr; };
      // aspectRatio Field Functions 
      bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
      void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
      inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
      inline VideoGenerationJob& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline VideoGenerationJob& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline VideoGenerationJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
      inline VideoGenerationJob& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline VideoGenerationJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobParameters Field Functions 
      bool hasJobParameters() const { return this->jobParameters_ != nullptr;};
      void deleteJobParameters() { this->jobParameters_ = nullptr;};
      inline string getJobParameters() const { DARABONBA_PTR_GET_DEFAULT(jobParameters_, "") };
      inline VideoGenerationJob& setJobParameters(string jobParameters) { DARABONBA_PTR_SET_VALUE(jobParameters_, jobParameters) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline VideoGenerationJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline VideoGenerationJob& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // n Field Functions 
      bool hasN() const { return this->n_ != nullptr;};
      void deleteN() { this->n_ = nullptr;};
      inline int32_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
      inline VideoGenerationJob& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline VideoGenerationJob& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline VideoGenerationJob& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline VideoGenerationJob& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VideoGenerationJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline VideoGenerationJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      shared_ptr<string> aspectRatio_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> input_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> jobParameters_ {};
      shared_ptr<string> jobType_ {};
      shared_ptr<string> model_ {};
      shared_ptr<int32_t> n_ {};
      shared_ptr<string> output_ {};
      shared_ptr<string> resolution_ {};
      shared_ptr<string> scene_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->videoGenerationJob_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoGenerationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoGenerationJob Field Functions 
    bool hasVideoGenerationJob() const { return this->videoGenerationJob_ != nullptr;};
    void deleteVideoGenerationJob() { this->videoGenerationJob_ = nullptr;};
    inline const GetVideoGenerationJobResponseBody::VideoGenerationJob & getVideoGenerationJob() const { DARABONBA_PTR_GET_CONST(videoGenerationJob_, GetVideoGenerationJobResponseBody::VideoGenerationJob) };
    inline GetVideoGenerationJobResponseBody::VideoGenerationJob getVideoGenerationJob() { DARABONBA_PTR_GET(videoGenerationJob_, GetVideoGenerationJobResponseBody::VideoGenerationJob) };
    inline GetVideoGenerationJobResponseBody& setVideoGenerationJob(const GetVideoGenerationJobResponseBody::VideoGenerationJob & videoGenerationJob) { DARABONBA_PTR_SET_VALUE(videoGenerationJob_, videoGenerationJob) };
    inline GetVideoGenerationJobResponseBody& setVideoGenerationJob(GetVideoGenerationJobResponseBody::VideoGenerationJob && videoGenerationJob) { DARABONBA_PTR_SET_RVALUE(videoGenerationJob_, videoGenerationJob) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetVideoGenerationJobResponseBody::VideoGenerationJob> videoGenerationJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
