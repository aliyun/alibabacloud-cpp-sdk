// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAINTELLIGENTSEARCHCONFIGSEARCHSAMPLES_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAINTELLIGENTSEARCHCONFIGSEARCHSAMPLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples() = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples(const GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples &) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples(GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples &&) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples() = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples& operator=(const GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples &) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples& operator=(GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->prompt_ == nullptr && return this->text_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles>) };
    inline vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles>) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples& setArticles(const vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples& setArticles(vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles>> articles_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
