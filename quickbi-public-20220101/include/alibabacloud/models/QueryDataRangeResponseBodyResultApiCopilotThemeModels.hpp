// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODYRESULTAPICOPILOTTHEMEMODELS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODYRESULTAPICOPILOTTHEMEMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataRangeResponseBodyResultApiCopilotThemeModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataRangeResponseBodyResultApiCopilotThemeModels& obj) { 
      DARABONBA_PTR_TO_JSON(ApiCopilotLlmCubeModels, apiCopilotLlmCubeModels_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
      DARABONBA_PTR_TO_JSON(ThemeName, themeName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataRangeResponseBodyResultApiCopilotThemeModels& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiCopilotLlmCubeModels, apiCopilotLlmCubeModels_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
      DARABONBA_PTR_FROM_JSON(ThemeName, themeName_);
    };
    QueryDataRangeResponseBodyResultApiCopilotThemeModels() = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModels(const QueryDataRangeResponseBodyResultApiCopilotThemeModels &) = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModels(QueryDataRangeResponseBodyResultApiCopilotThemeModels &&) = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataRangeResponseBodyResultApiCopilotThemeModels() = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModels& operator=(const QueryDataRangeResponseBodyResultApiCopilotThemeModels &) = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModels& operator=(QueryDataRangeResponseBodyResultApiCopilotThemeModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiCopilotLlmCubeModels_ != nullptr
        && this->createUser_ != nullptr && this->themeId_ != nullptr && this->themeName_ != nullptr; };
    // apiCopilotLlmCubeModels Field Functions 
    bool hasApiCopilotLlmCubeModels() const { return this->apiCopilotLlmCubeModels_ != nullptr;};
    void deleteApiCopilotLlmCubeModels() { this->apiCopilotLlmCubeModels_ = nullptr;};
    inline const vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels> & apiCopilotLlmCubeModels() const { DARABONBA_PTR_GET_CONST(apiCopilotLlmCubeModels_, vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels>) };
    inline vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels> apiCopilotLlmCubeModels() { DARABONBA_PTR_GET(apiCopilotLlmCubeModels_, vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels>) };
    inline QueryDataRangeResponseBodyResultApiCopilotThemeModels& setApiCopilotLlmCubeModels(const vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels> & apiCopilotLlmCubeModels) { DARABONBA_PTR_SET_VALUE(apiCopilotLlmCubeModels_, apiCopilotLlmCubeModels) };
    inline QueryDataRangeResponseBodyResultApiCopilotThemeModels& setApiCopilotLlmCubeModels(vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels> && apiCopilotLlmCubeModels) { DARABONBA_PTR_SET_RVALUE(apiCopilotLlmCubeModels_, apiCopilotLlmCubeModels) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline QueryDataRangeResponseBodyResultApiCopilotThemeModels& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline string themeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, "") };
    inline QueryDataRangeResponseBodyResultApiCopilotThemeModels& setThemeId(string themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


    // themeName Field Functions 
    bool hasThemeName() const { return this->themeName_ != nullptr;};
    void deleteThemeName() { this->themeName_ = nullptr;};
    inline string themeName() const { DARABONBA_PTR_GET_DEFAULT(themeName_, "") };
    inline QueryDataRangeResponseBodyResultApiCopilotThemeModels& setThemeName(string themeName) { DARABONBA_PTR_SET_VALUE(themeName_, themeName) };


  protected:
    // Array of LlmCube resources.
    std::shared_ptr<vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels>> apiCopilotLlmCubeModels_ = nullptr;
    // Nickname of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // Analysis theme ID.
    std::shared_ptr<string> themeId_ = nullptr;
    // Nickname of the analysis theme.
    std::shared_ptr<string> themeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
