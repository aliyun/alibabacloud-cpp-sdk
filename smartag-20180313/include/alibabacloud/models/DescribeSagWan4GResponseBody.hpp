// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGWAN4GRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGWAN4GRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagWan4GResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagWan4GResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strength, strength_);
      DARABONBA_PTR_TO_JSON(TrafficState, trafficState_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagWan4GResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strength, strength_);
      DARABONBA_PTR_FROM_JSON(TrafficState, trafficState_);
    };
    DescribeSagWan4GResponseBody() = default ;
    DescribeSagWan4GResponseBody(const DescribeSagWan4GResponseBody &) = default ;
    DescribeSagWan4GResponseBody(DescribeSagWan4GResponseBody &&) = default ;
    DescribeSagWan4GResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagWan4GResponseBody() = default ;
    DescribeSagWan4GResponseBody& operator=(const DescribeSagWan4GResponseBody &) = default ;
    DescribeSagWan4GResponseBody& operator=(DescribeSagWan4GResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && this->mac_ == nullptr && this->priority_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->strength_ == nullptr
        && this->trafficState_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeSagWan4GResponseBody& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline DescribeSagWan4GResponseBody& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeSagWan4GResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagWan4GResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSagWan4GResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strength Field Functions 
    bool hasStrength() const { return this->strength_ != nullptr;};
    void deleteStrength() { this->strength_ = nullptr;};
    inline string getStrength() const { DARABONBA_PTR_GET_DEFAULT(strength_, "") };
    inline DescribeSagWan4GResponseBody& setStrength(string strength) { DARABONBA_PTR_SET_VALUE(strength_, strength) };


    // trafficState Field Functions 
    bool hasTrafficState() const { return this->trafficState_ != nullptr;};
    void deleteTrafficState() { this->trafficState_ = nullptr;};
    inline string getTrafficState() const { DARABONBA_PTR_GET_DEFAULT(trafficState_, "") };
    inline DescribeSagWan4GResponseBody& setTrafficState(string trafficState) { DARABONBA_PTR_SET_VALUE(trafficState_, trafficState) };


  protected:
    // The IP address of the 4G SIM card.
    shared_ptr<string> ip_ {};
    // The MAC address of the 4G SIM card.
    shared_ptr<string> mac_ {};
    // The priority of the 4G SIM card. The default value is **99**, which indicates the lowest priority and cannot be modified.
    shared_ptr<int32_t> priority_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the 4G SIM card. Valid value:
    // 
    // *   **Normal**: The 4G SIM card is available.
    // *   **Abnormal**: The 4G SIM card encountered an error.
    // *   **Unavailable**: No 4G SIM card is inserted.
    shared_ptr<string> status_ {};
    // The signal strength of the 4G network. Valid values:
    // 
    // *   **High**: strong signals.
    // *   **Middle**: medium-strength signals.
    // *   **Low**: weak signals.
    // *   **Unavailable**: no signal.
    shared_ptr<string> strength_ {};
    // The network status of the 4G SIM card. Valid values:
    // 
    // *   **active**: The 4G SIM card is used to establish the active connection. Network traffic is transmitted over the 4G SIM card first.
    // *   **standby**: The 4G SIM card is used to establish a standby connection. Network traffic is not transmitted over the 4G SIM card unless the active connection fails.
    shared_ptr<string> trafficState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
