// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONRESOURCESERVERIDENTIFIERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONRESOURCESERVERIDENTIFIERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationResourceServerIdentifierRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationResourceServerIdentifierRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceServerIdentifier, resourceServerIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationResourceServerIdentifierRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerIdentifier, resourceServerIdentifier_);
    };
    SetApplicationResourceServerIdentifierRequest() = default ;
    SetApplicationResourceServerIdentifierRequest(const SetApplicationResourceServerIdentifierRequest &) = default ;
    SetApplicationResourceServerIdentifierRequest(SetApplicationResourceServerIdentifierRequest &&) = default ;
    SetApplicationResourceServerIdentifierRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationResourceServerIdentifierRequest() = default ;
    SetApplicationResourceServerIdentifierRequest& operator=(const SetApplicationResourceServerIdentifierRequest &) = default ;
    SetApplicationResourceServerIdentifierRequest& operator=(SetApplicationResourceServerIdentifierRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->resourceServerIdentifier_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SetApplicationResourceServerIdentifierRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetApplicationResourceServerIdentifierRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetApplicationResourceServerIdentifierRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceServerIdentifier Field Functions 
    bool hasResourceServerIdentifier() const { return this->resourceServerIdentifier_ != nullptr;};
    void deleteResourceServerIdentifier() { this->resourceServerIdentifier_ = nullptr;};
    inline string getResourceServerIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceServerIdentifier_, "") };
    inline SetApplicationResourceServerIdentifierRequest& setResourceServerIdentifier(string resourceServerIdentifier) { DARABONBA_PTR_SET_VALUE(resourceServerIdentifier_, resourceServerIdentifier) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> clientToken_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // ResourceServer唯一标识，对应ResourceServer受众
    // 
    // This parameter is required.
    shared_ptr<string> resourceServerIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
