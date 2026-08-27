// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class GetServiceLinkedRoleTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceLinkedRoleTemplate, serviceLinkedRoleTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceLinkedRoleTemplate, serviceLinkedRoleTemplate_);
    };
    GetServiceLinkedRoleTemplateResponseBody() = default ;
    GetServiceLinkedRoleTemplateResponseBody(const GetServiceLinkedRoleTemplateResponseBody &) = default ;
    GetServiceLinkedRoleTemplateResponseBody(GetServiceLinkedRoleTemplateResponseBody &&) = default ;
    GetServiceLinkedRoleTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleTemplateResponseBody() = default ;
    GetServiceLinkedRoleTemplateResponseBody& operator=(const GetServiceLinkedRoleTemplateResponseBody &) = default ;
    GetServiceLinkedRoleTemplateResponseBody& operator=(GetServiceLinkedRoleTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceLinkedRoleTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceLinkedRoleTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(MultipleRolesAllowed, multipleRolesAllowed_);
        DARABONBA_PTR_TO_JSON(RoleDescriptions, roleDescriptions_);
        DARABONBA_PTR_TO_JSON(RoleNamePrefix, roleNamePrefix_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(SystemPolicyName, systemPolicyName_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceLinkedRoleTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(MultipleRolesAllowed, multipleRolesAllowed_);
        DARABONBA_PTR_FROM_JSON(RoleDescriptions, roleDescriptions_);
        DARABONBA_PTR_FROM_JSON(RoleNamePrefix, roleNamePrefix_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(SystemPolicyName, systemPolicyName_);
      };
      ServiceLinkedRoleTemplate() = default ;
      ServiceLinkedRoleTemplate(const ServiceLinkedRoleTemplate &) = default ;
      ServiceLinkedRoleTemplate(ServiceLinkedRoleTemplate &&) = default ;
      ServiceLinkedRoleTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceLinkedRoleTemplate() = default ;
      ServiceLinkedRoleTemplate& operator=(const ServiceLinkedRoleTemplate &) = default ;
      ServiceLinkedRoleTemplate& operator=(ServiceLinkedRoleTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoleDescriptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoleDescriptions& obj) { 
          DARABONBA_PTR_TO_JSON(RoleDescription, roleDescription_);
        };
        friend void from_json(const Darabonba::Json& j, RoleDescriptions& obj) { 
          DARABONBA_PTR_FROM_JSON(RoleDescription, roleDescription_);
        };
        RoleDescriptions() = default ;
        RoleDescriptions(const RoleDescriptions &) = default ;
        RoleDescriptions(RoleDescriptions &&) = default ;
        RoleDescriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoleDescriptions() = default ;
        RoleDescriptions& operator=(const RoleDescriptions &) = default ;
        RoleDescriptions& operator=(RoleDescriptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoleDescription : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleDescription& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Language, language_);
          };
          friend void from_json(const Darabonba::Json& j, RoleDescription& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Language, language_);
          };
          RoleDescription() = default ;
          RoleDescription(const RoleDescription &) = default ;
          RoleDescription(RoleDescription &&) = default ;
          RoleDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleDescription() = default ;
          RoleDescription& operator=(const RoleDescription &) = default ;
          RoleDescription& operator=(RoleDescription &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->language_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline RoleDescription& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // language Field Functions 
          bool hasLanguage() const { return this->language_ != nullptr;};
          void deleteLanguage() { this->language_ = nullptr;};
          inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
          inline RoleDescription& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> language_ {};
        };

        virtual bool empty() const override { return this->roleDescription_ == nullptr; };
        // roleDescription Field Functions 
        bool hasRoleDescription() const { return this->roleDescription_ != nullptr;};
        void deleteRoleDescription() { this->roleDescription_ = nullptr;};
        inline const vector<RoleDescriptions::RoleDescription> & getRoleDescription() const { DARABONBA_PTR_GET_CONST(roleDescription_, vector<RoleDescriptions::RoleDescription>) };
        inline vector<RoleDescriptions::RoleDescription> getRoleDescription() { DARABONBA_PTR_GET(roleDescription_, vector<RoleDescriptions::RoleDescription>) };
        inline RoleDescriptions& setRoleDescription(const vector<RoleDescriptions::RoleDescription> & roleDescription) { DARABONBA_PTR_SET_VALUE(roleDescription_, roleDescription) };
        inline RoleDescriptions& setRoleDescription(vector<RoleDescriptions::RoleDescription> && roleDescription) { DARABONBA_PTR_SET_RVALUE(roleDescription_, roleDescription) };


      protected:
        shared_ptr<vector<RoleDescriptions::RoleDescription>> roleDescription_ {};
      };

      virtual bool empty() const override { return this->multipleRolesAllowed_ == nullptr
        && this->roleDescriptions_ == nullptr && this->roleNamePrefix_ == nullptr && this->serviceName_ == nullptr && this->systemPolicyName_ == nullptr; };
      // multipleRolesAllowed Field Functions 
      bool hasMultipleRolesAllowed() const { return this->multipleRolesAllowed_ != nullptr;};
      void deleteMultipleRolesAllowed() { this->multipleRolesAllowed_ = nullptr;};
      inline bool getMultipleRolesAllowed() const { DARABONBA_PTR_GET_DEFAULT(multipleRolesAllowed_, false) };
      inline ServiceLinkedRoleTemplate& setMultipleRolesAllowed(bool multipleRolesAllowed) { DARABONBA_PTR_SET_VALUE(multipleRolesAllowed_, multipleRolesAllowed) };


      // roleDescriptions Field Functions 
      bool hasRoleDescriptions() const { return this->roleDescriptions_ != nullptr;};
      void deleteRoleDescriptions() { this->roleDescriptions_ = nullptr;};
      inline const ServiceLinkedRoleTemplate::RoleDescriptions & getRoleDescriptions() const { DARABONBA_PTR_GET_CONST(roleDescriptions_, ServiceLinkedRoleTemplate::RoleDescriptions) };
      inline ServiceLinkedRoleTemplate::RoleDescriptions getRoleDescriptions() { DARABONBA_PTR_GET(roleDescriptions_, ServiceLinkedRoleTemplate::RoleDescriptions) };
      inline ServiceLinkedRoleTemplate& setRoleDescriptions(const ServiceLinkedRoleTemplate::RoleDescriptions & roleDescriptions) { DARABONBA_PTR_SET_VALUE(roleDescriptions_, roleDescriptions) };
      inline ServiceLinkedRoleTemplate& setRoleDescriptions(ServiceLinkedRoleTemplate::RoleDescriptions && roleDescriptions) { DARABONBA_PTR_SET_RVALUE(roleDescriptions_, roleDescriptions) };


      // roleNamePrefix Field Functions 
      bool hasRoleNamePrefix() const { return this->roleNamePrefix_ != nullptr;};
      void deleteRoleNamePrefix() { this->roleNamePrefix_ = nullptr;};
      inline string getRoleNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(roleNamePrefix_, "") };
      inline ServiceLinkedRoleTemplate& setRoleNamePrefix(string roleNamePrefix) { DARABONBA_PTR_SET_VALUE(roleNamePrefix_, roleNamePrefix) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ServiceLinkedRoleTemplate& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // systemPolicyName Field Functions 
      bool hasSystemPolicyName() const { return this->systemPolicyName_ != nullptr;};
      void deleteSystemPolicyName() { this->systemPolicyName_ = nullptr;};
      inline string getSystemPolicyName() const { DARABONBA_PTR_GET_DEFAULT(systemPolicyName_, "") };
      inline ServiceLinkedRoleTemplate& setSystemPolicyName(string systemPolicyName) { DARABONBA_PTR_SET_VALUE(systemPolicyName_, systemPolicyName) };


    protected:
      // Indicates whether multiple roles are supported. Valid values:
      // 
      // - true: Multiple roles are supported.
      // - false: Multiple roles are not supported.
      shared_ptr<bool> multipleRolesAllowed_ {};
      shared_ptr<ServiceLinkedRoleTemplate::RoleDescriptions> roleDescriptions_ {};
      // The prefix of the role name.
      shared_ptr<string> roleNamePrefix_ {};
      // The cloud service name.
      shared_ptr<string> serviceName_ {};
      // The name of the system policy attached to the role.
      shared_ptr<string> systemPolicyName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceLinkedRoleTemplate_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceLinkedRoleTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceLinkedRoleTemplate Field Functions 
    bool hasServiceLinkedRoleTemplate() const { return this->serviceLinkedRoleTemplate_ != nullptr;};
    void deleteServiceLinkedRoleTemplate() { this->serviceLinkedRoleTemplate_ = nullptr;};
    inline const GetServiceLinkedRoleTemplateResponseBody::ServiceLinkedRoleTemplate & getServiceLinkedRoleTemplate() const { DARABONBA_PTR_GET_CONST(serviceLinkedRoleTemplate_, GetServiceLinkedRoleTemplateResponseBody::ServiceLinkedRoleTemplate) };
    inline GetServiceLinkedRoleTemplateResponseBody::ServiceLinkedRoleTemplate getServiceLinkedRoleTemplate() { DARABONBA_PTR_GET(serviceLinkedRoleTemplate_, GetServiceLinkedRoleTemplateResponseBody::ServiceLinkedRoleTemplate) };
    inline GetServiceLinkedRoleTemplateResponseBody& setServiceLinkedRoleTemplate(const GetServiceLinkedRoleTemplateResponseBody::ServiceLinkedRoleTemplate & serviceLinkedRoleTemplate) { DARABONBA_PTR_SET_VALUE(serviceLinkedRoleTemplate_, serviceLinkedRoleTemplate) };
    inline GetServiceLinkedRoleTemplateResponseBody& setServiceLinkedRoleTemplate(GetServiceLinkedRoleTemplateResponseBody::ServiceLinkedRoleTemplate && serviceLinkedRoleTemplate) { DARABONBA_PTR_SET_RVALUE(serviceLinkedRoleTemplate_, serviceLinkedRoleTemplate) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service-linked role template.
    shared_ptr<GetServiceLinkedRoleTemplateResponseBody::ServiceLinkedRoleTemplate> serviceLinkedRoleTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
