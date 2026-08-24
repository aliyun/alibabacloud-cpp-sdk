// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONEMETASQLTEMPLATEVIEW_HPP_
#define ALIBABACLOUD_MODELS_ONEMETASQLTEMPLATEVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OneMetaSqlTemplateView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OneMetaSqlTemplateView& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Expr, expr_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(KnowledgeUuid, knowledgeUuid_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SqlParams, sqlParams_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, OneMetaSqlTemplateView& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Expr, expr_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(KnowledgeUuid, knowledgeUuid_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SqlParams, sqlParams_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    OneMetaSqlTemplateView() = default ;
    OneMetaSqlTemplateView(const OneMetaSqlTemplateView &) = default ;
    OneMetaSqlTemplateView(OneMetaSqlTemplateView &&) = default ;
    OneMetaSqlTemplateView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OneMetaSqlTemplateView() = default ;
    OneMetaSqlTemplateView& operator=(const OneMetaSqlTemplateView &) = default ;
    OneMetaSqlTemplateView& operator=(OneMetaSqlTemplateView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->databaseUuid_ == nullptr && this->description_ == nullptr && this->expr_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->knowledgeUuid_ == nullptr && this->source_ == nullptr && this->sqlParams_ == nullptr && this->summary_ == nullptr && this->tag_ == nullptr
        && this->title_ == nullptr && this->version_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline OneMetaSqlTemplateView& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline OneMetaSqlTemplateView& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline OneMetaSqlTemplateView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline OneMetaSqlTemplateView& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline OneMetaSqlTemplateView& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline OneMetaSqlTemplateView& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // knowledgeUuid Field Functions 
    bool hasKnowledgeUuid() const { return this->knowledgeUuid_ != nullptr;};
    void deleteKnowledgeUuid() { this->knowledgeUuid_ = nullptr;};
    inline string getKnowledgeUuid() const { DARABONBA_PTR_GET_DEFAULT(knowledgeUuid_, "") };
    inline OneMetaSqlTemplateView& setKnowledgeUuid(string knowledgeUuid) { DARABONBA_PTR_SET_VALUE(knowledgeUuid_, knowledgeUuid) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline OneMetaSqlTemplateView& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sqlParams Field Functions 
    bool hasSqlParams() const { return this->sqlParams_ != nullptr;};
    void deleteSqlParams() { this->sqlParams_ = nullptr;};
    inline string getSqlParams() const { DARABONBA_PTR_GET_DEFAULT(sqlParams_, "") };
    inline OneMetaSqlTemplateView& setSqlParams(string sqlParams) { DARABONBA_PTR_SET_VALUE(sqlParams_, sqlParams) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline OneMetaSqlTemplateView& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline OneMetaSqlTemplateView& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline OneMetaSqlTemplateView& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline OneMetaSqlTemplateView& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The UUID of the associated folder.
    shared_ptr<string> catalogUuid_ {};
    // The UUID of the associated database.
    shared_ptr<string> databaseUuid_ {};
    // The description of the SQL template.
    shared_ptr<string> description_ {};
    // The content of the SQL template.
    shared_ptr<string> expr_ {};
    // The creation time.
    shared_ptr<int64_t> gmtCreated_ {};
    // The modification time.
    shared_ptr<int64_t> gmtModified_ {};
    // The UUID of the knowledge.
    shared_ptr<string> knowledgeUuid_ {};
    // The source of the SQL template knowledge.
    shared_ptr<string> source_ {};
    // The parameters of the SQL template.
    shared_ptr<string> sqlParams_ {};
    // The summary of the SQL template.
    shared_ptr<string> summary_ {};
    // The tag of the SQL template.
    shared_ptr<string> tag_ {};
    // The title of the SQL template.
    shared_ptr<string> title_ {};
    // The version of the SQL template.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
