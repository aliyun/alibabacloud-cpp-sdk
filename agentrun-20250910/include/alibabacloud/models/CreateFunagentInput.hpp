// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNAGENTINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNAGENTINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateFunagentInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFunagentInput& obj) { 
      DARABONBA_PTR_TO_JSON(adminName, adminName_);
      DARABONBA_PTR_TO_JSON(adminSecret, adminSecret_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(dbConnections, dbConnections_);
      DARABONBA_PTR_TO_JSON(dbHost, dbHost_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(dbPassword, dbPassword_);
      DARABONBA_PTR_TO_JSON(dbPort, dbPort_);
      DARABONBA_PTR_TO_JSON(dbType, dbType_);
      DARABONBA_PTR_TO_JSON(dbUsername, dbUsername_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(funAgentName, funAgentName_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(replicas, replicas_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vswitchIds, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFunagentInput& obj) { 
      DARABONBA_PTR_FROM_JSON(adminName, adminName_);
      DARABONBA_PTR_FROM_JSON(adminSecret, adminSecret_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(dbConnections, dbConnections_);
      DARABONBA_PTR_FROM_JSON(dbHost, dbHost_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(dbPassword, dbPassword_);
      DARABONBA_PTR_FROM_JSON(dbPort, dbPort_);
      DARABONBA_PTR_FROM_JSON(dbType, dbType_);
      DARABONBA_PTR_FROM_JSON(dbUsername, dbUsername_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(funAgentName, funAgentName_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vswitchIds, vswitchIds_);
    };
    CreateFunagentInput() = default ;
    CreateFunagentInput(const CreateFunagentInput &) = default ;
    CreateFunagentInput(CreateFunagentInput &&) = default ;
    CreateFunagentInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFunagentInput() = default ;
    CreateFunagentInput& operator=(const CreateFunagentInput &) = default ;
    CreateFunagentInput& operator=(CreateFunagentInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminName_ == nullptr
        && this->adminSecret_ == nullptr && this->cpu_ == nullptr && this->dbConnections_ == nullptr && this->dbHost_ == nullptr && this->dbName_ == nullptr
        && this->dbPassword_ == nullptr && this->dbPort_ == nullptr && this->dbType_ == nullptr && this->dbUsername_ == nullptr && this->description_ == nullptr
        && this->funAgentName_ == nullptr && this->memory_ == nullptr && this->regionId_ == nullptr && this->replicas_ == nullptr && this->securityGroupId_ == nullptr
        && this->vpcId_ == nullptr && this->vswitchIds_ == nullptr; };
    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline CreateFunagentInput& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminSecret Field Functions 
    bool hasAdminSecret() const { return this->adminSecret_ != nullptr;};
    void deleteAdminSecret() { this->adminSecret_ = nullptr;};
    inline string getAdminSecret() const { DARABONBA_PTR_GET_DEFAULT(adminSecret_, "") };
    inline CreateFunagentInput& setAdminSecret(string adminSecret) { DARABONBA_PTR_SET_VALUE(adminSecret_, adminSecret) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateFunagentInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // dbConnections Field Functions 
    bool hasDbConnections() const { return this->dbConnections_ != nullptr;};
    void deleteDbConnections() { this->dbConnections_ = nullptr;};
    inline int32_t getDbConnections() const { DARABONBA_PTR_GET_DEFAULT(dbConnections_, 0) };
    inline CreateFunagentInput& setDbConnections(int32_t dbConnections) { DARABONBA_PTR_SET_VALUE(dbConnections_, dbConnections) };


    // dbHost Field Functions 
    bool hasDbHost() const { return this->dbHost_ != nullptr;};
    void deleteDbHost() { this->dbHost_ = nullptr;};
    inline string getDbHost() const { DARABONBA_PTR_GET_DEFAULT(dbHost_, "") };
    inline CreateFunagentInput& setDbHost(string dbHost) { DARABONBA_PTR_SET_VALUE(dbHost_, dbHost) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateFunagentInput& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbPassword Field Functions 
    bool hasDbPassword() const { return this->dbPassword_ != nullptr;};
    void deleteDbPassword() { this->dbPassword_ = nullptr;};
    inline string getDbPassword() const { DARABONBA_PTR_GET_DEFAULT(dbPassword_, "") };
    inline CreateFunagentInput& setDbPassword(string dbPassword) { DARABONBA_PTR_SET_VALUE(dbPassword_, dbPassword) };


    // dbPort Field Functions 
    bool hasDbPort() const { return this->dbPort_ != nullptr;};
    void deleteDbPort() { this->dbPort_ = nullptr;};
    inline int32_t getDbPort() const { DARABONBA_PTR_GET_DEFAULT(dbPort_, 0) };
    inline CreateFunagentInput& setDbPort(int32_t dbPort) { DARABONBA_PTR_SET_VALUE(dbPort_, dbPort) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline CreateFunagentInput& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dbUsername Field Functions 
    bool hasDbUsername() const { return this->dbUsername_ != nullptr;};
    void deleteDbUsername() { this->dbUsername_ = nullptr;};
    inline string getDbUsername() const { DARABONBA_PTR_GET_DEFAULT(dbUsername_, "") };
    inline CreateFunagentInput& setDbUsername(string dbUsername) { DARABONBA_PTR_SET_VALUE(dbUsername_, dbUsername) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFunagentInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // funAgentName Field Functions 
    bool hasFunAgentName() const { return this->funAgentName_ != nullptr;};
    void deleteFunAgentName() { this->funAgentName_ = nullptr;};
    inline string getFunAgentName() const { DARABONBA_PTR_GET_DEFAULT(funAgentName_, "") };
    inline CreateFunagentInput& setFunAgentName(string funAgentName) { DARABONBA_PTR_SET_VALUE(funAgentName_, funAgentName) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateFunagentInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFunagentInput& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateFunagentInput& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateFunagentInput& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateFunagentInput& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline string getVswitchIds() const { DARABONBA_PTR_GET_DEFAULT(vswitchIds_, "") };
    inline CreateFunagentInput& setVswitchIds(string vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };


  protected:
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> adminName_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> adminSecret_ {};
    // `float64`，必填
    // 
    // This parameter is required.
    shared_ptr<float> cpu_ {};
    // `int32`，必填
    // 
    // This parameter is required.
    shared_ptr<int32_t> dbConnections_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> dbHost_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> dbPassword_ {};
    // `int32`，必填
    // 
    // This parameter is required.
    shared_ptr<int32_t> dbPort_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> dbType_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> dbUsername_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> funAgentName_ {};
    // `int32`，必填
    // 
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    // 可选； `omitempty`
    shared_ptr<string> regionId_ {};
    // `int32`，必填
    // 
    // This parameter is required.
    shared_ptr<int32_t> replicas_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // `string`，必填
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // `string`，必填；JSON 数组 [{vswitchId, zoneId}]（core 解码为 `*string` 但校验非空）
    // 
    // This parameter is required.
    shared_ptr<string> vswitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
