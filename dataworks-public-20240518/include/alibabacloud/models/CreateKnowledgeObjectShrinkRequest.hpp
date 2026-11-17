// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEOBJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEOBJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateKnowledgeObjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeObjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeObjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
    };
    CreateKnowledgeObjectShrinkRequest() = default ;
    CreateKnowledgeObjectShrinkRequest(const CreateKnowledgeObjectShrinkRequest &) = default ;
    CreateKnowledgeObjectShrinkRequest(CreateKnowledgeObjectShrinkRequest &&) = default ;
    CreateKnowledgeObjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeObjectShrinkRequest() = default ;
    CreateKnowledgeObjectShrinkRequest& operator=(const CreateKnowledgeObjectShrinkRequest &) = default ;
    CreateKnowledgeObjectShrinkRequest& operator=(CreateKnowledgeObjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->contentShrink_ == nullptr && this->description_ == nullptr && this->knowledgeBaseId_ == nullptr && this->name_ == nullptr && this->type_ == nullptr
        && this->uploadId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateKnowledgeObjectShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline CreateKnowledgeObjectShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeObjectShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline CreateKnowledgeObjectShrinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeObjectShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateKnowledgeObjectShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline CreateKnowledgeObjectShrinkRequest& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


  protected:
    // The idempotency token for the creation request. Keep the original request unchanged when retrying.
    shared_ptr<string> clientToken_ {};
    // Only Content.Document is supported. It includes Text and ContentFormat (MARKDOWN or TEXT).
    shared_ptr<string> contentShrink_ {};
    // The document description.
    shared_ptr<string> description_ {};
    // The ID of the target knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The document name. Existing objects are not overwritten based on the name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The type of the object. For this operation, the value is fixed to DOCUMENT.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The ID of the completed PUT upload session for this knowledge base. This parameter is mutually exclusive with Content.
    shared_ptr<string> uploadId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
