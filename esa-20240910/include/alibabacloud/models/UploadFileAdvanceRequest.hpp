// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UploadFileAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UploadTaskName, uploadTaskName_);
      // urlObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, UploadFileAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UploadTaskName, uploadTaskName_);
      // urlObject_ is stream
    };
    UploadFileAdvanceRequest() = default ;
    UploadFileAdvanceRequest(const UploadFileAdvanceRequest &) = default ;
    UploadFileAdvanceRequest(UploadFileAdvanceRequest &&) = default ;
    UploadFileAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadFileAdvanceRequest() = default ;
    UploadFileAdvanceRequest& operator=(const UploadFileAdvanceRequest &) = default ;
    UploadFileAdvanceRequest& operator=(UploadFileAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && this->type_ == nullptr && this->uploadTaskName_ == nullptr && this->urlObject_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UploadFileAdvanceRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UploadFileAdvanceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uploadTaskName Field Functions 
    bool hasUploadTaskName() const { return this->uploadTaskName_ != nullptr;};
    void deleteUploadTaskName() { this->uploadTaskName_ = nullptr;};
    inline string getUploadTaskName() const { DARABONBA_PTR_GET_DEFAULT(uploadTaskName_, "") };
    inline UploadFileAdvanceRequest& setUploadTaskName(string uploadTaskName) { DARABONBA_PTR_SET_VALUE(uploadTaskName_, uploadTaskName) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getUrlObject() const { DARABONBA_GET(urlObject_) };
    inline UploadFileAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    // The website ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The type of the purge or prefetch task. Valid values:
    // 
    // *   **file** (default): purges the cache by file.
    // *   **preload**: prefetches the file.
    // *   **directory**: purges the cache by directory.
    // *   **ignoreParams**: purges the cache by URL with specified parameters ignored.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The name of the upload task.
    // 
    // This parameter is required.
    shared_ptr<string> uploadTaskName_ {};
    // The OSS URL of the file that contains resources to be purged or prefetched.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
