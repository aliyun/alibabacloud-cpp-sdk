// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYPODSHISTORYPODS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYPODSHISTORYPODS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PodNetworkInterface.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobResponseBodyPodsHistoryPods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyPodsHistoryPods& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
      DARABONBA_PTR_TO_JSON(PodIps, podIps_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyPodsHistoryPods& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PodId, podId_);
      DARABONBA_PTR_FROM_JSON(PodIps, podIps_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetJobResponseBodyPodsHistoryPods() = default ;
    GetJobResponseBodyPodsHistoryPods(const GetJobResponseBodyPodsHistoryPods &) = default ;
    GetJobResponseBodyPodsHistoryPods(GetJobResponseBodyPodsHistoryPods &&) = default ;
    GetJobResponseBodyPodsHistoryPods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyPodsHistoryPods() = default ;
    GetJobResponseBodyPodsHistoryPods& operator=(const GetJobResponseBodyPodsHistoryPods &) = default ;
    GetJobResponseBodyPodsHistoryPods& operator=(GetJobResponseBodyPodsHistoryPods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtFinishTime_ == nullptr && return this->gmtStartTime_ == nullptr && return this->ip_ == nullptr && return this->nodeName_ == nullptr
        && return this->podId_ == nullptr && return this->podIps_ == nullptr && return this->podUid_ == nullptr && return this->resourceType_ == nullptr && return this->status_ == nullptr
        && return this->subStatus_ == nullptr && return this->type_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetJobResponseBodyPodsHistoryPods& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string gmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string podId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


    // podIps Field Functions 
    bool hasPodIps() const { return this->podIps_ != nullptr;};
    void deletePodIps() { this->podIps_ = nullptr;};
    inline const vector<Models::PodNetworkInterface> & podIps() const { DARABONBA_PTR_GET_CONST(podIps_, vector<Models::PodNetworkInterface>) };
    inline vector<Models::PodNetworkInterface> podIps() { DARABONBA_PTR_GET(podIps_, vector<Models::PodNetworkInterface>) };
    inline GetJobResponseBodyPodsHistoryPods& setPodIps(const vector<Models::PodNetworkInterface> & podIps) { DARABONBA_PTR_SET_VALUE(podIps_, podIps) };
    inline GetJobResponseBodyPodsHistoryPods& setPodIps(vector<Models::PodNetworkInterface> && podIps) { DARABONBA_PTR_SET_RVALUE(podIps_, podIps) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string podUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetJobResponseBodyPodsHistoryPods& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<double> duration_ = nullptr;
    // The time when the node was created (UTC).
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The end time of the node (UTC).
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    // The start time of the node (UTC).
    std::shared_ptr<string> gmtStartTime_ = nullptr;
    // The IP address of the node.
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> podId_ = nullptr;
    std::shared_ptr<vector<Models::PodNetworkInterface>> podIps_ = nullptr;
    // The UID of the node.
    std::shared_ptr<string> podUid_ = nullptr;
    // The resource type of the node.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The status of the node.
    std::shared_ptr<string> status_ = nullptr;
    // The sub-status of the node, such as its preemption status. Valid values:
    // 
    // *   Normal
    // *   Evicted
    std::shared_ptr<string> subStatus_ = nullptr;
    // The type of the node.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
