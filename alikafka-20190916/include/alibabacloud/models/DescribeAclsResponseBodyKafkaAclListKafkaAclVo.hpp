// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLSRESPONSEBODYKAFKAACLLISTKAFKAACLVO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLSRESPONSEBODYKAFKAACLLISTKAFKAACLVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeAclsResponseBodyKafkaAclListKafkaAclVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclsResponseBodyKafkaAclListKafkaAclVO& obj) { 
      DARABONBA_PTR_TO_JSON(AclOperationType, aclOperationType_);
      DARABONBA_PTR_TO_JSON(AclPermissionType, aclPermissionType_);
      DARABONBA_PTR_TO_JSON(AclResourceName, aclResourceName_);
      DARABONBA_PTR_TO_JSON(AclResourcePatternType, aclResourcePatternType_);
      DARABONBA_PTR_TO_JSON(AclResourceType, aclResourceType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclsResponseBodyKafkaAclListKafkaAclVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AclOperationType, aclOperationType_);
      DARABONBA_PTR_FROM_JSON(AclPermissionType, aclPermissionType_);
      DARABONBA_PTR_FROM_JSON(AclResourceName, aclResourceName_);
      DARABONBA_PTR_FROM_JSON(AclResourcePatternType, aclResourcePatternType_);
      DARABONBA_PTR_FROM_JSON(AclResourceType, aclResourceType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DescribeAclsResponseBodyKafkaAclListKafkaAclVO() = default ;
    DescribeAclsResponseBodyKafkaAclListKafkaAclVO(const DescribeAclsResponseBodyKafkaAclListKafkaAclVO &) = default ;
    DescribeAclsResponseBodyKafkaAclListKafkaAclVO(DescribeAclsResponseBodyKafkaAclListKafkaAclVO &&) = default ;
    DescribeAclsResponseBodyKafkaAclListKafkaAclVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclsResponseBodyKafkaAclListKafkaAclVO() = default ;
    DescribeAclsResponseBodyKafkaAclListKafkaAclVO& operator=(const DescribeAclsResponseBodyKafkaAclListKafkaAclVO &) = default ;
    DescribeAclsResponseBodyKafkaAclListKafkaAclVO& operator=(DescribeAclsResponseBodyKafkaAclListKafkaAclVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclOperationType_ == nullptr
        && return this->aclPermissionType_ == nullptr && return this->aclResourceName_ == nullptr && return this->aclResourcePatternType_ == nullptr && return this->aclResourceType_ == nullptr && return this->host_ == nullptr
        && return this->username_ == nullptr; };
    // aclOperationType Field Functions 
    bool hasAclOperationType() const { return this->aclOperationType_ != nullptr;};
    void deleteAclOperationType() { this->aclOperationType_ = nullptr;};
    inline string aclOperationType() const { DARABONBA_PTR_GET_DEFAULT(aclOperationType_, "") };
    inline DescribeAclsResponseBodyKafkaAclListKafkaAclVO& setAclOperationType(string aclOperationType) { DARABONBA_PTR_SET_VALUE(aclOperationType_, aclOperationType) };


    // aclPermissionType Field Functions 
    bool hasAclPermissionType() const { return this->aclPermissionType_ != nullptr;};
    void deleteAclPermissionType() { this->aclPermissionType_ = nullptr;};
    inline string aclPermissionType() const { DARABONBA_PTR_GET_DEFAULT(aclPermissionType_, "") };
    inline DescribeAclsResponseBodyKafkaAclListKafkaAclVO& setAclPermissionType(string aclPermissionType) { DARABONBA_PTR_SET_VALUE(aclPermissionType_, aclPermissionType) };


    // aclResourceName Field Functions 
    bool hasAclResourceName() const { return this->aclResourceName_ != nullptr;};
    void deleteAclResourceName() { this->aclResourceName_ = nullptr;};
    inline string aclResourceName() const { DARABONBA_PTR_GET_DEFAULT(aclResourceName_, "") };
    inline DescribeAclsResponseBodyKafkaAclListKafkaAclVO& setAclResourceName(string aclResourceName) { DARABONBA_PTR_SET_VALUE(aclResourceName_, aclResourceName) };


    // aclResourcePatternType Field Functions 
    bool hasAclResourcePatternType() const { return this->aclResourcePatternType_ != nullptr;};
    void deleteAclResourcePatternType() { this->aclResourcePatternType_ = nullptr;};
    inline string aclResourcePatternType() const { DARABONBA_PTR_GET_DEFAULT(aclResourcePatternType_, "") };
    inline DescribeAclsResponseBodyKafkaAclListKafkaAclVO& setAclResourcePatternType(string aclResourcePatternType) { DARABONBA_PTR_SET_VALUE(aclResourcePatternType_, aclResourcePatternType) };


    // aclResourceType Field Functions 
    bool hasAclResourceType() const { return this->aclResourceType_ != nullptr;};
    void deleteAclResourceType() { this->aclResourceType_ = nullptr;};
    inline string aclResourceType() const { DARABONBA_PTR_GET_DEFAULT(aclResourceType_, "") };
    inline DescribeAclsResponseBodyKafkaAclListKafkaAclVO& setAclResourceType(string aclResourceType) { DARABONBA_PTR_SET_VALUE(aclResourceType_, aclResourceType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeAclsResponseBodyKafkaAclListKafkaAclVO& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeAclsResponseBodyKafkaAclListKafkaAclVO& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


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
    // *   You can use the asterisk (\\*) wildcard character to specify the names of all topics or consumer groups.
    std::shared_ptr<string> aclResourceName_ = nullptr;
    // The matching mode. Valid values:
    // 
    // *   **LITERAL:** full-name match
    // *   **PREFIXED**: prefix match
    std::shared_ptr<string> aclResourcePatternType_ = nullptr;
    // The resource type. Valid values:
    // 
    // *   **Topic**
    // *   **Group**
    std::shared_ptr<string> aclResourceType_ = nullptr;
    // The host.
    std::shared_ptr<string> host_ = nullptr;
    // The username.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
