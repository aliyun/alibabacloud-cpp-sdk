// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODERUNMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODERUNMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateNodeRunModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodeRunModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodeRunModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
    };
    UpdateNodeRunModeRequest() = default ;
    UpdateNodeRunModeRequest(const UpdateNodeRunModeRequest &) = default ;
    UpdateNodeRunModeRequest(UpdateNodeRunModeRequest &&) = default ;
    UpdateNodeRunModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodeRunModeRequest() = default ;
    UpdateNodeRunModeRequest& operator=(const UpdateNodeRunModeRequest &) = default ;
    UpdateNodeRunModeRequest& operator=(UpdateNodeRunModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr
        && this->projectEnv_ != nullptr && this->schedulerType_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline UpdateNodeRunModeRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline UpdateNodeRunModeRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline int32_t schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, 0) };
    inline UpdateNodeRunModeRequest& setSchedulerType(int32_t schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


  protected:
    // The node ID. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the node ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The environment in which the node runs. Valid values: DEV and PROD. The value DEV indicates the development environment, and the value PROD indicates the production environment.
    // 
    // *   PROD
    // *   DEV
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The operation that you want to perform on the node. Valid values:
    // 
    // *   0: indicates that you want to unfreeze the node.
    // *   2: indicates that you want to freeze the node.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> schedulerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
