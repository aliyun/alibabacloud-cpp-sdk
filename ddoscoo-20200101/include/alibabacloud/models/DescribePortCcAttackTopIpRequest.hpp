// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTCCATTACKTOPIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTCCATTACKTOPIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortCcAttackTopIPRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortCcAttackTopIPRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortCcAttackTopIPRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
    };
    DescribePortCcAttackTopIPRequest() = default ;
    DescribePortCcAttackTopIPRequest(const DescribePortCcAttackTopIPRequest &) = default ;
    DescribePortCcAttackTopIPRequest(DescribePortCcAttackTopIPRequest &&) = default ;
    DescribePortCcAttackTopIPRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortCcAttackTopIPRequest() = default ;
    DescribePortCcAttackTopIPRequest& operator=(const DescribePortCcAttackTopIPRequest &) = default ;
    DescribePortCcAttackTopIPRequest& operator=(DescribePortCcAttackTopIPRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->limit_ == nullptr && return this->port_ == nullptr && return this->startTimestamp_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribePortCcAttackTopIPRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline DescribePortCcAttackTopIPRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribePortCcAttackTopIPRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DescribePortCcAttackTopIPRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


  protected:
    // The IP address of the Anti-DDoS Pro or Anti-DDoS Premium instance to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> ip_ = nullptr;
    // The maximum number of entries to return.
    std::shared_ptr<int64_t> limit_ = nullptr;
    // The attacked port.
    // 
    // This parameter is required.
    std::shared_ptr<string> port_ = nullptr;
    // The beginning of the time range to query. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
