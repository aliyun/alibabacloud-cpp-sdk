// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPODRISKRESPONSEBODYPODRISKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPODRISKRESPONSEBODYPODRISKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPodRiskResponseBodyPodRiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPodRiskResponseBodyPodRiskList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(HcCount, hcCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(PodIp, podIp_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPodRiskResponseBodyPodRiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(HcCount, hcCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(PodIp, podIp_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    ListPodRiskResponseBodyPodRiskList() = default ;
    ListPodRiskResponseBodyPodRiskList(const ListPodRiskResponseBodyPodRiskList &) = default ;
    ListPodRiskResponseBodyPodRiskList(ListPodRiskResponseBodyPodRiskList &&) = default ;
    ListPodRiskResponseBodyPodRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPodRiskResponseBodyPodRiskList() = default ;
    ListPodRiskResponseBodyPodRiskList& operator=(const ListPodRiskResponseBodyPodRiskList &) = default ;
    ListPodRiskResponseBodyPodRiskList& operator=(ListPodRiskResponseBodyPodRiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->createTime_ == nullptr && return this->hcCount_ == nullptr && return this->instanceId_ == nullptr
        && return this->namespace_ == nullptr && return this->nodeName_ == nullptr && return this->pod_ == nullptr && return this->podIp_ == nullptr && return this->vulCount_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline ListPodRiskResponseBodyPodRiskList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPodRiskResponseBodyPodRiskList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListPodRiskResponseBodyPodRiskList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListPodRiskResponseBodyPodRiskList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // hcCount Field Functions 
    bool hasHcCount() const { return this->hcCount_ != nullptr;};
    void deleteHcCount() { this->hcCount_ = nullptr;};
    inline int32_t hcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
    inline ListPodRiskResponseBodyPodRiskList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPodRiskResponseBodyPodRiskList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListPodRiskResponseBodyPodRiskList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListPodRiskResponseBodyPodRiskList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline ListPodRiskResponseBodyPodRiskList& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // podIp Field Functions 
    bool hasPodIp() const { return this->podIp_ != nullptr;};
    void deletePodIp() { this->podIp_ = nullptr;};
    inline string podIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
    inline ListPodRiskResponseBodyPodRiskList& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline ListPodRiskResponseBodyPodRiskList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The number of alerts that are generated for the pod.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // The ID of the container cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The timestamp that indicates the time when the pod was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The number of baseline risk items that are detected in the pod.
    std::shared_ptr<int32_t> hcCount_ = nullptr;
    // The instance ID of the node.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The name of the pod.
    std::shared_ptr<string> pod_ = nullptr;
    // The IP address of the pod.
    std::shared_ptr<string> podIp_ = nullptr;
    // The number of vulnerabilities that are detected in the pod.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
