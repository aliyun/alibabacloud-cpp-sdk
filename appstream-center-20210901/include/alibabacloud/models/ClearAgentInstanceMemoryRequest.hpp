// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARAGENTINSTANCEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEARAGENTINSTANCEMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ClearAgentInstanceMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearAgentInstanceMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentInstanceId, agentInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearAgentInstanceMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentInstanceId, agentInstanceId_);
    };
    ClearAgentInstanceMemoryRequest() = default ;
    ClearAgentInstanceMemoryRequest(const ClearAgentInstanceMemoryRequest &) = default ;
    ClearAgentInstanceMemoryRequest(ClearAgentInstanceMemoryRequest &&) = default ;
    ClearAgentInstanceMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearAgentInstanceMemoryRequest() = default ;
    ClearAgentInstanceMemoryRequest& operator=(const ClearAgentInstanceMemoryRequest &) = default ;
    ClearAgentInstanceMemoryRequest& operator=(ClearAgentInstanceMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentInstanceId_ == nullptr; };
    // agentInstanceId Field Functions 
    bool hasAgentInstanceId() const { return this->agentInstanceId_ != nullptr;};
    void deleteAgentInstanceId() { this->agentInstanceId_ = nullptr;};
    inline string getAgentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(agentInstanceId_, "") };
    inline ClearAgentInstanceMemoryRequest& setAgentInstanceId(string agentInstanceId) { DARABONBA_PTR_SET_VALUE(agentInstanceId_, agentInstanceId) };


  protected:
    // The ID of the agent instance whose memory you want to clear. This parameter is required and can be obtained from the response of ListAgentInstanceMemory.
    shared_ptr<string> agentInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
