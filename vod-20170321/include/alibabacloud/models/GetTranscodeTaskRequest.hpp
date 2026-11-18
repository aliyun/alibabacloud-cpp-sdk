// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(TranscodeTaskId, transcodeTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(TranscodeTaskId, transcodeTaskId_);
    };
    GetTranscodeTaskRequest() = default ;
    GetTranscodeTaskRequest(const GetTranscodeTaskRequest &) = default ;
    GetTranscodeTaskRequest(GetTranscodeTaskRequest &&) = default ;
    GetTranscodeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskRequest() = default ;
    GetTranscodeTaskRequest& operator=(const GetTranscodeTaskRequest &) = default ;
    GetTranscodeTaskRequest& operator=(GetTranscodeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIds_ == nullptr
        && this->transcodeTaskId_ == nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string getJobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline GetTranscodeTaskRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // transcodeTaskId Field Functions 
    bool hasTranscodeTaskId() const { return this->transcodeTaskId_ != nullptr;};
    void deleteTranscodeTaskId() { this->transcodeTaskId_ = nullptr;};
    inline string getTranscodeTaskId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTaskId_, "") };
    inline GetTranscodeTaskRequest& setTranscodeTaskId(string transcodeTaskId) { DARABONBA_PTR_SET_VALUE(transcodeTaskId_, transcodeTaskId) };


  protected:
    // The IDs of the transcoding jobs. You can specify up to 10 IDs. Separate multiple IDs with commas (,). You can obtain the IDs by using the following method:
    // - Call the [SubmitTranscodeJobs](https://help.aliyun.com/document_detail/68570.html) operation to initiate a transcoding task. The ID is the value of the JobId response parameter.
    shared_ptr<string> jobIds_ {};
    // The transcoding task ID. You can obtain the ID by using one of the following methods:
    // - Call the [SubmitTranscodeJobs](https://help.aliyun.com/document_detail/68570.html) operation to initiate a transcoding task. The ID is the value of the TranscodeTaskId response parameter.
    // - Call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation to query transcoding tasks. The ID is the value of the TranscodeTaskId response parameter.
    shared_ptr<string> transcodeTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
