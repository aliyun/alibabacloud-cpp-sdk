// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODYDETAILSACTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODYDETAILSACTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarTaskAndActionsResponseBodyDetailsActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarTaskAndActionsResponseBodyDetailsActions& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionUuid, actionUuid_);
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(Component, component_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarTaskAndActionsResponseBodyDetailsActions& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionUuid, actionUuid_);
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(Component, component_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSoarTaskAndActionsResponseBodyDetailsActions() = default ;
    DescribeSoarTaskAndActionsResponseBodyDetailsActions(const DescribeSoarTaskAndActionsResponseBodyDetailsActions &) = default ;
    DescribeSoarTaskAndActionsResponseBodyDetailsActions(DescribeSoarTaskAndActionsResponseBodyDetailsActions &&) = default ;
    DescribeSoarTaskAndActionsResponseBodyDetailsActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarTaskAndActionsResponseBodyDetailsActions() = default ;
    DescribeSoarTaskAndActionsResponseBodyDetailsActions& operator=(const DescribeSoarTaskAndActionsResponseBodyDetailsActions &) = default ;
    DescribeSoarTaskAndActionsResponseBodyDetailsActions& operator=(DescribeSoarTaskAndActionsResponseBodyDetailsActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->actionUuid_ == nullptr && return this->assetName_ == nullptr && return this->component_ == nullptr && return this->endTime_ == nullptr && return this->nodeName_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetailsActions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionUuid Field Functions 
    bool hasActionUuid() const { return this->actionUuid_ != nullptr;};
    void deleteActionUuid() { this->actionUuid_ = nullptr;};
    inline string actionUuid() const { DARABONBA_PTR_GET_DEFAULT(actionUuid_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetailsActions& setActionUuid(string actionUuid) { DARABONBA_PTR_SET_VALUE(actionUuid_, actionUuid) };


    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetailsActions& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline string component() const { DARABONBA_PTR_GET_DEFAULT(component_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetailsActions& setComponent(string component) { DARABONBA_PTR_SET_VALUE(component_, component) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSoarTaskAndActionsResponseBodyDetailsActions& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetailsActions& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSoarTaskAndActionsResponseBodyDetailsActions& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetailsActions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The action name of the component.
    std::shared_ptr<string> action_ = nullptr;
    // The UUID of the component execution record.
    std::shared_ptr<string> actionUuid_ = nullptr;
    // The name of the asset that is used by the component.
    std::shared_ptr<string> assetName_ = nullptr;
    // The component name.
    std::shared_ptr<string> component_ = nullptr;
    // The end of the time range during which the component is run. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The custom name of the node in the component.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The beginning of the time range during which the component is run. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The running result of the component. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
