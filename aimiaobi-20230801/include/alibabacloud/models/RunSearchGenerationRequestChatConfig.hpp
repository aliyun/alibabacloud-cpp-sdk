// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTCHATCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTCHATCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationRequestChatConfigSearchParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationRequestChatConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequestChatConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableThinking, enableThinking_);
      DARABONBA_PTR_TO_JSON(ExcludeGenerateOptions, excludeGenerateOptions_);
      DARABONBA_PTR_TO_JSON(GenerateLevel, generateLevel_);
      DARABONBA_PTR_TO_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_TO_JSON(SearchModels, searchModels_);
      DARABONBA_PTR_TO_JSON(SearchParam, searchParam_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequestChatConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableThinking, enableThinking_);
      DARABONBA_PTR_FROM_JSON(ExcludeGenerateOptions, excludeGenerateOptions_);
      DARABONBA_PTR_FROM_JSON(GenerateLevel, generateLevel_);
      DARABONBA_PTR_FROM_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_FROM_JSON(SearchModels, searchModels_);
      DARABONBA_PTR_FROM_JSON(SearchParam, searchParam_);
    };
    RunSearchGenerationRequestChatConfig() = default ;
    RunSearchGenerationRequestChatConfig(const RunSearchGenerationRequestChatConfig &) = default ;
    RunSearchGenerationRequestChatConfig(RunSearchGenerationRequestChatConfig &&) = default ;
    RunSearchGenerationRequestChatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequestChatConfig() = default ;
    RunSearchGenerationRequestChatConfig& operator=(const RunSearchGenerationRequestChatConfig &) = default ;
    RunSearchGenerationRequestChatConfig& operator=(RunSearchGenerationRequestChatConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableThinking_ != nullptr
        && this->excludeGenerateOptions_ != nullptr && this->generateLevel_ != nullptr && this->generateTechnology_ != nullptr && this->searchModels_ != nullptr && this->searchParam_ != nullptr; };
    // enableThinking Field Functions 
    bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
    void deleteEnableThinking() { this->enableThinking_ = nullptr;};
    inline bool enableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
    inline RunSearchGenerationRequestChatConfig& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


    // excludeGenerateOptions Field Functions 
    bool hasExcludeGenerateOptions() const { return this->excludeGenerateOptions_ != nullptr;};
    void deleteExcludeGenerateOptions() { this->excludeGenerateOptions_ = nullptr;};
    inline const vector<string> & excludeGenerateOptions() const { DARABONBA_PTR_GET_CONST(excludeGenerateOptions_, vector<string>) };
    inline vector<string> excludeGenerateOptions() { DARABONBA_PTR_GET(excludeGenerateOptions_, vector<string>) };
    inline RunSearchGenerationRequestChatConfig& setExcludeGenerateOptions(const vector<string> & excludeGenerateOptions) { DARABONBA_PTR_SET_VALUE(excludeGenerateOptions_, excludeGenerateOptions) };
    inline RunSearchGenerationRequestChatConfig& setExcludeGenerateOptions(vector<string> && excludeGenerateOptions) { DARABONBA_PTR_SET_RVALUE(excludeGenerateOptions_, excludeGenerateOptions) };


    // generateLevel Field Functions 
    bool hasGenerateLevel() const { return this->generateLevel_ != nullptr;};
    void deleteGenerateLevel() { this->generateLevel_ = nullptr;};
    inline string generateLevel() const { DARABONBA_PTR_GET_DEFAULT(generateLevel_, "") };
    inline RunSearchGenerationRequestChatConfig& setGenerateLevel(string generateLevel) { DARABONBA_PTR_SET_VALUE(generateLevel_, generateLevel) };


    // generateTechnology Field Functions 
    bool hasGenerateTechnology() const { return this->generateTechnology_ != nullptr;};
    void deleteGenerateTechnology() { this->generateTechnology_ = nullptr;};
    inline string generateTechnology() const { DARABONBA_PTR_GET_DEFAULT(generateTechnology_, "") };
    inline RunSearchGenerationRequestChatConfig& setGenerateTechnology(string generateTechnology) { DARABONBA_PTR_SET_VALUE(generateTechnology_, generateTechnology) };


    // searchModels Field Functions 
    bool hasSearchModels() const { return this->searchModels_ != nullptr;};
    void deleteSearchModels() { this->searchModels_ = nullptr;};
    inline const vector<string> & searchModels() const { DARABONBA_PTR_GET_CONST(searchModels_, vector<string>) };
    inline vector<string> searchModels() { DARABONBA_PTR_GET(searchModels_, vector<string>) };
    inline RunSearchGenerationRequestChatConfig& setSearchModels(const vector<string> & searchModels) { DARABONBA_PTR_SET_VALUE(searchModels_, searchModels) };
    inline RunSearchGenerationRequestChatConfig& setSearchModels(vector<string> && searchModels) { DARABONBA_PTR_SET_RVALUE(searchModels_, searchModels) };


    // searchParam Field Functions 
    bool hasSearchParam() const { return this->searchParam_ != nullptr;};
    void deleteSearchParam() { this->searchParam_ = nullptr;};
    inline const Models::RunSearchGenerationRequestChatConfigSearchParam & searchParam() const { DARABONBA_PTR_GET_CONST(searchParam_, Models::RunSearchGenerationRequestChatConfigSearchParam) };
    inline Models::RunSearchGenerationRequestChatConfigSearchParam searchParam() { DARABONBA_PTR_GET(searchParam_, Models::RunSearchGenerationRequestChatConfigSearchParam) };
    inline RunSearchGenerationRequestChatConfig& setSearchParam(const Models::RunSearchGenerationRequestChatConfigSearchParam & searchParam) { DARABONBA_PTR_SET_VALUE(searchParam_, searchParam) };
    inline RunSearchGenerationRequestChatConfig& setSearchParam(Models::RunSearchGenerationRequestChatConfigSearchParam && searchParam) { DARABONBA_PTR_SET_RVALUE(searchParam_, searchParam) };


  protected:
    std::shared_ptr<bool> enableThinking_ = nullptr;
    std::shared_ptr<vector<string>> excludeGenerateOptions_ = nullptr;
    std::shared_ptr<string> generateLevel_ = nullptr;
    std::shared_ptr<string> generateTechnology_ = nullptr;
    std::shared_ptr<vector<string>> searchModels_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationRequestChatConfigSearchParam> searchParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
