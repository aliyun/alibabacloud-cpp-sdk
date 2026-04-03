// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNAGENTINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNAGENTINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateFunagentInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunagentInput& obj) { 
      DARABONBA_PTR_TO_JSON(adminName, adminName_);
      DARABONBA_PTR_TO_JSON(adminSecret, adminSecret_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(dbConnections, dbConnections_);
      DARABONBA_PTR_TO_JSON(dbHost, dbHost_);
      DARABONBA_PTR_TO_JSON(dbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(dbPassword, dbPassword_);
      DARABONBA_PTR_TO_JSON(dbPort, dbPort_);
      DARABONBA_PTR_TO_JSON(dbType, dbType_);
      DARABONBA_PTR_TO_JSON(dbUsername, dbUsername_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(replicas, replicas_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunagentInput& obj) { 
      DARABONBA_PTR_FROM_JSON(adminName, adminName_);
      DARABONBA_PTR_FROM_JSON(adminSecret, adminSecret_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(dbConnections, dbConnections_);
      DARABONBA_PTR_FROM_JSON(dbHost, dbHost_);
      DARABONBA_PTR_FROM_JSON(dbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(dbPassword, dbPassword_);
      DARABONBA_PTR_FROM_JSON(dbPort, dbPort_);
      DARABONBA_PTR_FROM_JSON(dbType, dbType_);
      DARABONBA_PTR_FROM_JSON(dbUsername, dbUsername_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpdateFunagentInput() = default ;
    UpdateFunagentInput(const UpdateFunagentInput &) = default ;
    UpdateFunagentInput(UpdateFunagentInput &&) = default ;
    UpdateFunagentInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunagentInput() = default ;
    UpdateFunagentInput& operator=(const UpdateFunagentInput &) = default ;
    UpdateFunagentInput& operator=(UpdateFunagentInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminName_ == nullptr
        && this->adminSecret_ == nullptr && this->cpu_ == nullptr && this->dbConnections_ == nullptr && this->dbHost_ == nullptr && this->dbInstanceId_ == nullptr
        && this->dbName_ == nullptr && this->dbPassword_ == nullptr && this->dbPort_ == nullptr && this->dbType_ == nullptr && this->dbUsername_ == nullptr
        && this->description_ == nullptr && this->memory_ == nullptr && this->replicas_ == nullptr && this->version_ == nullptr; };
    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline UpdateFunagentInput& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminSecret Field Functions 
    bool hasAdminSecret() const { return this->adminSecret_ != nullptr;};
    void deleteAdminSecret() { this->adminSecret_ = nullptr;};
    inline string getAdminSecret() const { DARABONBA_PTR_GET_DEFAULT(adminSecret_, "") };
    inline UpdateFunagentInput& setAdminSecret(string adminSecret) { DARABONBA_PTR_SET_VALUE(adminSecret_, adminSecret) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline UpdateFunagentInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // dbConnections Field Functions 
    bool hasDbConnections() const { return this->dbConnections_ != nullptr;};
    void deleteDbConnections() { this->dbConnections_ = nullptr;};
    inline int32_t getDbConnections() const { DARABONBA_PTR_GET_DEFAULT(dbConnections_, 0) };
    inline UpdateFunagentInput& setDbConnections(int32_t dbConnections) { DARABONBA_PTR_SET_VALUE(dbConnections_, dbConnections) };


    // dbHost Field Functions 
    bool hasDbHost() const { return this->dbHost_ != nullptr;};
    void deleteDbHost() { this->dbHost_ = nullptr;};
    inline string getDbHost() const { DARABONBA_PTR_GET_DEFAULT(dbHost_, "") };
    inline UpdateFunagentInput& setDbHost(string dbHost) { DARABONBA_PTR_SET_VALUE(dbHost_, dbHost) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline UpdateFunagentInput& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline UpdateFunagentInput& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbPassword Field Functions 
    bool hasDbPassword() const { return this->dbPassword_ != nullptr;};
    void deleteDbPassword() { this->dbPassword_ = nullptr;};
    inline string getDbPassword() const { DARABONBA_PTR_GET_DEFAULT(dbPassword_, "") };
    inline UpdateFunagentInput& setDbPassword(string dbPassword) { DARABONBA_PTR_SET_VALUE(dbPassword_, dbPassword) };


    // dbPort Field Functions 
    bool hasDbPort() const { return this->dbPort_ != nullptr;};
    void deleteDbPort() { this->dbPort_ = nullptr;};
    inline int32_t getDbPort() const { DARABONBA_PTR_GET_DEFAULT(dbPort_, 0) };
    inline UpdateFunagentInput& setDbPort(int32_t dbPort) { DARABONBA_PTR_SET_VALUE(dbPort_, dbPort) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline UpdateFunagentInput& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dbUsername Field Functions 
    bool hasDbUsername() const { return this->dbUsername_ != nullptr;};
    void deleteDbUsername() { this->dbUsername_ = nullptr;};
    inline string getDbUsername() const { DARABONBA_PTR_GET_DEFAULT(dbUsername_, "") };
    inline UpdateFunagentInput& setDbUsername(string dbUsername) { DARABONBA_PTR_SET_VALUE(dbUsername_, dbUsername) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFunagentInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline UpdateFunagentInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline UpdateFunagentInput& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateFunagentInput& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> adminName_ {};
    // 敏感字段
    shared_ptr<string> adminSecret_ {};
    shared_ptr<float> cpu_ {};
    shared_ptr<int32_t> dbConnections_ {};
    shared_ptr<string> dbHost_ {};
    shared_ptr<string> dbInstanceId_ {};
    shared_ptr<string> dbName_ {};
    // 敏感字段
    shared_ptr<string> dbPassword_ {};
    shared_ptr<int32_t> dbPort_ {};
    shared_ptr<string> dbType_ {};
    shared_ptr<string> dbUsername_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> memory_ {};
    shared_ptr<int32_t> replicas_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
