// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEIAMINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEIAMINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListEiamInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEiamInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEiamInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEiamInstancesResponseBody() = default ;
    ListEiamInstancesResponseBody(const ListEiamInstancesResponseBody &) = default ;
    ListEiamInstancesResponseBody(ListEiamInstancesResponseBody &&) = default ;
    ListEiamInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEiamInstancesResponseBody() = default ;
    ListEiamInstancesResponseBody& operator=(const ListEiamInstancesResponseBody &) = default ;
    ListEiamInstancesResponseBody& operator=(ListEiamInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DeveloperAPIPrivateDomain, developerAPIPrivateDomain_);
        DARABONBA_PTR_TO_JSON(DeveloperAPIPublicDomain, developerAPIPublicDomain_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InstanceVersion, instanceVersion_);
        DARABONBA_PTR_TO_JSON(OpenAPIPrivateDomain, openAPIPrivateDomain_);
        DARABONBA_PTR_TO_JSON(OpenAPIPublicDomain, openAPIPublicDomain_);
        DARABONBA_PTR_TO_JSON(SSODomain, SSODomain_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DeveloperAPIPrivateDomain, developerAPIPrivateDomain_);
        DARABONBA_PTR_FROM_JSON(DeveloperAPIPublicDomain, developerAPIPublicDomain_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceVersion, instanceVersion_);
        DARABONBA_PTR_FROM_JSON(OpenAPIPrivateDomain, openAPIPrivateDomain_);
        DARABONBA_PTR_FROM_JSON(OpenAPIPublicDomain, openAPIPublicDomain_);
        DARABONBA_PTR_FROM_JSON(SSODomain, SSODomain_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->developerAPIPrivateDomain_ == nullptr && this->developerAPIPublicDomain_ == nullptr && this->instanceId_ == nullptr && this->instanceStatus_ == nullptr && this->instanceVersion_ == nullptr
        && this->openAPIPrivateDomain_ == nullptr && this->openAPIPublicDomain_ == nullptr && this->SSODomain_ == nullptr && this->startTime_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Instances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // developerAPIPrivateDomain Field Functions 
      bool hasDeveloperAPIPrivateDomain() const { return this->developerAPIPrivateDomain_ != nullptr;};
      void deleteDeveloperAPIPrivateDomain() { this->developerAPIPrivateDomain_ = nullptr;};
      inline string getDeveloperAPIPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(developerAPIPrivateDomain_, "") };
      inline Instances& setDeveloperAPIPrivateDomain(string developerAPIPrivateDomain) { DARABONBA_PTR_SET_VALUE(developerAPIPrivateDomain_, developerAPIPrivateDomain) };


      // developerAPIPublicDomain Field Functions 
      bool hasDeveloperAPIPublicDomain() const { return this->developerAPIPublicDomain_ != nullptr;};
      void deleteDeveloperAPIPublicDomain() { this->developerAPIPublicDomain_ = nullptr;};
      inline string getDeveloperAPIPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(developerAPIPublicDomain_, "") };
      inline Instances& setDeveloperAPIPublicDomain(string developerAPIPublicDomain) { DARABONBA_PTR_SET_VALUE(developerAPIPublicDomain_, developerAPIPublicDomain) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Instances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // instanceVersion Field Functions 
      bool hasInstanceVersion() const { return this->instanceVersion_ != nullptr;};
      void deleteInstanceVersion() { this->instanceVersion_ = nullptr;};
      inline string getInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceVersion_, "") };
      inline Instances& setInstanceVersion(string instanceVersion) { DARABONBA_PTR_SET_VALUE(instanceVersion_, instanceVersion) };


      // openAPIPrivateDomain Field Functions 
      bool hasOpenAPIPrivateDomain() const { return this->openAPIPrivateDomain_ != nullptr;};
      void deleteOpenAPIPrivateDomain() { this->openAPIPrivateDomain_ = nullptr;};
      inline string getOpenAPIPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(openAPIPrivateDomain_, "") };
      inline Instances& setOpenAPIPrivateDomain(string openAPIPrivateDomain) { DARABONBA_PTR_SET_VALUE(openAPIPrivateDomain_, openAPIPrivateDomain) };


      // openAPIPublicDomain Field Functions 
      bool hasOpenAPIPublicDomain() const { return this->openAPIPublicDomain_ != nullptr;};
      void deleteOpenAPIPublicDomain() { this->openAPIPublicDomain_ = nullptr;};
      inline string getOpenAPIPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(openAPIPublicDomain_, "") };
      inline Instances& setOpenAPIPublicDomain(string openAPIPublicDomain) { DARABONBA_PTR_SET_VALUE(openAPIPublicDomain_, openAPIPublicDomain) };


      // SSODomain Field Functions 
      bool hasSSODomain() const { return this->SSODomain_ != nullptr;};
      void deleteSSODomain() { this->SSODomain_ = nullptr;};
      inline string getSSODomain() const { DARABONBA_PTR_GET_DEFAULT(SSODomain_, "") };
      inline Instances& setSSODomain(string SSODomain) { DARABONBA_PTR_SET_VALUE(SSODomain_, SSODomain) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Instances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The instance description.
      shared_ptr<string> description_ {};
      // The private domain name of the instance Developer API.
      shared_ptr<string> developerAPIPrivateDomain_ {};
      // The public domain of the instance Developer API.
      shared_ptr<string> developerAPIPublicDomain_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The instance status.
      shared_ptr<string> instanceStatus_ {};
      // The instance version.
      // 
      // Valid values:
      // 
      // *   EIAM 2.0
      // *   EIAM 1.0
      shared_ptr<string> instanceVersion_ {};
      // The private domain of the instance OpenAPI.
      shared_ptr<string> openAPIPrivateDomain_ {};
      // The public domain of the instance OpenAPI.
      shared_ptr<string> openAPIPublicDomain_ {};
      // The single sign-on (SSO) domain  of the instance.
      shared_ptr<string> SSODomain_ {};
      // The time when the instance was created.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListEiamInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListEiamInstancesResponseBody::Instances>) };
    inline vector<ListEiamInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListEiamInstancesResponseBody::Instances>) };
    inline ListEiamInstancesResponseBody& setInstances(const vector<ListEiamInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListEiamInstancesResponseBody& setInstances(vector<ListEiamInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEiamInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance list.
    shared_ptr<vector<ListEiamInstancesResponseBody::Instances>> instances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
