// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DeleteAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclOperationType, aclOperationType_);
      DARABONBA_PTR_TO_JSON(AclOperationTypes, aclOperationTypes_);
      DARABONBA_PTR_TO_JSON(AclPermissionType, aclPermissionType_);
      DARABONBA_PTR_TO_JSON(AclResourceName, aclResourceName_);
      DARABONBA_PTR_TO_JSON(AclResourcePatternType, aclResourcePatternType_);
      DARABONBA_PTR_TO_JSON(AclResourceType, aclResourceType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclOperationType, aclOperationType_);
      DARABONBA_PTR_FROM_JSON(AclOperationTypes, aclOperationTypes_);
      DARABONBA_PTR_FROM_JSON(AclPermissionType, aclPermissionType_);
      DARABONBA_PTR_FROM_JSON(AclResourceName, aclResourceName_);
      DARABONBA_PTR_FROM_JSON(AclResourcePatternType, aclResourcePatternType_);
      DARABONBA_PTR_FROM_JSON(AclResourceType, aclResourceType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DeleteAclRequest() = default ;
    DeleteAclRequest(const DeleteAclRequest &) = default ;
    DeleteAclRequest(DeleteAclRequest &&) = default ;
    DeleteAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAclRequest() = default ;
    DeleteAclRequest& operator=(const DeleteAclRequest &) = default ;
    DeleteAclRequest& operator=(DeleteAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclOperationType_ != nullptr
        && this->aclOperationTypes_ != nullptr && this->aclPermissionType_ != nullptr && this->aclResourceName_ != nullptr && this->aclResourcePatternType_ != nullptr && this->aclResourceType_ != nullptr
        && this->host_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->username_ != nullptr; };
    // aclOperationType Field Functions 
    bool hasAclOperationType() const { return this->aclOperationType_ != nullptr;};
    void deleteAclOperationType() { this->aclOperationType_ = nullptr;};
    inline string aclOperationType() const { DARABONBA_PTR_GET_DEFAULT(aclOperationType_, "") };
    inline DeleteAclRequest& setAclOperationType(string aclOperationType) { DARABONBA_PTR_SET_VALUE(aclOperationType_, aclOperationType) };


    // aclOperationTypes Field Functions 
    bool hasAclOperationTypes() const { return this->aclOperationTypes_ != nullptr;};
    void deleteAclOperationTypes() { this->aclOperationTypes_ = nullptr;};
    inline string aclOperationTypes() const { DARABONBA_PTR_GET_DEFAULT(aclOperationTypes_, "") };
    inline DeleteAclRequest& setAclOperationTypes(string aclOperationTypes) { DARABONBA_PTR_SET_VALUE(aclOperationTypes_, aclOperationTypes) };


    // aclPermissionType Field Functions 
    bool hasAclPermissionType() const { return this->aclPermissionType_ != nullptr;};
    void deleteAclPermissionType() { this->aclPermissionType_ = nullptr;};
    inline string aclPermissionType() const { DARABONBA_PTR_GET_DEFAULT(aclPermissionType_, "") };
    inline DeleteAclRequest& setAclPermissionType(string aclPermissionType) { DARABONBA_PTR_SET_VALUE(aclPermissionType_, aclPermissionType) };


    // aclResourceName Field Functions 
    bool hasAclResourceName() const { return this->aclResourceName_ != nullptr;};
    void deleteAclResourceName() { this->aclResourceName_ = nullptr;};
    inline string aclResourceName() const { DARABONBA_PTR_GET_DEFAULT(aclResourceName_, "") };
    inline DeleteAclRequest& setAclResourceName(string aclResourceName) { DARABONBA_PTR_SET_VALUE(aclResourceName_, aclResourceName) };


    // aclResourcePatternType Field Functions 
    bool hasAclResourcePatternType() const { return this->aclResourcePatternType_ != nullptr;};
    void deleteAclResourcePatternType() { this->aclResourcePatternType_ = nullptr;};
    inline string aclResourcePatternType() const { DARABONBA_PTR_GET_DEFAULT(aclResourcePatternType_, "") };
    inline DeleteAclRequest& setAclResourcePatternType(string aclResourcePatternType) { DARABONBA_PTR_SET_VALUE(aclResourcePatternType_, aclResourcePatternType) };


    // aclResourceType Field Functions 
    bool hasAclResourceType() const { return this->aclResourceType_ != nullptr;};
    void deleteAclResourceType() { this->aclResourceType_ = nullptr;};
    inline string aclResourceType() const { DARABONBA_PTR_GET_DEFAULT(aclResourceType_, "") };
    inline DeleteAclRequest& setAclResourceType(string aclResourceType) { DARABONBA_PTR_SET_VALUE(aclResourceType_, aclResourceType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DeleteAclRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteAclRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAclRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DeleteAclRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The type of the operation allowed by the access control list (ACL). Valid values:
    // 
    // *   **Write**: data writes.
    // *   **Read**: data reads.
    // *   **Describe**: reads of transaction IDs.
    // *   **IdempotentWrite**: idempotent data writes to clusters.
    // *   **IDEMPOTENT_WRITE**: idempotent data writes to clusters. This value is available only for serverless ApsaraMQ for Kafka instances.
    // *   **DESCRIBE_CONFIGS**: configuration query. This value is available only for serverless ApsaraMQ for Kafka instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclOperationType_ = nullptr;
    // The types of operations allowed by the ACL. Separate multiple operations with commas (,).
    // 
    // Valid values:
    // 
    // *   **Write**: data writes.
    // *   **Read**: data reads.
    // *   **Describe**: reads of transaction IDs.
    // *   **IdempotentWrite**: idempotent data writes to clusters.
    // *   **IDEMPOTENT_WRITE**: idempotent data writes to clusters. This value is available only for serverless ApsaraMQ for Kafka instances.
    // *   **DESCRIBE_CONFIGS**: configuration query. This value is available only for serverless ApsaraMQ for Kafka instances.
    // 
    // >  This parameter is available only for serverless ApsaraMQ for Kafka instances.
    std::shared_ptr<string> aclOperationTypes_ = nullptr;
    // The authorization method. Valid values:
    // 
    // *   Deny
    // *   ALLOW
    // 
    // >  This parameter is available only for serverless ApsaraMQ for Kafka instances.
    std::shared_ptr<string> aclPermissionType_ = nullptr;
    // The name of the resource.
    // 
    // *   The value can be the name of a topic or consumer group.
    // *   You can use an asterisk (\\*) to indicate the names of all topics or consumer groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclResourceName_ = nullptr;
    // The mode that is used to match resources. Valid values:
    // 
    // *   **LITERAL:** full match
    // *   **PREFIXED**: prefix match
    // 
    // This parameter is required.
    std::shared_ptr<string> aclResourcePatternType_ = nullptr;
    // The resource type. Valid values:
    // 
    // *   **Topic**: topic
    // *   **Group**: consumer group
    // *   **Cluster**: cluster
    // *   **TransactionalId**: transactional ID
    // 
    // This parameter is required.
    std::shared_ptr<string> aclResourceType_ = nullptr;
    // The IP address of the source.
    // 
    // > 
    // 
    // *   You can specify only a specific IP address or use the asterisk (\\*) wildcard character to specify all IP addresses. CIDR blocks are not supported.
    // 
    // *   This parameter is available only for serverless ApsaraMQ for Kafka instances.
    std::shared_ptr<string> host_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the user.
    // 
    // This parameter is required.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
