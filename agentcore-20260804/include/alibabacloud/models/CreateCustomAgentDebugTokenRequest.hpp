// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMAGENTDEBUGTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMAGENTDEBUGTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateCustomAgentDebugTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomAgentDebugTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomAgentDebugTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
    };
    CreateCustomAgentDebugTokenRequest() = default ;
    CreateCustomAgentDebugTokenRequest(const CreateCustomAgentDebugTokenRequest &) = default ;
    CreateCustomAgentDebugTokenRequest(CreateCustomAgentDebugTokenRequest &&) = default ;
    CreateCustomAgentDebugTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomAgentDebugTokenRequest() = default ;
    CreateCustomAgentDebugTokenRequest& operator=(const CreateCustomAgentDebugTokenRequest &) = default ;
    CreateCustomAgentDebugTokenRequest& operator=(CreateCustomAgentDebugTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkType_ == nullptr; };
    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateCustomAgentDebugTokenRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    // The network type used for local debugging. INTERNET indicates public network access. INTRANET indicates access over a virtual private cloud (VPC).
    // 
    // This parameter is required.
    shared_ptr<string> networkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
