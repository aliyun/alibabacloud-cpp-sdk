// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels.hpp>
#include <alibabacloud/models/QueryDataRangeResponseBodyResultApiCopilotThemeModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataRangeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataRangeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ApiCopilotLlmCubeModels, apiCopilotLlmCubeModels_);
      DARABONBA_PTR_TO_JSON(ApiCopilotThemeModels, apiCopilotThemeModels_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataRangeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiCopilotLlmCubeModels, apiCopilotLlmCubeModels_);
      DARABONBA_PTR_FROM_JSON(ApiCopilotThemeModels, apiCopilotThemeModels_);
    };
    QueryDataRangeResponseBodyResult() = default ;
    QueryDataRangeResponseBodyResult(const QueryDataRangeResponseBodyResult &) = default ;
    QueryDataRangeResponseBodyResult(QueryDataRangeResponseBodyResult &&) = default ;
    QueryDataRangeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataRangeResponseBodyResult() = default ;
    QueryDataRangeResponseBodyResult& operator=(const QueryDataRangeResponseBodyResult &) = default ;
    QueryDataRangeResponseBodyResult& operator=(QueryDataRangeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiCopilotLlmCubeModels_ == nullptr
        && return this->apiCopilotThemeModels_ == nullptr; };
    // apiCopilotLlmCubeModels Field Functions 
    bool hasApiCopilotLlmCubeModels() const { return this->apiCopilotLlmCubeModels_ != nullptr;};
    void deleteApiCopilotLlmCubeModels() { this->apiCopilotLlmCubeModels_ = nullptr;};
    inline const vector<Models::QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels> & apiCopilotLlmCubeModels() const { DARABONBA_PTR_GET_CONST(apiCopilotLlmCubeModels_, vector<Models::QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels>) };
    inline vector<Models::QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels> apiCopilotLlmCubeModels() { DARABONBA_PTR_GET(apiCopilotLlmCubeModels_, vector<Models::QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels>) };
    inline QueryDataRangeResponseBodyResult& setApiCopilotLlmCubeModels(const vector<Models::QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels> & apiCopilotLlmCubeModels) { DARABONBA_PTR_SET_VALUE(apiCopilotLlmCubeModels_, apiCopilotLlmCubeModels) };
    inline QueryDataRangeResponseBodyResult& setApiCopilotLlmCubeModels(vector<Models::QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels> && apiCopilotLlmCubeModels) { DARABONBA_PTR_SET_RVALUE(apiCopilotLlmCubeModels_, apiCopilotLlmCubeModels) };


    // apiCopilotThemeModels Field Functions 
    bool hasApiCopilotThemeModels() const { return this->apiCopilotThemeModels_ != nullptr;};
    void deleteApiCopilotThemeModels() { this->apiCopilotThemeModels_ = nullptr;};
    inline const vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModels> & apiCopilotThemeModels() const { DARABONBA_PTR_GET_CONST(apiCopilotThemeModels_, vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModels>) };
    inline vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModels> apiCopilotThemeModels() { DARABONBA_PTR_GET(apiCopilotThemeModels_, vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModels>) };
    inline QueryDataRangeResponseBodyResult& setApiCopilotThemeModels(const vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModels> & apiCopilotThemeModels) { DARABONBA_PTR_SET_VALUE(apiCopilotThemeModels_, apiCopilotThemeModels) };
    inline QueryDataRangeResponseBodyResult& setApiCopilotThemeModels(vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModels> && apiCopilotThemeModels) { DARABONBA_PTR_SET_RVALUE(apiCopilotThemeModels_, apiCopilotThemeModels) };


  protected:
    // Array of LlmCube resources.
    std::shared_ptr<vector<Models::QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels>> apiCopilotLlmCubeModels_ = nullptr;
    // Array of analysis themes.
    std::shared_ptr<vector<Models::QueryDataRangeResponseBodyResultApiCopilotThemeModels>> apiCopilotThemeModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
