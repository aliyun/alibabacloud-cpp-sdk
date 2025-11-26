// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTPROFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTPROFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAgentProfilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentProfilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIp, appIp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentProfilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIp, appIp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ListAgentProfilesRequest() = default ;
    ListAgentProfilesRequest(const ListAgentProfilesRequest &) = default ;
    ListAgentProfilesRequest(ListAgentProfilesRequest &&) = default ;
    ListAgentProfilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentProfilesRequest() = default ;
    ListAgentProfilesRequest& operator=(const ListAgentProfilesRequest &) = default ;
    ListAgentProfilesRequest& operator=(ListAgentProfilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIp_ == nullptr
        && return this->instanceId_ == nullptr && return this->scriptId_ == nullptr; };
    // appIp Field Functions 
    bool hasAppIp() const { return this->appIp_ != nullptr;};
    void deleteAppIp() { this->appIp_ = nullptr;};
    inline string appIp() const { DARABONBA_PTR_GET_DEFAULT(appIp_, "") };
    inline ListAgentProfilesRequest& setAppIp(string appIp) { DARABONBA_PTR_SET_VALUE(appIp_, appIp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAgentProfilesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListAgentProfilesRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    std::shared_ptr<string> appIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
