// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OUTLINESEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_OUTLINESEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OutlineWritingArticle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class OutlineSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OutlineSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Outline, outline_);
      DARABONBA_PTR_TO_JSON(OutlineId, outlineId_);
      DARABONBA_PTR_TO_JSON(PrimaryOutline, primaryOutline_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, OutlineSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Outline, outline_);
      DARABONBA_PTR_FROM_JSON(OutlineId, outlineId_);
      DARABONBA_PTR_FROM_JSON(PrimaryOutline, primaryOutline_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    OutlineSearchResult() = default ;
    OutlineSearchResult(const OutlineSearchResult &) = default ;
    OutlineSearchResult(OutlineSearchResult &&) = default ;
    OutlineSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OutlineSearchResult() = default ;
    OutlineSearchResult& operator=(const OutlineSearchResult &) = default ;
    OutlineSearchResult& operator=(OutlineSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articles_ != nullptr
        && this->outline_ != nullptr && this->outlineId_ != nullptr && this->primaryOutline_ != nullptr && this->query_ != nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<OutlineWritingArticle> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<OutlineWritingArticle>) };
    inline vector<OutlineWritingArticle> articles() { DARABONBA_PTR_GET(articles_, vector<OutlineWritingArticle>) };
    inline OutlineSearchResult& setArticles(const vector<OutlineWritingArticle> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline OutlineSearchResult& setArticles(vector<OutlineWritingArticle> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // outline Field Functions 
    bool hasOutline() const { return this->outline_ != nullptr;};
    void deleteOutline() { this->outline_ = nullptr;};
    inline string outline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
    inline OutlineSearchResult& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


    // outlineId Field Functions 
    bool hasOutlineId() const { return this->outlineId_ != nullptr;};
    void deleteOutlineId() { this->outlineId_ = nullptr;};
    inline string outlineId() const { DARABONBA_PTR_GET_DEFAULT(outlineId_, "") };
    inline OutlineSearchResult& setOutlineId(string outlineId) { DARABONBA_PTR_SET_VALUE(outlineId_, outlineId) };


    // primaryOutline Field Functions 
    bool hasPrimaryOutline() const { return this->primaryOutline_ != nullptr;};
    void deletePrimaryOutline() { this->primaryOutline_ = nullptr;};
    inline string primaryOutline() const { DARABONBA_PTR_GET_DEFAULT(primaryOutline_, "") };
    inline OutlineSearchResult& setPrimaryOutline(string primaryOutline) { DARABONBA_PTR_SET_VALUE(primaryOutline_, primaryOutline) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline OutlineSearchResult& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    std::shared_ptr<vector<OutlineWritingArticle>> articles_ = nullptr;
    std::shared_ptr<string> outline_ = nullptr;
    std::shared_ptr<string> outlineId_ = nullptr;
    std::shared_ptr<string> primaryOutline_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
