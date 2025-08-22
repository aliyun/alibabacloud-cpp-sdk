// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTNET_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTNET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestNet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestNet& obj) { 
      DARABONBA_PTR_TO_JSON(NetDNSNs, netDNSNs_);
      DARABONBA_PTR_TO_JSON(NetDNSQueryMethod, netDNSQueryMethod_);
      DARABONBA_PTR_TO_JSON(NetDNSServer, netDNSServer_);
      DARABONBA_PTR_TO_JSON(NetDNSSwitch, netDNSSwitch_);
      DARABONBA_PTR_TO_JSON(NetDNSTimeout, netDNSTimeout_);
      DARABONBA_PTR_TO_JSON(NetDigSwitch, netDigSwitch_);
      DARABONBA_PTR_TO_JSON(NetICMPActive, netICMPActive_);
      DARABONBA_PTR_TO_JSON(NetICMPDataCut, netICMPDataCut_);
      DARABONBA_PTR_TO_JSON(NetICMPInterval, netICMPInterval_);
      DARABONBA_PTR_TO_JSON(NetICMPNum, netICMPNum_);
      DARABONBA_PTR_TO_JSON(NetICMPSize, netICMPSize_);
      DARABONBA_PTR_TO_JSON(NetICMPSwitch, netICMPSwitch_);
      DARABONBA_PTR_TO_JSON(NetICMPTimeout, netICMPTimeout_);
      DARABONBA_PTR_TO_JSON(NetTraceRouteNum, netTraceRouteNum_);
      DARABONBA_PTR_TO_JSON(NetTraceRouteSwitch, netTraceRouteSwitch_);
      DARABONBA_PTR_TO_JSON(NetTraceRouteTimeout, netTraceRouteTimeout_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestNet& obj) { 
      DARABONBA_PTR_FROM_JSON(NetDNSNs, netDNSNs_);
      DARABONBA_PTR_FROM_JSON(NetDNSQueryMethod, netDNSQueryMethod_);
      DARABONBA_PTR_FROM_JSON(NetDNSServer, netDNSServer_);
      DARABONBA_PTR_FROM_JSON(NetDNSSwitch, netDNSSwitch_);
      DARABONBA_PTR_FROM_JSON(NetDNSTimeout, netDNSTimeout_);
      DARABONBA_PTR_FROM_JSON(NetDigSwitch, netDigSwitch_);
      DARABONBA_PTR_FROM_JSON(NetICMPActive, netICMPActive_);
      DARABONBA_PTR_FROM_JSON(NetICMPDataCut, netICMPDataCut_);
      DARABONBA_PTR_FROM_JSON(NetICMPInterval, netICMPInterval_);
      DARABONBA_PTR_FROM_JSON(NetICMPNum, netICMPNum_);
      DARABONBA_PTR_FROM_JSON(NetICMPSize, netICMPSize_);
      DARABONBA_PTR_FROM_JSON(NetICMPSwitch, netICMPSwitch_);
      DARABONBA_PTR_FROM_JSON(NetICMPTimeout, netICMPTimeout_);
      DARABONBA_PTR_FROM_JSON(NetTraceRouteNum, netTraceRouteNum_);
      DARABONBA_PTR_FROM_JSON(NetTraceRouteSwitch, netTraceRouteSwitch_);
      DARABONBA_PTR_FROM_JSON(NetTraceRouteTimeout, netTraceRouteTimeout_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    CreateSyntheticTaskRequestNet() = default ;
    CreateSyntheticTaskRequestNet(const CreateSyntheticTaskRequestNet &) = default ;
    CreateSyntheticTaskRequestNet(CreateSyntheticTaskRequestNet &&) = default ;
    CreateSyntheticTaskRequestNet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestNet() = default ;
    CreateSyntheticTaskRequestNet& operator=(const CreateSyntheticTaskRequestNet &) = default ;
    CreateSyntheticTaskRequestNet& operator=(CreateSyntheticTaskRequestNet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->netDNSNs_ != nullptr
        && this->netDNSQueryMethod_ != nullptr && this->netDNSServer_ != nullptr && this->netDNSSwitch_ != nullptr && this->netDNSTimeout_ != nullptr && this->netDigSwitch_ != nullptr
        && this->netICMPActive_ != nullptr && this->netICMPDataCut_ != nullptr && this->netICMPInterval_ != nullptr && this->netICMPNum_ != nullptr && this->netICMPSize_ != nullptr
        && this->netICMPSwitch_ != nullptr && this->netICMPTimeout_ != nullptr && this->netTraceRouteNum_ != nullptr && this->netTraceRouteSwitch_ != nullptr && this->netTraceRouteTimeout_ != nullptr
        && this->whiteList_ != nullptr; };
    // netDNSNs Field Functions 
    bool hasNetDNSNs() const { return this->netDNSNs_ != nullptr;};
    void deleteNetDNSNs() { this->netDNSNs_ = nullptr;};
    inline string netDNSNs() const { DARABONBA_PTR_GET_DEFAULT(netDNSNs_, "") };
    inline CreateSyntheticTaskRequestNet& setNetDNSNs(string netDNSNs) { DARABONBA_PTR_SET_VALUE(netDNSNs_, netDNSNs) };


    // netDNSQueryMethod Field Functions 
    bool hasNetDNSQueryMethod() const { return this->netDNSQueryMethod_ != nullptr;};
    void deleteNetDNSQueryMethod() { this->netDNSQueryMethod_ = nullptr;};
    inline int64_t netDNSQueryMethod() const { DARABONBA_PTR_GET_DEFAULT(netDNSQueryMethod_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetDNSQueryMethod(int64_t netDNSQueryMethod) { DARABONBA_PTR_SET_VALUE(netDNSQueryMethod_, netDNSQueryMethod) };


    // netDNSServer Field Functions 
    bool hasNetDNSServer() const { return this->netDNSServer_ != nullptr;};
    void deleteNetDNSServer() { this->netDNSServer_ = nullptr;};
    inline int64_t netDNSServer() const { DARABONBA_PTR_GET_DEFAULT(netDNSServer_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetDNSServer(int64_t netDNSServer) { DARABONBA_PTR_SET_VALUE(netDNSServer_, netDNSServer) };


    // netDNSSwitch Field Functions 
    bool hasNetDNSSwitch() const { return this->netDNSSwitch_ != nullptr;};
    void deleteNetDNSSwitch() { this->netDNSSwitch_ = nullptr;};
    inline int64_t netDNSSwitch() const { DARABONBA_PTR_GET_DEFAULT(netDNSSwitch_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetDNSSwitch(int64_t netDNSSwitch) { DARABONBA_PTR_SET_VALUE(netDNSSwitch_, netDNSSwitch) };


    // netDNSTimeout Field Functions 
    bool hasNetDNSTimeout() const { return this->netDNSTimeout_ != nullptr;};
    void deleteNetDNSTimeout() { this->netDNSTimeout_ = nullptr;};
    inline int64_t netDNSTimeout() const { DARABONBA_PTR_GET_DEFAULT(netDNSTimeout_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetDNSTimeout(int64_t netDNSTimeout) { DARABONBA_PTR_SET_VALUE(netDNSTimeout_, netDNSTimeout) };


    // netDigSwitch Field Functions 
    bool hasNetDigSwitch() const { return this->netDigSwitch_ != nullptr;};
    void deleteNetDigSwitch() { this->netDigSwitch_ = nullptr;};
    inline int64_t netDigSwitch() const { DARABONBA_PTR_GET_DEFAULT(netDigSwitch_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetDigSwitch(int64_t netDigSwitch) { DARABONBA_PTR_SET_VALUE(netDigSwitch_, netDigSwitch) };


    // netICMPActive Field Functions 
    bool hasNetICMPActive() const { return this->netICMPActive_ != nullptr;};
    void deleteNetICMPActive() { this->netICMPActive_ = nullptr;};
    inline int64_t netICMPActive() const { DARABONBA_PTR_GET_DEFAULT(netICMPActive_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetICMPActive(int64_t netICMPActive) { DARABONBA_PTR_SET_VALUE(netICMPActive_, netICMPActive) };


    // netICMPDataCut Field Functions 
    bool hasNetICMPDataCut() const { return this->netICMPDataCut_ != nullptr;};
    void deleteNetICMPDataCut() { this->netICMPDataCut_ = nullptr;};
    inline int64_t netICMPDataCut() const { DARABONBA_PTR_GET_DEFAULT(netICMPDataCut_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetICMPDataCut(int64_t netICMPDataCut) { DARABONBA_PTR_SET_VALUE(netICMPDataCut_, netICMPDataCut) };


    // netICMPInterval Field Functions 
    bool hasNetICMPInterval() const { return this->netICMPInterval_ != nullptr;};
    void deleteNetICMPInterval() { this->netICMPInterval_ = nullptr;};
    inline int64_t netICMPInterval() const { DARABONBA_PTR_GET_DEFAULT(netICMPInterval_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetICMPInterval(int64_t netICMPInterval) { DARABONBA_PTR_SET_VALUE(netICMPInterval_, netICMPInterval) };


    // netICMPNum Field Functions 
    bool hasNetICMPNum() const { return this->netICMPNum_ != nullptr;};
    void deleteNetICMPNum() { this->netICMPNum_ = nullptr;};
    inline int64_t netICMPNum() const { DARABONBA_PTR_GET_DEFAULT(netICMPNum_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetICMPNum(int64_t netICMPNum) { DARABONBA_PTR_SET_VALUE(netICMPNum_, netICMPNum) };


    // netICMPSize Field Functions 
    bool hasNetICMPSize() const { return this->netICMPSize_ != nullptr;};
    void deleteNetICMPSize() { this->netICMPSize_ = nullptr;};
    inline int64_t netICMPSize() const { DARABONBA_PTR_GET_DEFAULT(netICMPSize_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetICMPSize(int64_t netICMPSize) { DARABONBA_PTR_SET_VALUE(netICMPSize_, netICMPSize) };


    // netICMPSwitch Field Functions 
    bool hasNetICMPSwitch() const { return this->netICMPSwitch_ != nullptr;};
    void deleteNetICMPSwitch() { this->netICMPSwitch_ = nullptr;};
    inline int64_t netICMPSwitch() const { DARABONBA_PTR_GET_DEFAULT(netICMPSwitch_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetICMPSwitch(int64_t netICMPSwitch) { DARABONBA_PTR_SET_VALUE(netICMPSwitch_, netICMPSwitch) };


    // netICMPTimeout Field Functions 
    bool hasNetICMPTimeout() const { return this->netICMPTimeout_ != nullptr;};
    void deleteNetICMPTimeout() { this->netICMPTimeout_ = nullptr;};
    inline int64_t netICMPTimeout() const { DARABONBA_PTR_GET_DEFAULT(netICMPTimeout_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetICMPTimeout(int64_t netICMPTimeout) { DARABONBA_PTR_SET_VALUE(netICMPTimeout_, netICMPTimeout) };


    // netTraceRouteNum Field Functions 
    bool hasNetTraceRouteNum() const { return this->netTraceRouteNum_ != nullptr;};
    void deleteNetTraceRouteNum() { this->netTraceRouteNum_ = nullptr;};
    inline int64_t netTraceRouteNum() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteNum_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetTraceRouteNum(int64_t netTraceRouteNum) { DARABONBA_PTR_SET_VALUE(netTraceRouteNum_, netTraceRouteNum) };


    // netTraceRouteSwitch Field Functions 
    bool hasNetTraceRouteSwitch() const { return this->netTraceRouteSwitch_ != nullptr;};
    void deleteNetTraceRouteSwitch() { this->netTraceRouteSwitch_ = nullptr;};
    inline int64_t netTraceRouteSwitch() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteSwitch_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetTraceRouteSwitch(int64_t netTraceRouteSwitch) { DARABONBA_PTR_SET_VALUE(netTraceRouteSwitch_, netTraceRouteSwitch) };


    // netTraceRouteTimeout Field Functions 
    bool hasNetTraceRouteTimeout() const { return this->netTraceRouteTimeout_ != nullptr;};
    void deleteNetTraceRouteTimeout() { this->netTraceRouteTimeout_ = nullptr;};
    inline int64_t netTraceRouteTimeout() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteTimeout_, 0L) };
    inline CreateSyntheticTaskRequestNet& setNetTraceRouteTimeout(int64_t netTraceRouteTimeout) { DARABONBA_PTR_SET_VALUE(netTraceRouteTimeout_, netTraceRouteTimeout) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline CreateSyntheticTaskRequestNet& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The DNS server.
    std::shared_ptr<string> netDNSNs_ = nullptr;
    // The DNS query method. Valid values:
    // 
    // *   1: recursion
    // *   2: iteration
    std::shared_ptr<int64_t> netDNSQueryMethod_ = nullptr;
    // The IP address type of the DNS server.
    // 
    // *   0: IPv4
    // *   1: IPv6
    // *   2: an automatic IP address
    std::shared_ptr<int64_t> netDNSServer_ = nullptr;
    // Specifies whether to enable domain name system (DNS) monitoring.
    // 
    // *   0: Off.
    // *   1: On. You must set DNS parameters if you want to enable DNS monitoring.
    std::shared_ptr<int64_t> netDNSSwitch_ = nullptr;
    // The timeout period of DNS monitoring. Default value: 5 seconds. Valid values: 0 to 45 seconds.
    std::shared_ptr<int64_t> netDNSTimeout_ = nullptr;
    // Specifies whether to display the data in the DIG format. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> netDigSwitch_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   0: ICMP
    // *   1: TCP
    std::shared_ptr<int64_t> netICMPActive_ = nullptr;
    // Specifies whether to split packages.
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> netICMPDataCut_ = nullptr;
    // The interval at which the network synthetic monitoring task is executed. Unit: seconds.
    std::shared_ptr<int64_t> netICMPInterval_ = nullptr;
    // The number of packages.
    std::shared_ptr<int64_t> netICMPNum_ = nullptr;
    // The package size.
    std::shared_ptr<int64_t> netICMPSize_ = nullptr;
    // Specifies whether to enable ping monitoring.
    // 
    // *   0: Off.
    // *   1: On. You must set Internet control message protocol (ICMP) parameters if you want to enable ping monitoring.
    std::shared_ptr<int64_t> netICMPSwitch_ = nullptr;
    // The timeout period of Ping monitoring.
    std::shared_ptr<int64_t> netICMPTimeout_ = nullptr;
    // The maximum number of active monitoring points.
    std::shared_ptr<int64_t> netTraceRouteNum_ = nullptr;
    // Specifies whether to enable tracert monitoring.
    // 
    // *   0: Off.
    // *   1: On. You must set the tracert parameters if you want to enable tracert monitoring.
    std::shared_ptr<int64_t> netTraceRouteSwitch_ = nullptr;
    // The timeout period of tracert monitoring. Valid values: 0 to 300 seconds.
    std::shared_ptr<int64_t> netTraceRouteTimeout_ = nullptr;
    // The whitelist for DNS hijacking. The format is `Domain name: Matching rule`.
    // 
    // >  Wireless application protocol (WAP) networks do not support DNS hijacking.
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
