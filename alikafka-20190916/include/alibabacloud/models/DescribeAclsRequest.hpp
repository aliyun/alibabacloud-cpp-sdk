// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeAclsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclOperationType, aclOperationType_);
      DARABONBA_PTR_TO_JSON(AclPermissionType, aclPermissionType_);
      DARABONBA_PTR_TO_JSON(AclResourceName, aclResourceName_);
      DARABONBA_PTR_TO_JSON(AclResourcePatternType, aclResourcePatternType_);
      DARABONBA_PTR_TO_JSON(AclResourceType, aclResourceType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclOperationType, aclOperationType_);
      DARABONBA_PTR_FROM_JSON(AclPermissionType, aclPermissionType_);
      DARABONBA_PTR_FROM_JSON(AclResourceName, aclResourceName_);
      DARABONBA_PTR_FROM_JSON(AclResourcePatternType, aclResourcePatternType_);
      DARABONBA_PTR_FROM_JSON(AclResourceType, aclResourceType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DescribeAclsRequest() = default ;
    DescribeAclsRequest(const DescribeAclsRequest &) = default ;
    DescribeAclsRequest(DescribeAclsRequest &&) = default ;
    DescribeAclsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclsRequest() = default ;
    DescribeAclsRequest& operator=(const DescribeAclsRequest &) = default ;
    DescribeAclsRequest& operator=(DescribeAclsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclOperationType_ != nullptr
        && this->aclPermissionType_ != nullptr && this->aclResourceName_ != nullptr && this->aclResourcePatternType_ != nullptr && this->aclResourceType_ != nullptr && this->host_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->username_ != nullptr; };
    // aclOperationType Field Functions 
    bool hasAclOperationType() const { return this->aclOperationType_ != nullptr;};
    void deleteAclOperationType() { this->aclOperationType_ = nullptr;};
    inline string aclOperationType() const { DARABONBA_PTR_GET_DEFAULT(aclOperationType_, "") };
    inline DescribeAclsRequest& setAclOperationType(string aclOperationType) { DARABONBA_PTR_SET_VALUE(aclOperationType_, aclOperationType) };


    // aclPermissionType Field Functions 
    bool hasAclPermissionType() const { return this->aclPermissionType_ != nullptr;};
    void deleteAclPermissionType() { this->aclPermissionType_ = nullptr;};
    inline string aclPermissionType() const { DARABONBA_PTR_GET_DEFAULT(aclPermissionType_, "") };
    inline DescribeAclsRequest& setAclPermissionType(string aclPermissionType) { DARABONBA_PTR_SET_VALUE(aclPermissionType_, aclPermissionType) };


    // aclResourceName Field Functions 
    bool hasAclResourceName() const { return this->aclResourceName_ != nullptr;};
    void deleteAclResourceName() { this->aclResourceName_ = nullptr;};
    inline string aclResourceName() const { DARABONBA_PTR_GET_DEFAULT(aclResourceName_, "") };
    inline DescribeAclsRequest& setAclResourceName(string aclResourceName) { DARABONBA_PTR_SET_VALUE(aclResourceName_, aclResourceName) };


    // aclResourcePatternType Field Functions 
    bool hasAclResourcePatternType() const { return this->aclResourcePatternType_ != nullptr;};
    void deleteAclResourcePatternType() { this->aclResourcePatternType_ = nullptr;};
    inline string aclResourcePatternType() const { DARABONBA_PTR_GET_DEFAULT(aclResourcePatternType_, "") };
    inline DescribeAclsRequest& setAclResourcePatternType(string aclResourcePatternType) { DARABONBA_PTR_SET_VALUE(aclResourcePatternType_, aclResourcePatternType) };


    // aclResourceType Field Functions 
    bool hasAclResourceType() const { return this->aclResourceType_ != nullptr;};
    void deleteAclResourceType() { this->aclResourceType_ = nullptr;};
    inline string aclResourceType() const { DARABONBA_PTR_GET_DEFAULT(aclResourceType_, "") };
    inline DescribeAclsRequest& setAclResourceType(string aclResourceType) { DARABONBA_PTR_SET_VALUE(aclResourceType_, aclResourceType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeAclsRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAclsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAclsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeAclsRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The types of operations allowed by the ACL. Separate multiple operation types with commas (,).
    // - Valid values:
    // - Write
    // - Read
    // - Describe: reads of transactional IDs.
    // - IdempotentWrite: idempotent data writes to clusters.
    // - IDEMPOTENT_WRITE: idempotent data writes to clusters. This value is available only for ApsaraMQ for Kafka V3 instances.
    // - DESCRIBE_CONFIGS: queries of configurations. This value is available only for ApsaraMQ for Kafka V3 instances.
    // > This parameter is available only for ApsaraMQ for Kafka V3 serverless instances.
    std::shared_ptr<string> aclOperationType_ = nullptr;
    // The authorization method. Valid values:
    // - DENY
    // - ALLOW
    // > This parameter is available only for ApsaraMQ for Kafka V3 serverless instances.
    std::shared_ptr<string> aclPermissionType_ = nullptr;
    // The resource name.
    // 
    // *   The value can be the name of a topic or consumer group.
    // *   You can use an asterisk (\\*) to specify the names of all topics or consumer groups.
    // 
    // > You can query the resources on which permissions are granted only after you grant the user the required permissions on all resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclResourceName_ = nullptr;
    // The match mode. Valid values:
    // 
    // *   LITERAL: full-name match
    // *   PREFIXED: prefix match
    std::shared_ptr<string> aclResourcePatternType_ = nullptr;
    // The resource type. Valid values:
    // 
    // *   **Topic**
    // *   **Group**
    // 
    // This parameter is required.
    std::shared_ptr<string> aclResourceType_ = nullptr;
    // The source IP address.
    // >-  You can specify only a specific IP address or use the asterisk (*) wildcard character to specify all IP addresses. CIDR blocks are not supported.
    // > - This parameter is available only for ApsaraMQ for Kafka V3 serverless instances.
    std::shared_ptr<string> host_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The username.
    // 
    // *   You can use an asterisk (\\*) to specify all users.
    // 
    // > You can use an asterisk (\\*) to query the authorized users only after you grant the required permissions to all users.
    // 
    // This parameter is required.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
