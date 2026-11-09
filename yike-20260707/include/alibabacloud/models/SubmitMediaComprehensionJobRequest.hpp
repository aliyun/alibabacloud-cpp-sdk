// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIACOMPREHENSIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIACOMPREHENSIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitMediaComprehensionJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaComprehensionJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaComprehensionJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitMediaComprehensionJobRequest() = default ;
    SubmitMediaComprehensionJobRequest(const SubmitMediaComprehensionJobRequest &) = default ;
    SubmitMediaComprehensionJobRequest(SubmitMediaComprehensionJobRequest &&) = default ;
    SubmitMediaComprehensionJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaComprehensionJobRequest() = default ;
    SubmitMediaComprehensionJobRequest& operator=(const SubmitMediaComprehensionJobRequest &) = default ;
    SubmitMediaComprehensionJobRequest& operator=(SubmitMediaComprehensionJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && this->jobParams_ == nullptr && this->jobType_ == nullptr && this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitMediaComprehensionJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline SubmitMediaComprehensionJobRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline SubmitMediaComprehensionJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaComprehensionJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input material. It is a JSON string with the following structure:
    // 
    // - Medias (Array<Object>, required): The list of media assets. It contains 1 to 10 elements. Each element includes the following fields:
    //   - Type (String, required): The type of the media asset. Valid values: video and image. The value is not case-sensitive.
    //   - Url (String, mutually exclusive with MediaId): The URL of the media asset. It must start with http:// or https:// and be up to 2,048 characters in length. Unregistered URLs are automatically registered as media assets.
    //   - MediaId (String, mutually exclusive with Url): The ID of the registered media asset. If both Url and MediaId are specified, MediaId takes precedence.
    shared_ptr<string> input_ {};
    // The analysis parameters. It is a JSON string with a maximum length of 65,536 characters and a maximum of 20 fields.
    shared_ptr<string> jobParams_ {};
    // The job type. Valid values:
    // 
    // - VideoBreakdown: viral video breakdown. The Medias array must contain exactly one element with Type set to video.
    // - ProductRecognition: product image information recognition. All elements in the Medias array must have Type set to image.
    shared_ptr<string> jobType_ {};
    // The custom parameters. It is a JSON string that is returned as-is in the callback result, such as newsKey. NotifyAddress is a system-reserved field for the callback URL. A callback is triggered to this URL after the job is completed.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
