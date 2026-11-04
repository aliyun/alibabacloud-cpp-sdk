// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPICTURESEARCHJOBSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPICTURESEARCHJOBSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class GetPictureSearchJobStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPictureSearchJobStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPictureSearchJobStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetPictureSearchJobStatusRequest() = default ;
    GetPictureSearchJobStatusRequest(const GetPictureSearchJobStatusRequest &) = default ;
    GetPictureSearchJobStatusRequest(GetPictureSearchJobStatusRequest &&) = default ;
    GetPictureSearchJobStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPictureSearchJobStatusRequest() = default ;
    GetPictureSearchJobStatusRequest& operator=(const GetPictureSearchJobStatusRequest &) = default ;
    GetPictureSearchJobStatusRequest& operator=(GetPictureSearchJobStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && this->jobId_ == nullptr; };
    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline GetPictureSearchJobStatusRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetPictureSearchJobStatusRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // Instance ID of the image search application instance. You can call the [QueryPictureSearchApps](https://help.aliyun.com/document_detail/206608.html) operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceId_ {};
    // The ID of the image search task. You can call the [QueryPictureSearchJob](https://help.aliyun.com/document_detail/206778.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
