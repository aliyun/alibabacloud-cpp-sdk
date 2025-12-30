// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddrAvailableNum, addrAvailableNum_);
      DARABONBA_PTR_TO_JSON(AddrNotAvailableNum, addrNotAvailableNum_);
      DARABONBA_PTR_TO_JSON(AddrPoolGroupNotAvailableNum, addrPoolGroupNotAvailableNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyNotAvailableNum, strategyNotAvailableNum_);
      DARABONBA_PTR_TO_JSON(SwitchToFailoverStrategyNum, switchToFailoverStrategyNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrAvailableNum, addrAvailableNum_);
      DARABONBA_PTR_FROM_JSON(AddrNotAvailableNum, addrNotAvailableNum_);
      DARABONBA_PTR_FROM_JSON(AddrPoolGroupNotAvailableNum, addrPoolGroupNotAvailableNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyNotAvailableNum, strategyNotAvailableNum_);
      DARABONBA_PTR_FROM_JSON(SwitchToFailoverStrategyNum, switchToFailoverStrategyNum_);
    };
    DescribeDnsGtmInstanceStatusResponseBody() = default ;
    DescribeDnsGtmInstanceStatusResponseBody(const DescribeDnsGtmInstanceStatusResponseBody &) = default ;
    DescribeDnsGtmInstanceStatusResponseBody(DescribeDnsGtmInstanceStatusResponseBody &&) = default ;
    DescribeDnsGtmInstanceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceStatusResponseBody() = default ;
    DescribeDnsGtmInstanceStatusResponseBody& operator=(const DescribeDnsGtmInstanceStatusResponseBody &) = default ;
    DescribeDnsGtmInstanceStatusResponseBody& operator=(DescribeDnsGtmInstanceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addrAvailableNum_ == nullptr
        && this->addrNotAvailableNum_ == nullptr && this->addrPoolGroupNotAvailableNum_ == nullptr && this->requestId_ == nullptr && this->strategyNotAvailableNum_ == nullptr && this->switchToFailoverStrategyNum_ == nullptr; };
    // addrAvailableNum Field Functions 
    bool hasAddrAvailableNum() const { return this->addrAvailableNum_ != nullptr;};
    void deleteAddrAvailableNum() { this->addrAvailableNum_ = nullptr;};
    inline int32_t getAddrAvailableNum() const { DARABONBA_PTR_GET_DEFAULT(addrAvailableNum_, 0) };
    inline DescribeDnsGtmInstanceStatusResponseBody& setAddrAvailableNum(int32_t addrAvailableNum) { DARABONBA_PTR_SET_VALUE(addrAvailableNum_, addrAvailableNum) };


    // addrNotAvailableNum Field Functions 
    bool hasAddrNotAvailableNum() const { return this->addrNotAvailableNum_ != nullptr;};
    void deleteAddrNotAvailableNum() { this->addrNotAvailableNum_ = nullptr;};
    inline int32_t getAddrNotAvailableNum() const { DARABONBA_PTR_GET_DEFAULT(addrNotAvailableNum_, 0) };
    inline DescribeDnsGtmInstanceStatusResponseBody& setAddrNotAvailableNum(int32_t addrNotAvailableNum) { DARABONBA_PTR_SET_VALUE(addrNotAvailableNum_, addrNotAvailableNum) };


    // addrPoolGroupNotAvailableNum Field Functions 
    bool hasAddrPoolGroupNotAvailableNum() const { return this->addrPoolGroupNotAvailableNum_ != nullptr;};
    void deleteAddrPoolGroupNotAvailableNum() { this->addrPoolGroupNotAvailableNum_ = nullptr;};
    inline int32_t getAddrPoolGroupNotAvailableNum() const { DARABONBA_PTR_GET_DEFAULT(addrPoolGroupNotAvailableNum_, 0) };
    inline DescribeDnsGtmInstanceStatusResponseBody& setAddrPoolGroupNotAvailableNum(int32_t addrPoolGroupNotAvailableNum) { DARABONBA_PTR_SET_VALUE(addrPoolGroupNotAvailableNum_, addrPoolGroupNotAvailableNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmInstanceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyNotAvailableNum Field Functions 
    bool hasStrategyNotAvailableNum() const { return this->strategyNotAvailableNum_ != nullptr;};
    void deleteStrategyNotAvailableNum() { this->strategyNotAvailableNum_ = nullptr;};
    inline int32_t getStrategyNotAvailableNum() const { DARABONBA_PTR_GET_DEFAULT(strategyNotAvailableNum_, 0) };
    inline DescribeDnsGtmInstanceStatusResponseBody& setStrategyNotAvailableNum(int32_t strategyNotAvailableNum) { DARABONBA_PTR_SET_VALUE(strategyNotAvailableNum_, strategyNotAvailableNum) };


    // switchToFailoverStrategyNum Field Functions 
    bool hasSwitchToFailoverStrategyNum() const { return this->switchToFailoverStrategyNum_ != nullptr;};
    void deleteSwitchToFailoverStrategyNum() { this->switchToFailoverStrategyNum_ = nullptr;};
    inline int32_t getSwitchToFailoverStrategyNum() const { DARABONBA_PTR_GET_DEFAULT(switchToFailoverStrategyNum_, 0) };
    inline DescribeDnsGtmInstanceStatusResponseBody& setSwitchToFailoverStrategyNum(int32_t switchToFailoverStrategyNum) { DARABONBA_PTR_SET_VALUE(switchToFailoverStrategyNum_, switchToFailoverStrategyNum) };


  protected:
    // The number of available addresses.
    shared_ptr<int32_t> addrAvailableNum_ {};
    // The number of unavailable addresses.
    shared_ptr<int32_t> addrNotAvailableNum_ {};
    // The number of unavailable address pool groups.
    shared_ptr<int32_t> addrPoolGroupNotAvailableNum_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of access policies that are unavailable in the current active address pool group.
    shared_ptr<int32_t> strategyNotAvailableNum_ {};
    // The number of access policies switched to the secondary address pool group.
    shared_ptr<int32_t> switchToFailoverStrategyNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
