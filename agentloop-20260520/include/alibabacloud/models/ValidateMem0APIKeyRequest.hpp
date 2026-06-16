// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEMEM0APIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEMEM0APIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ValidateMem0APIKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateMem0APIKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateMem0APIKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
    };
    ValidateMem0APIKeyRequest() = default ;
    ValidateMem0APIKeyRequest(const ValidateMem0APIKeyRequest &) = default ;
    ValidateMem0APIKeyRequest(ValidateMem0APIKeyRequest &&) = default ;
    ValidateMem0APIKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateMem0APIKeyRequest() = default ;
    ValidateMem0APIKeyRequest& operator=(const ValidateMem0APIKeyRequest &) = default ;
    ValidateMem0APIKeyRequest& operator=(ValidateMem0APIKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline ValidateMem0APIKeyRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


  protected:
    shared_ptr<string> agentSpace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
