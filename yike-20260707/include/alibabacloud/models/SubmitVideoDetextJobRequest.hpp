// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEODETEXTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEODETEXTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoDetextJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoDetextJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobParameters, jobParameters_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoDetextJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobParameters, jobParameters_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitVideoDetextJobRequest() = default ;
    SubmitVideoDetextJobRequest(const SubmitVideoDetextJobRequest &) = default ;
    SubmitVideoDetextJobRequest(SubmitVideoDetextJobRequest &&) = default ;
    SubmitVideoDetextJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoDetextJobRequest() = default ;
    SubmitVideoDetextJobRequest& operator=(const SubmitVideoDetextJobRequest &) = default ;
    SubmitVideoDetextJobRequest& operator=(SubmitVideoDetextJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->input_ == nullptr && this->jobParameters_ == nullptr && this->output_ == nullptr && this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitVideoDetextJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitVideoDetextJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // jobParameters Field Functions 
    bool hasJobParameters() const { return this->jobParameters_ != nullptr;};
    void deleteJobParameters() { this->jobParameters_ = nullptr;};
    inline string getJobParameters() const { DARABONBA_PTR_GET_DEFAULT(jobParameters_, "") };
    inline SubmitVideoDetextJobRequest& setJobParameters(string jobParameters) { DARABONBA_PTR_SET_VALUE(jobParameters_, jobParameters) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline SubmitVideoDetextJobRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoDetextJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The user-level idempotency token. The token can be up to 40 characters in length. If the same user submits a request with the same token, the original task is returned.
    shared_ptr<string> clientToken_ {};
    // The input configuration JSON string. You must specify either VideoUrl or VideoMediaId, but not both.
    // 
    // This parameter is required.
    shared_ptr<string> input_ {};
    // The text erasure parameter JSON string. This parameter can contain EraseAllText, TimeRanges, TextTargets, FullEraseTargets, and Config.
    shared_ptr<string> jobParameters_ {};
    // The output configuration JSON string. You can use OssUri to specify the customer\\"s OSS bucket. If a directory is specified, the output file is named detext.mp4.
    shared_ptr<string> output_ {};
    // The custom user data JSON string. This parameter can contain the asynchronous notification address NotifyAddress.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
