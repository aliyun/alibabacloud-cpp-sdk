// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class OperateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ComponentTypes, componentTypes_);
      DARABONBA_PTR_TO_JSON(GroupNames, groupNames_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
    };
    friend void from_json(const Darabonba::Json& j, OperateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ComponentTypes, componentTypes_);
      DARABONBA_PTR_FROM_JSON(GroupNames, groupNames_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
    };
    OperateApplicationRequest() = default ;
    OperateApplicationRequest(const OperateApplicationRequest &) = default ;
    OperateApplicationRequest(OperateApplicationRequest &&) = default ;
    OperateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateApplicationRequest() = default ;
    OperateApplicationRequest& operator=(const OperateApplicationRequest &) = default ;
    OperateApplicationRequest& operator=(OperateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->componentTypes_ == nullptr && this->groupNames_ == nullptr && this->operation_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline OperateApplicationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // componentTypes Field Functions 
    bool hasComponentTypes() const { return this->componentTypes_ != nullptr;};
    void deleteComponentTypes() { this->componentTypes_ = nullptr;};
    inline string getComponentTypes() const { DARABONBA_PTR_GET_DEFAULT(componentTypes_, "") };
    inline OperateApplicationRequest& setComponentTypes(string componentTypes) { DARABONBA_PTR_SET_VALUE(componentTypes_, componentTypes) };


    // groupNames Field Functions 
    bool hasGroupNames() const { return this->groupNames_ != nullptr;};
    void deleteGroupNames() { this->groupNames_ = nullptr;};
    inline string getGroupNames() const { DARABONBA_PTR_GET_DEFAULT(groupNames_, "") };
    inline OperateApplicationRequest& setGroupNames(string groupNames) { DARABONBA_PTR_SET_VALUE(groupNames_, groupNames) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline OperateApplicationRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The Ray component type. Supported only for the restart operation of Ray applications. The value is a comma-separated list of components. Valid components are head, jupyterlab, and grafana, which can be combined. worker or gpuworker is not accepted. To select workers, you must specify GroupNames. If only head is specified, other components are not actively restarted, but connections and jobs may be affected. To restore dependencies, explicitly add jupyterlab or select the entire cluster. When provided together with GroupNames, the union of both is used and deduplicated. If neither selection parameter is provided, all resident components are restarted, but scaled-out workers are not restarted. Explicit empty strings, pure whitespace, comma-only strings, unknown types, or non-Ray applications are rejected and do not fall back to a full-cluster operation. DisableHeadScheduling and EnableHeadScheduling always apply to the head of the entire application. Specifying this parameter for these operations is rejected.
    shared_ptr<string> componentTypes_ {};
    // The Ray resident worker group name. Supported only for the restart operation of Ray applications. The value is a comma-separated list of exact workerGroup names, which are trimmed, deduplicated, and case-sensitive. Only resident CPU or GPU workers in the specified groups are restarted, excluding scaled-out workers. If only this parameter is specified, the head, other groups, or auxiliary components are not restarted. Unknown group names, explicit empty strings, pure whitespace, comma-only strings, or non-Ray applications are rejected. If any explicitly selected group exists but has no resident targets, the entire request is rejected and does not expand to scaled-out workers or a full-cluster operation. Full-cluster requests without selection parameters skip groups with no resident targets. DisableHeadScheduling and EnableHeadScheduling do not restart any workers. Specifying this parameter for these operations is rejected.
    shared_ptr<string> groupNames_ {};
    // The operation type.
    // 
    // * **restart**: Restart.
    // * **stop**: Stop.
    // * **start**: Start.
    shared_ptr<string> operation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
