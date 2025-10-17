// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDSENTITYVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDSENTITYVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateDSEntityValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDSEntityValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Synonyms, synonyms_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDSEntityValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Synonyms, synonyms_);
    };
    CreateDSEntityValueRequest() = default ;
    CreateDSEntityValueRequest(const CreateDSEntityValueRequest &) = default ;
    CreateDSEntityValueRequest(CreateDSEntityValueRequest &&) = default ;
    CreateDSEntityValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDSEntityValueRequest() = default ;
    CreateDSEntityValueRequest& operator=(const CreateDSEntityValueRequest &) = default ;
    CreateDSEntityValueRequest& operator=(CreateDSEntityValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->content_ == nullptr && return this->entityId_ == nullptr && return this->instanceId_ == nullptr && return this->synonyms_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateDSEntityValueRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateDSEntityValueRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline CreateDSEntityValueRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDSEntityValueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // synonyms Field Functions 
    bool hasSynonyms() const { return this->synonyms_ != nullptr;};
    void deleteSynonyms() { this->synonyms_ = nullptr;};
    inline const vector<string> & synonyms() const { DARABONBA_PTR_GET_CONST(synonyms_, vector<string>) };
    inline vector<string> synonyms() { DARABONBA_PTR_GET(synonyms_, vector<string>) };
    inline CreateDSEntityValueRequest& setSynonyms(const vector<string> & synonyms) { DARABONBA_PTR_SET_VALUE(synonyms_, synonyms) };
    inline CreateDSEntityValueRequest& setSynonyms(vector<string> && synonyms) { DARABONBA_PTR_SET_RVALUE(synonyms_, synonyms) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<string>> synonyms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
