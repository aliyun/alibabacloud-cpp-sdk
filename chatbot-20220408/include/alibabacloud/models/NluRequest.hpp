// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NLUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_NLUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class NluRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NluRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
    };
    friend void from_json(const Darabonba::Json& j, NluRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
    };
    NluRequest() = default ;
    NluRequest(const NluRequest &) = default ;
    NluRequest(NluRequest &&) = default ;
    NluRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NluRequest() = default ;
    NluRequest& operator=(const NluRequest &) = default ;
    NluRequest& operator=(NluRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->utterance_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline NluRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline NluRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string utterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline NluRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> utterance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
