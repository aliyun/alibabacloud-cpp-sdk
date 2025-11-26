// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTPROFILESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTPROFILESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteAgentProfilesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentProfilesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileIds, agentProfileIdsShrink_);
      DARABONBA_PTR_TO_JSON(AppIp, appIp_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentProfilesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileIds, agentProfileIdsShrink_);
      DARABONBA_PTR_FROM_JSON(AppIp, appIp_);
    };
    DeleteAgentProfilesShrinkRequest() = default ;
    DeleteAgentProfilesShrinkRequest(const DeleteAgentProfilesShrinkRequest &) = default ;
    DeleteAgentProfilesShrinkRequest(DeleteAgentProfilesShrinkRequest &&) = default ;
    DeleteAgentProfilesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentProfilesShrinkRequest() = default ;
    DeleteAgentProfilesShrinkRequest& operator=(const DeleteAgentProfilesShrinkRequest &) = default ;
    DeleteAgentProfilesShrinkRequest& operator=(DeleteAgentProfilesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileIdsShrink_ == nullptr
        && return this->appIp_ == nullptr; };
    // agentProfileIdsShrink Field Functions 
    bool hasAgentProfileIdsShrink() const { return this->agentProfileIdsShrink_ != nullptr;};
    void deleteAgentProfileIdsShrink() { this->agentProfileIdsShrink_ = nullptr;};
    inline string agentProfileIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(agentProfileIdsShrink_, "") };
    inline DeleteAgentProfilesShrinkRequest& setAgentProfileIdsShrink(string agentProfileIdsShrink) { DARABONBA_PTR_SET_VALUE(agentProfileIdsShrink_, agentProfileIdsShrink) };


    // appIp Field Functions 
    bool hasAppIp() const { return this->appIp_ != nullptr;};
    void deleteAppIp() { this->appIp_ = nullptr;};
    inline string appIp() const { DARABONBA_PTR_GET_DEFAULT(appIp_, "") };
    inline DeleteAgentProfilesShrinkRequest& setAppIp(string appIp) { DARABONBA_PTR_SET_VALUE(appIp_, appIp) };


  protected:
    std::shared_ptr<string> agentProfileIdsShrink_ = nullptr;
    std::shared_ptr<string> appIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
