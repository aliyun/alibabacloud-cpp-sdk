// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITUPLOADTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITUPLOADTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SubmitUploadTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitUploadTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitUploadTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
    };
    SubmitUploadTaskRequest() = default ;
    SubmitUploadTaskRequest(const SubmitUploadTaskRequest &) = default ;
    SubmitUploadTaskRequest(SubmitUploadTaskRequest &&) = default ;
    SubmitUploadTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitUploadTaskRequest() = default ;
    SubmitUploadTaskRequest& operator=(const SubmitUploadTaskRequest &) = default ;
    SubmitUploadTaskRequest& operator=(SubmitUploadTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && this->siteId_ == nullptr && this->uploadId_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline SubmitUploadTaskRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SubmitUploadTaskRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline int64_t getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, 0L) };
    inline SubmitUploadTaskRequest& setUploadId(int64_t uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


  protected:
    // Specifies whether to refresh resources in the corresponding directory if the requested content is different from that on the origin server. Default value: false. This parameter takes effect for a purge task.
    // 
    // *   **true**: purges all resources in the directory.
    // *   **false**: refresh the changed resources in the directory.
    shared_ptr<bool> force_ {};
    // The website ID. You can call the [ListSites](~~ListSites~~) operation to obtain the ID.
    shared_ptr<int64_t> siteId_ {};
    // The ID of the file upload task, which is generated when you call [UploadTask](~~UploadTask~~).
    shared_ptr<int64_t> uploadId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
