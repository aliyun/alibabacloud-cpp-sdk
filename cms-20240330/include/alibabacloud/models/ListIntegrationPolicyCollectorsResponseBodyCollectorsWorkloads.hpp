// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODYCOLLECTORSWORKLOADS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODYCOLLECTORSWORKLOADS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& obj) { 
      DARABONBA_PTR_TO_JSON(hostIp, hostIp_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(managed, managed_);
      DARABONBA_PTR_TO_JSON(managedInfo, managedInfo_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ownerReferenceKind, ownerReferenceKind_);
      DARABONBA_PTR_TO_JSON(ownerReferenceName, ownerReferenceName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& obj) { 
      DARABONBA_PTR_FROM_JSON(hostIp, hostIp_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(managed, managed_);
      DARABONBA_PTR_FROM_JSON(managedInfo, managedInfo_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ownerReferenceKind, ownerReferenceKind_);
      DARABONBA_PTR_FROM_JSON(ownerReferenceName, ownerReferenceName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads() = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads(const ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads &) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads(ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads &&) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads() = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& operator=(const ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads &) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& operator=(ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostIp_ == nullptr
        && return this->ip_ == nullptr && return this->managed_ == nullptr && return this->managedInfo_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr
        && return this->namespace_ == nullptr && return this->ownerReferenceKind_ == nullptr && return this->ownerReferenceName_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->version_ == nullptr; };
    // hostIp Field Functions 
    bool hasHostIp() const { return this->hostIp_ != nullptr;};
    void deleteHostIp() { this->hostIp_ = nullptr;};
    inline string hostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // managed Field Functions 
    bool hasManaged() const { return this->managed_ != nullptr;};
    void deleteManaged() { this->managed_ = nullptr;};
    inline bool managed() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


    // managedInfo Field Functions 
    bool hasManagedInfo() const { return this->managedInfo_ != nullptr;};
    void deleteManagedInfo() { this->managedInfo_ = nullptr;};
    inline const Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo & managedInfo() const { DARABONBA_PTR_GET_CONST(managedInfo_, Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo) };
    inline Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo managedInfo() { DARABONBA_PTR_GET(managedInfo_, Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setManagedInfo(const Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo & managedInfo) { DARABONBA_PTR_SET_VALUE(managedInfo_, managedInfo) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setManagedInfo(Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo && managedInfo) { DARABONBA_PTR_SET_RVALUE(managedInfo_, managedInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ownerReferenceKind Field Functions 
    bool hasOwnerReferenceKind() const { return this->ownerReferenceKind_ != nullptr;};
    void deleteOwnerReferenceKind() { this->ownerReferenceKind_ = nullptr;};
    inline string ownerReferenceKind() const { DARABONBA_PTR_GET_DEFAULT(ownerReferenceKind_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setOwnerReferenceKind(string ownerReferenceKind) { DARABONBA_PTR_SET_VALUE(ownerReferenceKind_, ownerReferenceKind) };


    // ownerReferenceName Field Functions 
    bool hasOwnerReferenceName() const { return this->ownerReferenceName_ != nullptr;};
    void deleteOwnerReferenceName() { this->ownerReferenceName_ = nullptr;};
    inline string ownerReferenceName() const { DARABONBA_PTR_GET_DEFAULT(ownerReferenceName_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setOwnerReferenceName(string ownerReferenceName) { DARABONBA_PTR_SET_VALUE(ownerReferenceName_, ownerReferenceName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> hostIp_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<bool> managed_ = nullptr;
    std::shared_ptr<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloadsManagedInfo> managedInfo_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> ownerReferenceKind_ = nullptr;
    std::shared_ptr<string> ownerReferenceName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
