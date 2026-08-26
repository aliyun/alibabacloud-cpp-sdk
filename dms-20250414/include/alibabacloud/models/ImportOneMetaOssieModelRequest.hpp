// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTONEMETAOSSIEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTONEMETAOSSIEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ImportOneMetaOssieModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOneMetaOssieModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocFormat, docFormat_);
      DARABONBA_PTR_TO_JSON(Document, document_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOneMetaOssieModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocFormat, docFormat_);
      DARABONBA_PTR_FROM_JSON(Document, document_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ImportOneMetaOssieModelRequest() = default ;
    ImportOneMetaOssieModelRequest(const ImportOneMetaOssieModelRequest &) = default ;
    ImportOneMetaOssieModelRequest(ImportOneMetaOssieModelRequest &&) = default ;
    ImportOneMetaOssieModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOneMetaOssieModelRequest() = default ;
    ImportOneMetaOssieModelRequest& operator=(const ImportOneMetaOssieModelRequest &) = default ;
    ImportOneMetaOssieModelRequest& operator=(ImportOneMetaOssieModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->databaseUuid_ == nullptr && this->description_ == nullptr && this->docFormat_ == nullptr && this->document_ == nullptr && this->source_ == nullptr
        && this->tag_ == nullptr && this->title_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline ImportOneMetaOssieModelRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline ImportOneMetaOssieModelRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportOneMetaOssieModelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // docFormat Field Functions 
    bool hasDocFormat() const { return this->docFormat_ != nullptr;};
    void deleteDocFormat() { this->docFormat_ = nullptr;};
    inline string getDocFormat() const { DARABONBA_PTR_GET_DEFAULT(docFormat_, "") };
    inline ImportOneMetaOssieModelRequest& setDocFormat(string docFormat) { DARABONBA_PTR_SET_VALUE(docFormat_, docFormat) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline ImportOneMetaOssieModelRequest& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ImportOneMetaOssieModelRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ImportOneMetaOssieModelRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ImportOneMetaOssieModelRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The UUID of the associated folder.
    // 
    // This parameter is required.
    shared_ptr<string> catalogUuid_ {};
    // The UUID of the associated database.
    shared_ptr<string> databaseUuid_ {};
    // The semantic description.
    shared_ptr<string> description_ {};
    // The semantic model document type. Valid values: JSON and YAML.
    // 
    // This parameter is required.
    shared_ptr<string> docFormat_ {};
    // The semantic model document definition.
    // 
    // This parameter is required.
    shared_ptr<string> document_ {};
    // The source of the semantic model.
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The semantic model tag.
    shared_ptr<string> tag_ {};
    // The semantic title. If the value is empty, the title is extracted from the document.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
