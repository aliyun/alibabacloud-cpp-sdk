// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUploadTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
    };
    GetUploadTaskRequest() = default ;
    GetUploadTaskRequest(const GetUploadTaskRequest &) = default ;
    GetUploadTaskRequest(GetUploadTaskRequest &&) = default ;
    GetUploadTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadTaskRequest() = default ;
    GetUploadTaskRequest& operator=(const GetUploadTaskRequest &) = default ;
    GetUploadTaskRequest& operator=(GetUploadTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && return this->uploadId_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetUploadTaskRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline int64_t uploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, 0L) };
    inline GetUploadTaskRequest& setUploadId(int64_t uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


  protected:
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The ID of the file upload task. This field is assigned after you call the [UploadFile](https://help.aliyun.com/document_detail/2850466.html) operation.
    std::shared_ptr<int64_t> uploadId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
