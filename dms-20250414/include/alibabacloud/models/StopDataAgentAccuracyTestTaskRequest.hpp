// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPDATAAGENTACCURACYTESTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPDATAAGENTACCURACYTESTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class StopDataAgentAccuracyTestTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopDataAgentAccuracyTestTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopDataAgentAccuracyTestTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    StopDataAgentAccuracyTestTaskRequest() = default ;
    StopDataAgentAccuracyTestTaskRequest(const StopDataAgentAccuracyTestTaskRequest &) = default ;
    StopDataAgentAccuracyTestTaskRequest(StopDataAgentAccuracyTestTaskRequest &&) = default ;
    StopDataAgentAccuracyTestTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopDataAgentAccuracyTestTaskRequest() = default ;
    StopDataAgentAccuracyTestTaskRequest& operator=(const StopDataAgentAccuracyTestTaskRequest &) = default ;
    StopDataAgentAccuracyTestTaskRequest& operator=(StopDataAgentAccuracyTestTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accuracyTestTaskId_ == nullptr
        && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // accuracyTestTaskId Field Functions 
    bool hasAccuracyTestTaskId() const { return this->accuracyTestTaskId_ != nullptr;};
    void deleteAccuracyTestTaskId() { this->accuracyTestTaskId_ = nullptr;};
    inline string getAccuracyTestTaskId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestTaskId_, "") };
    inline StopDataAgentAccuracyTestTaskRequest& setAccuracyTestTaskId(string accuracyTestTaskId) { DARABONBA_PTR_SET_VALUE(accuracyTestTaskId_, accuracyTestTaskId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopDataAgentAccuracyTestTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline StopDataAgentAccuracyTestTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the accuracy test task.
    shared_ptr<string> accuracyTestTaskId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
