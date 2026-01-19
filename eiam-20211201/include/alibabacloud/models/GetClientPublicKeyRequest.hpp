// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetClientPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientPublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientPublicKeyId, clientPublicKeyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientPublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientPublicKeyId, clientPublicKeyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetClientPublicKeyRequest() = default ;
    GetClientPublicKeyRequest(const GetClientPublicKeyRequest &) = default ;
    GetClientPublicKeyRequest(GetClientPublicKeyRequest &&) = default ;
    GetClientPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientPublicKeyRequest() = default ;
    GetClientPublicKeyRequest& operator=(const GetClientPublicKeyRequest &) = default ;
    GetClientPublicKeyRequest& operator=(GetClientPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->clientPublicKeyId_ == nullptr && this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetClientPublicKeyRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientPublicKeyId Field Functions 
    bool hasClientPublicKeyId() const { return this->clientPublicKeyId_ != nullptr;};
    void deleteClientPublicKeyId() { this->clientPublicKeyId_ = nullptr;};
    inline string getClientPublicKeyId() const { DARABONBA_PTR_GET_DEFAULT(clientPublicKeyId_, "") };
    inline GetClientPublicKeyRequest& setClientPublicKeyId(string clientPublicKeyId) { DARABONBA_PTR_SET_VALUE(clientPublicKeyId_, clientPublicKeyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetClientPublicKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 应用ClientPublicKey的ID
    // 
    // This parameter is required.
    shared_ptr<string> clientPublicKeyId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
