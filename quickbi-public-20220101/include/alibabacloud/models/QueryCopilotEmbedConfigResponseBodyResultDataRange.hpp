// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOPILOTEMBEDCONFIGRESPONSEBODYRESULTDATARANGE_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOPILOTEMBEDCONFIGRESPONSEBODYRESULTDATARANGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryCopilotEmbedConfigResponseBodyResultDataRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCopilotEmbedConfigResponseBodyResultDataRange& obj) { 
      DARABONBA_PTR_TO_JSON(AllCube, allCube_);
      DARABONBA_PTR_TO_JSON(AllTheme, allTheme_);
      DARABONBA_PTR_TO_JSON(LlmCubes, llmCubes_);
      DARABONBA_PTR_TO_JSON(Themes, themes_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCopilotEmbedConfigResponseBodyResultDataRange& obj) { 
      DARABONBA_PTR_FROM_JSON(AllCube, allCube_);
      DARABONBA_PTR_FROM_JSON(AllTheme, allTheme_);
      DARABONBA_PTR_FROM_JSON(LlmCubes, llmCubes_);
      DARABONBA_PTR_FROM_JSON(Themes, themes_);
    };
    QueryCopilotEmbedConfigResponseBodyResultDataRange() = default ;
    QueryCopilotEmbedConfigResponseBodyResultDataRange(const QueryCopilotEmbedConfigResponseBodyResultDataRange &) = default ;
    QueryCopilotEmbedConfigResponseBodyResultDataRange(QueryCopilotEmbedConfigResponseBodyResultDataRange &&) = default ;
    QueryCopilotEmbedConfigResponseBodyResultDataRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCopilotEmbedConfigResponseBodyResultDataRange() = default ;
    QueryCopilotEmbedConfigResponseBodyResultDataRange& operator=(const QueryCopilotEmbedConfigResponseBodyResultDataRange &) = default ;
    QueryCopilotEmbedConfigResponseBodyResultDataRange& operator=(QueryCopilotEmbedConfigResponseBodyResultDataRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allCube_ != nullptr
        && this->allTheme_ != nullptr && this->llmCubes_ != nullptr && this->themes_ != nullptr; };
    // allCube Field Functions 
    bool hasAllCube() const { return this->allCube_ != nullptr;};
    void deleteAllCube() { this->allCube_ = nullptr;};
    inline bool allCube() const { DARABONBA_PTR_GET_DEFAULT(allCube_, false) };
    inline QueryCopilotEmbedConfigResponseBodyResultDataRange& setAllCube(bool allCube) { DARABONBA_PTR_SET_VALUE(allCube_, allCube) };


    // allTheme Field Functions 
    bool hasAllTheme() const { return this->allTheme_ != nullptr;};
    void deleteAllTheme() { this->allTheme_ = nullptr;};
    inline bool allTheme() const { DARABONBA_PTR_GET_DEFAULT(allTheme_, false) };
    inline QueryCopilotEmbedConfigResponseBodyResultDataRange& setAllTheme(bool allTheme) { DARABONBA_PTR_SET_VALUE(allTheme_, allTheme) };


    // llmCubes Field Functions 
    bool hasLlmCubes() const { return this->llmCubes_ != nullptr;};
    void deleteLlmCubes() { this->llmCubes_ = nullptr;};
    inline const vector<string> & llmCubes() const { DARABONBA_PTR_GET_CONST(llmCubes_, vector<string>) };
    inline vector<string> llmCubes() { DARABONBA_PTR_GET(llmCubes_, vector<string>) };
    inline QueryCopilotEmbedConfigResponseBodyResultDataRange& setLlmCubes(const vector<string> & llmCubes) { DARABONBA_PTR_SET_VALUE(llmCubes_, llmCubes) };
    inline QueryCopilotEmbedConfigResponseBodyResultDataRange& setLlmCubes(vector<string> && llmCubes) { DARABONBA_PTR_SET_RVALUE(llmCubes_, llmCubes) };


    // themes Field Functions 
    bool hasThemes() const { return this->themes_ != nullptr;};
    void deleteThemes() { this->themes_ = nullptr;};
    inline const vector<string> & themes() const { DARABONBA_PTR_GET_CONST(themes_, vector<string>) };
    inline vector<string> themes() { DARABONBA_PTR_GET(themes_, vector<string>) };
    inline QueryCopilotEmbedConfigResponseBodyResultDataRange& setThemes(const vector<string> & themes) { DARABONBA_PTR_SET_VALUE(themes_, themes) };
    inline QueryCopilotEmbedConfigResponseBodyResultDataRange& setThemes(vector<string> && themes) { DARABONBA_PTR_SET_RVALUE(themes_, themes) };


  protected:
    // Whether all question resources are selected.
    std::shared_ptr<bool> allCube_ = nullptr;
    // Whether all analysis themes are selected.
    std::shared_ptr<bool> allTheme_ = nullptr;
    // Collection of question resource IDs.
    std::shared_ptr<vector<string>> llmCubes_ = nullptr;
    // Collection of analysis theme IDs.
    std::shared_ptr<vector<string>> themes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
