// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLOCALFILEUPLOADJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLOCALFILEUPLOADJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryLocalFileUploadJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLocalFileUploadJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLocalFileUploadJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    QueryLocalFileUploadJobRequest() = default ;
    QueryLocalFileUploadJobRequest(const QueryLocalFileUploadJobRequest &) = default ;
    QueryLocalFileUploadJobRequest(QueryLocalFileUploadJobRequest &&) = default ;
    QueryLocalFileUploadJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLocalFileUploadJobRequest() = default ;
    QueryLocalFileUploadJobRequest& operator=(const QueryLocalFileUploadJobRequest &) = default ;
    QueryLocalFileUploadJobRequest& operator=(QueryLocalFileUploadJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iotInstanceId_ == nullptr
        && this->jobId_ == nullptr; };
    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryLocalFileUploadJobRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryLocalFileUploadJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The instance ID.
    // 
    // You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console. If the instance has an ID, you must specify this ID. Otherwise, the call fails.
    // 
    // > If the public instance does not have an ID, see [Obtain an instance ID](https://help.aliyun.com/document_detail/267533.html).
    shared_ptr<string> iotInstanceId_ {};
    // The ID of the local video recording upload task. The task is created by calling [CreateLocalFileUploadJob](https://help.aliyun.com/document_detail/363002.html).
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
