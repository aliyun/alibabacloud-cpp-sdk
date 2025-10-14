// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UploadFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UploadTaskName, uploadTaskName_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, UploadFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UploadTaskName, uploadTaskName_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    UploadFileRequest() = default ;
    UploadFileRequest(const UploadFileRequest &) = default ;
    UploadFileRequest(UploadFileRequest &&) = default ;
    UploadFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadFileRequest() = default ;
    UploadFileRequest& operator=(const UploadFileRequest &) = default ;
    UploadFileRequest& operator=(UploadFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && return this->type_ == nullptr && return this->uploadTaskName_ == nullptr && return this->url_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UploadFileRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UploadFileRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uploadTaskName Field Functions 
    bool hasUploadTaskName() const { return this->uploadTaskName_ != nullptr;};
    void deleteUploadTaskName() { this->uploadTaskName_ = nullptr;};
    inline string uploadTaskName() const { DARABONBA_PTR_GET_DEFAULT(uploadTaskName_, "") };
    inline UploadFileRequest& setUploadTaskName(string uploadTaskName) { DARABONBA_PTR_SET_VALUE(uploadTaskName_, uploadTaskName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UploadFileRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The website ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The type of the purge or prefetch task. Valid values:
    // 
    // *   **file** (default): purges the cache by file.
    // *   **preload**: prefetches the file.
    // *   **directory**: purges the cache by directory.
    // *   **ignoreParams**: purges the cache by URL with specified parameters ignored.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The name of the upload task.
    // 
    // This parameter is required.
    std::shared_ptr<string> uploadTaskName_ = nullptr;
    // The OSS URL of the file that contains resources to be purged or prefetched.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
