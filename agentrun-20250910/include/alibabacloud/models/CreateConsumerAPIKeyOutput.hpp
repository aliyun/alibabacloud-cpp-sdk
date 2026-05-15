// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAPIKEYOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAPIKEYOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateConsumerAPIKeyOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAPIKeyOutput& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(consumerApiKeyId, consumerApiKeyId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(maskedKey, maskedKey_);
      DARABONBA_PTR_TO_JSON(modelConnectionId, modelConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAPIKeyOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(consumerApiKeyId, consumerApiKeyId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(maskedKey, maskedKey_);
      DARABONBA_PTR_FROM_JSON(modelConnectionId, modelConnectionId_);
    };
    CreateConsumerAPIKeyOutput() = default ;
    CreateConsumerAPIKeyOutput(const CreateConsumerAPIKeyOutput &) = default ;
    CreateConsumerAPIKeyOutput(CreateConsumerAPIKeyOutput &&) = default ;
    CreateConsumerAPIKeyOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAPIKeyOutput() = default ;
    CreateConsumerAPIKeyOutput& operator=(const CreateConsumerAPIKeyOutput &) = default ;
    CreateConsumerAPIKeyOutput& operator=(CreateConsumerAPIKeyOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->apiKey_ == nullptr && this->consumerApiKeyId_ == nullptr && this->createdAt_ == nullptr && this->description_ == nullptr && this->lastUpdatedAt_ == nullptr
        && this->maskedKey_ == nullptr && this->modelConnectionId_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline CreateConsumerAPIKeyOutput& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateConsumerAPIKeyOutput& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // consumerApiKeyId Field Functions 
    bool hasConsumerApiKeyId() const { return this->consumerApiKeyId_ != nullptr;};
    void deleteConsumerApiKeyId() { this->consumerApiKeyId_ = nullptr;};
    inline string getConsumerApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(consumerApiKeyId_, "") };
    inline CreateConsumerAPIKeyOutput& setConsumerApiKeyId(string consumerApiKeyId) { DARABONBA_PTR_SET_VALUE(consumerApiKeyId_, consumerApiKeyId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateConsumerAPIKeyOutput& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConsumerAPIKeyOutput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline CreateConsumerAPIKeyOutput& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // maskedKey Field Functions 
    bool hasMaskedKey() const { return this->maskedKey_ != nullptr;};
    void deleteMaskedKey() { this->maskedKey_ = nullptr;};
    inline string getMaskedKey() const { DARABONBA_PTR_GET_DEFAULT(maskedKey_, "") };
    inline CreateConsumerAPIKeyOutput& setMaskedKey(string maskedKey) { DARABONBA_PTR_SET_VALUE(maskedKey_, maskedKey) };


    // modelConnectionId Field Functions 
    bool hasModelConnectionId() const { return this->modelConnectionId_ != nullptr;};
    void deleteModelConnectionId() { this->modelConnectionId_ = nullptr;};
    inline string getModelConnectionId() const { DARABONBA_PTR_GET_DEFAULT(modelConnectionId_, "") };
    inline CreateConsumerAPIKeyOutput& setModelConnectionId(string modelConnectionId) { DARABONBA_PTR_SET_VALUE(modelConnectionId_, modelConnectionId) };


  protected:
    // 密钥是否启用
    shared_ptr<bool> active_ {};
    // 完整的API密钥明文，仅在创建时返回一次，请妥善保存
    shared_ptr<string> apiKey_ {};
    // 消费者API密钥的唯一标识符
    shared_ptr<string> consumerApiKeyId_ {};
    // 创建时间，采用ISO 8601格式
    shared_ptr<string> createdAt_ {};
    // 消费者API密钥的描述信息
    shared_ptr<string> description_ {};
    // 更新时间，采用ISO 8601格式
    shared_ptr<string> lastUpdatedAt_ {};
    // API密钥的掩码展示形式
    shared_ptr<string> maskedKey_ {};
    // 关联的模型连接标识符
    shared_ptr<string> modelConnectionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
