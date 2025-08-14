// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIVETRANSCODEJOBCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDLIVETRANSCODEJOBCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SendLiveTranscodeJobCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLiveTranscodeJobCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, SendLiveTranscodeJobCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    SendLiveTranscodeJobCommandRequest() = default ;
    SendLiveTranscodeJobCommandRequest(const SendLiveTranscodeJobCommandRequest &) = default ;
    SendLiveTranscodeJobCommandRequest(SendLiveTranscodeJobCommandRequest &&) = default ;
    SendLiveTranscodeJobCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLiveTranscodeJobCommandRequest() = default ;
    SendLiveTranscodeJobCommandRequest& operator=(const SendLiveTranscodeJobCommandRequest &) = default ;
    SendLiveTranscodeJobCommandRequest& operator=(SendLiveTranscodeJobCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr
        && this->jobId_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline SendLiveTranscodeJobCommandRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SendLiveTranscodeJobCommandRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The operation command. Only the stop command is supported. This command is used to stop a transcoding job.
    // 
    // This parameter is required.
    std::shared_ptr<string> command_ = nullptr;
    // The ID of the transcoding job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
