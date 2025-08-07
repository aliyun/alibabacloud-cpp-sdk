// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPublishedAgentResponseBodyDataApplicationConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetPublishedAgentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishedAgentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublishedAgentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetPublishedAgentResponseBodyData() = default ;
    GetPublishedAgentResponseBodyData(const GetPublishedAgentResponseBodyData &) = default ;
    GetPublishedAgentResponseBodyData(GetPublishedAgentResponseBodyData &&) = default ;
    GetPublishedAgentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishedAgentResponseBodyData() = default ;
    GetPublishedAgentResponseBodyData& operator=(const GetPublishedAgentResponseBodyData &) = default ;
    GetPublishedAgentResponseBodyData& operator=(GetPublishedAgentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfig_ != nullptr
        && this->code_ != nullptr && this->instructions_ != nullptr && this->modelId_ != nullptr && this->name_ != nullptr; };
    // applicationConfig Field Functions 
    bool hasApplicationConfig() const { return this->applicationConfig_ != nullptr;};
    void deleteApplicationConfig() { this->applicationConfig_ = nullptr;};
    inline const Models::GetPublishedAgentResponseBodyDataApplicationConfig & applicationConfig() const { DARABONBA_PTR_GET_CONST(applicationConfig_, Models::GetPublishedAgentResponseBodyDataApplicationConfig) };
    inline Models::GetPublishedAgentResponseBodyDataApplicationConfig applicationConfig() { DARABONBA_PTR_GET(applicationConfig_, Models::GetPublishedAgentResponseBodyDataApplicationConfig) };
    inline GetPublishedAgentResponseBodyData& setApplicationConfig(const Models::GetPublishedAgentResponseBodyDataApplicationConfig & applicationConfig) { DARABONBA_PTR_SET_VALUE(applicationConfig_, applicationConfig) };
    inline GetPublishedAgentResponseBodyData& setApplicationConfig(Models::GetPublishedAgentResponseBodyDataApplicationConfig && applicationConfig) { DARABONBA_PTR_SET_RVALUE(applicationConfig_, applicationConfig) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPublishedAgentResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline GetPublishedAgentResponseBodyData& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline GetPublishedAgentResponseBodyData& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPublishedAgentResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<Models::GetPublishedAgentResponseBodyDataApplicationConfig> applicationConfig_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
