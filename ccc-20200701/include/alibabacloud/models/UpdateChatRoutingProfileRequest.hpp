// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHATROUTINGPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHATROUTINGPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class UpdateChatRoutingProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateChatRoutingProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RoutingProfiles, routingProfiles_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateChatRoutingProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RoutingProfiles, routingProfiles_);
    };
    UpdateChatRoutingProfileRequest() = default ;
    UpdateChatRoutingProfileRequest(const UpdateChatRoutingProfileRequest &) = default ;
    UpdateChatRoutingProfileRequest(UpdateChatRoutingProfileRequest &&) = default ;
    UpdateChatRoutingProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateChatRoutingProfileRequest() = default ;
    UpdateChatRoutingProfileRequest& operator=(const UpdateChatRoutingProfileRequest &) = default ;
    UpdateChatRoutingProfileRequest& operator=(UpdateChatRoutingProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->routingProfiles_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateChatRoutingProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // routingProfiles Field Functions 
    bool hasRoutingProfiles() const { return this->routingProfiles_ != nullptr;};
    void deleteRoutingProfiles() { this->routingProfiles_ = nullptr;};
    inline string routingProfiles() const { DARABONBA_PTR_GET_DEFAULT(routingProfiles_, "") };
    inline UpdateChatRoutingProfileRequest& setRoutingProfiles(string routingProfiles) { DARABONBA_PTR_SET_VALUE(routingProfiles_, routingProfiles) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> routingProfiles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
