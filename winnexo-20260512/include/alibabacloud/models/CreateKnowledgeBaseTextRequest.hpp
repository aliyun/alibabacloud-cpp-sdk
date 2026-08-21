// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASETEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASETEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateKnowledgeBaseTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(knowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(textContent, textContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(knowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(textContent, textContent_);
    };
    CreateKnowledgeBaseTextRequest() = default ;
    CreateKnowledgeBaseTextRequest(const CreateKnowledgeBaseTextRequest &) = default ;
    CreateKnowledgeBaseTextRequest(CreateKnowledgeBaseTextRequest &&) = default ;
    CreateKnowledgeBaseTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseTextRequest() = default ;
    CreateKnowledgeBaseTextRequest& operator=(const CreateKnowledgeBaseTextRequest &) = default ;
    CreateKnowledgeBaseTextRequest& operator=(CreateKnowledgeBaseTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->directoryId_ == nullptr && this->knowledgeId_ == nullptr && this->name_ == nullptr && this->operatingObjectName_ == nullptr && this->sourceTags_ == nullptr
        && this->tenantId_ == nullptr && this->textContent_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseTextRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateKnowledgeBaseTextRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline string getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
    inline CreateKnowledgeBaseTextRequest& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeBaseTextRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreateKnowledgeBaseTextRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline CreateKnowledgeBaseTextRequest& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateKnowledgeBaseTextRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // textContent Field Functions 
    bool hasTextContent() const { return this->textContent_ != nullptr;};
    void deleteTextContent() { this->textContent_ = nullptr;};
    inline string getTextContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
    inline CreateKnowledgeBaseTextRequest& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


  protected:
    // The description of the alias.
    shared_ptr<string> description_ {};
    // The folder ID.
    shared_ptr<string> directoryId_ {};
    // Not supported. Ignore this parameter.
    shared_ptr<string> knowledgeId_ {};
    // The image name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The name of the operating object.
    shared_ptr<string> operatingObjectName_ {};
    // The source tags.
    shared_ptr<string> sourceTags_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The message content for text messages.
    // 
    // This parameter is required.
    shared_ptr<string> textContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
