// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class CreateApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(auth, auth_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(auth, auth_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    CreateApiKeyRequest() = default ;
    CreateApiKeyRequest(const CreateApiKeyRequest &) = default ;
    CreateApiKeyRequest(CreateApiKeyRequest &&) = default ;
    CreateApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiKeyRequest() = default ;
    CreateApiKeyRequest& operator=(const CreateApiKeyRequest &) = default ;
    CreateApiKeyRequest& operator=(CreateApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Auth : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Auth& obj) { 
        DARABONBA_PTR_TO_JSON(accessIps, accessIps_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Auth& obj) { 
        DARABONBA_PTR_FROM_JSON(accessIps, accessIps_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Auth() = default ;
      Auth(const Auth &) = default ;
      Auth(Auth &&) = default ;
      Auth(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Auth() = default ;
      Auth& operator=(const Auth &) = default ;
      Auth& operator=(Auth &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessIps_ == nullptr
        && this->type_ == nullptr; };
      // accessIps Field Functions 
      bool hasAccessIps() const { return this->accessIps_ != nullptr;};
      void deleteAccessIps() { this->accessIps_ = nullptr;};
      inline const vector<string> & getAccessIps() const { DARABONBA_PTR_GET_CONST(accessIps_, vector<string>) };
      inline vector<string> getAccessIps() { DARABONBA_PTR_GET(accessIps_, vector<string>) };
      inline Auth& setAccessIps(const vector<string> & accessIps) { DARABONBA_PTR_SET_VALUE(accessIps_, accessIps) };
      inline Auth& setAccessIps(vector<string> && accessIps) { DARABONBA_PTR_SET_RVALUE(accessIps_, accessIps) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Auth& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The IP address whitelist.
      // 
      // > 
      // > - When you use custom permissions, if you do not specify the IP address whitelist, the server sets it to IPv4 (0.0.0.0/0) and IPv6 (::/0) by default, which allows all traffic.
      shared_ptr<vector<string>> accessIps_ {};
      // Valid values:
      // - All: all permissions.
      // - Custom: custom permissions.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->auth_ == nullptr
        && this->description_ == nullptr && this->workspaceId_ == nullptr; };
    // auth Field Functions 
    bool hasAuth() const { return this->auth_ != nullptr;};
    void deleteAuth() { this->auth_ = nullptr;};
    inline const CreateApiKeyRequest::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, CreateApiKeyRequest::Auth) };
    inline CreateApiKeyRequest::Auth getAuth() { DARABONBA_PTR_GET(auth_, CreateApiKeyRequest::Auth) };
    inline CreateApiKeyRequest& setAuth(const CreateApiKeyRequest::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
    inline CreateApiKeyRequest& setAuth(CreateApiKeyRequest::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApiKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateApiKeyRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The API key permission settings.
    shared_ptr<CreateApiKeyRequest::Auth> auth_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The workspace ID.
    // > 
    // > - If you leave this parameter empty, the created API key is automatically assigned to the default workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
