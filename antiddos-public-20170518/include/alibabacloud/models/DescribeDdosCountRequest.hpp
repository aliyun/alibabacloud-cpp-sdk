// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeDdosCountRequest() = default ;
    DescribeDdosCountRequest(const DescribeDdosCountRequest &) = default ;
    DescribeDdosCountRequest(DescribeDdosCountRequest &&) = default ;
    DescribeDdosCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCountRequest() = default ;
    DescribeDdosCountRequest& operator=(const DescribeDdosCountRequest &) = default ;
    DescribeDdosCountRequest& operator=(DescribeDdosCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosRegionId_ != nullptr
        && this->instanceType_ != nullptr; };
    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string ddosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeDdosCountRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDdosCountRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The region ID of the asset to query.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosRegionId_ = nullptr;
    // The type of the asset to query. Valid values:
    // 
    // *   **ecs**: Elastic Compute Service (ECS) instances.
    // *   **slb**: Server Load Balancer (SLB) instances.
    // *   **eip**: elastic IP addresses (EIPs).
    // *   **ipv6**: IPv6 gateways.
    // *   **swas**: simple application servers.
    // *   **waf**: Web Application Firewall (WAF) instances of the Exclusive edition.
    // *   **ga_basic**: Global Accelerator (GA) instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
