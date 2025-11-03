// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONSVPNCONNECTIONVCOHEALTHCHECK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONSVPNCONNECTIONVCOHEALTHCHECK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& obj) { 
      DARABONBA_PTR_TO_JSON(Dip, dip_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(Sip, sip_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(Dip, dip_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(Sip, sip_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck(const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck(DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck &&) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& operator=(const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& operator=(DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dip_ == nullptr
        && return this->enable_ == nullptr && return this->interval_ == nullptr && return this->policy_ == nullptr && return this->retry_ == nullptr && return this->sip_ == nullptr
        && return this->status_ == nullptr; };
    // dip Field Functions 
    bool hasDip() const { return this->dip_ != nullptr;};
    void deleteDip() { this->dip_ = nullptr;};
    inline string dip() const { DARABONBA_PTR_GET_DEFAULT(dip_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& setDip(string dip) { DARABONBA_PTR_SET_VALUE(dip_, dip) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline int32_t retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& setRetry(int32_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // sip Field Functions 
    bool hasSip() const { return this->sip_ != nullptr;};
    void deleteSip() { this->sip_ = nullptr;};
    inline string sip() const { DARABONBA_PTR_GET_DEFAULT(sip_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& setSip(string sip) { DARABONBA_PTR_SET_VALUE(sip_, sip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The destination IP address.
    std::shared_ptr<string> dip_ = nullptr;
    // Indicates whether the health check feature is enabled.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> enable_ = nullptr;
    // The interval between two consecutive health checks. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // Indicates whether advertised routes are withdrawn when the health check fails.
    // 
    // *   **revoke_route**: Advertised routes are withdrawn.
    // *   **reserve_route**: Advertised routes are not withdrawn.
    std::shared_ptr<string> policy_ = nullptr;
    // The maximum number of health check retries.
    std::shared_ptr<int32_t> retry_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sip_ = nullptr;
    // The state of the health check. Valid values:
    // 
    // *   **success**
    // *   **failed**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
