// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceIdsResponseBody() = default ;
    DescribeInstanceIdsResponseBody(const DescribeInstanceIdsResponseBody &) = default ;
    DescribeInstanceIdsResponseBody(DescribeInstanceIdsResponseBody &&) = default ;
    DescribeInstanceIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIdsResponseBody() = default ;
    DescribeInstanceIdsResponseBody& operator=(const DescribeInstanceIdsResponseBody &) = default ;
    DescribeInstanceIdsResponseBody& operator=(DescribeInstanceIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
        DARABONBA_PTR_TO_JSON(Edition, edition_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IpMode, ipMode_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(Edition, edition_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IpMode, ipMode_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
      };
      InstanceIds() = default ;
      InstanceIds(const InstanceIds &) = default ;
      InstanceIds(InstanceIds &&) = default ;
      InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceIds() = default ;
      InstanceIds& operator=(const InstanceIds &) = default ;
      InstanceIds& operator=(InstanceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->edition_ == nullptr
        && this->instanceId_ == nullptr && this->ipMode_ == nullptr && this->ipVersion_ == nullptr && this->remark_ == nullptr; };
      // edition Field Functions 
      bool hasEdition() const { return this->edition_ != nullptr;};
      void deleteEdition() { this->edition_ = nullptr;};
      inline int32_t getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, 0) };
      inline InstanceIds& setEdition(int32_t edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceIds& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ipMode Field Functions 
      bool hasIpMode() const { return this->ipMode_ != nullptr;};
      void deleteIpMode() { this->ipMode_ = nullptr;};
      inline string getIpMode() const { DARABONBA_PTR_GET_DEFAULT(ipMode_, "") };
      inline InstanceIds& setIpMode(string ipMode) { DARABONBA_PTR_SET_VALUE(ipMode_, ipMode) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline InstanceIds& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline InstanceIds& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The type of the instance. Valid values:
      // 
      // *   **0**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Insurance mitigation plan
      // *   **1**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Unlimited mitigation plan
      // *   **2**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the CMA mitigation plan
      // *   **3**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Sec-CMA mitigation plan
      // *   **9**: Anti-DDoS Proxy (Chinese Mainland) instance of the Profession mitigation plan
      shared_ptr<int32_t> edition_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The IP address-based forwarding mode of the instance. Valid values:
      // 
      // *   **fnat**: Requests from IPv4 addresses are forwarded to origin servers that use IPv4 addresses and requests from IPv6 addresses are forwarded to origin servers that use IPv6 addresses.
      // *   **v6tov4**: All requests are forwarded to origin servers that use IPv4 addresses.
      shared_ptr<string> ipMode_ {};
      // The IP version of the instance. Valid values:
      // 
      // *   **Ipv4**
      // *   **Ipv6**
      shared_ptr<string> ipVersion_ {};
      // The description of the instance.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<DescribeInstanceIdsResponseBody::InstanceIds> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<DescribeInstanceIdsResponseBody::InstanceIds>) };
    inline vector<DescribeInstanceIdsResponseBody::InstanceIds> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<DescribeInstanceIdsResponseBody::InstanceIds>) };
    inline DescribeInstanceIdsResponseBody& setInstanceIds(const vector<DescribeInstanceIdsResponseBody::InstanceIds> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeInstanceIdsResponseBody& setInstanceIds(vector<DescribeInstanceIdsResponseBody::InstanceIds> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID, type, description, and IP version of the instance.
    shared_ptr<vector<DescribeInstanceIdsResponseBody::InstanceIds>> instanceIds_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
