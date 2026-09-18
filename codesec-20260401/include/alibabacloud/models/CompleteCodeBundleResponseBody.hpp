// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETECODEBUNDLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPLETECODEBUNDLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CompleteCodeBundleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteCodeBundleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(bundleVersion, bundleVersion_);
      DARABONBA_PTR_TO_JSON(byteSize, byteSize_);
      DARABONBA_PTR_TO_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(filename, filename_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteCodeBundleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(bundleVersion, bundleVersion_);
      DARABONBA_PTR_FROM_JSON(byteSize, byteSize_);
      DARABONBA_PTR_FROM_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(filename, filename_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    CompleteCodeBundleResponseBody() = default ;
    CompleteCodeBundleResponseBody(const CompleteCodeBundleResponseBody &) = default ;
    CompleteCodeBundleResponseBody(CompleteCodeBundleResponseBody &&) = default ;
    CompleteCodeBundleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteCodeBundleResponseBody() = default ;
    CompleteCodeBundleResponseBody& operator=(const CompleteCodeBundleResponseBody &) = default ;
    CompleteCodeBundleResponseBody& operator=(CompleteCodeBundleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundleVersion_ == nullptr
        && this->byteSize_ == nullptr && this->codeBundleId_ == nullptr && this->contentType_ == nullptr && this->createdAt_ == nullptr && this->filename_ == nullptr
        && this->projectId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr; };
    // bundleVersion Field Functions 
    bool hasBundleVersion() const { return this->bundleVersion_ != nullptr;};
    void deleteBundleVersion() { this->bundleVersion_ = nullptr;};
    inline string getBundleVersion() const { DARABONBA_PTR_GET_DEFAULT(bundleVersion_, "") };
    inline CompleteCodeBundleResponseBody& setBundleVersion(string bundleVersion) { DARABONBA_PTR_SET_VALUE(bundleVersion_, bundleVersion) };


    // byteSize Field Functions 
    bool hasByteSize() const { return this->byteSize_ != nullptr;};
    void deleteByteSize() { this->byteSize_ = nullptr;};
    inline int64_t getByteSize() const { DARABONBA_PTR_GET_DEFAULT(byteSize_, 0L) };
    inline CompleteCodeBundleResponseBody& setByteSize(int64_t byteSize) { DARABONBA_PTR_SET_VALUE(byteSize_, byteSize) };


    // codeBundleId Field Functions 
    bool hasCodeBundleId() const { return this->codeBundleId_ != nullptr;};
    void deleteCodeBundleId() { this->codeBundleId_ = nullptr;};
    inline int64_t getCodeBundleId() const { DARABONBA_PTR_GET_DEFAULT(codeBundleId_, 0L) };
    inline CompleteCodeBundleResponseBody& setCodeBundleId(int64_t codeBundleId) { DARABONBA_PTR_SET_VALUE(codeBundleId_, codeBundleId) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CompleteCodeBundleResponseBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CompleteCodeBundleResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CompleteCodeBundleResponseBody& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CompleteCodeBundleResponseBody& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CompleteCodeBundleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CompleteCodeBundleResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline CompleteCodeBundleResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The code bundle version identifier.
    shared_ptr<string> bundleVersion_ {};
    // The object size.
    shared_ptr<int64_t> byteSize_ {};
    // The code bundle ID.
    shared_ptr<int64_t> codeBundleId_ {};
    // The MIME type of the stored code bundle. This is typically application/octet-stream for pre-signed PUT operations.
    shared_ptr<string> contentType_ {};
    // The time when the record was created, in RFC 3339 format.
    shared_ptr<string> createdAt_ {};
    // The file name.
    shared_ptr<string> filename_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The code bundle status.
    shared_ptr<string> status_ {};
    // The time when the record was last updated.
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
