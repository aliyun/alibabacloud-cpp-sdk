// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSIEMODELVIEW_HPP_
#define ALIBABACLOUD_MODELS_OSSIEMODELVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OssieModelView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OssieModelView& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocFormat, docFormat_);
      DARABONBA_PTR_TO_JSON(DomainTopic, domainTopic_);
      DARABONBA_PTR_TO_JSON(Expr, expr_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(KnowledgeUuid, knowledgeUuid_);
      DARABONBA_PTR_TO_JSON(RawDoc, rawDoc_);
      DARABONBA_PTR_TO_JSON(SemanticType, semanticType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, OssieModelView& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocFormat, docFormat_);
      DARABONBA_PTR_FROM_JSON(DomainTopic, domainTopic_);
      DARABONBA_PTR_FROM_JSON(Expr, expr_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(KnowledgeUuid, knowledgeUuid_);
      DARABONBA_PTR_FROM_JSON(RawDoc, rawDoc_);
      DARABONBA_PTR_FROM_JSON(SemanticType, semanticType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    OssieModelView() = default ;
    OssieModelView(const OssieModelView &) = default ;
    OssieModelView(OssieModelView &&) = default ;
    OssieModelView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OssieModelView() = default ;
    OssieModelView& operator=(const OssieModelView &) = default ;
    OssieModelView& operator=(OssieModelView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->databaseUuid_ == nullptr && this->description_ == nullptr && this->docFormat_ == nullptr && this->domainTopic_ == nullptr && this->expr_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->knowledgeUuid_ == nullptr && this->rawDoc_ == nullptr && this->semanticType_ == nullptr
        && this->source_ == nullptr && this->summary_ == nullptr && this->tag_ == nullptr && this->title_ == nullptr && this->version_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline OssieModelView& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline OssieModelView& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline OssieModelView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // docFormat Field Functions 
    bool hasDocFormat() const { return this->docFormat_ != nullptr;};
    void deleteDocFormat() { this->docFormat_ = nullptr;};
    inline string getDocFormat() const { DARABONBA_PTR_GET_DEFAULT(docFormat_, "") };
    inline OssieModelView& setDocFormat(string docFormat) { DARABONBA_PTR_SET_VALUE(docFormat_, docFormat) };


    // domainTopic Field Functions 
    bool hasDomainTopic() const { return this->domainTopic_ != nullptr;};
    void deleteDomainTopic() { this->domainTopic_ = nullptr;};
    inline string getDomainTopic() const { DARABONBA_PTR_GET_DEFAULT(domainTopic_, "") };
    inline OssieModelView& setDomainTopic(string domainTopic) { DARABONBA_PTR_SET_VALUE(domainTopic_, domainTopic) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline OssieModelView& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline OssieModelView& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline OssieModelView& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // knowledgeUuid Field Functions 
    bool hasKnowledgeUuid() const { return this->knowledgeUuid_ != nullptr;};
    void deleteKnowledgeUuid() { this->knowledgeUuid_ = nullptr;};
    inline string getKnowledgeUuid() const { DARABONBA_PTR_GET_DEFAULT(knowledgeUuid_, "") };
    inline OssieModelView& setKnowledgeUuid(string knowledgeUuid) { DARABONBA_PTR_SET_VALUE(knowledgeUuid_, knowledgeUuid) };


    // rawDoc Field Functions 
    bool hasRawDoc() const { return this->rawDoc_ != nullptr;};
    void deleteRawDoc() { this->rawDoc_ = nullptr;};
    inline string getRawDoc() const { DARABONBA_PTR_GET_DEFAULT(rawDoc_, "") };
    inline OssieModelView& setRawDoc(string rawDoc) { DARABONBA_PTR_SET_VALUE(rawDoc_, rawDoc) };


    // semanticType Field Functions 
    bool hasSemanticType() const { return this->semanticType_ != nullptr;};
    void deleteSemanticType() { this->semanticType_ = nullptr;};
    inline string getSemanticType() const { DARABONBA_PTR_GET_DEFAULT(semanticType_, "") };
    inline OssieModelView& setSemanticType(string semanticType) { DARABONBA_PTR_SET_VALUE(semanticType_, semanticType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline OssieModelView& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline OssieModelView& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline OssieModelView& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline OssieModelView& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline OssieModelView& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The UUID of the associated instance.
    shared_ptr<string> catalogUuid_ {};
    // The UUID of the associated database.
    shared_ptr<string> databaseUuid_ {};
    // The semantic description.
    shared_ptr<string> description_ {};
    // The semantic document format type.
    shared_ptr<string> docFormat_ {};
    // The domain topic.
    shared_ptr<string> domainTopic_ {};
    // The expression content.
    shared_ptr<string> expr_ {};
    // The creation time.
    shared_ptr<int64_t> gmtCreated_ {};
    // The modification time.
    shared_ptr<int64_t> gmtModified_ {};
    // The UUID of the semantic knowledge.
    shared_ptr<string> knowledgeUuid_ {};
    // The semantic document content.
    shared_ptr<string> rawDoc_ {};
    // The semantic type.
    shared_ptr<string> semanticType_ {};
    // The source.
    shared_ptr<string> source_ {};
    // The document summary.
    shared_ptr<string> summary_ {};
    // The knowledge base tag.
    shared_ptr<string> tag_ {};
    // The semantic title.
    shared_ptr<string> title_ {};
    // The version information.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
