// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTCARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AGENTCARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260810
{
namespace Models
{
  class AgentCardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentCardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
    };
    friend void from_json(const Darabonba::Json& j, AgentCardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
    };
    AgentCardRequest() = default ;
    AgentCardRequest(const AgentCardRequest &) = default ;
    AgentCardRequest(AgentCardRequest &&) = default ;
    AgentCardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentCardRequest() = default ;
    AgentCardRequest& operator=(const AgentCardRequest &) = default ;
    AgentCardRequest& operator=(AgentCardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline AgentCardRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


  protected:
    shared_ptr<string> env_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssAgent20260810
#endif
