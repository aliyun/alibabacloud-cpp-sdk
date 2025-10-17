// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(CanModifyPassword, canModifyPassword_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(CanModifyPassword, canModifyPassword_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeDtsJobDetailResponseBodySourceEndpoint() = default ;
    DescribeDtsJobDetailResponseBodySourceEndpoint(const DescribeDtsJobDetailResponseBodySourceEndpoint &) = default ;
    DescribeDtsJobDetailResponseBodySourceEndpoint(DescribeDtsJobDetailResponseBodySourceEndpoint &&) = default ;
    DescribeDtsJobDetailResponseBodySourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySourceEndpoint() = default ;
    DescribeDtsJobDetailResponseBodySourceEndpoint& operator=(const DescribeDtsJobDetailResponseBodySourceEndpoint &) = default ;
    DescribeDtsJobDetailResponseBodySourceEndpoint& operator=(DescribeDtsJobDetailResponseBodySourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && return this->canModifyPassword_ == nullptr && return this->databaseName_ == nullptr && return this->engineName_ == nullptr && return this->instanceID_ == nullptr && return this->instanceType_ == nullptr
        && return this->ip_ == nullptr && return this->oracleSID_ == nullptr && return this->port_ == nullptr && return this->region_ == nullptr && return this->roleName_ == nullptr
        && return this->sslSolutionEnum_ == nullptr && return this->userName_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // canModifyPassword Field Functions 
    bool hasCanModifyPassword() const { return this->canModifyPassword_ != nullptr;};
    void deleteCanModifyPassword() { this->canModifyPassword_ = nullptr;};
    inline bool canModifyPassword() const { DARABONBA_PTR_GET_DEFAULT(canModifyPassword_, false) };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setCanModifyPassword(bool canModifyPassword) { DARABONBA_PTR_SET_VALUE(canModifyPassword_, canModifyPassword) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string engineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // oracleSID Field Functions 
    bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
    void deleteOracleSID() { this->oracleSID_ = nullptr;};
    inline string oracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // sslSolutionEnum Field Functions 
    bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
    void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
    inline string sslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The ID of the Alibaba Cloud account to which the source instance belongs.
    std::shared_ptr<string> aliyunUid_ = nullptr;
    // Indicates whether the password can be modified. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canModifyPassword_ = nullptr;
    // The name of the database from which the objects are migrated in the source instance.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The database engine of the source instance.
    std::shared_ptr<string> engineName_ = nullptr;
    // The source instance ID.
    std::shared_ptr<string> instanceID_ = nullptr;
    // The type of the source instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The endpoint of the source instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The system ID (SID) of the Oracle database.
    // 
    // > This parameter is returned only if the return value of **EngineName** of the source instance is **Oracle** and the Oracle database is deployed in a non-Real Application Cluster (RAC) architecture.
    std::shared_ptr<string> oracleSID_ = nullptr;
    // The database service port of the source instance.
    std::shared_ptr<string> port_ = nullptr;
    // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> region_ = nullptr;
    // The name of the Resource Access Management (RAM) role configured for the Alibaba Cloud account to which the source instance belongs.
    std::shared_ptr<string> roleName_ = nullptr;
    // Indicates whether SSL encryption is enabled. Valid values:
    // 
    // *   **DISABLE**: SSL encryption is disabled.
    // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
    // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
    // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
    std::shared_ptr<string> sslSolutionEnum_ = nullptr;
    // The database account of the source instance.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
