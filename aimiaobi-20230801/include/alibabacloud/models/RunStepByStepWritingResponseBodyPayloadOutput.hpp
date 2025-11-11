// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunStepByStepWritingResponseBodyPayloadOutputArticles.hpp>
#include <alibabacloud/models/RunStepByStepWritingResponseBodyPayloadOutputExtraOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(ExtraOutput, extraOutput_);
      DARABONBA_PTR_TO_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(ExtraOutput, extraOutput_);
      DARABONBA_PTR_FROM_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    RunStepByStepWritingResponseBodyPayloadOutput() = default ;
    RunStepByStepWritingResponseBodyPayloadOutput(const RunStepByStepWritingResponseBodyPayloadOutput &) = default ;
    RunStepByStepWritingResponseBodyPayloadOutput(RunStepByStepWritingResponseBodyPayloadOutput &&) = default ;
    RunStepByStepWritingResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingResponseBodyPayloadOutput() = default ;
    RunStepByStepWritingResponseBodyPayloadOutput& operator=(const RunStepByStepWritingResponseBodyPayloadOutput &) = default ;
    RunStepByStepWritingResponseBodyPayloadOutput& operator=(RunStepByStepWritingResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->extraOutput_ == nullptr && return this->miniDoc_ == nullptr && return this->searchQuery_ == nullptr && return this->text_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunStepByStepWritingResponseBodyPayloadOutputArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunStepByStepWritingResponseBodyPayloadOutputArticles>) };
    inline vector<Models::RunStepByStepWritingResponseBodyPayloadOutputArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunStepByStepWritingResponseBodyPayloadOutputArticles>) };
    inline RunStepByStepWritingResponseBodyPayloadOutput& setArticles(const vector<Models::RunStepByStepWritingResponseBodyPayloadOutputArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunStepByStepWritingResponseBodyPayloadOutput& setArticles(vector<Models::RunStepByStepWritingResponseBodyPayloadOutputArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // extraOutput Field Functions 
    bool hasExtraOutput() const { return this->extraOutput_ != nullptr;};
    void deleteExtraOutput() { this->extraOutput_ = nullptr;};
    inline const Models::RunStepByStepWritingResponseBodyPayloadOutputExtraOutput & extraOutput() const { DARABONBA_PTR_GET_CONST(extraOutput_, Models::RunStepByStepWritingResponseBodyPayloadOutputExtraOutput) };
    inline Models::RunStepByStepWritingResponseBodyPayloadOutputExtraOutput extraOutput() { DARABONBA_PTR_GET(extraOutput_, Models::RunStepByStepWritingResponseBodyPayloadOutputExtraOutput) };
    inline RunStepByStepWritingResponseBodyPayloadOutput& setExtraOutput(const Models::RunStepByStepWritingResponseBodyPayloadOutputExtraOutput & extraOutput) { DARABONBA_PTR_SET_VALUE(extraOutput_, extraOutput) };
    inline RunStepByStepWritingResponseBodyPayloadOutput& setExtraOutput(Models::RunStepByStepWritingResponseBodyPayloadOutputExtraOutput && extraOutput) { DARABONBA_PTR_SET_RVALUE(extraOutput_, extraOutput) };


    // miniDoc Field Functions 
    bool hasMiniDoc() const { return this->miniDoc_ != nullptr;};
    void deleteMiniDoc() { this->miniDoc_ = nullptr;};
    inline const vector<string> & miniDoc() const { DARABONBA_PTR_GET_CONST(miniDoc_, vector<string>) };
    inline vector<string> miniDoc() { DARABONBA_PTR_GET(miniDoc_, vector<string>) };
    inline RunStepByStepWritingResponseBodyPayloadOutput& setMiniDoc(const vector<string> & miniDoc) { DARABONBA_PTR_SET_VALUE(miniDoc_, miniDoc) };
    inline RunStepByStepWritingResponseBodyPayloadOutput& setMiniDoc(vector<string> && miniDoc) { DARABONBA_PTR_SET_RVALUE(miniDoc_, miniDoc) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunStepByStepWritingResponseBodyPayloadOutput& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunStepByStepWritingResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<Models::RunStepByStepWritingResponseBodyPayloadOutputArticles>> articles_ = nullptr;
    std::shared_ptr<Models::RunStepByStepWritingResponseBodyPayloadOutputExtraOutput> extraOutput_ = nullptr;
    std::shared_ptr<vector<string>> miniDoc_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
