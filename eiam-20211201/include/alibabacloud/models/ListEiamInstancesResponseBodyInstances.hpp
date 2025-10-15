// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEIAMINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTEIAMINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListEiamInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEiamInstancesResponseBodyInstances& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListEiamInstancesResponseBodyInstances& obj) { 
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
    ListEiamInstancesResponseBodyInstances() = default ;
    ListEiamInstancesResponseBodyInstances(const ListEiamInstancesResponseBodyInstances &) = default ;
    ListEiamInstancesResponseBodyInstances(ListEiamInstancesResponseBodyInstances &&) = default ;
    ListEiamInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEiamInstancesResponseBodyInstances() = default ;
    ListEiamInstancesResponseBodyInstances& operator=(const ListEiamInstancesResponseBodyInstances &) = default ;
    ListEiamInstancesResponseBodyInstances& operator=(ListEiamInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->developerAPIPrivateDomain_ == nullptr && return this->developerAPIPublicDomain_ == nullptr && return this->instanceId_ == nullptr && return this->instanceStatus_ == nullptr && return this->instanceVersion_ == nullptr
        && return this->openAPIPrivateDomain_ == nullptr && return this->openAPIPublicDomain_ == nullptr && return this->SSODomain_ == nullptr && return this->startTime_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEiamInstancesResponseBodyInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // developerAPIPrivateDomain Field Functions 
    bool hasDeveloperAPIPrivateDomain() const { return this->developerAPIPrivateDomain_ != nullptr;};
    void deleteDeveloperAPIPrivateDomain() { this->developerAPIPrivateDomain_ = nullptr;};
    inline string developerAPIPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(developerAPIPrivateDomain_, "") };
    inline ListEiamInstancesResponseBodyInstances& setDeveloperAPIPrivateDomain(string developerAPIPrivateDomain) { DARABONBA_PTR_SET_VALUE(developerAPIPrivateDomain_, developerAPIPrivateDomain) };


    // developerAPIPublicDomain Field Functions 
    bool hasDeveloperAPIPublicDomain() const { return this->developerAPIPublicDomain_ != nullptr;};
    void deleteDeveloperAPIPublicDomain() { this->developerAPIPublicDomain_ = nullptr;};
    inline string developerAPIPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(developerAPIPublicDomain_, "") };
    inline ListEiamInstancesResponseBodyInstances& setDeveloperAPIPublicDomain(string developerAPIPublicDomain) { DARABONBA_PTR_SET_VALUE(developerAPIPublicDomain_, developerAPIPublicDomain) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEiamInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ListEiamInstancesResponseBodyInstances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceVersion Field Functions 
    bool hasInstanceVersion() const { return this->instanceVersion_ != nullptr;};
    void deleteInstanceVersion() { this->instanceVersion_ = nullptr;};
    inline string instanceVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceVersion_, "") };
    inline ListEiamInstancesResponseBodyInstances& setInstanceVersion(string instanceVersion) { DARABONBA_PTR_SET_VALUE(instanceVersion_, instanceVersion) };


    // openAPIPrivateDomain Field Functions 
    bool hasOpenAPIPrivateDomain() const { return this->openAPIPrivateDomain_ != nullptr;};
    void deleteOpenAPIPrivateDomain() { this->openAPIPrivateDomain_ = nullptr;};
    inline string openAPIPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(openAPIPrivateDomain_, "") };
    inline ListEiamInstancesResponseBodyInstances& setOpenAPIPrivateDomain(string openAPIPrivateDomain) { DARABONBA_PTR_SET_VALUE(openAPIPrivateDomain_, openAPIPrivateDomain) };


    // openAPIPublicDomain Field Functions 
    bool hasOpenAPIPublicDomain() const { return this->openAPIPublicDomain_ != nullptr;};
    void deleteOpenAPIPublicDomain() { this->openAPIPublicDomain_ = nullptr;};
    inline string openAPIPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(openAPIPublicDomain_, "") };
    inline ListEiamInstancesResponseBodyInstances& setOpenAPIPublicDomain(string openAPIPublicDomain) { DARABONBA_PTR_SET_VALUE(openAPIPublicDomain_, openAPIPublicDomain) };


    // SSODomain Field Functions 
    bool hasSSODomain() const { return this->SSODomain_ != nullptr;};
    void deleteSSODomain() { this->SSODomain_ = nullptr;};
    inline string SSODomain() const { DARABONBA_PTR_GET_DEFAULT(SSODomain_, "") };
    inline ListEiamInstancesResponseBodyInstances& setSSODomain(string SSODomain) { DARABONBA_PTR_SET_VALUE(SSODomain_, SSODomain) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListEiamInstancesResponseBodyInstances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The instance description.
    std::shared_ptr<string> description_ = nullptr;
    // The private domain name of the instance Developer API.
    std::shared_ptr<string> developerAPIPrivateDomain_ = nullptr;
    // The public domain of the instance Developer API.
    std::shared_ptr<string> developerAPIPublicDomain_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance status.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The instance version.
    // 
    // Valid values:
    // 
    // *   EIAM 2.0
    // *   EIAM 1.0
    std::shared_ptr<string> instanceVersion_ = nullptr;
    // The private domain of the instance OpenAPI.
    std::shared_ptr<string> openAPIPrivateDomain_ = nullptr;
    // The public domain of the instance OpenAPI.
    std::shared_ptr<string> openAPIPublicDomain_ = nullptr;
    // The single sign-on (SSO) domain  of the instance.
    std::shared_ptr<string> SSODomain_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
