// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDSENTITYVALUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDSENTITYVALUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateDSEntityValueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDSEntityValueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Synonyms, synonymsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDSEntityValueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Synonyms, synonymsShrink_);
    };
    UpdateDSEntityValueShrinkRequest() = default ;
    UpdateDSEntityValueShrinkRequest(const UpdateDSEntityValueShrinkRequest &) = default ;
    UpdateDSEntityValueShrinkRequest(UpdateDSEntityValueShrinkRequest &&) = default ;
    UpdateDSEntityValueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDSEntityValueShrinkRequest() = default ;
    UpdateDSEntityValueShrinkRequest& operator=(const UpdateDSEntityValueShrinkRequest &) = default ;
    UpdateDSEntityValueShrinkRequest& operator=(UpdateDSEntityValueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->content_ == nullptr && this->entityId_ == nullptr && this->entityValueId_ == nullptr && this->instanceId_ == nullptr && this->synonymsShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateDSEntityValueShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateDSEntityValueShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline UpdateDSEntityValueShrinkRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityValueId Field Functions 
    bool hasEntityValueId() const { return this->entityValueId_ != nullptr;};
    void deleteEntityValueId() { this->entityValueId_ = nullptr;};
    inline int64_t getEntityValueId() const { DARABONBA_PTR_GET_DEFAULT(entityValueId_, 0L) };
    inline UpdateDSEntityValueShrinkRequest& setEntityValueId(int64_t entityValueId) { DARABONBA_PTR_SET_VALUE(entityValueId_, entityValueId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateDSEntityValueShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // synonymsShrink Field Functions 
    bool hasSynonymsShrink() const { return this->synonymsShrink_ != nullptr;};
    void deleteSynonymsShrink() { this->synonymsShrink_ = nullptr;};
    inline string getSynonymsShrink() const { DARABONBA_PTR_GET_DEFAULT(synonymsShrink_, "") };
    inline UpdateDSEntityValueShrinkRequest& setSynonymsShrink(string synonymsShrink) { DARABONBA_PTR_SET_VALUE(synonymsShrink_, synonymsShrink) };


  protected:
    // The key for the business space. If you omit this parameter, the default business space is used. You can find this key on the Business Management page of your primary account.
    shared_ptr<string> agentKey_ {};
    // The new content for the entity value. For an entity type of `synonyms`, this is the normalized value. For an entity type of `regex`, this is the regular expression.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The entity ID. You can leave this parameter empty when modifying an entity value.
    // 
    // This parameter is required.
    shared_ptr<int64_t> entityId_ {};
    // The ID of the entity value to update.
    // 
    // This parameter is required.
    shared_ptr<int64_t> entityValueId_ {};
    // The bot ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The synonym list for the normalized value.
    shared_ptr<string> synonymsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
