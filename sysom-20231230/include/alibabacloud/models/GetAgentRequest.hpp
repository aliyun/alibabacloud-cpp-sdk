// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
    };
    GetAgentRequest() = default ;
    GetAgentRequest(const GetAgentRequest &) = default ;
    GetAgentRequest(GetAgentRequest &&) = default ;
    GetAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentRequest() = default ;
    GetAgentRequest& operator=(const GetAgentRequest &) = default ;
    GetAgentRequest& operator=(GetAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline GetAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


  protected:
    shared_ptr<string> agentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
