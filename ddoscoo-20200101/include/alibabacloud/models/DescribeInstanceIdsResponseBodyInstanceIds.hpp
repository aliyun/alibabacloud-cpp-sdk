// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIDSRESPONSEBODYINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIDSRESPONSEBODYINSTANCEIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceIdsResponseBodyInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIdsResponseBodyInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpMode, ipMode_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIdsResponseBodyInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpMode, ipMode_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    DescribeInstanceIdsResponseBodyInstanceIds() = default ;
    DescribeInstanceIdsResponseBodyInstanceIds(const DescribeInstanceIdsResponseBodyInstanceIds &) = default ;
    DescribeInstanceIdsResponseBodyInstanceIds(DescribeInstanceIdsResponseBodyInstanceIds &&) = default ;
    DescribeInstanceIdsResponseBodyInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIdsResponseBodyInstanceIds() = default ;
    DescribeInstanceIdsResponseBodyInstanceIds& operator=(const DescribeInstanceIdsResponseBodyInstanceIds &) = default ;
    DescribeInstanceIdsResponseBodyInstanceIds& operator=(DescribeInstanceIdsResponseBodyInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edition_ != nullptr
        && this->instanceId_ != nullptr && this->ipMode_ != nullptr && this->ipVersion_ != nullptr && this->remark_ != nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline int32_t edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, 0) };
    inline DescribeInstanceIdsResponseBodyInstanceIds& setEdition(int32_t edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceIdsResponseBodyInstanceIds& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipMode Field Functions 
    bool hasIpMode() const { return this->ipMode_ != nullptr;};
    void deleteIpMode() { this->ipMode_ = nullptr;};
    inline string ipMode() const { DARABONBA_PTR_GET_DEFAULT(ipMode_, "") };
    inline DescribeInstanceIdsResponseBodyInstanceIds& setIpMode(string ipMode) { DARABONBA_PTR_SET_VALUE(ipMode_, ipMode) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeInstanceIdsResponseBodyInstanceIds& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeInstanceIdsResponseBodyInstanceIds& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The type of the instance. Valid values:
    // 
    // *   **0**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Insurance mitigation plan
    // *   **1**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Unlimited mitigation plan
    // *   **2**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the CMA mitigation plan
    // *   **3**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Sec-CMA mitigation plan
    // *   **9**: Anti-DDoS Proxy (Chinese Mainland) instance of the Profession mitigation plan
    std::shared_ptr<int32_t> edition_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address-based forwarding mode of the instance. Valid values:
    // 
    // *   **fnat**: Requests from IPv4 addresses are forwarded to origin servers that use IPv4 addresses and requests from IPv6 addresses are forwarded to origin servers that use IPv6 addresses.
    // *   **v6tov4**: All requests are forwarded to origin servers that use IPv4 addresses.
    std::shared_ptr<string> ipMode_ = nullptr;
    // The IP version of the instance. Valid values:
    // 
    // *   **Ipv4**
    // *   **Ipv6**
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
