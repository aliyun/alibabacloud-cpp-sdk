// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateKnowledgeSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Document, documentShrink_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Project, projectShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Document, documentShrink_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Project, projectShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateKnowledgeSourceShrinkRequest() = default ;
    CreateKnowledgeSourceShrinkRequest(const CreateKnowledgeSourceShrinkRequest &) = default ;
    CreateKnowledgeSourceShrinkRequest(CreateKnowledgeSourceShrinkRequest &&) = default ;
    CreateKnowledgeSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeSourceShrinkRequest() = default ;
    CreateKnowledgeSourceShrinkRequest& operator=(const CreateKnowledgeSourceShrinkRequest &) = default ;
    CreateKnowledgeSourceShrinkRequest& operator=(CreateKnowledgeSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dataSourceShrink_ == nullptr && this->description_ == nullptr && this->documentShrink_ == nullptr && this->knowledgeBaseId_ == nullptr && this->name_ == nullptr
        && this->projectShrink_ == nullptr && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateKnowledgeSourceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataSourceShrink Field Functions 
    bool hasDataSourceShrink() const { return this->dataSourceShrink_ != nullptr;};
    void deleteDataSourceShrink() { this->dataSourceShrink_ = nullptr;};
    inline string getDataSourceShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceShrink_, "") };
    inline CreateKnowledgeSourceShrinkRequest& setDataSourceShrink(string dataSourceShrink) { DARABONBA_PTR_SET_VALUE(dataSourceShrink_, dataSourceShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeSourceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentShrink Field Functions 
    bool hasDocumentShrink() const { return this->documentShrink_ != nullptr;};
    void deleteDocumentShrink() { this->documentShrink_ = nullptr;};
    inline string getDocumentShrink() const { DARABONBA_PTR_GET_DEFAULT(documentShrink_, "") };
    inline CreateKnowledgeSourceShrinkRequest& setDocumentShrink(string documentShrink) { DARABONBA_PTR_SET_VALUE(documentShrink_, documentShrink) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline CreateKnowledgeSourceShrinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeSourceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectShrink Field Functions 
    bool hasProjectShrink() const { return this->projectShrink_ != nullptr;};
    void deleteProjectShrink() { this->projectShrink_ = nullptr;};
    inline string getProjectShrink() const { DARABONBA_PTR_GET_DEFAULT(projectShrink_, "") };
    inline CreateKnowledgeSourceShrinkRequest& setProjectShrink(string projectShrink) { DARABONBA_PTR_SET_VALUE(projectShrink_, projectShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateKnowledgeSourceShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The client token used to ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // The data source configuration. This parameter is required when Type is set to DATA_SOURCE.
    shared_ptr<string> dataSourceShrink_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The document configuration. This parameter is required when Type is set to DOCUMENT.
    shared_ptr<string> documentShrink_ {};
    // The ID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The name of the source.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The project configuration. This parameter is required when Type is set to PROJECT.
    shared_ptr<string> projectShrink_ {};
    // The type of the knowledge source. Valid values: PROJECT, DATA_SOURCE, and DOCUMENT.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
