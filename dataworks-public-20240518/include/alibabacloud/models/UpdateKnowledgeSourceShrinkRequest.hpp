// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateKnowledgeSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Document, documentShrink_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Project, projectShrink_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Document, documentShrink_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Project, projectShrink_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
    };
    UpdateKnowledgeSourceShrinkRequest() = default ;
    UpdateKnowledgeSourceShrinkRequest(const UpdateKnowledgeSourceShrinkRequest &) = default ;
    UpdateKnowledgeSourceShrinkRequest(UpdateKnowledgeSourceShrinkRequest &&) = default ;
    UpdateKnowledgeSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeSourceShrinkRequest() = default ;
    UpdateKnowledgeSourceShrinkRequest& operator=(const UpdateKnowledgeSourceShrinkRequest &) = default ;
    UpdateKnowledgeSourceShrinkRequest& operator=(UpdateKnowledgeSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceShrink_ == nullptr
        && this->description_ == nullptr && this->documentShrink_ == nullptr && this->knowledgeBaseId_ == nullptr && this->name_ == nullptr && this->projectShrink_ == nullptr
        && this->sourceId_ == nullptr; };
    // dataSourceShrink Field Functions 
    bool hasDataSourceShrink() const { return this->dataSourceShrink_ != nullptr;};
    void deleteDataSourceShrink() { this->dataSourceShrink_ = nullptr;};
    inline string getDataSourceShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceShrink_, "") };
    inline UpdateKnowledgeSourceShrinkRequest& setDataSourceShrink(string dataSourceShrink) { DARABONBA_PTR_SET_VALUE(dataSourceShrink_, dataSourceShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeSourceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentShrink Field Functions 
    bool hasDocumentShrink() const { return this->documentShrink_ != nullptr;};
    void deleteDocumentShrink() { this->documentShrink_ = nullptr;};
    inline string getDocumentShrink() const { DARABONBA_PTR_GET_DEFAULT(documentShrink_, "") };
    inline UpdateKnowledgeSourceShrinkRequest& setDocumentShrink(string documentShrink) { DARABONBA_PTR_SET_VALUE(documentShrink_, documentShrink) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKnowledgeSourceShrinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeSourceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectShrink Field Functions 
    bool hasProjectShrink() const { return this->projectShrink_ != nullptr;};
    void deleteProjectShrink() { this->projectShrink_ = nullptr;};
    inline string getProjectShrink() const { DARABONBA_PTR_GET_DEFAULT(projectShrink_, "") };
    inline UpdateKnowledgeSourceShrinkRequest& setProjectShrink(string projectShrink) { DARABONBA_PTR_SET_VALUE(projectShrink_, projectShrink) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline UpdateKnowledgeSourceShrinkRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    // The complete configuration for Type=DATA_SOURCE.
    shared_ptr<string> dataSourceShrink_ {};
    // The new description.
    shared_ptr<string> description_ {};
    // The complete configuration for Type=DOCUMENT. Credentials are not returned after they are written.
    shared_ptr<string> documentShrink_ {};
    // The ID of the knowledge base to which the source belongs.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The new name.
    shared_ptr<string> name_ {};
    // The complete configuration for Type=PROJECT.
    shared_ptr<string> projectShrink_ {};
    // The source ID.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
