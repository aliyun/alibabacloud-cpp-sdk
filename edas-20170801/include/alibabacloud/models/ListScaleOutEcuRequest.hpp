// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCALEOUTECUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCALEOUTECUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListScaleOutEcuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScaleOutEcuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
    };
    friend void from_json(const Darabonba::Json& j, ListScaleOutEcuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
    };
    ListScaleOutEcuRequest() = default ;
    ListScaleOutEcuRequest(const ListScaleOutEcuRequest &) = default ;
    ListScaleOutEcuRequest(ListScaleOutEcuRequest &&) = default ;
    ListScaleOutEcuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScaleOutEcuRequest() = default ;
    ListScaleOutEcuRequest& operator=(const ListScaleOutEcuRequest &) = default ;
    ListScaleOutEcuRequest& operator=(ListScaleOutEcuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->clusterId_ == nullptr && return this->cpu_ == nullptr && return this->groupId_ == nullptr && return this->instanceNum_ == nullptr && return this->logicalRegionId_ == nullptr
        && return this->mem_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListScaleOutEcuRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListScaleOutEcuRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListScaleOutEcuRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListScaleOutEcuRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline ListScaleOutEcuRequest& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline ListScaleOutEcuRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListScaleOutEcuRequest& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


  protected:
    // The ID of the application. Specify this parameter if you want to query the available ECUs in the cluster where the application is deployed.
    // 
    // >  Specify at least one of the ClusterId and AppId parameters as the query parameter.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the cluster. Specify this parameter if you want to query the available ECUs in the cluster.
    // 
    // > Specify at least one of the ClusterId and AppId parameters as the query parameter.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of CPU cores based on which you want to query the available ECUs in the cluster.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The ID of the instance group. Specify this parameter if you want to query the available ECUs in the cluster where the instance group resides.
    std::shared_ptr<string> groupId_ = nullptr;
    // The number of ECUs that you want to query. If this parameter is not specified, all the ECUs that meet the query conditions are returned.
    std::shared_ptr<int32_t> instanceNum_ = nullptr;
    // The ID of the namespace.
    // 
    // *   The ID of a custom namespace is in the `region ID:namespace identifier` format. Example: cn-beijing:test.
    // *   The ID of the default namespace is in the `region ID` format. Example: cn-beijing.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
    // The size of available memory based on which you want to query the available ECUs in the cluster. Unit: MB.
    std::shared_ptr<int32_t> mem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
