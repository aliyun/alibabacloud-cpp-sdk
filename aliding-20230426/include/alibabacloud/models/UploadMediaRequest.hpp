// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadMediaRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UploadMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(mediaName, mediaName_);
      DARABONBA_PTR_TO_JSON(mediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(mediaName, mediaName_);
      DARABONBA_PTR_FROM_JSON(mediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    UploadMediaRequest() = default ;
    UploadMediaRequest(const UploadMediaRequest &) = default ;
    UploadMediaRequest(UploadMediaRequest &&) = default ;
    UploadMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMediaRequest() = default ;
    UploadMediaRequest& operator=(const UploadMediaRequest &) = default ;
    UploadMediaRequest& operator=(UploadMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->mediaName_ != nullptr && this->mediaType_ != nullptr && this->orgId_ != nullptr && this->url_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UploadMediaRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UploadMediaRequestTenantContext) };
    inline UploadMediaRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UploadMediaRequestTenantContext) };
    inline UploadMediaRequest& setTenantContext(const UploadMediaRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UploadMediaRequest& setTenantContext(UploadMediaRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // mediaName Field Functions 
    bool hasMediaName() const { return this->mediaName_ != nullptr;};
    void deleteMediaName() { this->mediaName_ = nullptr;};
    inline string mediaName() const { DARABONBA_PTR_GET_DEFAULT(mediaName_, "") };
    inline UploadMediaRequest& setMediaName(string mediaName) { DARABONBA_PTR_SET_VALUE(mediaName_, mediaName) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline UploadMediaRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline UploadMediaRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UploadMediaRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<UploadMediaRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<string> mediaName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mediaType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orgId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
