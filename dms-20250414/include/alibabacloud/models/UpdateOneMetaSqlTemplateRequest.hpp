// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEONEMETASQLTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEONEMETASQLTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateOneMetaSqlTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOneMetaSqlTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Expr, expr_);
      DARABONBA_PTR_TO_JSON(KnowledgeUuid, knowledgeUuid_);
      DARABONBA_PTR_TO_JSON(SqlParams, sqlParams_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOneMetaSqlTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Expr, expr_);
      DARABONBA_PTR_FROM_JSON(KnowledgeUuid, knowledgeUuid_);
      DARABONBA_PTR_FROM_JSON(SqlParams, sqlParams_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateOneMetaSqlTemplateRequest() = default ;
    UpdateOneMetaSqlTemplateRequest(const UpdateOneMetaSqlTemplateRequest &) = default ;
    UpdateOneMetaSqlTemplateRequest(UpdateOneMetaSqlTemplateRequest &&) = default ;
    UpdateOneMetaSqlTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOneMetaSqlTemplateRequest() = default ;
    UpdateOneMetaSqlTemplateRequest& operator=(const UpdateOneMetaSqlTemplateRequest &) = default ;
    UpdateOneMetaSqlTemplateRequest& operator=(UpdateOneMetaSqlTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->databaseUuid_ == nullptr && this->description_ == nullptr && this->expr_ == nullptr && this->knowledgeUuid_ == nullptr && this->sqlParams_ == nullptr
        && this->tag_ == nullptr && this->title_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline UpdateOneMetaSqlTemplateRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline UpdateOneMetaSqlTemplateRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateOneMetaSqlTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline UpdateOneMetaSqlTemplateRequest& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // knowledgeUuid Field Functions 
    bool hasKnowledgeUuid() const { return this->knowledgeUuid_ != nullptr;};
    void deleteKnowledgeUuid() { this->knowledgeUuid_ = nullptr;};
    inline string getKnowledgeUuid() const { DARABONBA_PTR_GET_DEFAULT(knowledgeUuid_, "") };
    inline UpdateOneMetaSqlTemplateRequest& setKnowledgeUuid(string knowledgeUuid) { DARABONBA_PTR_SET_VALUE(knowledgeUuid_, knowledgeUuid) };


    // sqlParams Field Functions 
    bool hasSqlParams() const { return this->sqlParams_ != nullptr;};
    void deleteSqlParams() { this->sqlParams_ = nullptr;};
    inline string getSqlParams() const { DARABONBA_PTR_GET_DEFAULT(sqlParams_, "") };
    inline UpdateOneMetaSqlTemplateRequest& setSqlParams(string sqlParams) { DARABONBA_PTR_SET_VALUE(sqlParams_, sqlParams) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline UpdateOneMetaSqlTemplateRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateOneMetaSqlTemplateRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The UUID of the associated folder.
    shared_ptr<string> catalogUuid_ {};
    // The UUID of the associated database.
    shared_ptr<string> databaseUuid_ {};
    // The description of the SQL template.
    shared_ptr<string> description_ {};
    // The content of the SQL template.
    shared_ptr<string> expr_ {};
    // The UUID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeUuid_ {};
    // The custom template parameters.
    shared_ptr<string> sqlParams_ {};
    // The tag of the SQL template.
    shared_ptr<string> tag_ {};
    // The title of the SQL template.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
