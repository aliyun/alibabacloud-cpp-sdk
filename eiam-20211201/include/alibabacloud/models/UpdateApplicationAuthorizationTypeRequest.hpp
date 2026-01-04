// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONAUTHORIZATIONTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONAUTHORIZATIONTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateApplicationAuthorizationTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationAuthorizationTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationAuthorizationTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateApplicationAuthorizationTypeRequest() = default ;
    UpdateApplicationAuthorizationTypeRequest(const UpdateApplicationAuthorizationTypeRequest &) = default ;
    UpdateApplicationAuthorizationTypeRequest(UpdateApplicationAuthorizationTypeRequest &&) = default ;
    UpdateApplicationAuthorizationTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationAuthorizationTypeRequest() = default ;
    UpdateApplicationAuthorizationTypeRequest& operator=(const UpdateApplicationAuthorizationTypeRequest &) = default ;
    UpdateApplicationAuthorizationTypeRequest& operator=(UpdateApplicationAuthorizationTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->authorizationType_ == nullptr && this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationAuthorizationTypeRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline string getAuthorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
    inline UpdateApplicationAuthorizationTypeRequest& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApplicationAuthorizationTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the application that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The authorization type of the application. Valid values:
    // 
    // *   authorize_required: Only the user with explicit authorization can access the application.
    // *   default_all: By default, all users can access the application.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationType_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
