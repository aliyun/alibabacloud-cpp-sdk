// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpireAfterSeconds, expireAfterSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpireAfterSeconds, expireAfterSeconds_);
    };
    CreateAgentRequest() = default ;
    CreateAgentRequest(const CreateAgentRequest &) = default ;
    CreateAgentRequest(CreateAgentRequest &&) = default ;
    CreateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRequest() = default ;
    CreateAgentRequest& operator=(const CreateAgentRequest &) = default ;
    CreateAgentRequest& operator=(CreateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->agentType_ == nullptr && this->description_ == nullptr && this->expireAfterSeconds_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline CreateAgentRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline CreateAgentRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expireAfterSeconds Field Functions 
    bool hasExpireAfterSeconds() const { return this->expireAfterSeconds_ != nullptr;};
    void deleteExpireAfterSeconds() { this->expireAfterSeconds_ = nullptr;};
    inline int32_t getExpireAfterSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireAfterSeconds_, 0) };
    inline CreateAgentRequest& setExpireAfterSeconds(int32_t expireAfterSeconds) { DARABONBA_PTR_SET_VALUE(expireAfterSeconds_, expireAfterSeconds) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentName_ {};
    shared_ptr<string> agentType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> expireAfterSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
