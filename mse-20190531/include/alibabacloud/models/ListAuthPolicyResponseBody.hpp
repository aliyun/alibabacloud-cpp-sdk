// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAuthPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAuthPolicyResponseBody() = default ;
    ListAuthPolicyResponseBody(const ListAuthPolicyResponseBody &) = default ;
    ListAuthPolicyResponseBody(ListAuthPolicyResponseBody &&) = default ;
    ListAuthPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthPolicyResponseBody() = default ;
    ListAuthPolicyResponseBody& operator=(const ListAuthPolicyResponseBody &) = default ;
    ListAuthPolicyResponseBody& operator=(ListAuthPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AuthRule, authRule_);
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AuthRule, authRule_);
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthRule& obj) { 
            DARABONBA_PTR_TO_JSON(AppIds, appIds_);
            DARABONBA_PTR_TO_JSON(AuthType, authType_);
            DARABONBA_PTR_TO_JSON(Black, black_);
            DARABONBA_PTR_TO_JSON(K8sNamespaces, k8sNamespaces_);
            DARABONBA_PTR_TO_JSON(Method, method_);
            DARABONBA_PTR_TO_JSON(Path, path_);
          };
          friend void from_json(const Darabonba::Json& j, AuthRule& obj) { 
            DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
            DARABONBA_PTR_FROM_JSON(AuthType, authType_);
            DARABONBA_PTR_FROM_JSON(Black, black_);
            DARABONBA_PTR_FROM_JSON(K8sNamespaces, k8sNamespaces_);
            DARABONBA_PTR_FROM_JSON(Method, method_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
          };
          AuthRule() = default ;
          AuthRule(const AuthRule &) = default ;
          AuthRule(AuthRule &&) = default ;
          AuthRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthRule() = default ;
          AuthRule& operator=(const AuthRule &) = default ;
          AuthRule& operator=(AuthRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Method : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Method& obj) { 
              DARABONBA_PTR_TO_JSON(Group, group_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(ParameterTypes, parameterTypes_);
              DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
              DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
              DARABONBA_PTR_TO_JSON(Version, version_);
            };
            friend void from_json(const Darabonba::Json& j, Method& obj) { 
              DARABONBA_PTR_FROM_JSON(Group, group_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(ParameterTypes, parameterTypes_);
              DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
              DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
              DARABONBA_PTR_FROM_JSON(Version, version_);
            };
            Method() = default ;
            Method(const Method &) = default ;
            Method(Method &&) = default ;
            Method(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Method() = default ;
            Method& operator=(const Method &) = default ;
            Method& operator=(Method &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->group_ == nullptr
        && this->name_ == nullptr && this->parameterTypes_ == nullptr && this->returnType_ == nullptr && this->serviceName_ == nullptr && this->version_ == nullptr; };
            // group Field Functions 
            bool hasGroup() const { return this->group_ != nullptr;};
            void deleteGroup() { this->group_ = nullptr;};
            inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
            inline Method& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Method& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // parameterTypes Field Functions 
            bool hasParameterTypes() const { return this->parameterTypes_ != nullptr;};
            void deleteParameterTypes() { this->parameterTypes_ = nullptr;};
            inline const vector<string> & getParameterTypes() const { DARABONBA_PTR_GET_CONST(parameterTypes_, vector<string>) };
            inline vector<string> getParameterTypes() { DARABONBA_PTR_GET(parameterTypes_, vector<string>) };
            inline Method& setParameterTypes(const vector<string> & parameterTypes) { DARABONBA_PTR_SET_VALUE(parameterTypes_, parameterTypes) };
            inline Method& setParameterTypes(vector<string> && parameterTypes) { DARABONBA_PTR_SET_RVALUE(parameterTypes_, parameterTypes) };


            // returnType Field Functions 
            bool hasReturnType() const { return this->returnType_ != nullptr;};
            void deleteReturnType() { this->returnType_ = nullptr;};
            inline string getReturnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
            inline Method& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


            // serviceName Field Functions 
            bool hasServiceName() const { return this->serviceName_ != nullptr;};
            void deleteServiceName() { this->serviceName_ = nullptr;};
            inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
            inline Method& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


            // version Field Functions 
            bool hasVersion() const { return this->version_ != nullptr;};
            void deleteVersion() { this->version_ = nullptr;};
            inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
            inline Method& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


          protected:
            // The group.
            shared_ptr<string> group_ {};
            // The method name.
            shared_ptr<string> name_ {};
            // The types of request parameters.
            shared_ptr<vector<string>> parameterTypes_ {};
            // The type of the return value.
            shared_ptr<string> returnType_ {};
            // The service name.
            shared_ptr<string> serviceName_ {};
            // The method version.
            shared_ptr<string> version_ {};
          };

          virtual bool empty() const override { return this->appIds_ == nullptr
        && this->authType_ == nullptr && this->black_ == nullptr && this->k8sNamespaces_ == nullptr && this->method_ == nullptr && this->path_ == nullptr; };
          // appIds Field Functions 
          bool hasAppIds() const { return this->appIds_ != nullptr;};
          void deleteAppIds() { this->appIds_ = nullptr;};
          inline const vector<string> & getAppIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
          inline vector<string> getAppIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
          inline AuthRule& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
          inline AuthRule& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


          // authType Field Functions 
          bool hasAuthType() const { return this->authType_ != nullptr;};
          void deleteAuthType() { this->authType_ = nullptr;};
          inline int32_t getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, 0) };
          inline AuthRule& setAuthType(int32_t authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


          // black Field Functions 
          bool hasBlack() const { return this->black_ != nullptr;};
          void deleteBlack() { this->black_ = nullptr;};
          inline bool getBlack() const { DARABONBA_PTR_GET_DEFAULT(black_, false) };
          inline AuthRule& setBlack(bool black) { DARABONBA_PTR_SET_VALUE(black_, black) };


          // k8sNamespaces Field Functions 
          bool hasK8sNamespaces() const { return this->k8sNamespaces_ != nullptr;};
          void deleteK8sNamespaces() { this->k8sNamespaces_ = nullptr;};
          inline const vector<string> & getK8sNamespaces() const { DARABONBA_PTR_GET_CONST(k8sNamespaces_, vector<string>) };
          inline vector<string> getK8sNamespaces() { DARABONBA_PTR_GET(k8sNamespaces_, vector<string>) };
          inline AuthRule& setK8sNamespaces(const vector<string> & k8sNamespaces) { DARABONBA_PTR_SET_VALUE(k8sNamespaces_, k8sNamespaces) };
          inline AuthRule& setK8sNamespaces(vector<string> && k8sNamespaces) { DARABONBA_PTR_SET_RVALUE(k8sNamespaces_, k8sNamespaces) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline const AuthRule::Method & getMethod() const { DARABONBA_PTR_GET_CONST(method_, AuthRule::Method) };
          inline AuthRule::Method getMethod() { DARABONBA_PTR_GET(method_, AuthRule::Method) };
          inline AuthRule& setMethod(const AuthRule::Method & method) { DARABONBA_PTR_SET_VALUE(method_, method) };
          inline AuthRule& setMethod(AuthRule::Method && method) { DARABONBA_PTR_SET_RVALUE(method_, method) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline AuthRule& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        protected:
          // The IDs of applications.
          shared_ptr<vector<string>> appIds_ {};
          // The rule type. Valid values:
          // 
          // *   0: by application
          // *   1: by namespace
          shared_ptr<int32_t> authType_ {};
          // Indicates whether the rule is a blacklist rule.
          shared_ptr<bool> black_ {};
          // The queried namespaces.
          shared_ptr<vector<string>> k8sNamespaces_ {};
          // The request method.
          shared_ptr<AuthRule::Method> method_ {};
          // The service path.
          shared_ptr<string> path_ {};
        };

        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->authRule_ == nullptr && this->authType_ == nullptr && this->enable_ == nullptr
        && this->id_ == nullptr && this->k8sNamespace_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr && this->protocol_ == nullptr
        && this->regionId_ == nullptr && this->source_ == nullptr && this->status_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline Result& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Result& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Result& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // authRule Field Functions 
        bool hasAuthRule() const { return this->authRule_ != nullptr;};
        void deleteAuthRule() { this->authRule_ = nullptr;};
        inline const vector<Result::AuthRule> & getAuthRule() const { DARABONBA_PTR_GET_CONST(authRule_, vector<Result::AuthRule>) };
        inline vector<Result::AuthRule> getAuthRule() { DARABONBA_PTR_GET(authRule_, vector<Result::AuthRule>) };
        inline Result& setAuthRule(const vector<Result::AuthRule> & authRule) { DARABONBA_PTR_SET_VALUE(authRule_, authRule) };
        inline Result& setAuthRule(vector<Result::AuthRule> && authRule) { DARABONBA_PTR_SET_RVALUE(authRule_, authRule) };


        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline int32_t getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, 0) };
        inline Result& setAuthType(int32_t authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Result& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline Result& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // k8sNamespace Field Functions 
        bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
        void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
        inline string getK8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
        inline Result& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline Result& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Result& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Result& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the Alibaba Cloud account to which the resource belongs.
        shared_ptr<string> accountId_ {};
        // The application ID.
        shared_ptr<string> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The content of the service authentication rule.
        shared_ptr<vector<Result::AuthRule>> authRule_ {};
        // The rule type. Valid values:
        // 
        // *   0: by application
        // *   1: by namespace
        shared_ptr<int32_t> authType_ {};
        // Indicates whether the rule was enabled or disabled. Valid values:
        // 
        // *   `true`: enabled
        // *   `false`: disabled
        shared_ptr<bool> enable_ {};
        // The rule ID.
        shared_ptr<int32_t> id_ {};
        // The namespace.
        shared_ptr<string> k8sNamespace_ {};
        // The name of the authentication rule.
        shared_ptr<string> name_ {};
        // The namespace ID.
        shared_ptr<string> namespaceId_ {};
        // The protocol type. Valid values:
        // 
        // *   **SPRING_CLOUD**
        // *   **DUBBO**
        // *   **istio**
        shared_ptr<string> protocol_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The source of the application.
        shared_ptr<string> source_ {};
        // The status.
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The data returned.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAuthPolicyResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAuthPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAuthPolicyResponseBody::Data) };
    inline ListAuthPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAuthPolicyResponseBody::Data) };
    inline ListAuthPolicyResponseBody& setData(const ListAuthPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAuthPolicyResponseBody& setData(ListAuthPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAuthPolicyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuthPolicyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAuthPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<ListAuthPolicyResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
