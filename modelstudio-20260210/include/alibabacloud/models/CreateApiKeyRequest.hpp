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
        DARABONBA_PTR_TO_JSON(modelAccessScope, modelAccessScope_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Auth& obj) { 
        DARABONBA_PTR_FROM_JSON(accessIps, accessIps_);
        DARABONBA_PTR_FROM_JSON(modelAccessScope, modelAccessScope_);
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
      class ModelAccessScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelAccessScope& obj) { 
          DARABONBA_PTR_TO_JSON(accessibleModels, accessibleModels_);
          DARABONBA_PTR_TO_JSON(allowAllModels, allowAllModels_);
        };
        friend void from_json(const Darabonba::Json& j, ModelAccessScope& obj) { 
          DARABONBA_PTR_FROM_JSON(accessibleModels, accessibleModels_);
          DARABONBA_PTR_FROM_JSON(allowAllModels, allowAllModels_);
        };
        ModelAccessScope() = default ;
        ModelAccessScope(const ModelAccessScope &) = default ;
        ModelAccessScope(ModelAccessScope &&) = default ;
        ModelAccessScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelAccessScope() = default ;
        ModelAccessScope& operator=(const ModelAccessScope &) = default ;
        ModelAccessScope& operator=(ModelAccessScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessibleModels_ == nullptr
        && this->allowAllModels_ == nullptr; };
        // accessibleModels Field Functions 
        bool hasAccessibleModels() const { return this->accessibleModels_ != nullptr;};
        void deleteAccessibleModels() { this->accessibleModels_ = nullptr;};
        inline const vector<string> & getAccessibleModels() const { DARABONBA_PTR_GET_CONST(accessibleModels_, vector<string>) };
        inline vector<string> getAccessibleModels() { DARABONBA_PTR_GET(accessibleModels_, vector<string>) };
        inline ModelAccessScope& setAccessibleModels(const vector<string> & accessibleModels) { DARABONBA_PTR_SET_VALUE(accessibleModels_, accessibleModels) };
        inline ModelAccessScope& setAccessibleModels(vector<string> && accessibleModels) { DARABONBA_PTR_SET_RVALUE(accessibleModels_, accessibleModels) };


        // allowAllModels Field Functions 
        bool hasAllowAllModels() const { return this->allowAllModels_ != nullptr;};
        void deleteAllowAllModels() { this->allowAllModels_ = nullptr;};
        inline bool getAllowAllModels() const { DARABONBA_PTR_GET_DEFAULT(allowAllModels_, false) };
        inline ModelAccessScope& setAllowAllModels(bool allowAllModels) { DARABONBA_PTR_SET_VALUE(allowAllModels_, allowAllModels) };


      protected:
        // The list of accessible models.
        // >Notice: This parameter takes effect only when allowAllModels is set to false.
        shared_ptr<vector<string>> accessibleModels_ {};
        // Specifies whether all models with granted inference permissions in the workspace are accessible. Valid values:
        // 
        // - true
        // - false
        shared_ptr<bool> allowAllModels_ {};
      };

      virtual bool empty() const override { return this->accessIps_ == nullptr
        && this->modelAccessScope_ == nullptr && this->type_ == nullptr; };
      // accessIps Field Functions 
      bool hasAccessIps() const { return this->accessIps_ != nullptr;};
      void deleteAccessIps() { this->accessIps_ = nullptr;};
      inline const vector<string> & getAccessIps() const { DARABONBA_PTR_GET_CONST(accessIps_, vector<string>) };
      inline vector<string> getAccessIps() { DARABONBA_PTR_GET(accessIps_, vector<string>) };
      inline Auth& setAccessIps(const vector<string> & accessIps) { DARABONBA_PTR_SET_VALUE(accessIps_, accessIps) };
      inline Auth& setAccessIps(vector<string> && accessIps) { DARABONBA_PTR_SET_RVALUE(accessIps_, accessIps) };


      // modelAccessScope Field Functions 
      bool hasModelAccessScope() const { return this->modelAccessScope_ != nullptr;};
      void deleteModelAccessScope() { this->modelAccessScope_ = nullptr;};
      inline const Auth::ModelAccessScope & getModelAccessScope() const { DARABONBA_PTR_GET_CONST(modelAccessScope_, Auth::ModelAccessScope) };
      inline Auth::ModelAccessScope getModelAccessScope() { DARABONBA_PTR_GET(modelAccessScope_, Auth::ModelAccessScope) };
      inline Auth& setModelAccessScope(const Auth::ModelAccessScope & modelAccessScope) { DARABONBA_PTR_SET_VALUE(modelAccessScope_, modelAccessScope) };
      inline Auth& setModelAccessScope(Auth::ModelAccessScope && modelAccessScope) { DARABONBA_PTR_SET_RVALUE(modelAccessScope_, modelAccessScope) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Auth& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The IP access whitelist.
      // 
      // > 
      // > - When you set custom permissions and leave the IP access whitelist empty, the server sets the default values to IPv4 (0.0.0.0/0) and IPv6 (::/0), which allows all traffic.
      shared_ptr<vector<string>> accessIps_ {};
      // The model access scope.
      shared_ptr<Auth::ModelAccessScope> modelAccessScope_ {};
      // Valid values:
      // 
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
    // > - If you leave this parameter empty, the API key is automatically assigned to the default workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
