// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosThresholdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosThresholdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(DdosType, ddosType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosThresholdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(DdosType, ddosType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeDdosThresholdRequest() = default ;
    DescribeDdosThresholdRequest(const DescribeDdosThresholdRequest &) = default ;
    DescribeDdosThresholdRequest(DescribeDdosThresholdRequest &&) = default ;
    DescribeDdosThresholdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosThresholdRequest() = default ;
    DescribeDdosThresholdRequest& operator=(const DescribeDdosThresholdRequest &) = default ;
    DescribeDdosThresholdRequest& operator=(DescribeDdosThresholdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosRegionId_ != nullptr
        && this->ddosType_ != nullptr && this->instanceIds_ != nullptr && this->instanceType_ != nullptr; };
    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string ddosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeDdosThresholdRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // ddosType Field Functions 
    bool hasDdosType() const { return this->ddosType_ != nullptr;};
    void deleteDdosType() { this->ddosType_ = nullptr;};
    inline string ddosType() const { DARABONBA_PTR_GET_DEFAULT(ddosType_, "") };
    inline DescribeDdosThresholdRequest& setDdosType(string ddosType) { DARABONBA_PTR_SET_VALUE(ddosType_, ddosType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeDdosThresholdRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeDdosThresholdRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDdosThresholdRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The region ID of the asset.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosRegionId_ = nullptr;
    // The type of the threshold. Valid values:
    // 
    // *   **defense**: traffic scrubbing threshold
    // *   **blackhole**: DDoS mitigation threshold
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosType_ = nullptr;
    // The ID of asset N to query.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The type of the asset that is assigned a public IP address. Valid values:
    // 
    // *   **ecs**: ECS instances.
    // *   **slb**: SLB instances.
    // *   **eip**: EIPs.
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
