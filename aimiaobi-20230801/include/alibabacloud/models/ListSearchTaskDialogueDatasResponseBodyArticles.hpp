// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUEDATASRESPONSEBODYARTICLES_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUEDATASRESPONSEBODYARTICLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSearchTaskDialogueDatasResponseBodyArticlesMultimodalMedias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListSearchTaskDialogueDatasResponseBodyArticles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTaskDialogueDatasResponseBodyArticles& obj) { 
      DARABONBA_PTR_TO_JSON(Author, author_);
      DARABONBA_PTR_TO_JSON(CategoryUuid, categoryUuid_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(Extend1, extend1_);
      DARABONBA_PTR_TO_JSON(Extend2, extend2_);
      DARABONBA_PTR_TO_JSON(Extend3, extend3_);
      DARABONBA_PTR_TO_JSON(MultimodalMedias, multimodalMedias_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTaskDialogueDatasResponseBodyArticles& obj) { 
      DARABONBA_PTR_FROM_JSON(Author, author_);
      DARABONBA_PTR_FROM_JSON(CategoryUuid, categoryUuid_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
      DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
      DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
      DARABONBA_PTR_FROM_JSON(MultimodalMedias, multimodalMedias_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListSearchTaskDialogueDatasResponseBodyArticles() = default ;
    ListSearchTaskDialogueDatasResponseBodyArticles(const ListSearchTaskDialogueDatasResponseBodyArticles &) = default ;
    ListSearchTaskDialogueDatasResponseBodyArticles(ListSearchTaskDialogueDatasResponseBodyArticles &&) = default ;
    ListSearchTaskDialogueDatasResponseBodyArticles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTaskDialogueDatasResponseBodyArticles() = default ;
    ListSearchTaskDialogueDatasResponseBodyArticles& operator=(const ListSearchTaskDialogueDatasResponseBodyArticles &) = default ;
    ListSearchTaskDialogueDatasResponseBodyArticles& operator=(ListSearchTaskDialogueDatasResponseBodyArticles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->author_ == nullptr
        && return this->categoryUuid_ == nullptr && return this->content_ == nullptr && return this->docId_ == nullptr && return this->docType_ == nullptr && return this->docUuid_ == nullptr
        && return this->extend1_ == nullptr && return this->extend2_ == nullptr && return this->extend3_ == nullptr && return this->multimodalMedias_ == nullptr && return this->pubTime_ == nullptr
        && return this->source_ == nullptr && return this->summary_ == nullptr && return this->title_ == nullptr && return this->url_ == nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // categoryUuid Field Functions 
    bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
    void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
    inline string categoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // extend1 Field Functions 
    bool hasExtend1() const { return this->extend1_ != nullptr;};
    void deleteExtend1() { this->extend1_ = nullptr;};
    inline string extend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


    // extend2 Field Functions 
    bool hasExtend2() const { return this->extend2_ != nullptr;};
    void deleteExtend2() { this->extend2_ = nullptr;};
    inline string extend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


    // extend3 Field Functions 
    bool hasExtend3() const { return this->extend3_ != nullptr;};
    void deleteExtend3() { this->extend3_ = nullptr;};
    inline string extend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


    // multimodalMedias Field Functions 
    bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
    void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
    inline const vector<Models::ListSearchTaskDialogueDatasResponseBodyArticlesMultimodalMedias> & multimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<Models::ListSearchTaskDialogueDatasResponseBodyArticlesMultimodalMedias>) };
    inline vector<Models::ListSearchTaskDialogueDatasResponseBodyArticlesMultimodalMedias> multimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<Models::ListSearchTaskDialogueDatasResponseBodyArticlesMultimodalMedias>) };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setMultimodalMedias(const vector<Models::ListSearchTaskDialogueDatasResponseBodyArticlesMultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setMultimodalMedias(vector<Models::ListSearchTaskDialogueDatasResponseBodyArticlesMultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListSearchTaskDialogueDatasResponseBodyArticles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> author_ = nullptr;
    std::shared_ptr<string> categoryUuid_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<string> docUuid_ = nullptr;
    std::shared_ptr<string> extend1_ = nullptr;
    std::shared_ptr<string> extend2_ = nullptr;
    std::shared_ptr<string> extend3_ = nullptr;
    std::shared_ptr<vector<Models::ListSearchTaskDialogueDatasResponseBodyArticlesMultimodalMedias>> multimodalMedias_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
