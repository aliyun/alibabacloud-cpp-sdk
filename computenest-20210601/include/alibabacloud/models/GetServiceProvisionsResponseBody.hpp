// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceProvisionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceProvisions, serviceProvisions_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceProvisions, serviceProvisions_);
    };
    GetServiceProvisionsResponseBody() = default ;
    GetServiceProvisionsResponseBody(const GetServiceProvisionsResponseBody &) = default ;
    GetServiceProvisionsResponseBody(GetServiceProvisionsResponseBody &&) = default ;
    GetServiceProvisionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsResponseBody() = default ;
    GetServiceProvisionsResponseBody& operator=(const GetServiceProvisionsResponseBody &) = default ;
    GetServiceProvisionsResponseBody& operator=(GetServiceProvisionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceProvisions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceProvisions& obj) { 
        DARABONBA_PTR_TO_JSON(AutoEnableService, autoEnableService_);
        DARABONBA_PTR_TO_JSON(CommodityProvisions, commodityProvisions_);
        DARABONBA_PTR_TO_JSON(EnableURL, enableURL_);
        DARABONBA_PTR_TO_JSON(RoleProvision, roleProvision_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceProvisions& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoEnableService, autoEnableService_);
        DARABONBA_PTR_FROM_JSON(CommodityProvisions, commodityProvisions_);
        DARABONBA_PTR_FROM_JSON(EnableURL, enableURL_);
        DARABONBA_PTR_FROM_JSON(RoleProvision, roleProvision_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      };
      ServiceProvisions() = default ;
      ServiceProvisions(const ServiceProvisions &) = default ;
      ServiceProvisions(ServiceProvisions &&) = default ;
      ServiceProvisions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceProvisions() = default ;
      ServiceProvisions& operator=(const ServiceProvisions &) = default ;
      ServiceProvisions& operator=(ServiceProvisions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoleProvision : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoleProvision& obj) { 
          DARABONBA_PTR_TO_JSON(AuthorizationURL, authorizationURL_);
          DARABONBA_PTR_TO_JSON(Roles, roles_);
        };
        friend void from_json(const Darabonba::Json& j, RoleProvision& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthorizationURL, authorizationURL_);
          DARABONBA_PTR_FROM_JSON(Roles, roles_);
        };
        RoleProvision() = default ;
        RoleProvision(const RoleProvision &) = default ;
        RoleProvision(RoleProvision &&) = default ;
        RoleProvision(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoleProvision() = default ;
        RoleProvision& operator=(const RoleProvision &) = default ;
        RoleProvision& operator=(RoleProvision &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Roles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Roles& obj) { 
            DARABONBA_PTR_TO_JSON(ApiForCreation, apiForCreation_);
            DARABONBA_PTR_TO_JSON(Created, created_);
            DARABONBA_PTR_TO_JSON(Function, function_);
            DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          };
          friend void from_json(const Darabonba::Json& j, Roles& obj) { 
            DARABONBA_PTR_FROM_JSON(ApiForCreation, apiForCreation_);
            DARABONBA_PTR_FROM_JSON(Created, created_);
            DARABONBA_PTR_FROM_JSON(Function, function_);
            DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          };
          Roles() = default ;
          Roles(const Roles &) = default ;
          Roles(Roles &&) = default ;
          Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Roles() = default ;
          Roles& operator=(const Roles &) = default ;
          Roles& operator=(Roles &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ApiForCreation : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApiForCreation& obj) { 
              DARABONBA_PTR_TO_JSON(ApiName, apiName_);
              DARABONBA_PTR_TO_JSON(ApiProductId, apiProductId_);
              DARABONBA_PTR_TO_JSON(ApiType, apiType_);
              DARABONBA_ANY_TO_JSON(parameters, parameters_);
            };
            friend void from_json(const Darabonba::Json& j, ApiForCreation& obj) { 
              DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
              DARABONBA_PTR_FROM_JSON(ApiProductId, apiProductId_);
              DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
              DARABONBA_ANY_FROM_JSON(parameters, parameters_);
            };
            ApiForCreation() = default ;
            ApiForCreation(const ApiForCreation &) = default ;
            ApiForCreation(ApiForCreation &&) = default ;
            ApiForCreation(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApiForCreation() = default ;
            ApiForCreation& operator=(const ApiForCreation &) = default ;
            ApiForCreation& operator=(ApiForCreation &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->apiName_ == nullptr
        && this->apiProductId_ == nullptr && this->apiType_ == nullptr && this->parameters_ == nullptr; };
            // apiName Field Functions 
            bool hasApiName() const { return this->apiName_ != nullptr;};
            void deleteApiName() { this->apiName_ = nullptr;};
            inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
            inline ApiForCreation& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


            // apiProductId Field Functions 
            bool hasApiProductId() const { return this->apiProductId_ != nullptr;};
            void deleteApiProductId() { this->apiProductId_ = nullptr;};
            inline string getApiProductId() const { DARABONBA_PTR_GET_DEFAULT(apiProductId_, "") };
            inline ApiForCreation& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


            // apiType Field Functions 
            bool hasApiType() const { return this->apiType_ != nullptr;};
            void deleteApiType() { this->apiType_ = nullptr;};
            inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
            inline ApiForCreation& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


            // parameters Field Functions 
            bool hasParameters() const { return this->parameters_ != nullptr;};
            void deleteParameters() { this->parameters_ = nullptr;};
            inline             const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
            Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
            inline ApiForCreation& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
            inline ApiForCreation& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


          protected:
            // The name of the API operation.
            shared_ptr<string> apiName_ {};
            // The ID of the Alibaba Cloud service to which the API operation belongs.
            shared_ptr<string> apiProductId_ {};
            // The type of the API operation. Valid values:
            // 
            // *   Open: public
            // *   Inner: private
            shared_ptr<string> apiType_ {};
            // The ROS parameters of the cluster.
            Darabonba::Json parameters_ {};
          };

          virtual bool empty() const override { return this->apiForCreation_ == nullptr
        && this->created_ == nullptr && this->function_ == nullptr && this->roleName_ == nullptr; };
          // apiForCreation Field Functions 
          bool hasApiForCreation() const { return this->apiForCreation_ != nullptr;};
          void deleteApiForCreation() { this->apiForCreation_ = nullptr;};
          inline const Roles::ApiForCreation & getApiForCreation() const { DARABONBA_PTR_GET_CONST(apiForCreation_, Roles::ApiForCreation) };
          inline Roles::ApiForCreation getApiForCreation() { DARABONBA_PTR_GET(apiForCreation_, Roles::ApiForCreation) };
          inline Roles& setApiForCreation(const Roles::ApiForCreation & apiForCreation) { DARABONBA_PTR_SET_VALUE(apiForCreation_, apiForCreation) };
          inline Roles& setApiForCreation(Roles::ApiForCreation && apiForCreation) { DARABONBA_PTR_SET_RVALUE(apiForCreation_, apiForCreation) };


          // created Field Functions 
          bool hasCreated() const { return this->created_ != nullptr;};
          void deleteCreated() { this->created_ = nullptr;};
          inline bool getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, false) };
          inline Roles& setCreated(bool created) { DARABONBA_PTR_SET_VALUE(created_, created) };


          // function Field Functions 
          bool hasFunction() const { return this->function_ != nullptr;};
          void deleteFunction() { this->function_ = nullptr;};
          inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
          inline Roles& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


          // roleName Field Functions 
          bool hasRoleName() const { return this->roleName_ != nullptr;};
          void deleteRoleName() { this->roleName_ = nullptr;};
          inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
          inline Roles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        protected:
          // The information about the API operation that is used to create the RAM role.
          shared_ptr<Roles::ApiForCreation> apiForCreation_ {};
          // Indicates whether the RAM role is created. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> created_ {};
          // The purpose for which the RAM role is used. Default value: Default. A value of Default indicates that the RAM role is the default role of the service.
          shared_ptr<string> function_ {};
          // The name of the role.
          shared_ptr<string> roleName_ {};
        };

        virtual bool empty() const override { return this->authorizationURL_ == nullptr
        && this->roles_ == nullptr; };
        // authorizationURL Field Functions 
        bool hasAuthorizationURL() const { return this->authorizationURL_ != nullptr;};
        void deleteAuthorizationURL() { this->authorizationURL_ = nullptr;};
        inline string getAuthorizationURL() const { DARABONBA_PTR_GET_DEFAULT(authorizationURL_, "") };
        inline RoleProvision& setAuthorizationURL(string authorizationURL) { DARABONBA_PTR_SET_VALUE(authorizationURL_, authorizationURL) };


        // roles Field Functions 
        bool hasRoles() const { return this->roles_ != nullptr;};
        void deleteRoles() { this->roles_ = nullptr;};
        inline const vector<RoleProvision::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<RoleProvision::Roles>) };
        inline vector<RoleProvision::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<RoleProvision::Roles>) };
        inline RoleProvision& setRoles(const vector<RoleProvision::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
        inline RoleProvision& setRoles(vector<RoleProvision::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      protected:
        // The authorization URL of the RAM role.
        // 
        // > This parameter is returned if Created is set to false.
        shared_ptr<string> authorizationURL_ {};
        // The RAM roles of the service.
        shared_ptr<vector<RoleProvision::Roles>> roles_ {};
      };

      class CommodityProvisions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CommodityProvisions& obj) { 
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(EnableURL, enableURL_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, CommodityProvisions& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(EnableURL, enableURL_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        CommodityProvisions() = default ;
        CommodityProvisions(const CommodityProvisions &) = default ;
        CommodityProvisions(CommodityProvisions &&) = default ;
        CommodityProvisions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CommodityProvisions() = default ;
        CommodityProvisions& operator=(const CommodityProvisions &) = default ;
        CommodityProvisions& operator=(CommodityProvisions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->enableURL_ == nullptr && this->status_ == nullptr; };
        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline CommodityProvisions& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // enableURL Field Functions 
        bool hasEnableURL() const { return this->enableURL_ != nullptr;};
        void deleteEnableURL() { this->enableURL_ = nullptr;};
        inline string getEnableURL() const { DARABONBA_PTR_GET_DEFAULT(enableURL_, "") };
        inline CommodityProvisions& setEnableURL(string enableURL) { DARABONBA_PTR_SET_VALUE(enableURL_, enableURL) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CommodityProvisions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // Commodity Code
        shared_ptr<string> commodityCode_ {};
        // Product activation link.
        shared_ptr<string> enableURL_ {};
        // Cloud service activation status.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->autoEnableService_ == nullptr
        && this->commodityProvisions_ == nullptr && this->enableURL_ == nullptr && this->roleProvision_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr
        && this->statusReason_ == nullptr; };
      // autoEnableService Field Functions 
      bool hasAutoEnableService() const { return this->autoEnableService_ != nullptr;};
      void deleteAutoEnableService() { this->autoEnableService_ = nullptr;};
      inline bool getAutoEnableService() const { DARABONBA_PTR_GET_DEFAULT(autoEnableService_, false) };
      inline ServiceProvisions& setAutoEnableService(bool autoEnableService) { DARABONBA_PTR_SET_VALUE(autoEnableService_, autoEnableService) };


      // commodityProvisions Field Functions 
      bool hasCommodityProvisions() const { return this->commodityProvisions_ != nullptr;};
      void deleteCommodityProvisions() { this->commodityProvisions_ = nullptr;};
      inline const vector<ServiceProvisions::CommodityProvisions> & getCommodityProvisions() const { DARABONBA_PTR_GET_CONST(commodityProvisions_, vector<ServiceProvisions::CommodityProvisions>) };
      inline vector<ServiceProvisions::CommodityProvisions> getCommodityProvisions() { DARABONBA_PTR_GET(commodityProvisions_, vector<ServiceProvisions::CommodityProvisions>) };
      inline ServiceProvisions& setCommodityProvisions(const vector<ServiceProvisions::CommodityProvisions> & commodityProvisions) { DARABONBA_PTR_SET_VALUE(commodityProvisions_, commodityProvisions) };
      inline ServiceProvisions& setCommodityProvisions(vector<ServiceProvisions::CommodityProvisions> && commodityProvisions) { DARABONBA_PTR_SET_RVALUE(commodityProvisions_, commodityProvisions) };


      // enableURL Field Functions 
      bool hasEnableURL() const { return this->enableURL_ != nullptr;};
      void deleteEnableURL() { this->enableURL_ = nullptr;};
      inline string getEnableURL() const { DARABONBA_PTR_GET_DEFAULT(enableURL_, "") };
      inline ServiceProvisions& setEnableURL(string enableURL) { DARABONBA_PTR_SET_VALUE(enableURL_, enableURL) };


      // roleProvision Field Functions 
      bool hasRoleProvision() const { return this->roleProvision_ != nullptr;};
      void deleteRoleProvision() { this->roleProvision_ = nullptr;};
      inline const ServiceProvisions::RoleProvision & getRoleProvision() const { DARABONBA_PTR_GET_CONST(roleProvision_, ServiceProvisions::RoleProvision) };
      inline ServiceProvisions::RoleProvision getRoleProvision() { DARABONBA_PTR_GET(roleProvision_, ServiceProvisions::RoleProvision) };
      inline ServiceProvisions& setRoleProvision(const ServiceProvisions::RoleProvision & roleProvision) { DARABONBA_PTR_SET_VALUE(roleProvision_, roleProvision) };
      inline ServiceProvisions& setRoleProvision(ServiceProvisions::RoleProvision && roleProvision) { DARABONBA_PTR_SET_RVALUE(roleProvision_, roleProvision) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ServiceProvisions& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceProvisions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline ServiceProvisions& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    protected:
      // Indicates whether automatic activation for the service is defined in the template. Valid values:
      // 
      // *   true: Automatic activation for the service is defined in the template.
      // *   false: Manual activation for the service is defined in the template.
      shared_ptr<bool> autoEnableService_ {};
      // Product details. Some services (such as ACS) involve the activation of multiple products
      shared_ptr<vector<ServiceProvisions::CommodityProvisions>> commodityProvisions_ {};
      // The URL that points to the activation page of the service.
      // 
      // > This parameter is returned if Status is set to Disabled.
      shared_ptr<string> enableURL_ {};
      // The information about the RAM roles of the service. If this parameter is empty, no RAM role is associated with the service.
      shared_ptr<ServiceProvisions::RoleProvision> roleProvision_ {};
      // The service name.
      shared_ptr<string> serviceName_ {};
      // The activation status of the service. Valid values:
      // 
      // *   Enabled: The service is activated.
      // *   Disabled: The service is not activated.
      // *   Unknown: The activation status of the service is unknown.
      shared_ptr<string> status_ {};
      // The reason why the service is in the Disabled or Unknown state.
      // 
      // > This parameter is returned if Status is set to Disabled or Unknown.
      shared_ptr<string> statusReason_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceProvisions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceProvisionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceProvisions Field Functions 
    bool hasServiceProvisions() const { return this->serviceProvisions_ != nullptr;};
    void deleteServiceProvisions() { this->serviceProvisions_ = nullptr;};
    inline const vector<GetServiceProvisionsResponseBody::ServiceProvisions> & getServiceProvisions() const { DARABONBA_PTR_GET_CONST(serviceProvisions_, vector<GetServiceProvisionsResponseBody::ServiceProvisions>) };
    inline vector<GetServiceProvisionsResponseBody::ServiceProvisions> getServiceProvisions() { DARABONBA_PTR_GET(serviceProvisions_, vector<GetServiceProvisionsResponseBody::ServiceProvisions>) };
    inline GetServiceProvisionsResponseBody& setServiceProvisions(const vector<GetServiceProvisionsResponseBody::ServiceProvisions> & serviceProvisions) { DARABONBA_PTR_SET_VALUE(serviceProvisions_, serviceProvisions) };
    inline GetServiceProvisionsResponseBody& setServiceProvisions(vector<GetServiceProvisionsResponseBody::ServiceProvisions> && serviceProvisions) { DARABONBA_PTR_SET_RVALUE(serviceProvisions_, serviceProvisions) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the cloud services.
    shared_ptr<vector<GetServiceProvisionsResponseBody::ServiceProvisions>> serviceProvisions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
