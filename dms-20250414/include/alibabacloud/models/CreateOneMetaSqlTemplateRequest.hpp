// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEONEMETASQLTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEONEMETASQLTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateOneMetaSqlTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOneMetaSqlTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Expr, expr_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SqlParams, sqlParams_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOneMetaSqlTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Expr, expr_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SqlParams, sqlParams_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateOneMetaSqlTemplateRequest() = default ;
    CreateOneMetaSqlTemplateRequest(const CreateOneMetaSqlTemplateRequest &) = default ;
    CreateOneMetaSqlTemplateRequest(CreateOneMetaSqlTemplateRequest &&) = default ;
    CreateOneMetaSqlTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOneMetaSqlTemplateRequest() = default ;
    CreateOneMetaSqlTemplateRequest& operator=(const CreateOneMetaSqlTemplateRequest &) = default ;
    CreateOneMetaSqlTemplateRequest& operator=(CreateOneMetaSqlTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->databaseUuid_ == nullptr && this->description_ == nullptr && this->expr_ == nullptr && this->source_ == nullptr && this->sqlParams_ == nullptr
        && this->tag_ == nullptr && this->title_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline CreateOneMetaSqlTemplateRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline CreateOneMetaSqlTemplateRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOneMetaSqlTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline CreateOneMetaSqlTemplateRequest& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateOneMetaSqlTemplateRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sqlParams Field Functions 
    bool hasSqlParams() const { return this->sqlParams_ != nullptr;};
    void deleteSqlParams() { this->sqlParams_ = nullptr;};
    inline string getSqlParams() const { DARABONBA_PTR_GET_DEFAULT(sqlParams_, "") };
    inline CreateOneMetaSqlTemplateRequest& setSqlParams(string sqlParams) { DARABONBA_PTR_SET_VALUE(sqlParams_, sqlParams) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateOneMetaSqlTemplateRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateOneMetaSqlTemplateRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> catalogUuid_ {};
    shared_ptr<string> databaseUuid_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> expr_ {};
    // This parameter is required.
    shared_ptr<string> source_ {};
    shared_ptr<string> sqlParams_ {};
    shared_ptr<string> tag_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
