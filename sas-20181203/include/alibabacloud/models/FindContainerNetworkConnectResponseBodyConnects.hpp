// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODYCONNECTS_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODYCONNECTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FindContainerNetworkConnectResponseBodyConnectsDstContainer.hpp>
#include <alibabacloud/models/FindContainerNetworkConnectResponseBodyConnectsSrcContainer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FindContainerNetworkConnectResponseBodyConnects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectResponseBodyConnects& obj) { 
      DARABONBA_PTR_TO_JSON(DstContainer, dstContainer_);
      DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(SrcContainer, srcContainer_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectResponseBodyConnects& obj) { 
      DARABONBA_PTR_FROM_JSON(DstContainer, dstContainer_);
      DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(SrcContainer, srcContainer_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
    };
    FindContainerNetworkConnectResponseBodyConnects() = default ;
    FindContainerNetworkConnectResponseBodyConnects(const FindContainerNetworkConnectResponseBodyConnects &) = default ;
    FindContainerNetworkConnectResponseBodyConnects(FindContainerNetworkConnectResponseBodyConnects &&) = default ;
    FindContainerNetworkConnectResponseBodyConnects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectResponseBodyConnects() = default ;
    FindContainerNetworkConnectResponseBodyConnects& operator=(const FindContainerNetworkConnectResponseBodyConnects &) = default ;
    FindContainerNetworkConnectResponseBodyConnects& operator=(FindContainerNetworkConnectResponseBodyConnects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstContainer_ == nullptr
        && return this->dstIp_ == nullptr && return this->dstPort_ == nullptr && return this->firstTime_ == nullptr && return this->id_ == nullptr && return this->lastTime_ == nullptr
        && return this->srcContainer_ == nullptr && return this->srcIp_ == nullptr && return this->srcPort_ == nullptr; };
    // dstContainer Field Functions 
    bool hasDstContainer() const { return this->dstContainer_ != nullptr;};
    void deleteDstContainer() { this->dstContainer_ = nullptr;};
    inline const Models::FindContainerNetworkConnectResponseBodyConnectsDstContainer & dstContainer() const { DARABONBA_PTR_GET_CONST(dstContainer_, Models::FindContainerNetworkConnectResponseBodyConnectsDstContainer) };
    inline Models::FindContainerNetworkConnectResponseBodyConnectsDstContainer dstContainer() { DARABONBA_PTR_GET(dstContainer_, Models::FindContainerNetworkConnectResponseBodyConnectsDstContainer) };
    inline FindContainerNetworkConnectResponseBodyConnects& setDstContainer(const Models::FindContainerNetworkConnectResponseBodyConnectsDstContainer & dstContainer) { DARABONBA_PTR_SET_VALUE(dstContainer_, dstContainer) };
    inline FindContainerNetworkConnectResponseBodyConnects& setDstContainer(Models::FindContainerNetworkConnectResponseBodyConnectsDstContainer && dstContainer) { DARABONBA_PTR_SET_RVALUE(dstContainer_, dstContainer) };


    // dstIp Field Functions 
    bool hasDstIp() const { return this->dstIp_ != nullptr;};
    void deleteDstIp() { this->dstIp_ = nullptr;};
    inline string dstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
    inline FindContainerNetworkConnectResponseBodyConnects& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline FindContainerNetworkConnectResponseBodyConnects& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline FindContainerNetworkConnectResponseBodyConnects& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline FindContainerNetworkConnectResponseBodyConnects& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline FindContainerNetworkConnectResponseBodyConnects& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // srcContainer Field Functions 
    bool hasSrcContainer() const { return this->srcContainer_ != nullptr;};
    void deleteSrcContainer() { this->srcContainer_ = nullptr;};
    inline const Models::FindContainerNetworkConnectResponseBodyConnectsSrcContainer & srcContainer() const { DARABONBA_PTR_GET_CONST(srcContainer_, Models::FindContainerNetworkConnectResponseBodyConnectsSrcContainer) };
    inline Models::FindContainerNetworkConnectResponseBodyConnectsSrcContainer srcContainer() { DARABONBA_PTR_GET(srcContainer_, Models::FindContainerNetworkConnectResponseBodyConnectsSrcContainer) };
    inline FindContainerNetworkConnectResponseBodyConnects& setSrcContainer(const Models::FindContainerNetworkConnectResponseBodyConnectsSrcContainer & srcContainer) { DARABONBA_PTR_SET_VALUE(srcContainer_, srcContainer) };
    inline FindContainerNetworkConnectResponseBodyConnects& setSrcContainer(Models::FindContainerNetworkConnectResponseBodyConnectsSrcContainer && srcContainer) { DARABONBA_PTR_SET_RVALUE(srcContainer_, srcContainer) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline FindContainerNetworkConnectResponseBodyConnects& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline string srcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, "") };
    inline FindContainerNetworkConnectResponseBodyConnects& setSrcPort(string srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


  protected:
    // The information about the destination container.
    // 
    // > This parameter is not supported.
    std::shared_ptr<Models::FindContainerNetworkConnectResponseBodyConnectsDstContainer> dstContainer_ = nullptr;
    // The destination IP address.
    std::shared_ptr<string> dstIp_ = nullptr;
    // The destination port.
    std::shared_ptr<string> dstPort_ = nullptr;
    // The timestamp when the connection was first established.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // The ID of the network connection.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The timestamp when the connection was last established.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The information about the source container.
    // 
    // > This parameter is not supported.
    std::shared_ptr<Models::FindContainerNetworkConnectResponseBodyConnectsSrcContainer> srcContainer_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> srcIp_ = nullptr;
    // The source port.
    std::shared_ptr<string> srcPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
