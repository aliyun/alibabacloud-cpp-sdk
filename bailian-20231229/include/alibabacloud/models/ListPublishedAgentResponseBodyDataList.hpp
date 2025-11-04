// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataListApplicationConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListPublishedAgentResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAgentResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAgentResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListPublishedAgentResponseBodyDataList() = default ;
    ListPublishedAgentResponseBodyDataList(const ListPublishedAgentResponseBodyDataList &) = default ;
    ListPublishedAgentResponseBodyDataList(ListPublishedAgentResponseBodyDataList &&) = default ;
    ListPublishedAgentResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAgentResponseBodyDataList() = default ;
    ListPublishedAgentResponseBodyDataList& operator=(const ListPublishedAgentResponseBodyDataList &) = default ;
    ListPublishedAgentResponseBodyDataList& operator=(ListPublishedAgentResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfig_ == nullptr
        && return this->code_ == nullptr && return this->instructions_ == nullptr && return this->modelId_ == nullptr && return this->name_ == nullptr; };
    // applicationConfig Field Functions 
    bool hasApplicationConfig() const { return this->applicationConfig_ != nullptr;};
    void deleteApplicationConfig() { this->applicationConfig_ = nullptr;};
    inline const Models::ListPublishedAgentResponseBodyDataListApplicationConfig & applicationConfig() const { DARABONBA_PTR_GET_CONST(applicationConfig_, Models::ListPublishedAgentResponseBodyDataListApplicationConfig) };
    inline Models::ListPublishedAgentResponseBodyDataListApplicationConfig applicationConfig() { DARABONBA_PTR_GET(applicationConfig_, Models::ListPublishedAgentResponseBodyDataListApplicationConfig) };
    inline ListPublishedAgentResponseBodyDataList& setApplicationConfig(const Models::ListPublishedAgentResponseBodyDataListApplicationConfig & applicationConfig) { DARABONBA_PTR_SET_VALUE(applicationConfig_, applicationConfig) };
    inline ListPublishedAgentResponseBodyDataList& setApplicationConfig(Models::ListPublishedAgentResponseBodyDataListApplicationConfig && applicationConfig) { DARABONBA_PTR_SET_RVALUE(applicationConfig_, applicationConfig) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPublishedAgentResponseBodyDataList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline ListPublishedAgentResponseBodyDataList& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ListPublishedAgentResponseBodyDataList& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPublishedAgentResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<Models::ListPublishedAgentResponseBodyDataListApplicationConfig> applicationConfig_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
