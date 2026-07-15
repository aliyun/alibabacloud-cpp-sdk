// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEGENERATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEGENERATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetImageGenerationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageGenerationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageGenerationJob, imageGenerationJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageGenerationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageGenerationJob, imageGenerationJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetImageGenerationJobResponseBody() = default ;
    GetImageGenerationJobResponseBody(const GetImageGenerationJobResponseBody &) = default ;
    GetImageGenerationJobResponseBody(GetImageGenerationJobResponseBody &&) = default ;
    GetImageGenerationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageGenerationJobResponseBody() = default ;
    GetImageGenerationJobResponseBody& operator=(const GetImageGenerationJobResponseBody &) = default ;
    GetImageGenerationJobResponseBody& operator=(GetImageGenerationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageGenerationJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageGenerationJob& obj) { 
        DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
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
      friend void from_json(const Darabonba::Json& j, ImageGenerationJob& obj) { 
        DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
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
      ImageGenerationJob() = default ;
      ImageGenerationJob(const ImageGenerationJob &) = default ;
      ImageGenerationJob(ImageGenerationJob &&) = default ;
      ImageGenerationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageGenerationJob() = default ;
      ImageGenerationJob& operator=(const ImageGenerationJob &) = default ;
      ImageGenerationJob& operator=(ImageGenerationJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aspectRatio_ == nullptr
        && this->errorMessage_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr && this->jobParameters_ == nullptr && this->jobType_ == nullptr
        && this->model_ == nullptr && this->n_ == nullptr && this->output_ == nullptr && this->resolution_ == nullptr && this->scene_ == nullptr
        && this->status_ == nullptr && this->userData_ == nullptr; };
      // aspectRatio Field Functions 
      bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
      void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
      inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
      inline ImageGenerationJob& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline ImageGenerationJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
      inline ImageGenerationJob& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline ImageGenerationJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobParameters Field Functions 
      bool hasJobParameters() const { return this->jobParameters_ != nullptr;};
      void deleteJobParameters() { this->jobParameters_ = nullptr;};
      inline string getJobParameters() const { DARABONBA_PTR_GET_DEFAULT(jobParameters_, "") };
      inline ImageGenerationJob& setJobParameters(string jobParameters) { DARABONBA_PTR_SET_VALUE(jobParameters_, jobParameters) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline ImageGenerationJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline ImageGenerationJob& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // n Field Functions 
      bool hasN() const { return this->n_ != nullptr;};
      void deleteN() { this->n_ = nullptr;};
      inline string getN() const { DARABONBA_PTR_GET_DEFAULT(n_, "") };
      inline ImageGenerationJob& setN(string n) { DARABONBA_PTR_SET_VALUE(n_, n) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline ImageGenerationJob& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline ImageGenerationJob& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline ImageGenerationJob& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ImageGenerationJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline ImageGenerationJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      shared_ptr<string> aspectRatio_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> input_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> jobParameters_ {};
      shared_ptr<string> jobType_ {};
      shared_ptr<string> model_ {};
      shared_ptr<string> n_ {};
      shared_ptr<string> output_ {};
      shared_ptr<string> resolution_ {};
      shared_ptr<string> scene_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->imageGenerationJob_ == nullptr
        && this->requestId_ == nullptr; };
    // imageGenerationJob Field Functions 
    bool hasImageGenerationJob() const { return this->imageGenerationJob_ != nullptr;};
    void deleteImageGenerationJob() { this->imageGenerationJob_ = nullptr;};
    inline const GetImageGenerationJobResponseBody::ImageGenerationJob & getImageGenerationJob() const { DARABONBA_PTR_GET_CONST(imageGenerationJob_, GetImageGenerationJobResponseBody::ImageGenerationJob) };
    inline GetImageGenerationJobResponseBody::ImageGenerationJob getImageGenerationJob() { DARABONBA_PTR_GET(imageGenerationJob_, GetImageGenerationJobResponseBody::ImageGenerationJob) };
    inline GetImageGenerationJobResponseBody& setImageGenerationJob(const GetImageGenerationJobResponseBody::ImageGenerationJob & imageGenerationJob) { DARABONBA_PTR_SET_VALUE(imageGenerationJob_, imageGenerationJob) };
    inline GetImageGenerationJobResponseBody& setImageGenerationJob(GetImageGenerationJobResponseBody::ImageGenerationJob && imageGenerationJob) { DARABONBA_PTR_SET_RVALUE(imageGenerationJob_, imageGenerationJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageGenerationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetImageGenerationJobResponseBody::ImageGenerationJob> imageGenerationJob_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
