// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class ListServiceEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceEndpointsResponseBody() = default ;
    ListServiceEndpointsResponseBody(const ListServiceEndpointsResponseBody &) = default ;
    ListServiceEndpointsResponseBody(ListServiceEndpointsResponseBody &&) = default ;
    ListServiceEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceEndpointsResponseBody() = default ;
    ListServiceEndpointsResponseBody& operator=(const ListServiceEndpointsResponseBody &) = default ;
    ListServiceEndpointsResponseBody& operator=(ListServiceEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(Component, component_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(DomainType, domainType_);
        DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(Component, component_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
        DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EndpointConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Auth, auth_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Auth, auth_);
        };
        EndpointConfig() = default ;
        EndpointConfig(const EndpointConfig &) = default ;
        EndpointConfig(EndpointConfig &&) = default ;
        EndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndpointConfig() = default ;
        EndpointConfig& operator=(const EndpointConfig &) = default ;
        EndpointConfig& operator=(EndpointConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Auth : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Auth& obj) { 
            DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
            DARABONBA_PTR_TO_JSON(ApiKeyName, apiKeyName_);
          };
          friend void from_json(const Darabonba::Json& j, Auth& obj) { 
            DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
            DARABONBA_PTR_FROM_JSON(ApiKeyName, apiKeyName_);
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
          virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->apiKeyName_ == nullptr; };
          // apiKey Field Functions 
          bool hasApiKey() const { return this->apiKey_ != nullptr;};
          void deleteApiKey() { this->apiKey_ = nullptr;};
          inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
          inline Auth& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


          // apiKeyName Field Functions 
          bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
          void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
          inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
          inline Auth& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


        protected:
          shared_ptr<string> apiKey_ {};
          shared_ptr<string> apiKeyName_ {};
        };

        virtual bool empty() const override { return this->auth_ == nullptr; };
        // auth Field Functions 
        bool hasAuth() const { return this->auth_ != nullptr;};
        void deleteAuth() { this->auth_ = nullptr;};
        inline const EndpointConfig::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, EndpointConfig::Auth) };
        inline EndpointConfig::Auth getAuth() { DARABONBA_PTR_GET(auth_, EndpointConfig::Auth) };
        inline EndpointConfig& setAuth(const EndpointConfig::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
        inline EndpointConfig& setAuth(EndpointConfig::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


      protected:
        shared_ptr<EndpointConfig::Auth> auth_ {};
      };

      virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->component_ == nullptr && this->createTime_ == nullptr && this->domain_ == nullptr && this->domainType_ == nullptr && this->endpointConfig_ == nullptr
        && this->endpointId_ == nullptr && this->endpointName_ == nullptr && this->instanceId_ == nullptr && this->networkType_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr; };
      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline Items& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // component Field Functions 
      bool hasComponent() const { return this->component_ != nullptr;};
      void deleteComponent() { this->component_ = nullptr;};
      inline string getComponent() const { DARABONBA_PTR_GET_DEFAULT(component_, "") };
      inline Items& setComponent(string component) { DARABONBA_PTR_SET_VALUE(component_, component) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Items& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline Items& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


      // endpointConfig Field Functions 
      bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
      void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
      inline const Items::EndpointConfig & getEndpointConfig() const { DARABONBA_PTR_GET_CONST(endpointConfig_, Items::EndpointConfig) };
      inline Items::EndpointConfig getEndpointConfig() { DARABONBA_PTR_GET(endpointConfig_, Items::EndpointConfig) };
      inline Items& setEndpointConfig(const Items::EndpointConfig & endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };
      inline Items& setEndpointConfig(Items::EndpointConfig && endpointConfig) { DARABONBA_PTR_SET_RVALUE(endpointConfig_, endpointConfig) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Items& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointName Field Functions 
      bool hasEndpointName() const { return this->endpointName_ != nullptr;};
      void deleteEndpointName() { this->endpointName_ = nullptr;};
      inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
      inline Items& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline Items& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Items& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> certIdentifier_ {};
      shared_ptr<string> component_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<string> domainType_ {};
      shared_ptr<Items::EndpointConfig> endpointConfig_ {};
      shared_ptr<string> endpointId_ {};
      shared_ptr<string> endpointName_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListServiceEndpointsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListServiceEndpointsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListServiceEndpointsResponseBody::Items>) };
    inline vector<ListServiceEndpointsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListServiceEndpointsResponseBody::Items>) };
    inline ListServiceEndpointsResponseBody& setItems(const vector<ListServiceEndpointsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListServiceEndpointsResponseBody& setItems(vector<ListServiceEndpointsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceEndpointsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListServiceEndpointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceEndpointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListServiceEndpointsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceEndpointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListServiceEndpointsResponseBody::Items>> items_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
