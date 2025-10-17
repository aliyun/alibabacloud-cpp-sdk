// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PODITEM_HPP_
#define ALIBABACLOUD_MODELS_PODITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PodItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class PodItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PodItem& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(HistoryPods, historyPods_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
      DARABONBA_PTR_TO_JSON(PodIp, podIp_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PodItem& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(HistoryPods, historyPods_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PodId, podId_);
      DARABONBA_PTR_FROM_JSON(PodIp, podIp_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    PodItem() = default ;
    PodItem(const PodItem &) = default ;
    PodItem(PodItem &&) = default ;
    PodItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PodItem() = default ;
    PodItem& operator=(const PodItem &) = default ;
    PodItem& operator=(PodItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && return this->gmtFinishTime_ == nullptr && return this->gmtStartTime_ == nullptr && return this->historyPods_ == nullptr && return this->ip_ == nullptr && return this->nodeName_ == nullptr
        && return this->podId_ == nullptr && return this->podIp_ == nullptr && return this->podUid_ == nullptr && return this->status_ == nullptr && return this->subStatus_ == nullptr
        && return this->type_ == nullptr; };
    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline PodItem& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline PodItem& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string gmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline PodItem& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // historyPods Field Functions 
    bool hasHistoryPods() const { return this->historyPods_ != nullptr;};
    void deleteHistoryPods() { this->historyPods_ = nullptr;};
    inline const vector<PodItem> & historyPods() const { DARABONBA_PTR_GET_CONST(historyPods_, vector<PodItem>) };
    inline vector<PodItem> historyPods() { DARABONBA_PTR_GET(historyPods_, vector<PodItem>) };
    inline PodItem& setHistoryPods(const vector<PodItem> & historyPods) { DARABONBA_PTR_SET_VALUE(historyPods_, historyPods) };
    inline PodItem& setHistoryPods(vector<PodItem> && historyPods) { DARABONBA_PTR_SET_RVALUE(historyPods_, historyPods) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline PodItem& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline PodItem& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string podId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline PodItem& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


    // podIp Field Functions 
    bool hasPodIp() const { return this->podIp_ != nullptr;};
    void deletePodIp() { this->podIp_ = nullptr;};
    inline string podIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
    inline PodItem& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string podUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline PodItem& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PodItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline PodItem& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PodItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    std::shared_ptr<string> gmtStartTime_ = nullptr;
    std::shared_ptr<vector<PodItem>> historyPods_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> podId_ = nullptr;
    std::shared_ptr<string> podIp_ = nullptr;
    std::shared_ptr<string> podUid_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subStatus_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
