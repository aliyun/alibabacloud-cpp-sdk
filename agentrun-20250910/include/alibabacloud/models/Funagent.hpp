// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNAGENT_HPP_
#define ALIBABACLOUD_MODELS_FUNAGENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class Funagent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Funagent& obj) { 
      DARABONBA_PTR_TO_JSON(adminName, adminName_);
      DARABONBA_PTR_TO_JSON(adminSecret, adminSecret_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(dbConnections, dbConnections_);
      DARABONBA_PTR_TO_JSON(dbHost, dbHost_);
      DARABONBA_PTR_TO_JSON(dbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(dbPassword, dbPassword_);
      DARABONBA_PTR_TO_JSON(dbPort, dbPort_);
      DARABONBA_PTR_TO_JSON(dbType, dbType_);
      DARABONBA_PTR_TO_JSON(dbUsername, dbUsername_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(funagentId, funagentId_);
      DARABONBA_PTR_TO_JSON(funagentName, funagentName_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(replicas, replicas_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vswitchIds, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, Funagent& obj) { 
      DARABONBA_PTR_FROM_JSON(adminName, adminName_);
      DARABONBA_PTR_FROM_JSON(adminSecret, adminSecret_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(dbConnections, dbConnections_);
      DARABONBA_PTR_FROM_JSON(dbHost, dbHost_);
      DARABONBA_PTR_FROM_JSON(dbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(dbPassword, dbPassword_);
      DARABONBA_PTR_FROM_JSON(dbPort, dbPort_);
      DARABONBA_PTR_FROM_JSON(dbType, dbType_);
      DARABONBA_PTR_FROM_JSON(dbUsername, dbUsername_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(funagentId, funagentId_);
      DARABONBA_PTR_FROM_JSON(funagentName, funagentName_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vswitchIds, vswitchIds_);
    };
    Funagent() = default ;
    Funagent(const Funagent &) = default ;
    Funagent(Funagent &&) = default ;
    Funagent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Funagent() = default ;
    Funagent& operator=(const Funagent &) = default ;
    Funagent& operator=(Funagent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminName_ == nullptr
        && this->adminSecret_ == nullptr && this->cpu_ == nullptr && this->createdAt_ == nullptr && this->dbConnections_ == nullptr && this->dbHost_ == nullptr
        && this->dbInstanceId_ == nullptr && this->dbName_ == nullptr && this->dbPassword_ == nullptr && this->dbPort_ == nullptr && this->dbType_ == nullptr
        && this->dbUsername_ == nullptr && this->description_ == nullptr && this->endpoint_ == nullptr && this->funagentId_ == nullptr && this->funagentName_ == nullptr
        && this->imageUrl_ == nullptr && this->memory_ == nullptr && this->regionId_ == nullptr && this->replicas_ == nullptr && this->securityGroupId_ == nullptr
        && this->status_ == nullptr && this->tenantId_ == nullptr && this->updatedAt_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchIds_ == nullptr; };
    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline Funagent& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminSecret Field Functions 
    bool hasAdminSecret() const { return this->adminSecret_ != nullptr;};
    void deleteAdminSecret() { this->adminSecret_ = nullptr;};
    inline string getAdminSecret() const { DARABONBA_PTR_GET_DEFAULT(adminSecret_, "") };
    inline Funagent& setAdminSecret(string adminSecret) { DARABONBA_PTR_SET_VALUE(adminSecret_, adminSecret) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline Funagent& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Funagent& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dbConnections Field Functions 
    bool hasDbConnections() const { return this->dbConnections_ != nullptr;};
    void deleteDbConnections() { this->dbConnections_ = nullptr;};
    inline int32_t getDbConnections() const { DARABONBA_PTR_GET_DEFAULT(dbConnections_, 0) };
    inline Funagent& setDbConnections(int32_t dbConnections) { DARABONBA_PTR_SET_VALUE(dbConnections_, dbConnections) };


    // dbHost Field Functions 
    bool hasDbHost() const { return this->dbHost_ != nullptr;};
    void deleteDbHost() { this->dbHost_ = nullptr;};
    inline string getDbHost() const { DARABONBA_PTR_GET_DEFAULT(dbHost_, "") };
    inline Funagent& setDbHost(string dbHost) { DARABONBA_PTR_SET_VALUE(dbHost_, dbHost) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline Funagent& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline Funagent& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbPassword Field Functions 
    bool hasDbPassword() const { return this->dbPassword_ != nullptr;};
    void deleteDbPassword() { this->dbPassword_ = nullptr;};
    inline string getDbPassword() const { DARABONBA_PTR_GET_DEFAULT(dbPassword_, "") };
    inline Funagent& setDbPassword(string dbPassword) { DARABONBA_PTR_SET_VALUE(dbPassword_, dbPassword) };


    // dbPort Field Functions 
    bool hasDbPort() const { return this->dbPort_ != nullptr;};
    void deleteDbPort() { this->dbPort_ = nullptr;};
    inline int32_t getDbPort() const { DARABONBA_PTR_GET_DEFAULT(dbPort_, 0) };
    inline Funagent& setDbPort(int32_t dbPort) { DARABONBA_PTR_SET_VALUE(dbPort_, dbPort) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline Funagent& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dbUsername Field Functions 
    bool hasDbUsername() const { return this->dbUsername_ != nullptr;};
    void deleteDbUsername() { this->dbUsername_ = nullptr;};
    inline string getDbUsername() const { DARABONBA_PTR_GET_DEFAULT(dbUsername_, "") };
    inline Funagent& setDbUsername(string dbUsername) { DARABONBA_PTR_SET_VALUE(dbUsername_, dbUsername) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Funagent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline Funagent& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // funagentId Field Functions 
    bool hasFunagentId() const { return this->funagentId_ != nullptr;};
    void deleteFunagentId() { this->funagentId_ = nullptr;};
    inline string getFunagentId() const { DARABONBA_PTR_GET_DEFAULT(funagentId_, "") };
    inline Funagent& setFunagentId(string funagentId) { DARABONBA_PTR_SET_VALUE(funagentId_, funagentId) };


    // funagentName Field Functions 
    bool hasFunagentName() const { return this->funagentName_ != nullptr;};
    void deleteFunagentName() { this->funagentName_ = nullptr;};
    inline string getFunagentName() const { DARABONBA_PTR_GET_DEFAULT(funagentName_, "") };
    inline Funagent& setFunagentName(string funagentName) { DARABONBA_PTR_SET_VALUE(funagentName_, funagentName) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline Funagent& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline Funagent& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline Funagent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline Funagent& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline Funagent& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Funagent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline Funagent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline Funagent& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline Funagent& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline Funagent& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline string getVswitchIds() const { DARABONBA_PTR_GET_DEFAULT(vswitchIds_, "") };
    inline Funagent& setVswitchIds(string vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };


  protected:
    shared_ptr<string> adminName_ {};
    // 敏感；响应中应脱敏
    shared_ptr<string> adminSecret_ {};
    shared_ptr<float> cpu_ {};
    // ISO 8601
    shared_ptr<string> createdAt_ {};
    shared_ptr<int32_t> dbConnections_ {};
    shared_ptr<string> dbHost_ {};
    shared_ptr<string> dbInstanceId_ {};
    shared_ptr<string> dbName_ {};
    // 敏感；响应中应脱敏
    shared_ptr<string> dbPassword_ {};
    shared_ptr<int32_t> dbPort_ {};
    shared_ptr<string> dbType_ {};
    shared_ptr<string> dbUsername_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> endpoint_ {};
    // UUID 字符串
    shared_ptr<string> funagentId_ {};
    shared_ptr<string> funagentName_ {};
    shared_ptr<string> imageUrl_ {};
    shared_ptr<int32_t> memory_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int32_t> replicas_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> tenantId_ {};
    // ISO 8601
    shared_ptr<string> updatedAt_ {};
    shared_ptr<string> version_ {};
    shared_ptr<string> vpcId_ {};
    // 与存储一致时为 JSON 字符串
    shared_ptr<string> vswitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
