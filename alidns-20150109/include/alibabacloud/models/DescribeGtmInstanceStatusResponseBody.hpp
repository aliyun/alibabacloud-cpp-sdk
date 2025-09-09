// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstanceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddrNotAvailableNum, addrNotAvailableNum_);
      DARABONBA_PTR_TO_JSON(AddrPoolNotAvailableNum, addrPoolNotAvailableNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(StrategyNotAvailableNum, strategyNotAvailableNum_);
      DARABONBA_PTR_TO_JSON(SwitchToFailoverStrategyNum, switchToFailoverStrategyNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrNotAvailableNum, addrNotAvailableNum_);
      DARABONBA_PTR_FROM_JSON(AddrPoolNotAvailableNum, addrPoolNotAvailableNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(StrategyNotAvailableNum, strategyNotAvailableNum_);
      DARABONBA_PTR_FROM_JSON(SwitchToFailoverStrategyNum, switchToFailoverStrategyNum_);
    };
    DescribeGtmInstanceStatusResponseBody() = default ;
    DescribeGtmInstanceStatusResponseBody(const DescribeGtmInstanceStatusResponseBody &) = default ;
    DescribeGtmInstanceStatusResponseBody(DescribeGtmInstanceStatusResponseBody &&) = default ;
    DescribeGtmInstanceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstanceStatusResponseBody() = default ;
    DescribeGtmInstanceStatusResponseBody& operator=(const DescribeGtmInstanceStatusResponseBody &) = default ;
    DescribeGtmInstanceStatusResponseBody& operator=(DescribeGtmInstanceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrNotAvailableNum_ != nullptr
        && this->addrPoolNotAvailableNum_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr && this->strategyNotAvailableNum_ != nullptr
        && this->switchToFailoverStrategyNum_ != nullptr; };
    // addrNotAvailableNum Field Functions 
    bool hasAddrNotAvailableNum() const { return this->addrNotAvailableNum_ != nullptr;};
    void deleteAddrNotAvailableNum() { this->addrNotAvailableNum_ = nullptr;};
    inline int32_t addrNotAvailableNum() const { DARABONBA_PTR_GET_DEFAULT(addrNotAvailableNum_, 0) };
    inline DescribeGtmInstanceStatusResponseBody& setAddrNotAvailableNum(int32_t addrNotAvailableNum) { DARABONBA_PTR_SET_VALUE(addrNotAvailableNum_, addrNotAvailableNum) };


    // addrPoolNotAvailableNum Field Functions 
    bool hasAddrPoolNotAvailableNum() const { return this->addrPoolNotAvailableNum_ != nullptr;};
    void deleteAddrPoolNotAvailableNum() { this->addrPoolNotAvailableNum_ = nullptr;};
    inline int32_t addrPoolNotAvailableNum() const { DARABONBA_PTR_GET_DEFAULT(addrPoolNotAvailableNum_, 0) };
    inline DescribeGtmInstanceStatusResponseBody& setAddrPoolNotAvailableNum(int32_t addrPoolNotAvailableNum) { DARABONBA_PTR_SET_VALUE(addrPoolNotAvailableNum_, addrPoolNotAvailableNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmInstanceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGtmInstanceStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline DescribeGtmInstanceStatusResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // strategyNotAvailableNum Field Functions 
    bool hasStrategyNotAvailableNum() const { return this->strategyNotAvailableNum_ != nullptr;};
    void deleteStrategyNotAvailableNum() { this->strategyNotAvailableNum_ = nullptr;};
    inline int32_t strategyNotAvailableNum() const { DARABONBA_PTR_GET_DEFAULT(strategyNotAvailableNum_, 0) };
    inline DescribeGtmInstanceStatusResponseBody& setStrategyNotAvailableNum(int32_t strategyNotAvailableNum) { DARABONBA_PTR_SET_VALUE(strategyNotAvailableNum_, strategyNotAvailableNum) };


    // switchToFailoverStrategyNum Field Functions 
    bool hasSwitchToFailoverStrategyNum() const { return this->switchToFailoverStrategyNum_ != nullptr;};
    void deleteSwitchToFailoverStrategyNum() { this->switchToFailoverStrategyNum_ = nullptr;};
    inline int32_t switchToFailoverStrategyNum() const { DARABONBA_PTR_GET_DEFAULT(switchToFailoverStrategyNum_, 0) };
    inline DescribeGtmInstanceStatusResponseBody& setSwitchToFailoverStrategyNum(int32_t switchToFailoverStrategyNum) { DARABONBA_PTR_SET_VALUE(switchToFailoverStrategyNum_, switchToFailoverStrategyNum) };


  protected:
    // The number of unavailable addresses.
    std::shared_ptr<int32_t> addrNotAvailableNum_ = nullptr;
    // The number of unavailable address pools.
    std::shared_ptr<int32_t> addrPoolNotAvailableNum_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The state of the instance. Valid values:
    // 
    // *   ALLOW: The operation on the instance is allowed.
    // *   DENY: The operation on the instance is not allowed.
    std::shared_ptr<string> status_ = nullptr;
    // The reasons why the instance is in the current state. Valid values:
    // 
    // *   INSTANCE_OPERATE_BLACK_LIST: The operation on the instance is not allowed.
    // *   BETA_INSTANCE: The instance is in public preview.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The number of unavailable access policies.
    std::shared_ptr<int32_t> strategyNotAvailableNum_ = nullptr;
    // The number of access policies switched to the secondary address pool.
    std::shared_ptr<int32_t> switchToFailoverStrategyNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
