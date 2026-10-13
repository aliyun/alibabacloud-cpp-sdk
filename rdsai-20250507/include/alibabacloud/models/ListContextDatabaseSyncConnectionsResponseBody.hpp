// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListContextDatabaseSyncConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseSyncConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseSyncConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListContextDatabaseSyncConnectionsResponseBody() = default ;
    ListContextDatabaseSyncConnectionsResponseBody(const ListContextDatabaseSyncConnectionsResponseBody &) = default ;
    ListContextDatabaseSyncConnectionsResponseBody(ListContextDatabaseSyncConnectionsResponseBody &&) = default ;
    ListContextDatabaseSyncConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseSyncConnectionsResponseBody() = default ;
    ListContextDatabaseSyncConnectionsResponseBody& operator=(const ListContextDatabaseSyncConnectionsResponseBody &) = default ;
    ListContextDatabaseSyncConnectionsResponseBody& operator=(ListContextDatabaseSyncConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Connections, connections_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Connections, connections_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Connections : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Connections& obj) { 
          DARABONBA_PTR_TO_JSON(AuthKind, authKind_);
          DARABONBA_PTR_TO_JSON(AuthState, authState_);
          DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
          DARABONBA_PTR_TO_JSON(Remediation, remediation_);
          DARABONBA_ANY_TO_JSON(ScopeReport, scopeReport_);
          DARABONBA_PTR_TO_JSON(SecretFingerprint, secretFingerprint_);
          DARABONBA_PTR_TO_JSON(SecretUpdatedAt, secretUpdatedAt_);
          DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
          DARABONBA_PTR_TO_JSON(VerifiedAt, verifiedAt_);
        };
        friend void from_json(const Darabonba::Json& j, Connections& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthKind, authKind_);
          DARABONBA_PTR_FROM_JSON(AuthState, authState_);
          DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
          DARABONBA_PTR_FROM_JSON(Remediation, remediation_);
          DARABONBA_ANY_FROM_JSON(ScopeReport, scopeReport_);
          DARABONBA_PTR_FROM_JSON(SecretFingerprint, secretFingerprint_);
          DARABONBA_PTR_FROM_JSON(SecretUpdatedAt, secretUpdatedAt_);
          DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
          DARABONBA_PTR_FROM_JSON(VerifiedAt, verifiedAt_);
        };
        Connections() = default ;
        Connections(const Connections &) = default ;
        Connections(Connections &&) = default ;
        Connections(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Connections() = default ;
        Connections& operator=(const Connections &) = default ;
        Connections& operator=(Connections &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authKind_ == nullptr
        && this->authState_ == nullptr && this->createdAt_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->pluginId_ == nullptr
        && this->remediation_ == nullptr && this->scopeReport_ == nullptr && this->secretFingerprint_ == nullptr && this->secretUpdatedAt_ == nullptr && this->updatedAt_ == nullptr
        && this->verifiedAt_ == nullptr; };
        // authKind Field Functions 
        bool hasAuthKind() const { return this->authKind_ != nullptr;};
        void deleteAuthKind() { this->authKind_ = nullptr;};
        inline string getAuthKind() const { DARABONBA_PTR_GET_DEFAULT(authKind_, "") };
        inline Connections& setAuthKind(string authKind) { DARABONBA_PTR_SET_VALUE(authKind_, authKind) };


        // authState Field Functions 
        bool hasAuthState() const { return this->authState_ != nullptr;};
        void deleteAuthState() { this->authState_ = nullptr;};
        inline string getAuthState() const { DARABONBA_PTR_GET_DEFAULT(authState_, "") };
        inline Connections& setAuthState(string authState) { DARABONBA_PTR_SET_VALUE(authState_, authState) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Connections& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Connections& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Connections& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // pluginId Field Functions 
        bool hasPluginId() const { return this->pluginId_ != nullptr;};
        void deletePluginId() { this->pluginId_ = nullptr;};
        inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
        inline Connections& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


        // remediation Field Functions 
        bool hasRemediation() const { return this->remediation_ != nullptr;};
        void deleteRemediation() { this->remediation_ = nullptr;};
        inline string getRemediation() const { DARABONBA_PTR_GET_DEFAULT(remediation_, "") };
        inline Connections& setRemediation(string remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };


        // scopeReport Field Functions 
        bool hasScopeReport() const { return this->scopeReport_ != nullptr;};
        void deleteScopeReport() { this->scopeReport_ = nullptr;};
        inline         const Darabonba::Json & getScopeReport() const { DARABONBA_GET(scopeReport_) };
        Darabonba::Json & getScopeReport() { DARABONBA_GET(scopeReport_) };
        inline Connections& setScopeReport(const Darabonba::Json & scopeReport) { DARABONBA_SET_VALUE(scopeReport_, scopeReport) };
        inline Connections& setScopeReport(Darabonba::Json && scopeReport) { DARABONBA_SET_RVALUE(scopeReport_, scopeReport) };


        // secretFingerprint Field Functions 
        bool hasSecretFingerprint() const { return this->secretFingerprint_ != nullptr;};
        void deleteSecretFingerprint() { this->secretFingerprint_ = nullptr;};
        inline string getSecretFingerprint() const { DARABONBA_PTR_GET_DEFAULT(secretFingerprint_, "") };
        inline Connections& setSecretFingerprint(string secretFingerprint) { DARABONBA_PTR_SET_VALUE(secretFingerprint_, secretFingerprint) };


        // secretUpdatedAt Field Functions 
        bool hasSecretUpdatedAt() const { return this->secretUpdatedAt_ != nullptr;};
        void deleteSecretUpdatedAt() { this->secretUpdatedAt_ = nullptr;};
        inline string getSecretUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(secretUpdatedAt_, "") };
        inline Connections& setSecretUpdatedAt(string secretUpdatedAt) { DARABONBA_PTR_SET_VALUE(secretUpdatedAt_, secretUpdatedAt) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Connections& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


        // verifiedAt Field Functions 
        bool hasVerifiedAt() const { return this->verifiedAt_ != nullptr;};
        void deleteVerifiedAt() { this->verifiedAt_ = nullptr;};
        inline string getVerifiedAt() const { DARABONBA_PTR_GET_DEFAULT(verifiedAt_, "") };
        inline Connections& setVerifiedAt(string verifiedAt) { DARABONBA_PTR_SET_VALUE(verifiedAt_, verifiedAt) };


      protected:
        // The authorization method. Valid values: app, pasted-url, static-secret, and none.
        shared_ptr<string> authKind_ {};
        // The authorization status.
        shared_ptr<string> authState_ {};
        // The time when the datasource configuration was created.
        shared_ptr<string> createdAt_ {};
        // The display name.
        shared_ptr<string> displayName_ {};
        // The connection ID, which is a UUID generated by the system.
        shared_ptr<string> id_ {};
        // The plug-in ID.
        shared_ptr<string> pluginId_ {};
        // The remediation suggestion.
        shared_ptr<string> remediation_ {};
        // The authorization scope report.
        Darabonba::Json scopeReport_ {};
        // The credential fingerprint.
        shared_ptr<string> secretFingerprint_ {};
        // The time when the credential was last updated.
        shared_ptr<string> secretUpdatedAt_ {};
        // The time when the datasource configuration was last updated.
        shared_ptr<string> updatedAt_ {};
        // The time when the datasource configuration was last verified.
        shared_ptr<string> verifiedAt_ {};
      };

      virtual bool empty() const override { return this->connections_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // connections Field Functions 
      bool hasConnections() const { return this->connections_ != nullptr;};
      void deleteConnections() { this->connections_ = nullptr;};
      inline const vector<Data::Connections> & getConnections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Data::Connections>) };
      inline vector<Data::Connections> getConnections() { DARABONBA_PTR_GET(connections_, vector<Data::Connections>) };
      inline Data& setConnections(const vector<Data::Connections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
      inline Data& setConnections(vector<Data::Connections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of datasource configurations.
      shared_ptr<vector<Data::Connections>> connections_ {};
      // The page number. Pages start from 1.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContextDatabaseSyncConnectionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListContextDatabaseSyncConnectionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListContextDatabaseSyncConnectionsResponseBody::Data) };
    inline ListContextDatabaseSyncConnectionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListContextDatabaseSyncConnectionsResponseBody::Data) };
    inline ListContextDatabaseSyncConnectionsResponseBody& setData(const ListContextDatabaseSyncConnectionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListContextDatabaseSyncConnectionsResponseBody& setData(ListContextDatabaseSyncConnectionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListContextDatabaseSyncConnectionsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContextDatabaseSyncConnectionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextDatabaseSyncConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListContextDatabaseSyncConnectionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListContextDatabaseSyncConnectionsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
