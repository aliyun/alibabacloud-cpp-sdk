// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTRUNTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTRUNTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetAgentRuntimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeVersion, agentRuntimeVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeVersion, agentRuntimeVersion_);
    };
    GetAgentRuntimeRequest() = default ;
    GetAgentRuntimeRequest(const GetAgentRuntimeRequest &) = default ;
    GetAgentRuntimeRequest(GetAgentRuntimeRequest &&) = default ;
    GetAgentRuntimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentRuntimeRequest() = default ;
    GetAgentRuntimeRequest& operator=(const GetAgentRuntimeRequest &) = default ;
    GetAgentRuntimeRequest& operator=(GetAgentRuntimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeVersion_ == nullptr; };
    // agentRuntimeVersion Field Functions 
    bool hasAgentRuntimeVersion() const { return this->agentRuntimeVersion_ != nullptr;};
    void deleteAgentRuntimeVersion() { this->agentRuntimeVersion_ = nullptr;};
    inline string getAgentRuntimeVersion() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeVersion_, "") };
    inline GetAgentRuntimeRequest& setAgentRuntimeVersion(string agentRuntimeVersion) { DARABONBA_PTR_SET_VALUE(agentRuntimeVersion_, agentRuntimeVersion) };


  protected:
    // 指定要获取的智能体运行时版本，如果不指定则返回最新版本
    shared_ptr<string> agentRuntimeVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
