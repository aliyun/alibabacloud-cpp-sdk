// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEOBJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEOBJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateKnowledgeObjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeObjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpectedModifyTime, expectedModifyTime_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeObjectId, knowledgeObjectId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
      DARABONBA_PTR_TO_JSON(VersionNo, versionNo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeObjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpectedModifyTime, expectedModifyTime_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeObjectId, knowledgeObjectId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
      DARABONBA_PTR_FROM_JSON(VersionNo, versionNo_);
    };
    UpdateKnowledgeObjectShrinkRequest() = default ;
    UpdateKnowledgeObjectShrinkRequest(const UpdateKnowledgeObjectShrinkRequest &) = default ;
    UpdateKnowledgeObjectShrinkRequest(UpdateKnowledgeObjectShrinkRequest &&) = default ;
    UpdateKnowledgeObjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeObjectShrinkRequest() = default ;
    UpdateKnowledgeObjectShrinkRequest& operator=(const UpdateKnowledgeObjectShrinkRequest &) = default ;
    UpdateKnowledgeObjectShrinkRequest& operator=(UpdateKnowledgeObjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->contentShrink_ == nullptr && this->description_ == nullptr && this->expectedModifyTime_ == nullptr && this->knowledgeBaseId_ == nullptr && this->knowledgeObjectId_ == nullptr
        && this->name_ == nullptr && this->uploadId_ == nullptr && this->versionNo_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateKnowledgeObjectShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline UpdateKnowledgeObjectShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeObjectShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expectedModifyTime Field Functions 
    bool hasExpectedModifyTime() const { return this->expectedModifyTime_ != nullptr;};
    void deleteExpectedModifyTime() { this->expectedModifyTime_ = nullptr;};
    inline int64_t getExpectedModifyTime() const { DARABONBA_PTR_GET_DEFAULT(expectedModifyTime_, 0L) };
    inline UpdateKnowledgeObjectShrinkRequest& setExpectedModifyTime(int64_t expectedModifyTime) { DARABONBA_PTR_SET_VALUE(expectedModifyTime_, expectedModifyTime) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKnowledgeObjectShrinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeObjectId Field Functions 
    bool hasKnowledgeObjectId() const { return this->knowledgeObjectId_ != nullptr;};
    void deleteKnowledgeObjectId() { this->knowledgeObjectId_ = nullptr;};
    inline string getKnowledgeObjectId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeObjectId_, "") };
    inline UpdateKnowledgeObjectShrinkRequest& setKnowledgeObjectId(string knowledgeObjectId) { DARABONBA_PTR_SET_VALUE(knowledgeObjectId_, knowledgeObjectId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeObjectShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline UpdateKnowledgeObjectShrinkRequest& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


    // versionNo Field Functions 
    bool hasVersionNo() const { return this->versionNo_ != nullptr;};
    void deleteVersionNo() { this->versionNo_ = nullptr;};
    inline int64_t getVersionNo() const { DARABONBA_PTR_GET_DEFAULT(versionNo_, 0L) };
    inline UpdateKnowledgeObjectShrinkRequest& setVersionNo(int64_t versionNo) { DARABONBA_PTR_SET_VALUE(versionNo_, versionNo) };


  protected:
    // The client token. This parameter is supported only for DOCUMENT. Model updates do not guarantee exactly-once remote save notifications.
    shared_ptr<string> clientToken_ {};
    // The typed content update. Object properties are submitted as needed. Arrays are replaced in their entirety when submitted. Unspecified properties are retained.
    shared_ptr<string> contentShrink_ {};
    // The new description. An empty string clears the description. If this parameter is not specified, the original value is retained.
    shared_ptr<string> description_ {};
    // The expected modification time. This parameter is supported only for DOCUMENT. It is required when modifying the body text and optional when modifying metadata.
    shared_ptr<int64_t> expectedModifyTime_ {};
    // The ID of the knowledge base to which the object belongs.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The stable knowledge object ID returned by the Get or List operation.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeObjectId_ {};
    // The new name. This parameter cannot be empty. If this parameter is not specified, the original value is retained.
    shared_ptr<string> name_ {};
    // The upload ID. This parameter is supported only for SEMANTIC_MODEL. It replaces the public model content with a complete YAML file and is mutually exclusive with Content.
    shared_ptr<string> uploadId_ {};
    // The version number. This parameter is required when updating Content or UploadId for SEMANTIC_MODEL. Use the VersionNo returned by the Get operation. This is not an optimistic lock.
    shared_ptr<int64_t> versionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
