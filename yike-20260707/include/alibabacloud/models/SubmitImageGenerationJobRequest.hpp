// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGEGENERATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGEGENERATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitImageGenerationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageGenerationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobParameters, jobParameters_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageGenerationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobParameters, jobParameters_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitImageGenerationJobRequest() = default ;
    SubmitImageGenerationJobRequest(const SubmitImageGenerationJobRequest &) = default ;
    SubmitImageGenerationJobRequest(SubmitImageGenerationJobRequest &&) = default ;
    SubmitImageGenerationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageGenerationJobRequest() = default ;
    SubmitImageGenerationJobRequest& operator=(const SubmitImageGenerationJobRequest &) = default ;
    SubmitImageGenerationJobRequest& operator=(SubmitImageGenerationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aspectRatio_ == nullptr
        && this->clientToken_ == nullptr && this->input_ == nullptr && this->jobParameters_ == nullptr && this->jobType_ == nullptr && this->model_ == nullptr
        && this->n_ == nullptr && this->resolution_ == nullptr && this->scene_ == nullptr && this->userData_ == nullptr; };
    // aspectRatio Field Functions 
    bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
    void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
    inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
    inline SubmitImageGenerationJobRequest& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitImageGenerationJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitImageGenerationJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // jobParameters Field Functions 
    bool hasJobParameters() const { return this->jobParameters_ != nullptr;};
    void deleteJobParameters() { this->jobParameters_ = nullptr;};
    inline string getJobParameters() const { DARABONBA_PTR_GET_DEFAULT(jobParameters_, "") };
    inline SubmitImageGenerationJobRequest& setJobParameters(string jobParameters) { DARABONBA_PTR_SET_VALUE(jobParameters_, jobParameters) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline SubmitImageGenerationJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SubmitImageGenerationJobRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline string getN() const { DARABONBA_PTR_GET_DEFAULT(n_, "") };
    inline SubmitImageGenerationJobRequest& setN(string n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline SubmitImageGenerationJobRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SubmitImageGenerationJobRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitImageGenerationJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> aspectRatio_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> input_ {};
    shared_ptr<string> jobParameters_ {};
    shared_ptr<string> jobType_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> n_ {};
    shared_ptr<string> resolution_ {};
    shared_ptr<string> scene_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
