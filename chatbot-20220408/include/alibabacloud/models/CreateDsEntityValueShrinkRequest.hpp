// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDSENTITYVALUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDSENTITYVALUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateDSEntityValueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDSEntityValueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Synonyms, synonymsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDSEntityValueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Synonyms, synonymsShrink_);
    };
    CreateDSEntityValueShrinkRequest() = default ;
    CreateDSEntityValueShrinkRequest(const CreateDSEntityValueShrinkRequest &) = default ;
    CreateDSEntityValueShrinkRequest(CreateDSEntityValueShrinkRequest &&) = default ;
    CreateDSEntityValueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDSEntityValueShrinkRequest() = default ;
    CreateDSEntityValueShrinkRequest& operator=(const CreateDSEntityValueShrinkRequest &) = default ;
    CreateDSEntityValueShrinkRequest& operator=(CreateDSEntityValueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->content_ == nullptr && return this->entityId_ == nullptr && return this->instanceId_ == nullptr && return this->synonymsShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateDSEntityValueShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateDSEntityValueShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline CreateDSEntityValueShrinkRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDSEntityValueShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // synonymsShrink Field Functions 
    bool hasSynonymsShrink() const { return this->synonymsShrink_ != nullptr;};
    void deleteSynonymsShrink() { this->synonymsShrink_ = nullptr;};
    inline string synonymsShrink() const { DARABONBA_PTR_GET_DEFAULT(synonymsShrink_, "") };
    inline CreateDSEntityValueShrinkRequest& setSynonymsShrink(string synonymsShrink) { DARABONBA_PTR_SET_VALUE(synonymsShrink_, synonymsShrink) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> synonymsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
