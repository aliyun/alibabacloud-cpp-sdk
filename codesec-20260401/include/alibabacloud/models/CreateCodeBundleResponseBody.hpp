// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECODEBUNDLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECODEBUNDLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateCodeBundleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCodeBundleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(bundleVersion, bundleVersion_);
      DARABONBA_PTR_TO_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(filename, filename_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(upload, upload_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCodeBundleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(bundleVersion, bundleVersion_);
      DARABONBA_PTR_FROM_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(filename, filename_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(upload, upload_);
    };
    CreateCodeBundleResponseBody() = default ;
    CreateCodeBundleResponseBody(const CreateCodeBundleResponseBody &) = default ;
    CreateCodeBundleResponseBody(CreateCodeBundleResponseBody &&) = default ;
    CreateCodeBundleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCodeBundleResponseBody() = default ;
    CreateCodeBundleResponseBody& operator=(const CreateCodeBundleResponseBody &) = default ;
    CreateCodeBundleResponseBody& operator=(CreateCodeBundleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Upload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Upload& obj) { 
        DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(method, method_);
        DARABONBA_PTR_TO_JSON(putUrl, putUrl_);
        DARABONBA_PTR_TO_JSON(requiredContentType, requiredContentType_);
      };
      friend void from_json(const Darabonba::Json& j, Upload& obj) { 
        DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(method, method_);
        DARABONBA_PTR_FROM_JSON(putUrl, putUrl_);
        DARABONBA_PTR_FROM_JSON(requiredContentType, requiredContentType_);
      };
      Upload() = default ;
      Upload(const Upload &) = default ;
      Upload(Upload &&) = default ;
      Upload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Upload() = default ;
      Upload& operator=(const Upload &) = default ;
      Upload& operator=(Upload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expiresAt_ == nullptr
        && this->method_ == nullptr && this->putUrl_ == nullptr && this->requiredContentType_ == nullptr; };
      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
      inline Upload& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Upload& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // putUrl Field Functions 
      bool hasPutUrl() const { return this->putUrl_ != nullptr;};
      void deletePutUrl() { this->putUrl_ = nullptr;};
      inline string getPutUrl() const { DARABONBA_PTR_GET_DEFAULT(putUrl_, "") };
      inline Upload& setPutUrl(string putUrl) { DARABONBA_PTR_SET_VALUE(putUrl_, putUrl) };


      // requiredContentType Field Functions 
      bool hasRequiredContentType() const { return this->requiredContentType_ != nullptr;};
      void deleteRequiredContentType() { this->requiredContentType_ = nullptr;};
      inline string getRequiredContentType() const { DARABONBA_PTR_GET_DEFAULT(requiredContentType_, "") };
      inline Upload& setRequiredContentType(string requiredContentType) { DARABONBA_PTR_SET_VALUE(requiredContentType_, requiredContentType) };


    protected:
      // The expiration time of the credential in RFC 3339 format.
      shared_ptr<string> expiresAt_ {};
      // The HTTP method of the pre-signed URL. Valid values: PUT.
      shared_ptr<string> method_ {};
      // The pre-signed OSS PUT upload URL.
      shared_ptr<string> putUrl_ {};
      // The Content-Type header that the client must include when performing the PUT request. This field is returned when putUrl is present.
      shared_ptr<string> requiredContentType_ {};
    };

    virtual bool empty() const override { return this->bundleVersion_ == nullptr
        && this->codeBundleId_ == nullptr && this->createdAt_ == nullptr && this->filename_ == nullptr && this->projectId_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->updatedAt_ == nullptr && this->upload_ == nullptr; };
    // bundleVersion Field Functions 
    bool hasBundleVersion() const { return this->bundleVersion_ != nullptr;};
    void deleteBundleVersion() { this->bundleVersion_ = nullptr;};
    inline string getBundleVersion() const { DARABONBA_PTR_GET_DEFAULT(bundleVersion_, "") };
    inline CreateCodeBundleResponseBody& setBundleVersion(string bundleVersion) { DARABONBA_PTR_SET_VALUE(bundleVersion_, bundleVersion) };


    // codeBundleId Field Functions 
    bool hasCodeBundleId() const { return this->codeBundleId_ != nullptr;};
    void deleteCodeBundleId() { this->codeBundleId_ = nullptr;};
    inline int64_t getCodeBundleId() const { DARABONBA_PTR_GET_DEFAULT(codeBundleId_, 0L) };
    inline CreateCodeBundleResponseBody& setCodeBundleId(int64_t codeBundleId) { DARABONBA_PTR_SET_VALUE(codeBundleId_, codeBundleId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateCodeBundleResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateCodeBundleResponseBody& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateCodeBundleResponseBody& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCodeBundleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCodeBundleResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline CreateCodeBundleResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // upload Field Functions 
    bool hasUpload() const { return this->upload_ != nullptr;};
    void deleteUpload() { this->upload_ = nullptr;};
    inline const CreateCodeBundleResponseBody::Upload & getUpload() const { DARABONBA_PTR_GET_CONST(upload_, CreateCodeBundleResponseBody::Upload) };
    inline CreateCodeBundleResponseBody::Upload getUpload() { DARABONBA_PTR_GET(upload_, CreateCodeBundleResponseBody::Upload) };
    inline CreateCodeBundleResponseBody& setUpload(const CreateCodeBundleResponseBody::Upload & upload) { DARABONBA_PTR_SET_VALUE(upload_, upload) };
    inline CreateCodeBundleResponseBody& setUpload(CreateCodeBundleResponseBody::Upload && upload) { DARABONBA_PTR_SET_RVALUE(upload_, upload) };


  protected:
    // The version identifier of the function code package.
    shared_ptr<string> bundleVersion_ {};
    // The function code package ID.
    shared_ptr<int64_t> codeBundleId_ {};
    // The time when the function code package was created.
    shared_ptr<string> createdAt_ {};
    // The file name.
    shared_ptr<string> filename_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the function code package.
    shared_ptr<string> status_ {};
    // The time when the function code package was last updated.
    shared_ptr<string> updatedAt_ {};
    // The upload credential. See the following fields for details.
    shared_ptr<CreateCodeBundleResponseBody::Upload> upload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
