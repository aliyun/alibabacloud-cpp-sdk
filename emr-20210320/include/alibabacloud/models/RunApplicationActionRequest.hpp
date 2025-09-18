// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAPPLICATIONACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNAPPLICATIONACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ComponentInstanceSelector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class RunApplicationActionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunApplicationActionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentInstanceSelector, componentInstanceSelector_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecuteStrategy, executeStrategy_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RollingExecute, rollingExecute_);
    };
    friend void from_json(const Darabonba::Json& j, RunApplicationActionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentInstanceSelector, componentInstanceSelector_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecuteStrategy, executeStrategy_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RollingExecute, rollingExecute_);
    };
    RunApplicationActionRequest() = default ;
    RunApplicationActionRequest(const RunApplicationActionRequest &) = default ;
    RunApplicationActionRequest(RunApplicationActionRequest &&) = default ;
    RunApplicationActionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunApplicationActionRequest() = default ;
    RunApplicationActionRequest& operator=(const RunApplicationActionRequest &) = default ;
    RunApplicationActionRequest& operator=(RunApplicationActionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionName_ != nullptr
        && this->batchSize_ != nullptr && this->clusterId_ != nullptr && this->componentInstanceSelector_ != nullptr && this->description_ != nullptr && this->executeStrategy_ != nullptr
        && this->interval_ != nullptr && this->regionId_ != nullptr && this->rollingExecute_ != nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline RunApplicationActionRequest& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int32_t batchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
    inline RunApplicationActionRequest& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RunApplicationActionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentInstanceSelector Field Functions 
    bool hasComponentInstanceSelector() const { return this->componentInstanceSelector_ != nullptr;};
    void deleteComponentInstanceSelector() { this->componentInstanceSelector_ = nullptr;};
    inline const ComponentInstanceSelector & componentInstanceSelector() const { DARABONBA_PTR_GET_CONST(componentInstanceSelector_, ComponentInstanceSelector) };
    inline ComponentInstanceSelector componentInstanceSelector() { DARABONBA_PTR_GET(componentInstanceSelector_, ComponentInstanceSelector) };
    inline RunApplicationActionRequest& setComponentInstanceSelector(const ComponentInstanceSelector & componentInstanceSelector) { DARABONBA_PTR_SET_VALUE(componentInstanceSelector_, componentInstanceSelector) };
    inline RunApplicationActionRequest& setComponentInstanceSelector(ComponentInstanceSelector && componentInstanceSelector) { DARABONBA_PTR_SET_RVALUE(componentInstanceSelector_, componentInstanceSelector) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunApplicationActionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executeStrategy Field Functions 
    bool hasExecuteStrategy() const { return this->executeStrategy_ != nullptr;};
    void deleteExecuteStrategy() { this->executeStrategy_ = nullptr;};
    inline string executeStrategy() const { DARABONBA_PTR_GET_DEFAULT(executeStrategy_, "") };
    inline RunApplicationActionRequest& setExecuteStrategy(string executeStrategy) { DARABONBA_PTR_SET_VALUE(executeStrategy_, executeStrategy) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline RunApplicationActionRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunApplicationActionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rollingExecute Field Functions 
    bool hasRollingExecute() const { return this->rollingExecute_ != nullptr;};
    void deleteRollingExecute() { this->rollingExecute_ = nullptr;};
    inline bool rollingExecute() const { DARABONBA_PTR_GET_DEFAULT(rollingExecute_, false) };
    inline RunApplicationActionRequest& setRollingExecute(bool rollingExecute) { DARABONBA_PTR_SET_VALUE(rollingExecute_, rollingExecute) };


  protected:
    // The name of the action. Valid values:
    // 
    // *   start
    // *   stop
    // *   config
    // *   restart
    // *   refresh_queues
    // *   refresh_labels
    // 
    // This parameter is required.
    std::shared_ptr<string> actionName_ = nullptr;
    // The number of applications in each batch.
    std::shared_ptr<int32_t> batchSize_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The operation object.
    // 
    // This parameter is required.
    std::shared_ptr<ComponentInstanceSelector> componentInstanceSelector_ = nullptr;
    // The description of the execution.
    std::shared_ptr<string> description_ = nullptr;
    // The execution policy. Valid values:
    // 
    // *   FAILED_BLOCK: The system stops the execution if the execution fails.
    // *   FAILED_CONTINUE: The system continues the execution if the execution fails.
    std::shared_ptr<string> executeStrategy_ = nullptr;
    // The interval for rolling execution. Unit: seconds.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to enable rolling execution.
    std::shared_ptr<bool> rollingExecute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
