// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUESRESPONSEBODYDATACHATCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUESRESPONSEBODYDATACHATCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListSearchTaskDialoguesResponseBodyDataChatConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTaskDialoguesResponseBodyDataChatConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DialogueType, dialogueType_);
      DARABONBA_PTR_TO_JSON(EndToEnd, endToEnd_);
      DARABONBA_PTR_TO_JSON(GenerateLevel, generateLevel_);
      DARABONBA_PTR_TO_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_TO_JSON(SearchModels, searchModels_);
      DARABONBA_PTR_TO_JSON(SearchParam, searchParam_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTaskDialoguesResponseBodyDataChatConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DialogueType, dialogueType_);
      DARABONBA_PTR_FROM_JSON(EndToEnd, endToEnd_);
      DARABONBA_PTR_FROM_JSON(GenerateLevel, generateLevel_);
      DARABONBA_PTR_FROM_JSON(GenerateTechnology, generateTechnology_);
      DARABONBA_PTR_FROM_JSON(SearchModels, searchModels_);
      DARABONBA_PTR_FROM_JSON(SearchParam, searchParam_);
    };
    ListSearchTaskDialoguesResponseBodyDataChatConfig() = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfig(const ListSearchTaskDialoguesResponseBodyDataChatConfig &) = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfig(ListSearchTaskDialoguesResponseBodyDataChatConfig &&) = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTaskDialoguesResponseBodyDataChatConfig() = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfig& operator=(const ListSearchTaskDialoguesResponseBodyDataChatConfig &) = default ;
    ListSearchTaskDialoguesResponseBodyDataChatConfig& operator=(ListSearchTaskDialoguesResponseBodyDataChatConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogueType_ == nullptr
        && return this->endToEnd_ == nullptr && return this->generateLevel_ == nullptr && return this->generateTechnology_ == nullptr && return this->searchModels_ == nullptr && return this->searchParam_ == nullptr; };
    // dialogueType Field Functions 
    bool hasDialogueType() const { return this->dialogueType_ != nullptr;};
    void deleteDialogueType() { this->dialogueType_ = nullptr;};
    inline int32_t dialogueType() const { DARABONBA_PTR_GET_DEFAULT(dialogueType_, 0) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfig& setDialogueType(int32_t dialogueType) { DARABONBA_PTR_SET_VALUE(dialogueType_, dialogueType) };


    // endToEnd Field Functions 
    bool hasEndToEnd() const { return this->endToEnd_ != nullptr;};
    void deleteEndToEnd() { this->endToEnd_ = nullptr;};
    inline bool endToEnd() const { DARABONBA_PTR_GET_DEFAULT(endToEnd_, false) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfig& setEndToEnd(bool endToEnd) { DARABONBA_PTR_SET_VALUE(endToEnd_, endToEnd) };


    // generateLevel Field Functions 
    bool hasGenerateLevel() const { return this->generateLevel_ != nullptr;};
    void deleteGenerateLevel() { this->generateLevel_ = nullptr;};
    inline string generateLevel() const { DARABONBA_PTR_GET_DEFAULT(generateLevel_, "") };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfig& setGenerateLevel(string generateLevel) { DARABONBA_PTR_SET_VALUE(generateLevel_, generateLevel) };


    // generateTechnology Field Functions 
    bool hasGenerateTechnology() const { return this->generateTechnology_ != nullptr;};
    void deleteGenerateTechnology() { this->generateTechnology_ = nullptr;};
    inline string generateTechnology() const { DARABONBA_PTR_GET_DEFAULT(generateTechnology_, "") };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfig& setGenerateTechnology(string generateTechnology) { DARABONBA_PTR_SET_VALUE(generateTechnology_, generateTechnology) };


    // searchModels Field Functions 
    bool hasSearchModels() const { return this->searchModels_ != nullptr;};
    void deleteSearchModels() { this->searchModels_ = nullptr;};
    inline const vector<string> & searchModels() const { DARABONBA_PTR_GET_CONST(searchModels_, vector<string>) };
    inline vector<string> searchModels() { DARABONBA_PTR_GET(searchModels_, vector<string>) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfig& setSearchModels(const vector<string> & searchModels) { DARABONBA_PTR_SET_VALUE(searchModels_, searchModels) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfig& setSearchModels(vector<string> && searchModels) { DARABONBA_PTR_SET_RVALUE(searchModels_, searchModels) };


    // searchParam Field Functions 
    bool hasSearchParam() const { return this->searchParam_ != nullptr;};
    void deleteSearchParam() { this->searchParam_ = nullptr;};
    inline const Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam & searchParam() const { DARABONBA_PTR_GET_CONST(searchParam_, Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam) };
    inline Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam searchParam() { DARABONBA_PTR_GET(searchParam_, Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfig& setSearchParam(const Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam & searchParam) { DARABONBA_PTR_SET_VALUE(searchParam_, searchParam) };
    inline ListSearchTaskDialoguesResponseBodyDataChatConfig& setSearchParam(Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam && searchParam) { DARABONBA_PTR_SET_RVALUE(searchParam_, searchParam) };


  protected:
    std::shared_ptr<int32_t> dialogueType_ = nullptr;
    std::shared_ptr<bool> endToEnd_ = nullptr;
    std::shared_ptr<string> generateLevel_ = nullptr;
    std::shared_ptr<string> generateTechnology_ = nullptr;
    std::shared_ptr<vector<string>> searchModels_ = nullptr;
    std::shared_ptr<Models::ListSearchTaskDialoguesResponseBodyDataChatConfigSearchParam> searchParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
