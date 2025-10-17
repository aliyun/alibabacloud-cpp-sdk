// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEPRIVATEDNSNAMEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEPRIVATEDNSNAMEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& obj) { 
      DARABONBA_PTR_TO_JSON(EnableInstanceIdDnsAAAARecord, enableInstanceIdDnsAAAARecord_);
      DARABONBA_PTR_TO_JSON(EnableInstanceIdDnsARecord, enableInstanceIdDnsARecord_);
      DARABONBA_PTR_TO_JSON(EnableIpDnsARecord, enableIpDnsARecord_);
      DARABONBA_PTR_TO_JSON(EnableIpDnsPtrRecord, enableIpDnsPtrRecord_);
      DARABONBA_PTR_TO_JSON(HostnameType, hostnameType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableInstanceIdDnsAAAARecord, enableInstanceIdDnsAAAARecord_);
      DARABONBA_PTR_FROM_JSON(EnableInstanceIdDnsARecord, enableInstanceIdDnsARecord_);
      DARABONBA_PTR_FROM_JSON(EnableIpDnsARecord, enableIpDnsARecord_);
      DARABONBA_PTR_FROM_JSON(EnableIpDnsPtrRecord, enableIpDnsPtrRecord_);
      DARABONBA_PTR_FROM_JSON(HostnameType, hostnameType_);
    };
    DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions() = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions(const DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions &) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions(DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions &&) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions() = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& operator=(const DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions &) = default ;
    DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& operator=(DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableInstanceIdDnsAAAARecord_ == nullptr
        && return this->enableInstanceIdDnsARecord_ == nullptr && return this->enableIpDnsARecord_ == nullptr && return this->enableIpDnsPtrRecord_ == nullptr && return this->hostnameType_ == nullptr; };
    // enableInstanceIdDnsAAAARecord Field Functions 
    bool hasEnableInstanceIdDnsAAAARecord() const { return this->enableInstanceIdDnsAAAARecord_ != nullptr;};
    void deleteEnableInstanceIdDnsAAAARecord() { this->enableInstanceIdDnsAAAARecord_ = nullptr;};
    inline bool enableInstanceIdDnsAAAARecord() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceIdDnsAAAARecord_, false) };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& setEnableInstanceIdDnsAAAARecord(bool enableInstanceIdDnsAAAARecord) { DARABONBA_PTR_SET_VALUE(enableInstanceIdDnsAAAARecord_, enableInstanceIdDnsAAAARecord) };


    // enableInstanceIdDnsARecord Field Functions 
    bool hasEnableInstanceIdDnsARecord() const { return this->enableInstanceIdDnsARecord_ != nullptr;};
    void deleteEnableInstanceIdDnsARecord() { this->enableInstanceIdDnsARecord_ = nullptr;};
    inline bool enableInstanceIdDnsARecord() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceIdDnsARecord_, false) };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& setEnableInstanceIdDnsARecord(bool enableInstanceIdDnsARecord) { DARABONBA_PTR_SET_VALUE(enableInstanceIdDnsARecord_, enableInstanceIdDnsARecord) };


    // enableIpDnsARecord Field Functions 
    bool hasEnableIpDnsARecord() const { return this->enableIpDnsARecord_ != nullptr;};
    void deleteEnableIpDnsARecord() { this->enableIpDnsARecord_ = nullptr;};
    inline bool enableIpDnsARecord() const { DARABONBA_PTR_GET_DEFAULT(enableIpDnsARecord_, false) };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& setEnableIpDnsARecord(bool enableIpDnsARecord) { DARABONBA_PTR_SET_VALUE(enableIpDnsARecord_, enableIpDnsARecord) };


    // enableIpDnsPtrRecord Field Functions 
    bool hasEnableIpDnsPtrRecord() const { return this->enableIpDnsPtrRecord_ != nullptr;};
    void deleteEnableIpDnsPtrRecord() { this->enableIpDnsPtrRecord_ = nullptr;};
    inline bool enableIpDnsPtrRecord() const { DARABONBA_PTR_GET_DEFAULT(enableIpDnsPtrRecord_, false) };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& setEnableIpDnsPtrRecord(bool enableIpDnsPtrRecord) { DARABONBA_PTR_SET_VALUE(enableIpDnsPtrRecord_, enableIpDnsPtrRecord) };


    // hostnameType Field Functions 
    bool hasHostnameType() const { return this->hostnameType_ != nullptr;};
    void deleteHostnameType() { this->hostnameType_ = nullptr;};
    inline string hostnameType() const { DARABONBA_PTR_GET_DEFAULT(hostnameType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions& setHostnameType(string hostnameType) { DARABONBA_PTR_SET_VALUE(hostnameType_, hostnameType) };


  protected:
    // Indicates whether DNS Resolution from the Instance ID-based Hostname to the Instance Primary Private IPv6 Address (AAAA Record) is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> enableInstanceIdDnsAAAARecord_ = nullptr;
    // Indicates whether DNS Resolution from the Instance ID-based Hostname to the Instance Primary Private IPv4 Address (A Record) is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> enableInstanceIdDnsARecord_ = nullptr;
    // Indicates whether DNS Resolution from the IP Address-based Hostname to the Instance Primary Private IPv4 Address (A Record) is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> enableIpDnsARecord_ = nullptr;
    // Indicates whether Reverse DNS Resolution from the Instance Primary Private IPv4 Address to the IP Address-based Hostname (PTR Record) is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> enableIpDnsPtrRecord_ = nullptr;
    // The type of hostname. Valid values:
    // 
    // *   Custom: custom hostname
    // *   IpBased: IP address-based hostname
    // *   InstanceIdBased: instance ID-based hostname
    // 
    // Default value: Custom.
    std::shared_ptr<string> hostnameType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
