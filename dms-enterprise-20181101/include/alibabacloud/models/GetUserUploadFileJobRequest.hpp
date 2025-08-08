// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserUploadFileJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserUploadFileJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserUploadFileJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetUserUploadFileJobRequest() = default ;
    GetUserUploadFileJobRequest(const GetUserUploadFileJobRequest &) = default ;
    GetUserUploadFileJobRequest(GetUserUploadFileJobRequest &&) = default ;
    GetUserUploadFileJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserUploadFileJobRequest() = default ;
    GetUserUploadFileJobRequest& operator=(const GetUserUploadFileJobRequest &) = default ;
    GetUserUploadFileJobRequest& operator=(GetUserUploadFileJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobKey_ != nullptr
        && this->tid_ != nullptr; };
    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string jobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline GetUserUploadFileJobRequest& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetUserUploadFileJobRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the file upload task. The key is returned when you call the [CreateUploadFileJob](https://help.aliyun.com/document_detail/206059.html) or [CreateUploadOSSFileJob](https://help.aliyun.com/document_detail/206060.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobKey_ = nullptr;
    // The tenant ID.
    // 
    // > To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
