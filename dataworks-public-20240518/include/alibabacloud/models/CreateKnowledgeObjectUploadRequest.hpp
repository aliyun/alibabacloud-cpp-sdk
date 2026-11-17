// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEOBJECTUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEOBJECTUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateKnowledgeObjectUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeObjectUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ContentMd5, contentMd5_);
      DARABONBA_PTR_TO_JSON(ContentSha256, contentSha256_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeObjectUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ContentMd5, contentMd5_);
      DARABONBA_PTR_FROM_JSON(ContentSha256, contentSha256_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
    };
    CreateKnowledgeObjectUploadRequest() = default ;
    CreateKnowledgeObjectUploadRequest(const CreateKnowledgeObjectUploadRequest &) = default ;
    CreateKnowledgeObjectUploadRequest(CreateKnowledgeObjectUploadRequest &&) = default ;
    CreateKnowledgeObjectUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeObjectUploadRequest() = default ;
    CreateKnowledgeObjectUploadRequest& operator=(const CreateKnowledgeObjectUploadRequest &) = default ;
    CreateKnowledgeObjectUploadRequest& operator=(CreateKnowledgeObjectUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->contentMd5_ == nullptr && this->contentSha256_ == nullptr && this->contentType_ == nullptr && this->fileName_ == nullptr && this->knowledgeBaseId_ == nullptr
        && this->sizeBytes_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateKnowledgeObjectUploadRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contentMd5 Field Functions 
    bool hasContentMd5() const { return this->contentMd5_ != nullptr;};
    void deleteContentMd5() { this->contentMd5_ = nullptr;};
    inline string getContentMd5() const { DARABONBA_PTR_GET_DEFAULT(contentMd5_, "") };
    inline CreateKnowledgeObjectUploadRequest& setContentMd5(string contentMd5) { DARABONBA_PTR_SET_VALUE(contentMd5_, contentMd5) };


    // contentSha256 Field Functions 
    bool hasContentSha256() const { return this->contentSha256_ != nullptr;};
    void deleteContentSha256() { this->contentSha256_ = nullptr;};
    inline string getContentSha256() const { DARABONBA_PTR_GET_DEFAULT(contentSha256_, "") };
    inline CreateKnowledgeObjectUploadRequest& setContentSha256(string contentSha256) { DARABONBA_PTR_SET_VALUE(contentSha256_, contentSha256) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreateKnowledgeObjectUploadRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateKnowledgeObjectUploadRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline CreateKnowledgeObjectUploadRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t getSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline CreateKnowledgeObjectUploadRequest& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


  protected:
    // The idempotency key for the upload request.
    shared_ptr<string> clientToken_ {};
    // The Base64-encoded MD5 hash value of the original file.
    // 
    // This parameter is required.
    shared_ptr<string> contentMd5_ {};
    // The SHA-256 checksum of the original file.
    shared_ptr<string> contentSha256_ {};
    // The HTTP media type for the upload.
    // 
    // This parameter is required.
    shared_ptr<string> contentType_ {};
    // The original file name, which is not used as the object ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The target knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The size of the original file in bytes. This parameter reuses the existing maximum size limit for single-file uploads, which defaults to 100 MiB. If the size exceeds the limit, the InputTooLarge error is returned.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sizeBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
