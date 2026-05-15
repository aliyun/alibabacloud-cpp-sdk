// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAPIKEYINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAPIKEYINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateConsumerAPIKeyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAPIKeyInput& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(modelConnectionId, modelConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAPIKeyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(modelConnectionId, modelConnectionId_);
    };
    CreateConsumerAPIKeyInput() = default ;
    CreateConsumerAPIKeyInput(const CreateConsumerAPIKeyInput &) = default ;
    CreateConsumerAPIKeyInput(CreateConsumerAPIKeyInput &&) = default ;
    CreateConsumerAPIKeyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAPIKeyInput() = default ;
    CreateConsumerAPIKeyInput& operator=(const CreateConsumerAPIKeyInput &) = default ;
    CreateConsumerAPIKeyInput& operator=(CreateConsumerAPIKeyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->description_ == nullptr && this->modelConnectionId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateConsumerAPIKeyInput& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConsumerAPIKeyInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modelConnectionId Field Functions 
    bool hasModelConnectionId() const { return this->modelConnectionId_ != nullptr;};
    void deleteModelConnectionId() { this->modelConnectionId_ = nullptr;};
    inline string getModelConnectionId() const { DARABONBA_PTR_GET_DEFAULT(modelConnectionId_, "") };
    inline CreateConsumerAPIKeyInput& setModelConnectionId(string modelConnectionId) { DARABONBA_PTR_SET_VALUE(modelConnectionId_, modelConnectionId) };


  protected:
    // 用户自定义的完整API密钥；为空时由服务自动生成
    shared_ptr<string> apiKey_ {};
    // 消费者API密钥的描述信息，用于说明该密钥的用途
    shared_ptr<string> description_ {};
    // 关联的模型连接标识符
    // 
    // This parameter is required.
    shared_ptr<string> modelConnectionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
