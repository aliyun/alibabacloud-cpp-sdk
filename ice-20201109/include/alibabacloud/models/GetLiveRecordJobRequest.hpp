// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveRecordJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetLiveRecordJobRequest() = default ;
    GetLiveRecordJobRequest(const GetLiveRecordJobRequest &) = default ;
    GetLiveRecordJobRequest(GetLiveRecordJobRequest &&) = default ;
    GetLiveRecordJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordJobRequest() = default ;
    GetLiveRecordJobRequest& operator=(const GetLiveRecordJobRequest &) = default ;
    GetLiveRecordJobRequest& operator=(GetLiveRecordJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetLiveRecordJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the recording job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
