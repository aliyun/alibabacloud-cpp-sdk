// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETSYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETSYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ResetSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoginCredentials, loginCredentials_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoginCredentials, loginCredentials_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ResetSystemRequest() = default ;
    ResetSystemRequest(const ResetSystemRequest &) = default ;
    ResetSystemRequest(ResetSystemRequest &&) = default ;
    ResetSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetSystemRequest() = default ;
    ResetSystemRequest& operator=(const ResetSystemRequest &) = default ;
    ResetSystemRequest& operator=(ResetSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoginCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_TO_JSON(Password, password_);
      };
      friend void from_json(const Darabonba::Json& j, LoginCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
      };
      LoginCredentials() = default ;
      LoginCredentials(const LoginCredentials &) = default ;
      LoginCredentials(LoginCredentials &&) = default ;
      LoginCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginCredentials() = default ;
      LoginCredentials& operator=(const LoginCredentials &) = default ;
      LoginCredentials& operator=(LoginCredentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyPairName_ == nullptr
        && this->password_ == nullptr; };
      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline LoginCredentials& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline LoginCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    protected:
      // The name of the key pair that you want to bind to the simple application server. Only Linux simple application servers support key pairs.
      shared_ptr<string> keyPairName_ {};
      // The password that corresponds to the administrator.
      // 
      // - For Windows servers, the default administrator account is Administrator.
      // 
      // - Linux servers, the default administrator account is root.
      shared_ptr<string> password_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->imageId_ == nullptr && this->instanceId_ == nullptr && this->loginCredentials_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ResetSystemRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ResetSystemRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResetSystemRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loginCredentials Field Functions 
    bool hasLoginCredentials() const { return this->loginCredentials_ != nullptr;};
    void deleteLoginCredentials() { this->loginCredentials_ = nullptr;};
    inline const ResetSystemRequest::LoginCredentials & getLoginCredentials() const { DARABONBA_PTR_GET_CONST(loginCredentials_, ResetSystemRequest::LoginCredentials) };
    inline ResetSystemRequest::LoginCredentials getLoginCredentials() { DARABONBA_PTR_GET(loginCredentials_, ResetSystemRequest::LoginCredentials) };
    inline ResetSystemRequest& setLoginCredentials(const ResetSystemRequest::LoginCredentials & loginCredentials) { DARABONBA_PTR_SET_VALUE(loginCredentials_, loginCredentials) };
    inline ResetSystemRequest& setLoginCredentials(ResetSystemRequest::LoginCredentials && loginCredentials) { DARABONBA_PTR_SET_RVALUE(loginCredentials_, loginCredentials) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetSystemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that you want to use to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25693.html)
    shared_ptr<string> clientToken_ {};
    // The ID of the destination image. If you do not specify this parameter, the current image is reset.
    shared_ptr<string> imageId_ {};
    // The ID of the simple application server.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The information about the logon credentials.
    shared_ptr<ResetSystemRequest::LoginCredentials> loginCredentials_ {};
    // The region ID. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
