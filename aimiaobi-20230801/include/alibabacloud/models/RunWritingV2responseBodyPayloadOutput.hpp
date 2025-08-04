// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunWritingV2ResponseBodyPayloadOutputArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2ResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2ResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2ResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    RunWritingV2ResponseBodyPayloadOutput() = default ;
    RunWritingV2ResponseBodyPayloadOutput(const RunWritingV2ResponseBodyPayloadOutput &) = default ;
    RunWritingV2ResponseBodyPayloadOutput(RunWritingV2ResponseBodyPayloadOutput &&) = default ;
    RunWritingV2ResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2ResponseBodyPayloadOutput() = default ;
    RunWritingV2ResponseBodyPayloadOutput& operator=(const RunWritingV2ResponseBodyPayloadOutput &) = default ;
    RunWritingV2ResponseBodyPayloadOutput& operator=(RunWritingV2ResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articles_ != nullptr
        && this->miniDoc_ != nullptr && this->searchQuery_ != nullptr && this->text_ != nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles>) };
    inline vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles>) };
    inline RunWritingV2ResponseBodyPayloadOutput& setArticles(const vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunWritingV2ResponseBodyPayloadOutput& setArticles(vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // miniDoc Field Functions 
    bool hasMiniDoc() const { return this->miniDoc_ != nullptr;};
    void deleteMiniDoc() { this->miniDoc_ = nullptr;};
    inline const vector<string> & miniDoc() const { DARABONBA_PTR_GET_CONST(miniDoc_, vector<string>) };
    inline vector<string> miniDoc() { DARABONBA_PTR_GET(miniDoc_, vector<string>) };
    inline RunWritingV2ResponseBodyPayloadOutput& setMiniDoc(const vector<string> & miniDoc) { DARABONBA_PTR_SET_VALUE(miniDoc_, miniDoc) };
    inline RunWritingV2ResponseBodyPayloadOutput& setMiniDoc(vector<string> && miniDoc) { DARABONBA_PTR_SET_RVALUE(miniDoc_, miniDoc) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunWritingV2ResponseBodyPayloadOutput& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunWritingV2ResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles>> articles_ = nullptr;
    std::shared_ptr<vector<string>> miniDoc_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
