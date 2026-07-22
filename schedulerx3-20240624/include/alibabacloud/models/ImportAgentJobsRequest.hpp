// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTAGENTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTAGENTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ImportAgentJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportAgentJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MigrateStrategy, migrateStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, ImportAgentJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MigrateStrategy, migrateStrategy_);
    };
    ImportAgentJobsRequest() = default ;
    ImportAgentJobsRequest(const ImportAgentJobsRequest &) = default ;
    ImportAgentJobsRequest(ImportAgentJobsRequest &&) = default ;
    ImportAgentJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportAgentJobsRequest() = default ;
    ImportAgentJobsRequest& operator=(const ImportAgentJobsRequest &) = default ;
    ImportAgentJobsRequest& operator=(ImportAgentJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->clusterId_ == nullptr && this->migrateStrategy_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ImportAgentJobsRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ImportAgentJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // migrateStrategy Field Functions 
    bool hasMigrateStrategy() const { return this->migrateStrategy_ != nullptr;};
    void deleteMigrateStrategy() { this->migrateStrategy_ = nullptr;};
    inline int32_t getMigrateStrategy() const { DARABONBA_PTR_GET_DEFAULT(migrateStrategy_, 0) };
    inline ImportAgentJobsRequest& setMigrateStrategy(int32_t migrateStrategy) { DARABONBA_PTR_SET_VALUE(migrateStrategy_, migrateStrategy) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<int32_t> migrateStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
