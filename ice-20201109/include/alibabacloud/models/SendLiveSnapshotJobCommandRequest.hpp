// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIVESNAPSHOTJOBCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDLIVESNAPSHOTJOBCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SendLiveSnapshotJobCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLiveSnapshotJobCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, SendLiveSnapshotJobCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    SendLiveSnapshotJobCommandRequest() = default ;
    SendLiveSnapshotJobCommandRequest(const SendLiveSnapshotJobCommandRequest &) = default ;
    SendLiveSnapshotJobCommandRequest(SendLiveSnapshotJobCommandRequest &&) = default ;
    SendLiveSnapshotJobCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLiveSnapshotJobCommandRequest() = default ;
    SendLiveSnapshotJobCommandRequest& operator=(const SendLiveSnapshotJobCommandRequest &) = default ;
    SendLiveSnapshotJobCommandRequest& operator=(SendLiveSnapshotJobCommandRequest &&) = default ;
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
    inline SendLiveSnapshotJobCommandRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SendLiveSnapshotJobCommandRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The operation command.
    // 
    // Valid values:
    // 
    // *   stop
    // *   restart
    // *   start
    // 
    // This parameter is required.
    std::shared_ptr<string> command_ = nullptr;
    // The ID of the snapshot job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
