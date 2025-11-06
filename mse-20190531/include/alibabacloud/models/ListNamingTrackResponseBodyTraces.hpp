// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMINGTRACKRESPONSEBODYTRACES_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMINGTRACKRESPONSEBODYTRACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNamingTrackResponseBodyTraces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamingTrackResponseBodyTraces& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceSize, instanceSize_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
      DARABONBA_PTR_TO_JSON(PushTimeAll, pushTimeAll_);
      DARABONBA_PTR_TO_JSON(PushTimeNetwork, pushTimeNetwork_);
      DARABONBA_PTR_TO_JSON(ServerName, serverName_);
      DARABONBA_PTR_TO_JSON(SlaTime, slaTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamingTrackResponseBodyTraces& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceSize, instanceSize_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
      DARABONBA_PTR_FROM_JSON(PushTimeAll, pushTimeAll_);
      DARABONBA_PTR_FROM_JSON(PushTimeNetwork, pushTimeNetwork_);
      DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
      DARABONBA_PTR_FROM_JSON(SlaTime, slaTime_);
    };
    ListNamingTrackResponseBodyTraces() = default ;
    ListNamingTrackResponseBodyTraces(const ListNamingTrackResponseBodyTraces &) = default ;
    ListNamingTrackResponseBodyTraces(ListNamingTrackResponseBodyTraces &&) = default ;
    ListNamingTrackResponseBodyTraces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamingTrackResponseBodyTraces() = default ;
    ListNamingTrackResponseBodyTraces& operator=(const ListNamingTrackResponseBodyTraces &) = default ;
    ListNamingTrackResponseBodyTraces& operator=(ListNamingTrackResponseBodyTraces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIp_ == nullptr
        && return this->group_ == nullptr && return this->instanceSize_ == nullptr && return this->nodeName_ == nullptr && return this->pushTime_ == nullptr && return this->pushTimeAll_ == nullptr
        && return this->pushTimeNetwork_ == nullptr && return this->serverName_ == nullptr && return this->slaTime_ == nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline ListNamingTrackResponseBodyTraces& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListNamingTrackResponseBodyTraces& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceSize Field Functions 
    bool hasInstanceSize() const { return this->instanceSize_ != nullptr;};
    void deleteInstanceSize() { this->instanceSize_ = nullptr;};
    inline string instanceSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSize_, "") };
    inline ListNamingTrackResponseBodyTraces& setInstanceSize(string instanceSize) { DARABONBA_PTR_SET_VALUE(instanceSize_, instanceSize) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListNamingTrackResponseBodyTraces& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline string pushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
    inline ListNamingTrackResponseBodyTraces& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // pushTimeAll Field Functions 
    bool hasPushTimeAll() const { return this->pushTimeAll_ != nullptr;};
    void deletePushTimeAll() { this->pushTimeAll_ = nullptr;};
    inline string pushTimeAll() const { DARABONBA_PTR_GET_DEFAULT(pushTimeAll_, "") };
    inline ListNamingTrackResponseBodyTraces& setPushTimeAll(string pushTimeAll) { DARABONBA_PTR_SET_VALUE(pushTimeAll_, pushTimeAll) };


    // pushTimeNetwork Field Functions 
    bool hasPushTimeNetwork() const { return this->pushTimeNetwork_ != nullptr;};
    void deletePushTimeNetwork() { this->pushTimeNetwork_ = nullptr;};
    inline string pushTimeNetwork() const { DARABONBA_PTR_GET_DEFAULT(pushTimeNetwork_, "") };
    inline ListNamingTrackResponseBodyTraces& setPushTimeNetwork(string pushTimeNetwork) { DARABONBA_PTR_SET_VALUE(pushTimeNetwork_, pushTimeNetwork) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string serverName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline ListNamingTrackResponseBodyTraces& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


    // slaTime Field Functions 
    bool hasSlaTime() const { return this->slaTime_ != nullptr;};
    void deleteSlaTime() { this->slaTime_ = nullptr;};
    inline string slaTime() const { DARABONBA_PTR_GET_DEFAULT(slaTime_, "") };
    inline ListNamingTrackResponseBodyTraces& setSlaTime(string slaTime) { DARABONBA_PTR_SET_VALUE(slaTime_, slaTime) };


  protected:
    // The IP address of the client.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The group.
    std::shared_ptr<string> group_ = nullptr;
    // The number of instances.
    std::shared_ptr<string> instanceSize_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The push time.
    std::shared_ptr<string> pushTime_ = nullptr;
    // The total push time.
    std::shared_ptr<string> pushTimeAll_ = nullptr;
    // The push time for the network.
    std::shared_ptr<string> pushTimeNetwork_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serverName_ = nullptr;
    // The duration that is specified in the service-level agreement (SLA).
    std::shared_ptr<string> slaTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
