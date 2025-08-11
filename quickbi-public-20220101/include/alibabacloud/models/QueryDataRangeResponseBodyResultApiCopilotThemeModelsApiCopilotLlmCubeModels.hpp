// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODYRESULTAPICOPILOTTHEMEMODELSAPICOPILOTLLMCUBEMODELS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARANGERESPONSEBODYRESULTAPICOPILOTTHEMEMODELSAPICOPILOTLLMCUBEMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(LlmCubeId, llmCubeId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(LlmCubeId, llmCubeId_);
    };
    QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels() = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels(const QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels &) = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels(QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels &&) = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels() = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels& operator=(const QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels &) = default ;
    QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels& operator=(QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->createUser_ != nullptr && this->llmCubeId_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // llmCubeId Field Functions 
    bool hasLlmCubeId() const { return this->llmCubeId_ != nullptr;};
    void deleteLlmCubeId() { this->llmCubeId_ = nullptr;};
    inline string llmCubeId() const { DARABONBA_PTR_GET_DEFAULT(llmCubeId_, "") };
    inline QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels& setLlmCubeId(string llmCubeId) { DARABONBA_PTR_SET_VALUE(llmCubeId_, llmCubeId) };


  protected:
    // Alias of the LLM cube resource.
    std::shared_ptr<string> alias_ = nullptr;
    // Nickname of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // LlmCube resource ID.
    std::shared_ptr<string> llmCubeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
