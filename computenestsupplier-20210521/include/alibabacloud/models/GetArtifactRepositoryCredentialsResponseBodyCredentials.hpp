// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSRESPONSEBODYCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSRESPONSEBODYCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetArtifactRepositoryCredentialsResponseBodyCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactRepositoryCredentialsResponseBodyCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactRepositoryCredentialsResponseBodyCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetArtifactRepositoryCredentialsResponseBodyCredentials() = default ;
    GetArtifactRepositoryCredentialsResponseBodyCredentials(const GetArtifactRepositoryCredentialsResponseBodyCredentials &) = default ;
    GetArtifactRepositoryCredentialsResponseBodyCredentials(GetArtifactRepositoryCredentialsResponseBodyCredentials &&) = default ;
    GetArtifactRepositoryCredentialsResponseBodyCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactRepositoryCredentialsResponseBodyCredentials() = default ;
    GetArtifactRepositoryCredentialsResponseBodyCredentials& operator=(const GetArtifactRepositoryCredentialsResponseBodyCredentials &) = default ;
    GetArtifactRepositoryCredentialsResponseBodyCredentials& operator=(GetArtifactRepositoryCredentialsResponseBodyCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accessKeySecret_ != nullptr && this->password_ != nullptr && this->securityToken_ != nullptr && this->username_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetArtifactRepositoryCredentialsResponseBodyCredentials& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline GetArtifactRepositoryCredentialsResponseBodyCredentials& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetArtifactRepositoryCredentialsResponseBodyCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetArtifactRepositoryCredentialsResponseBodyCredentials& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetArtifactRepositoryCredentialsResponseBodyCredentials& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The AccessKey secret.
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The Security Token Service (STS) token.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The username.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
