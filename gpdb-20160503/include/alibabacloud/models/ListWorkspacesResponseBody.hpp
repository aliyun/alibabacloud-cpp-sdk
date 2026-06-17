// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody(ListWorkspacesResponseBody &&) = default ;
    ListWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody& operator=(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody& operator=(ListWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Apikeys, apikeys_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Services, services_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Apikeys, apikeys_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Services, services_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
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
      class Services : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Services& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Cu, cu_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Plan, plan_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Services& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Cu, cu_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Plan, plan_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Services() = default ;
        Services(const Services &) = default ;
        Services(Services &&) = default ;
        Services(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Services() = default ;
        Services& operator=(const Services &) = default ;
        Services& operator=(Services &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->cu_ == nullptr && this->expireTime_ == nullptr && this->payType_ == nullptr && this->plan_ == nullptr && this->serviceId_ == nullptr
        && this->serviceName_ == nullptr && this->serviceType_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Services& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
        inline Services& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline Services& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline Services& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // plan Field Functions 
        bool hasPlan() const { return this->plan_ != nullptr;};
        void deletePlan() { this->plan_ = nullptr;};
        inline string getPlan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
        inline Services& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline Services& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
        inline Services& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Services& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The compute resource.
        shared_ptr<string> cu_ {};
        // The expiration time.
        shared_ptr<string> expireTime_ {};
        // The billing type. Valid values:
        // 
        // - **POSTPAY**: pay-as-you-go.
        // - **PREPAY**: subscription.
        // 
        // > - If this parameter is not specified, the default value is pay-as-you-go.
        // > - In subscription billing mode, a discount is available when you purchase a duration of one year or longer. Select the billing type as needed.
        shared_ptr<string> payType_ {};
        // [Deprecated].
        shared_ptr<string> plan_ {};
        // The service ID.
        shared_ptr<string> serviceId_ {};
        // The service name.
        shared_ptr<string> serviceName_ {};
        // The service type. Valid values:
        // 
        // - memory
        // - drama.
        shared_ptr<string> serviceType_ {};
        // The service status. Valid values:
        // 
        // - creating: The service is being created.
        // - active: The service is running.
        shared_ptr<string> status_ {};
      };

      class Apikeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Apikeys& obj) { 
          DARABONBA_PTR_TO_JSON(AuthServices, authServices_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(KeyId, keyId_);
          DARABONBA_PTR_TO_JSON(KeyName, keyName_);
          DARABONBA_PTR_TO_JSON(KeyPrefix, keyPrefix_);
        };
        friend void from_json(const Darabonba::Json& j, Apikeys& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthServices, authServices_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
          DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
          DARABONBA_PTR_FROM_JSON(KeyPrefix, keyPrefix_);
        };
        Apikeys() = default ;
        Apikeys(const Apikeys &) = default ;
        Apikeys(Apikeys &&) = default ;
        Apikeys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Apikeys() = default ;
        Apikeys& operator=(const Apikeys &) = default ;
        Apikeys& operator=(Apikeys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthServices : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthServices& obj) { 
            DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
          };
          friend void from_json(const Darabonba::Json& j, AuthServices& obj) { 
            DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
          };
          AuthServices() = default ;
          AuthServices(const AuthServices &) = default ;
          AuthServices(AuthServices &&) = default ;
          AuthServices(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthServices() = default ;
          AuthServices& operator=(const AuthServices &) = default ;
          AuthServices& operator=(AuthServices &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->serviceId_ == nullptr
        && this->serviceType_ == nullptr; };
          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
          inline AuthServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


          // serviceType Field Functions 
          bool hasServiceType() const { return this->serviceType_ != nullptr;};
          void deleteServiceType() { this->serviceType_ = nullptr;};
          inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
          inline AuthServices& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        protected:
          // The service ID.
          shared_ptr<string> serviceId_ {};
          // The service type. Valid values:
          // 
          // - memory
          // - drama.
          shared_ptr<string> serviceType_ {};
        };

        virtual bool empty() const override { return this->authServices_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->keyId_ == nullptr && this->keyName_ == nullptr && this->keyPrefix_ == nullptr; };
        // authServices Field Functions 
        bool hasAuthServices() const { return this->authServices_ != nullptr;};
        void deleteAuthServices() { this->authServices_ = nullptr;};
        inline const vector<Apikeys::AuthServices> & getAuthServices() const { DARABONBA_PTR_GET_CONST(authServices_, vector<Apikeys::AuthServices>) };
        inline vector<Apikeys::AuthServices> getAuthServices() { DARABONBA_PTR_GET(authServices_, vector<Apikeys::AuthServices>) };
        inline Apikeys& setAuthServices(const vector<Apikeys::AuthServices> & authServices) { DARABONBA_PTR_SET_VALUE(authServices_, authServices) };
        inline Apikeys& setAuthServices(vector<Apikeys::AuthServices> && authServices) { DARABONBA_PTR_SET_RVALUE(authServices_, authServices) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Apikeys& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Apikeys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // keyId Field Functions 
        bool hasKeyId() const { return this->keyId_ != nullptr;};
        void deleteKeyId() { this->keyId_ = nullptr;};
        inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
        inline Apikeys& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


        // keyName Field Functions 
        bool hasKeyName() const { return this->keyName_ != nullptr;};
        void deleteKeyName() { this->keyName_ = nullptr;};
        inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
        inline Apikeys& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


        // keyPrefix Field Functions 
        bool hasKeyPrefix() const { return this->keyPrefix_ != nullptr;};
        void deleteKeyPrefix() { this->keyPrefix_ = nullptr;};
        inline string getKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyPrefix_, "") };
        inline Apikeys& setKeyPrefix(string keyPrefix) { DARABONBA_PTR_SET_VALUE(keyPrefix_, keyPrefix) };


      protected:
        // The services authorized for the API key.
        shared_ptr<vector<Apikeys::AuthServices>> authServices_ {};
        // The creation time of the API key.
        shared_ptr<string> createTime_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The ID of the API key.
        shared_ptr<string> keyId_ {};
        // The name of the API key.
        shared_ptr<string> keyName_ {};
        // The prefix of the API key.
        shared_ptr<string> keyPrefix_ {};
      };

      virtual bool empty() const override { return this->apikeys_ == nullptr
        && this->createTime_ == nullptr && this->services_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
      // apikeys Field Functions 
      bool hasApikeys() const { return this->apikeys_ != nullptr;};
      void deleteApikeys() { this->apikeys_ = nullptr;};
      inline const vector<Items::Apikeys> & getApikeys() const { DARABONBA_PTR_GET_CONST(apikeys_, vector<Items::Apikeys>) };
      inline vector<Items::Apikeys> getApikeys() { DARABONBA_PTR_GET(apikeys_, vector<Items::Apikeys>) };
      inline Items& setApikeys(const vector<Items::Apikeys> & apikeys) { DARABONBA_PTR_SET_VALUE(apikeys_, apikeys) };
      inline Items& setApikeys(vector<Items::Apikeys> && apikeys) { DARABONBA_PTR_SET_RVALUE(apikeys_, apikeys) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // services Field Functions 
      bool hasServices() const { return this->services_ != nullptr;};
      void deleteServices() { this->services_ = nullptr;};
      inline const vector<Items::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<Items::Services>) };
      inline vector<Items::Services> getServices() { DARABONBA_PTR_GET(services_, vector<Items::Services>) };
      inline Items& setServices(const vector<Items::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
      inline Items& setServices(vector<Items::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Items& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    protected:
      // The list of API keys for the workspace.
      shared_ptr<vector<Items::Apikeys>> apikeys_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The services in the workspace.
      shared_ptr<vector<Items::Services>> services_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
      // The workspace name.
      // - Maximum length: 50.
      // - Must be unique.
      // - Special characters are not allowed.
      shared_ptr<string> workspaceName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListWorkspacesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListWorkspacesResponseBody::Items>) };
    inline vector<ListWorkspacesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListWorkspacesResponseBody::Items>) };
    inline ListWorkspacesResponseBody& setItems(const vector<ListWorkspacesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListWorkspacesResponseBody& setItems(vector<ListWorkspacesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkspacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkspacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWorkspacesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListWorkspacesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListWorkspacesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of workspace details.
    shared_ptr<vector<ListWorkspacesResponseBody::Items>> items_ {};
    // The maximum number of entries to return. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
