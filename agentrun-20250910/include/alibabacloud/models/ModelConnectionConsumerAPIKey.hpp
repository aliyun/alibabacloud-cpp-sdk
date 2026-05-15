// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELCONNECTIONCONSUMERAPIKEY_HPP_
#define ALIBABACLOUD_MODELS_MODELCONNECTIONCONSUMERAPIKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelConnectionConsumerAPIKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelConnectionConsumerAPIKey& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ModelConnectionConsumerAPIKey& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ModelConnectionConsumerAPIKey() = default ;
    ModelConnectionConsumerAPIKey(const ModelConnectionConsumerAPIKey &) = default ;
    ModelConnectionConsumerAPIKey(ModelConnectionConsumerAPIKey &&) = default ;
    ModelConnectionConsumerAPIKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelConnectionConsumerAPIKey() = default ;
    ModelConnectionConsumerAPIKey& operator=(const ModelConnectionConsumerAPIKey &) = default ;
    ModelConnectionConsumerAPIKey& operator=(ModelConnectionConsumerAPIKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->value_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline string getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, "") };
    inline ModelConnectionConsumerAPIKey& setApiKeyId(string apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ModelConnectionConsumerAPIKey& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 消费者API密钥记录的唯一标识
    shared_ptr<string> apiKeyId_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
