// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCEUPLOADSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCEUPLOADSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetSourceUploadSignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceUploadSignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(expires, expires_);
      DARABONBA_PTR_TO_JSON(filename, filename_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceUploadSignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(expires, expires_);
      DARABONBA_PTR_FROM_JSON(filename, filename_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetSourceUploadSignatureRequest() = default ;
    GetSourceUploadSignatureRequest(const GetSourceUploadSignatureRequest &) = default ;
    GetSourceUploadSignatureRequest(GetSourceUploadSignatureRequest &&) = default ;
    GetSourceUploadSignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceUploadSignatureRequest() = default ;
    GetSourceUploadSignatureRequest& operator=(const GetSourceUploadSignatureRequest &) = default ;
    GetSourceUploadSignatureRequest& operator=(GetSourceUploadSignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->expires_ == nullptr && this->filename_ == nullptr && this->operatingObjectName_ == nullptr && this->scope_ == nullptr && this->tenantId_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetSourceUploadSignatureRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // expires Field Functions 
    bool hasExpires() const { return this->expires_ != nullptr;};
    void deleteExpires() { this->expires_ = nullptr;};
    inline int64_t getExpires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0L) };
    inline GetSourceUploadSignatureRequest& setExpires(int64_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GetSourceUploadSignatureRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline GetSourceUploadSignatureRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetSourceUploadSignatureRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetSourceUploadSignatureRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The content type. Valid values: Text and Markdown.
    shared_ptr<string> contentType_ {};
    // The expiration time of the signed URL, in seconds. Default value: 3600.
    shared_ptr<int64_t> expires_ {};
    // The file name.
    // 
    // This parameter is required.
    shared_ptr<string> filename_ {};
    // The name of the digital employee (operating object name). This parameter is optional.
    shared_ptr<string> operatingObjectName_ {};
    // The permission scope.
    shared_ptr<string> scope_ {};
    // The tenant ID to which the task belongs.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
