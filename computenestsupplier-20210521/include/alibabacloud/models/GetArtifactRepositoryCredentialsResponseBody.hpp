// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetArtifactRepositoryCredentialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactRepositoryCredentialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactRepositoryCredentialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetArtifactRepositoryCredentialsResponseBody() = default ;
    GetArtifactRepositoryCredentialsResponseBody(const GetArtifactRepositoryCredentialsResponseBody &) = default ;
    GetArtifactRepositoryCredentialsResponseBody(GetArtifactRepositoryCredentialsResponseBody &&) = default ;
    GetArtifactRepositoryCredentialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactRepositoryCredentialsResponseBody() = default ;
    GetArtifactRepositoryCredentialsResponseBody& operator=(const GetArtifactRepositoryCredentialsResponseBody &) = default ;
    GetArtifactRepositoryCredentialsResponseBody& operator=(GetArtifactRepositoryCredentialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Credentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      Credentials() = default ;
      Credentials(const Credentials &) = default ;
      Credentials(Credentials &&) = default ;
      Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credentials() = default ;
      Credentials& operator=(const Credentials &) = default ;
      Credentials& operator=(Credentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->password_ == nullptr && this->securityToken_ == nullptr && this->username_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Credentials& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline Credentials& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Credentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Credentials& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Credentials& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The AccessKey ID.
      shared_ptr<string> accessKeyId_ {};
      // The AccessKey secret.
      shared_ptr<string> accessKeySecret_ {};
      // The password.
      shared_ptr<string> password_ {};
      // The security token.
      shared_ptr<string> securityToken_ {};
      // The username.
      shared_ptr<string> username_ {};
    };

    class AvailableResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableResources& obj) { 
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RepositoryName, repositoryName_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableResources& obj) { 
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RepositoryName, repositoryName_);
      };
      AvailableResources() = default ;
      AvailableResources(const AvailableResources &) = default ;
      AvailableResources(AvailableResources &&) = default ;
      AvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableResources() = default ;
      AvailableResources& operator=(const AvailableResources &) = default ;
      AvailableResources& operator=(AvailableResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->path_ == nullptr
        && this->regionId_ == nullptr && this->repositoryName_ == nullptr; };
      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline AvailableResources& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AvailableResources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repositoryName Field Functions 
      bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
      void deleteRepositoryName() { this->repositoryName_ = nullptr;};
      inline string getRepositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
      inline AvailableResources& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


    protected:
      // The path.
      shared_ptr<string> path_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The name of the repository.
      shared_ptr<string> repositoryName_ {};
    };

    virtual bool empty() const override { return this->availableResources_ == nullptr
        && this->credentials_ == nullptr && this->expireDate_ == nullptr && this->requestId_ == nullptr; };
    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const vector<GetArtifactRepositoryCredentialsResponseBody::AvailableResources> & getAvailableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, vector<GetArtifactRepositoryCredentialsResponseBody::AvailableResources>) };
    inline vector<GetArtifactRepositoryCredentialsResponseBody::AvailableResources> getAvailableResources() { DARABONBA_PTR_GET(availableResources_, vector<GetArtifactRepositoryCredentialsResponseBody::AvailableResources>) };
    inline GetArtifactRepositoryCredentialsResponseBody& setAvailableResources(const vector<GetArtifactRepositoryCredentialsResponseBody::AvailableResources> & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline GetArtifactRepositoryCredentialsResponseBody& setAvailableResources(vector<GetArtifactRepositoryCredentialsResponseBody::AvailableResources> && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const GetArtifactRepositoryCredentialsResponseBody::Credentials & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, GetArtifactRepositoryCredentialsResponseBody::Credentials) };
    inline GetArtifactRepositoryCredentialsResponseBody::Credentials getCredentials() { DARABONBA_PTR_GET(credentials_, GetArtifactRepositoryCredentialsResponseBody::Credentials) };
    inline GetArtifactRepositoryCredentialsResponseBody& setCredentials(const GetArtifactRepositoryCredentialsResponseBody::Credentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline GetArtifactRepositoryCredentialsResponseBody& setCredentials(GetArtifactRepositoryCredentialsResponseBody::Credentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline GetArtifactRepositoryCredentialsResponseBody& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactRepositoryCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information about the resources that can be uploaded.
    shared_ptr<vector<GetArtifactRepositoryCredentialsResponseBody::AvailableResources>> availableResources_ {};
    // The access credential.
    shared_ptr<GetArtifactRepositoryCredentialsResponseBody::Credentials> credentials_ {};
    // The expiration time.
    shared_ptr<string> expireDate_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
