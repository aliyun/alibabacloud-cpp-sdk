// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITINGOUTLINE_HPP_
#define ALIBABACLOUD_MODELS_WRITINGOUTLINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OutlineWritingArticle.hpp>
#include <alibabacloud/models/WritingOutline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class WritingOutline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WritingOutline& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(Outline, outline_);
      DARABONBA_PTR_TO_JSON(OutlineId, outlineId_);
      DARABONBA_PTR_TO_JSON(SearchKeyWordList, searchKeyWordList_);
      DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
      DARABONBA_PTR_TO_JSON(WritingTips, writingTips_);
    };
    friend void from_json(const Darabonba::Json& j, WritingOutline& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(Outline, outline_);
      DARABONBA_PTR_FROM_JSON(OutlineId, outlineId_);
      DARABONBA_PTR_FROM_JSON(SearchKeyWordList, searchKeyWordList_);
      DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
      DARABONBA_PTR_FROM_JSON(WritingTips, writingTips_);
    };
    WritingOutline() = default ;
    WritingOutline(const WritingOutline &) = default ;
    WritingOutline(WritingOutline &&) = default ;
    WritingOutline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WritingOutline() = default ;
    WritingOutline& operator=(const WritingOutline &) = default ;
    WritingOutline& operator=(WritingOutline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && this->children_ == nullptr && this->outline_ == nullptr && this->outlineId_ == nullptr && this->searchKeyWordList_ == nullptr && this->wordCount_ == nullptr
        && this->writingTips_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<OutlineWritingArticle> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<OutlineWritingArticle>) };
    inline vector<OutlineWritingArticle> getArticles() { DARABONBA_PTR_GET(articles_, vector<OutlineWritingArticle>) };
    inline WritingOutline& setArticles(const vector<OutlineWritingArticle> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline WritingOutline& setArticles(vector<OutlineWritingArticle> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<WritingOutline> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<WritingOutline>) };
    inline vector<WritingOutline> getChildren() { DARABONBA_PTR_GET(children_, vector<WritingOutline>) };
    inline WritingOutline& setChildren(const vector<WritingOutline> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline WritingOutline& setChildren(vector<WritingOutline> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // outline Field Functions 
    bool hasOutline() const { return this->outline_ != nullptr;};
    void deleteOutline() { this->outline_ = nullptr;};
    inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
    inline WritingOutline& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


    // outlineId Field Functions 
    bool hasOutlineId() const { return this->outlineId_ != nullptr;};
    void deleteOutlineId() { this->outlineId_ = nullptr;};
    inline string getOutlineId() const { DARABONBA_PTR_GET_DEFAULT(outlineId_, "") };
    inline WritingOutline& setOutlineId(string outlineId) { DARABONBA_PTR_SET_VALUE(outlineId_, outlineId) };


    // searchKeyWordList Field Functions 
    bool hasSearchKeyWordList() const { return this->searchKeyWordList_ != nullptr;};
    void deleteSearchKeyWordList() { this->searchKeyWordList_ = nullptr;};
    inline const vector<string> & getSearchKeyWordList() const { DARABONBA_PTR_GET_CONST(searchKeyWordList_, vector<string>) };
    inline vector<string> getSearchKeyWordList() { DARABONBA_PTR_GET(searchKeyWordList_, vector<string>) };
    inline WritingOutline& setSearchKeyWordList(const vector<string> & searchKeyWordList) { DARABONBA_PTR_SET_VALUE(searchKeyWordList_, searchKeyWordList) };
    inline WritingOutline& setSearchKeyWordList(vector<string> && searchKeyWordList) { DARABONBA_PTR_SET_RVALUE(searchKeyWordList_, searchKeyWordList) };


    // wordCount Field Functions 
    bool hasWordCount() const { return this->wordCount_ != nullptr;};
    void deleteWordCount() { this->wordCount_ = nullptr;};
    inline string getWordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, "") };
    inline WritingOutline& setWordCount(string wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


    // writingTips Field Functions 
    bool hasWritingTips() const { return this->writingTips_ != nullptr;};
    void deleteWritingTips() { this->writingTips_ = nullptr;};
    inline string getWritingTips() const { DARABONBA_PTR_GET_DEFAULT(writingTips_, "") };
    inline WritingOutline& setWritingTips(string writingTips) { DARABONBA_PTR_SET_VALUE(writingTips_, writingTips) };


  protected:
    shared_ptr<vector<OutlineWritingArticle>> articles_ {};
    shared_ptr<vector<WritingOutline>> children_ {};
    shared_ptr<string> outline_ {};
    shared_ptr<string> outlineId_ {};
    shared_ptr<vector<string>> searchKeyWordList_ {};
    shared_ptr<string> wordCount_ {};
    shared_ptr<string> writingTips_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
