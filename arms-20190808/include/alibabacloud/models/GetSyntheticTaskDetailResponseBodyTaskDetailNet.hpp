// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILNET_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILNET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailNet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailNet& obj) { 
      DARABONBA_PTR_TO_JSON(NetDigSwitch, netDigSwitch_);
      DARABONBA_PTR_TO_JSON(NetDnsNs, netDnsNs_);
      DARABONBA_PTR_TO_JSON(NetDnsQueryMethod, netDnsQueryMethod_);
      DARABONBA_PTR_TO_JSON(NetDnsServer, netDnsServer_);
      DARABONBA_PTR_TO_JSON(NetDnsSwitch, netDnsSwitch_);
      DARABONBA_PTR_TO_JSON(NetDnsTimeout, netDnsTimeout_);
      DARABONBA_PTR_TO_JSON(NetIcmpActive, netIcmpActive_);
      DARABONBA_PTR_TO_JSON(NetIcmpDataCut, netIcmpDataCut_);
      DARABONBA_PTR_TO_JSON(NetIcmpInterval, netIcmpInterval_);
      DARABONBA_PTR_TO_JSON(NetIcmpNum, netIcmpNum_);
      DARABONBA_PTR_TO_JSON(NetIcmpSize, netIcmpSize_);
      DARABONBA_PTR_TO_JSON(NetIcmpSwitch, netIcmpSwitch_);
      DARABONBA_PTR_TO_JSON(NetIcmpTimeout, netIcmpTimeout_);
      DARABONBA_PTR_TO_JSON(NetTraceRouteNum, netTraceRouteNum_);
      DARABONBA_PTR_TO_JSON(NetTraceRouteSwitch, netTraceRouteSwitch_);
      DARABONBA_PTR_TO_JSON(NetTraceRouteTimeout, netTraceRouteTimeout_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailNet& obj) { 
      DARABONBA_PTR_FROM_JSON(NetDigSwitch, netDigSwitch_);
      DARABONBA_PTR_FROM_JSON(NetDnsNs, netDnsNs_);
      DARABONBA_PTR_FROM_JSON(NetDnsQueryMethod, netDnsQueryMethod_);
      DARABONBA_PTR_FROM_JSON(NetDnsServer, netDnsServer_);
      DARABONBA_PTR_FROM_JSON(NetDnsSwitch, netDnsSwitch_);
      DARABONBA_PTR_FROM_JSON(NetDnsTimeout, netDnsTimeout_);
      DARABONBA_PTR_FROM_JSON(NetIcmpActive, netIcmpActive_);
      DARABONBA_PTR_FROM_JSON(NetIcmpDataCut, netIcmpDataCut_);
      DARABONBA_PTR_FROM_JSON(NetIcmpInterval, netIcmpInterval_);
      DARABONBA_PTR_FROM_JSON(NetIcmpNum, netIcmpNum_);
      DARABONBA_PTR_FROM_JSON(NetIcmpSize, netIcmpSize_);
      DARABONBA_PTR_FROM_JSON(NetIcmpSwitch, netIcmpSwitch_);
      DARABONBA_PTR_FROM_JSON(NetIcmpTimeout, netIcmpTimeout_);
      DARABONBA_PTR_FROM_JSON(NetTraceRouteNum, netTraceRouteNum_);
      DARABONBA_PTR_FROM_JSON(NetTraceRouteSwitch, netTraceRouteSwitch_);
      DARABONBA_PTR_FROM_JSON(NetTraceRouteTimeout, netTraceRouteTimeout_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailNet() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNet(const GetSyntheticTaskDetailResponseBodyTaskDetailNet &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNet(GetSyntheticTaskDetailResponseBodyTaskDetailNet &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailNet() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNet& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailNet &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNet& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailNet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->netDigSwitch_ != nullptr
        && this->netDnsNs_ != nullptr && this->netDnsQueryMethod_ != nullptr && this->netDnsServer_ != nullptr && this->netDnsSwitch_ != nullptr && this->netDnsTimeout_ != nullptr
        && this->netIcmpActive_ != nullptr && this->netIcmpDataCut_ != nullptr && this->netIcmpInterval_ != nullptr && this->netIcmpNum_ != nullptr && this->netIcmpSize_ != nullptr
        && this->netIcmpSwitch_ != nullptr && this->netIcmpTimeout_ != nullptr && this->netTraceRouteNum_ != nullptr && this->netTraceRouteSwitch_ != nullptr && this->netTraceRouteTimeout_ != nullptr
        && this->whiteList_ != nullptr; };
    // netDigSwitch Field Functions 
    bool hasNetDigSwitch() const { return this->netDigSwitch_ != nullptr;};
    void deleteNetDigSwitch() { this->netDigSwitch_ = nullptr;};
    inline int64_t netDigSwitch() const { DARABONBA_PTR_GET_DEFAULT(netDigSwitch_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetDigSwitch(int64_t netDigSwitch) { DARABONBA_PTR_SET_VALUE(netDigSwitch_, netDigSwitch) };


    // netDnsNs Field Functions 
    bool hasNetDnsNs() const { return this->netDnsNs_ != nullptr;};
    void deleteNetDnsNs() { this->netDnsNs_ = nullptr;};
    inline string netDnsNs() const { DARABONBA_PTR_GET_DEFAULT(netDnsNs_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetDnsNs(string netDnsNs) { DARABONBA_PTR_SET_VALUE(netDnsNs_, netDnsNs) };


    // netDnsQueryMethod Field Functions 
    bool hasNetDnsQueryMethod() const { return this->netDnsQueryMethod_ != nullptr;};
    void deleteNetDnsQueryMethod() { this->netDnsQueryMethod_ = nullptr;};
    inline string netDnsQueryMethod() const { DARABONBA_PTR_GET_DEFAULT(netDnsQueryMethod_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetDnsQueryMethod(string netDnsQueryMethod) { DARABONBA_PTR_SET_VALUE(netDnsQueryMethod_, netDnsQueryMethod) };


    // netDnsServer Field Functions 
    bool hasNetDnsServer() const { return this->netDnsServer_ != nullptr;};
    void deleteNetDnsServer() { this->netDnsServer_ = nullptr;};
    inline int64_t netDnsServer() const { DARABONBA_PTR_GET_DEFAULT(netDnsServer_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetDnsServer(int64_t netDnsServer) { DARABONBA_PTR_SET_VALUE(netDnsServer_, netDnsServer) };


    // netDnsSwitch Field Functions 
    bool hasNetDnsSwitch() const { return this->netDnsSwitch_ != nullptr;};
    void deleteNetDnsSwitch() { this->netDnsSwitch_ = nullptr;};
    inline int64_t netDnsSwitch() const { DARABONBA_PTR_GET_DEFAULT(netDnsSwitch_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetDnsSwitch(int64_t netDnsSwitch) { DARABONBA_PTR_SET_VALUE(netDnsSwitch_, netDnsSwitch) };


    // netDnsTimeout Field Functions 
    bool hasNetDnsTimeout() const { return this->netDnsTimeout_ != nullptr;};
    void deleteNetDnsTimeout() { this->netDnsTimeout_ = nullptr;};
    inline string netDnsTimeout() const { DARABONBA_PTR_GET_DEFAULT(netDnsTimeout_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetDnsTimeout(string netDnsTimeout) { DARABONBA_PTR_SET_VALUE(netDnsTimeout_, netDnsTimeout) };


    // netIcmpActive Field Functions 
    bool hasNetIcmpActive() const { return this->netIcmpActive_ != nullptr;};
    void deleteNetIcmpActive() { this->netIcmpActive_ = nullptr;};
    inline int64_t netIcmpActive() const { DARABONBA_PTR_GET_DEFAULT(netIcmpActive_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetIcmpActive(int64_t netIcmpActive) { DARABONBA_PTR_SET_VALUE(netIcmpActive_, netIcmpActive) };


    // netIcmpDataCut Field Functions 
    bool hasNetIcmpDataCut() const { return this->netIcmpDataCut_ != nullptr;};
    void deleteNetIcmpDataCut() { this->netIcmpDataCut_ = nullptr;};
    inline int64_t netIcmpDataCut() const { DARABONBA_PTR_GET_DEFAULT(netIcmpDataCut_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetIcmpDataCut(int64_t netIcmpDataCut) { DARABONBA_PTR_SET_VALUE(netIcmpDataCut_, netIcmpDataCut) };


    // netIcmpInterval Field Functions 
    bool hasNetIcmpInterval() const { return this->netIcmpInterval_ != nullptr;};
    void deleteNetIcmpInterval() { this->netIcmpInterval_ = nullptr;};
    inline int64_t netIcmpInterval() const { DARABONBA_PTR_GET_DEFAULT(netIcmpInterval_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetIcmpInterval(int64_t netIcmpInterval) { DARABONBA_PTR_SET_VALUE(netIcmpInterval_, netIcmpInterval) };


    // netIcmpNum Field Functions 
    bool hasNetIcmpNum() const { return this->netIcmpNum_ != nullptr;};
    void deleteNetIcmpNum() { this->netIcmpNum_ = nullptr;};
    inline int64_t netIcmpNum() const { DARABONBA_PTR_GET_DEFAULT(netIcmpNum_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetIcmpNum(int64_t netIcmpNum) { DARABONBA_PTR_SET_VALUE(netIcmpNum_, netIcmpNum) };


    // netIcmpSize Field Functions 
    bool hasNetIcmpSize() const { return this->netIcmpSize_ != nullptr;};
    void deleteNetIcmpSize() { this->netIcmpSize_ = nullptr;};
    inline int64_t netIcmpSize() const { DARABONBA_PTR_GET_DEFAULT(netIcmpSize_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetIcmpSize(int64_t netIcmpSize) { DARABONBA_PTR_SET_VALUE(netIcmpSize_, netIcmpSize) };


    // netIcmpSwitch Field Functions 
    bool hasNetIcmpSwitch() const { return this->netIcmpSwitch_ != nullptr;};
    void deleteNetIcmpSwitch() { this->netIcmpSwitch_ = nullptr;};
    inline int64_t netIcmpSwitch() const { DARABONBA_PTR_GET_DEFAULT(netIcmpSwitch_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetIcmpSwitch(int64_t netIcmpSwitch) { DARABONBA_PTR_SET_VALUE(netIcmpSwitch_, netIcmpSwitch) };


    // netIcmpTimeout Field Functions 
    bool hasNetIcmpTimeout() const { return this->netIcmpTimeout_ != nullptr;};
    void deleteNetIcmpTimeout() { this->netIcmpTimeout_ = nullptr;};
    inline int64_t netIcmpTimeout() const { DARABONBA_PTR_GET_DEFAULT(netIcmpTimeout_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetIcmpTimeout(int64_t netIcmpTimeout) { DARABONBA_PTR_SET_VALUE(netIcmpTimeout_, netIcmpTimeout) };


    // netTraceRouteNum Field Functions 
    bool hasNetTraceRouteNum() const { return this->netTraceRouteNum_ != nullptr;};
    void deleteNetTraceRouteNum() { this->netTraceRouteNum_ = nullptr;};
    inline int64_t netTraceRouteNum() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteNum_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetTraceRouteNum(int64_t netTraceRouteNum) { DARABONBA_PTR_SET_VALUE(netTraceRouteNum_, netTraceRouteNum) };


    // netTraceRouteSwitch Field Functions 
    bool hasNetTraceRouteSwitch() const { return this->netTraceRouteSwitch_ != nullptr;};
    void deleteNetTraceRouteSwitch() { this->netTraceRouteSwitch_ = nullptr;};
    inline int64_t netTraceRouteSwitch() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteSwitch_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetTraceRouteSwitch(int64_t netTraceRouteSwitch) { DARABONBA_PTR_SET_VALUE(netTraceRouteSwitch_, netTraceRouteSwitch) };


    // netTraceRouteTimeout Field Functions 
    bool hasNetTraceRouteTimeout() const { return this->netTraceRouteTimeout_ != nullptr;};
    void deleteNetTraceRouteTimeout() { this->netTraceRouteTimeout_ = nullptr;};
    inline int64_t netTraceRouteTimeout() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteTimeout_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setNetTraceRouteTimeout(int64_t netTraceRouteTimeout) { DARABONBA_PTR_SET_VALUE(netTraceRouteTimeout_, netTraceRouteTimeout) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNet& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // Indicates whether the data is displayed in the DIG format. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> netDigSwitch_ = nullptr;
    // The NS server.
    std::shared_ptr<string> netDnsNs_ = nullptr;
    // The DNS query method. Valid values:
    // 
    // *   1: recursive
    // *   2: iterative
    std::shared_ptr<string> netDnsQueryMethod_ = nullptr;
    // The type of the DNS server. Valid values:
    // 
    // *   0: ipv4
    // *   1: ipv6
    // *   2: A version is automatically selected.
    std::shared_ptr<int64_t> netDnsServer_ = nullptr;
    // Indicates whether DNS test is enabled. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> netDnsSwitch_ = nullptr;
    // The timeout period of DNS requests.
    std::shared_ptr<string> netDnsTimeout_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   0 : ICMP
    // *   1 : TCP
    std::shared_ptr<int64_t> netIcmpActive_ = nullptr;
    // Indicates whether packets are split. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> netIcmpDataCut_ = nullptr;
    // The interval at which the synthetic monitoring task is executed.
    std::shared_ptr<int64_t> netIcmpInterval_ = nullptr;
    // The number of packets.
    std::shared_ptr<int64_t> netIcmpNum_ = nullptr;
    // The packet size.
    std::shared_ptr<int64_t> netIcmpSize_ = nullptr;
    // Indicates whether ICMP test is enabled. Valid values:
    // 
    // *   0: no.
    // *   1: yes. If you set this parameter to 1, you must also set the Icmp parameter.
    std::shared_ptr<int64_t> netIcmpSwitch_ = nullptr;
    // The monitoring timeout period.
    std::shared_ptr<int64_t> netIcmpTimeout_ = nullptr;
    // The maximum number of active detection points.
    std::shared_ptr<int64_t> netTraceRouteNum_ = nullptr;
    // Indicates whether Tracert test is enabled. Valid values:
    // 
    // *   0: no
    // *   1: yes. If you set this parameter to 1, you must also set the Tracert parameter.
    std::shared_ptr<int64_t> netTraceRouteSwitch_ = nullptr;
    // The monitoring timeout period. Valid values: 0 to 300. Unit: seconds.
    std::shared_ptr<int64_t> netTraceRouteTimeout_ = nullptr;
    // The whitelisted objects that are used to avoid DNS hijacking. Format: `<domain name>:<objects>`.
    // 
    // >  WAP networks do not support hijacking.
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
