// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateIdentityProviderResponseBody() = default ;
    UpdateIdentityProviderResponseBody(const UpdateIdentityProviderResponseBody &) = default ;
    UpdateIdentityProviderResponseBody(UpdateIdentityProviderResponseBody &&) = default ;
    UpdateIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderResponseBody() = default ;
    UpdateIdentityProviderResponseBody& operator=(const UpdateIdentityProviderResponseBody &) = default ;
    UpdateIdentityProviderResponseBody& operator=(UpdateIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configuration, configuration_);
        DARABONBA_PTR_TO_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(saml, saml_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_TO_JSON(syncScope, syncScope_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(saml, saml_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_FROM_JSON(syncScope, syncScope_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SyncScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SyncScope& obj) { 
          DARABONBA_PTR_TO_JSON(departmentIds, departmentIds_);
          DARABONBA_PTR_TO_JSON(mode, mode_);
        };
        friend void from_json(const Darabonba::Json& j, SyncScope& obj) { 
          DARABONBA_PTR_FROM_JSON(departmentIds, departmentIds_);
          DARABONBA_PTR_FROM_JSON(mode, mode_);
        };
        SyncScope() = default ;
        SyncScope(const SyncScope &) = default ;
        SyncScope(SyncScope &&) = default ;
        SyncScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SyncScope() = default ;
        SyncScope& operator=(const SyncScope &) = default ;
        SyncScope& operator=(SyncScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->departmentIds_ == nullptr
        && this->mode_ == nullptr; };
        // departmentIds Field Functions 
        bool hasDepartmentIds() const { return this->departmentIds_ != nullptr;};
        void deleteDepartmentIds() { this->departmentIds_ = nullptr;};
        inline const vector<string> & getDepartmentIds() const { DARABONBA_PTR_GET_CONST(departmentIds_, vector<string>) };
        inline vector<string> getDepartmentIds() { DARABONBA_PTR_GET(departmentIds_, vector<string>) };
        inline SyncScope& setDepartmentIds(const vector<string> & departmentIds) { DARABONBA_PTR_SET_VALUE(departmentIds_, departmentIds) };
        inline SyncScope& setDepartmentIds(vector<string> && departmentIds) { DARABONBA_PTR_SET_RVALUE(departmentIds_, departmentIds) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline SyncScope& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      protected:
        // The list of department IDs in the synchronization scope, obtained from ListIdentityProviderDepartments. In SelectedDepartments mode, at least one non-empty department ID must be provided. In AllAuthorized mode, this parameter should be omitted or an empty array should be passed.
        shared_ptr<vector<string>> departmentIds_ {};
        // The synchronization scope mode. AllAuthorized: all members within the authorization scope of the application address book. SelectedDepartments: the selected departments and all their sub-departments. A valid mode must be provided when syncScope is explicitly submitted.
        shared_ptr<string> mode_ {};
      };

      class Saml : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Saml& obj) { 
          DARABONBA_PTR_TO_JSON(bindingType, bindingType_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_TO_JSON(x509Certificates, x509Certificates_);
        };
        friend void from_json(const Darabonba::Json& j, Saml& obj) { 
          DARABONBA_PTR_FROM_JSON(bindingType, bindingType_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_FROM_JSON(x509Certificates, x509Certificates_);
        };
        Saml() = default ;
        Saml(const Saml &) = default ;
        Saml(Saml &&) = default ;
        Saml(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Saml() = default ;
        Saml& operator=(const Saml &) = default ;
        Saml& operator=(Saml &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingType_ == nullptr
        && this->entityId_ == nullptr && this->loginUrl_ == nullptr && this->x509Certificates_ == nullptr; };
        // bindingType Field Functions 
        bool hasBindingType() const { return this->bindingType_ != nullptr;};
        void deleteBindingType() { this->bindingType_ = nullptr;};
        inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
        inline Saml& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Saml& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Saml& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


        // x509Certificates Field Functions 
        bool hasX509Certificates() const { return this->x509Certificates_ != nullptr;};
        void deleteX509Certificates() { this->x509Certificates_ = nullptr;};
        inline const vector<string> & getX509Certificates() const { DARABONBA_PTR_GET_CONST(x509Certificates_, vector<string>) };
        inline vector<string> getX509Certificates() { DARABONBA_PTR_GET(x509Certificates_, vector<string>) };
        inline Saml& setX509Certificates(const vector<string> & x509Certificates) { DARABONBA_PTR_SET_VALUE(x509Certificates_, x509Certificates) };
        inline Saml& setX509Certificates(vector<string> && x509Certificates) { DARABONBA_PTR_SET_RVALUE(x509Certificates_, x509Certificates) };


      protected:
        // The saved SAML binding type, which is HTTP-Redirect or HTTP-POST.
        shared_ptr<string> bindingType_ {};
        // The saved enterprise IdP entity ID, which is different from the entity ID of the service provider (SP).
        shared_ptr<string> entityId_ {};
        // The saved enterprise IdP SSO logon URL.
        shared_ptr<string> loginUrl_ {};
        // The list of saved enterprise IdP X.509 signing certificates.
        shared_ptr<vector<string>> x509Certificates_ {};
      };

      class Configuration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
          DARABONBA_PTR_TO_JSON(bindingType, bindingType_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_TO_JSON(ssoStatus, ssoStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
          DARABONBA_PTR_FROM_JSON(bindingType, bindingType_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_FROM_JSON(ssoStatus, ssoStatus_);
        };
        Configuration() = default ;
        Configuration(const Configuration &) = default ;
        Configuration(Configuration &&) = default ;
        Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configuration() = default ;
        Configuration& operator=(const Configuration &) = default ;
        Configuration& operator=(Configuration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingType_ == nullptr
        && this->entityId_ == nullptr && this->loginUrl_ == nullptr && this->ssoStatus_ == nullptr; };
        // bindingType Field Functions 
        bool hasBindingType() const { return this->bindingType_ != nullptr;};
        void deleteBindingType() { this->bindingType_ = nullptr;};
        inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
        inline Configuration& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Configuration& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Configuration& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


        // ssoStatus Field Functions 
        bool hasSsoStatus() const { return this->ssoStatus_ != nullptr;};
        void deleteSsoStatus() { this->ssoStatus_ = nullptr;};
        inline string getSsoStatus() const { DARABONBA_PTR_GET_DEFAULT(ssoStatus_, "") };
        inline Configuration& setSsoStatus(string ssoStatus) { DARABONBA_PTR_SET_VALUE(ssoStatus_, ssoStatus) };


      protected:
        // The actual SAML binding type saved in the upstream, which is HTTP-Redirect or HTTP-POST.
        shared_ptr<string> bindingType_ {};
        // The actual enterprise IdP entity ID saved in the upstream.
        shared_ptr<string> entityId_ {};
        // The actual enterprise IdP SSO logon URL saved in the upstream.
        shared_ptr<string> loginUrl_ {};
        // The actual SSO logon status in the upstream. Enabled indicates that it is turned on, and Disabled indicates that it is turned off. This should be evaluated separately from the expected value of loginEnabled.
        shared_ptr<string> ssoStatus_ {};
      };

      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->identityProviderType_ == nullptr && this->loginEnabled_ == nullptr && this->protocol_ == nullptr && this->saml_ == nullptr && this->status_ == nullptr
        && this->syncEnabled_ == nullptr && this->syncScope_ == nullptr && this->workspaceId_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline const Data::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Data::Configuration) };
      inline Data::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Data::Configuration) };
      inline Data& setConfiguration(const Data::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
      inline Data& setConfiguration(Data::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline Data& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // loginEnabled Field Functions 
      bool hasLoginEnabled() const { return this->loginEnabled_ != nullptr;};
      void deleteLoginEnabled() { this->loginEnabled_ = nullptr;};
      inline bool getLoginEnabled() const { DARABONBA_PTR_GET_DEFAULT(loginEnabled_, false) };
      inline Data& setLoginEnabled(bool loginEnabled) { DARABONBA_PTR_SET_VALUE(loginEnabled_, loginEnabled) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // saml Field Functions 
      bool hasSaml() const { return this->saml_ != nullptr;};
      void deleteSaml() { this->saml_ = nullptr;};
      inline const Data::Saml & getSaml() const { DARABONBA_PTR_GET_CONST(saml_, Data::Saml) };
      inline Data::Saml getSaml() { DARABONBA_PTR_GET(saml_, Data::Saml) };
      inline Data& setSaml(const Data::Saml & saml) { DARABONBA_PTR_SET_VALUE(saml_, saml) };
      inline Data& setSaml(Data::Saml && saml) { DARABONBA_PTR_SET_RVALUE(saml_, saml) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // syncEnabled Field Functions 
      bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
      void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
      inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
      inline Data& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


      // syncScope Field Functions 
      bool hasSyncScope() const { return this->syncScope_ != nullptr;};
      void deleteSyncScope() { this->syncScope_ = nullptr;};
      inline const Data::SyncScope & getSyncScope() const { DARABONBA_PTR_GET_CONST(syncScope_, Data::SyncScope) };
      inline Data::SyncScope getSyncScope() { DARABONBA_PTR_GET(syncScope_, Data::SyncScope) };
      inline Data& setSyncScope(const Data::SyncScope & syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };
      inline Data& setSyncScope(Data::SyncScope && syncScope) { DARABONBA_PTR_SET_RVALUE(syncScope_, syncScope) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The actual SAML configuration read back from the upstream. This update operation does not perform the read-back and usually does not return this field. Use GetIdentityProvider to obtain it.
      shared_ptr<Data::Configuration> configuration_ {};
      // The type of the identity provider. DingTalk: DingTalk. Feishu: Lark. CustomSSO: custom enterprise identity provider connected through SAML. The value must be the same as the type of the identity provider bound to the current workspace.
      shared_ptr<string> identityProviderType_ {};
      // The currently saved expected value of the logon switch, which alone does not prove that the upstream logon configuration has taken effect.
      shared_ptr<bool> loginEnabled_ {};
      // The currently saved logon protocol for CustomSSO, which is SAML when configured. This field is not returned for DingTalk or Lark.
      shared_ptr<string> protocol_ {};
      // The saved standardized SAML configuration for CustomSSO. The original metadata XML is not echoed. This field is not returned if no valid configuration is saved or if the identity provider is DingTalk or Lark. This value is the locally saved configuration and is not equivalent to the actual upstream configuration.
      shared_ptr<Data::Saml> saml_ {};
      // The status of the identity provider resource and logon configuration. Valid values:
      // - CONFIGURED: The configuration is accepted.
      // - UPDATING: The configuration is being updated.
      // - SYNCING: Synchronization is in progress.
      // - SYNCED: The synchronization phase is completed.
      // - READY: The resource is ready.
      // - SYNC_FAILED: Synchronization failed.
      // - UPDATE_FAILED: The update failed.
      // - DISCONNECTING: Unbinding is in progress.
      // - DISCONNECT_FAILED: Unbinding failed.
      // READY alone does not indicate that users have been imported. Query the SCIM operation results for CustomSSO separately.
      shared_ptr<string> status_ {};
      // The currently saved expected value of the synchronization switch. For DingTalk and Lark, it is used for subsequent address book change events. The SCIM switch for CustomSSO is managed through UpdateIdentityProviderSCIM, and the operation results are queried through GetIdentityProviderSCIM.
      shared_ptr<bool> syncEnabled_ {};
      // The saved synchronization scope for DingTalk and Lark. The default value for valid historical configurations is AllAuthorized, and this field may not be returned for corrupted historical configurations. This field is not returned for CustomSSO.
      shared_ptr<Data::SyncScope> syncScope_ {};
      // The ID of the workspace to which the identity provider belongs.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateIdentityProviderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateIdentityProviderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateIdentityProviderResponseBody::Data) };
    inline UpdateIdentityProviderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateIdentityProviderResponseBody::Data) };
    inline UpdateIdentityProviderResponseBody& setData(const UpdateIdentityProviderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateIdentityProviderResponseBody& setData(UpdateIdentityProviderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateIdentityProviderResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateIdentityProviderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateIdentityProviderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code of the API request. SUCCESS indicates that the request is successful, but does not mean that the asynchronous configuration or synchronization task is completed.
    shared_ptr<string> code_ {};
    // The currently saved identity provider binding information, including the expected configuration and resource status. The actual update may still be executing in the background.
    shared_ptr<UpdateIdentityProviderResponseBody::Data> data_ {};
    // The HTTP status code of the API request, which does not represent the execution result of the background task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message of the API request. An error description is returned if the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. Provide this value when you troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API request is successful. To check whether the background configuration has taken effect, query the identity provider status separately.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
