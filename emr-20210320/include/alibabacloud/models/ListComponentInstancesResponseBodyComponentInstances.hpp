// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINSTANCESRESPONSEBODYCOMPONENTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINSTANCESRESPONSEBODYCOMPONENTINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListComponentInstancesResponseBodyComponentInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentInstancesResponseBodyComponentInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(BizState, bizState_);
      DARABONBA_PTR_TO_JSON(CommissionState, commissionState_);
      DARABONBA_PTR_TO_JSON(ComponentInstanceState, componentInstanceState_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DesiredState, desiredState_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentInstancesResponseBodyComponentInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(BizState, bizState_);
      DARABONBA_PTR_FROM_JSON(CommissionState, commissionState_);
      DARABONBA_PTR_FROM_JSON(ComponentInstanceState, componentInstanceState_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DesiredState, desiredState_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListComponentInstancesResponseBodyComponentInstances() = default ;
    ListComponentInstancesResponseBodyComponentInstances(const ListComponentInstancesResponseBodyComponentInstances &) = default ;
    ListComponentInstancesResponseBodyComponentInstances(ListComponentInstancesResponseBodyComponentInstances &&) = default ;
    ListComponentInstancesResponseBodyComponentInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentInstancesResponseBodyComponentInstances() = default ;
    ListComponentInstancesResponseBodyComponentInstances& operator=(const ListComponentInstancesResponseBodyComponentInstances &) = default ;
    ListComponentInstancesResponseBodyComponentInstances& operator=(ListComponentInstancesResponseBodyComponentInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->bizState_ != nullptr && this->commissionState_ != nullptr && this->componentInstanceState_ != nullptr && this->componentName_ != nullptr && this->createTime_ != nullptr
        && this->desiredState_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->zoneId_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // bizState Field Functions 
    bool hasBizState() const { return this->bizState_ != nullptr;};
    void deleteBizState() { this->bizState_ = nullptr;};
    inline string bizState() const { DARABONBA_PTR_GET_DEFAULT(bizState_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setBizState(string bizState) { DARABONBA_PTR_SET_VALUE(bizState_, bizState) };


    // commissionState Field Functions 
    bool hasCommissionState() const { return this->commissionState_ != nullptr;};
    void deleteCommissionState() { this->commissionState_ = nullptr;};
    inline string commissionState() const { DARABONBA_PTR_GET_DEFAULT(commissionState_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setCommissionState(string commissionState) { DARABONBA_PTR_SET_VALUE(commissionState_, commissionState) };


    // componentInstanceState Field Functions 
    bool hasComponentInstanceState() const { return this->componentInstanceState_ != nullptr;};
    void deleteComponentInstanceState() { this->componentInstanceState_ = nullptr;};
    inline string componentInstanceState() const { DARABONBA_PTR_GET_DEFAULT(componentInstanceState_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setComponentInstanceState(string componentInstanceState) { DARABONBA_PTR_SET_VALUE(componentInstanceState_, componentInstanceState) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListComponentInstancesResponseBodyComponentInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desiredState Field Functions 
    bool hasDesiredState() const { return this->desiredState_ != nullptr;};
    void deleteDesiredState() { this->desiredState_ = nullptr;};
    inline string desiredState() const { DARABONBA_PTR_GET_DEFAULT(desiredState_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setDesiredState(string desiredState) { DARABONBA_PTR_SET_VALUE(desiredState_, desiredState) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListComponentInstancesResponseBodyComponentInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The application name.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The status of the component service. Valid values:
    // 
    // *   active: the primary service.
    // *   standby: the standby service.
    std::shared_ptr<string> bizState_ = nullptr;
    // The status of the Commission. Valid values:
    // 
    // *   COMMISSIONED
    // *   COMMISSIONING
    // *   DECOMMISSIONED
    // *   DECOMMISSIONINPROGRESS
    // *   DECOMMISSIONFAILED
    // *   INSERVICE
    // *   UNKNOWN
    std::shared_ptr<string> commissionState_ = nullptr;
    // The status of the component. Valid values:
    // 
    // *   WAITING
    // *   INSTALLING
    // *   INSTALLED
    // *   INSTALL_FAILED
    // *   STARTING
    // *   STARTED
    // *   START_FAILED
    // *   STOPPING
    // *   STOPPED
    // *   STOP_FAILED
    std::shared_ptr<string> componentInstanceState_ = nullptr;
    // The component name.
    std::shared_ptr<string> componentName_ = nullptr;
    // The timestamp of the installation.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Valid values:
    // 
    // *   WAITING
    // *   INSTALLING
    // *   INSTALLED
    // *   INSTALL_FAILED
    // *   STARTING
    // *   STARTED
    // *   START_FAILED
    // *   STOPPING
    // *   STOPPED
    // *   STOP_FAILED
    std::shared_ptr<string> desiredState_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
