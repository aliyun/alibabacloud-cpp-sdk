// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESPONSECODETRENDGRAPHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESPONSECODETRENDGRAPHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResponseCodeTrendGraphRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResponseCodeTrendGraphRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResponseCodeTrendGraphRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeResponseCodeTrendGraphRequest() = default ;
    DescribeResponseCodeTrendGraphRequest(const DescribeResponseCodeTrendGraphRequest &) = default ;
    DescribeResponseCodeTrendGraphRequest(DescribeResponseCodeTrendGraphRequest &&) = default ;
    DescribeResponseCodeTrendGraphRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResponseCodeTrendGraphRequest() = default ;
    DescribeResponseCodeTrendGraphRequest& operator=(const DescribeResponseCodeTrendGraphRequest &) = default ;
    DescribeResponseCodeTrendGraphRequest& operator=(DescribeResponseCodeTrendGraphRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTimestamp_ != nullptr
        && this->instanceId_ != nullptr && this->interval_ != nullptr && this->regionId_ != nullptr && this->resource_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr
        && this->startTimestamp_ != nullptr && this->type_ != nullptr; };
    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeResponseCodeTrendGraphRequest& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeResponseCodeTrendGraphRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeResponseCodeTrendGraphRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeResponseCodeTrendGraphRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeResponseCodeTrendGraphRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeResponseCodeTrendGraphRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline string startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, "") };
    inline DescribeResponseCodeTrendGraphRequest& setStartTimestamp(string startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeResponseCodeTrendGraphRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The end of the time range to query. Unit: seconds. If you do not specify this parameter, the current time is used.
    std::shared_ptr<string> endTimestamp_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time interval. Unit: seconds. The value must be an integral multiple of 60.
    // 
    // This parameter is required.
    std::shared_ptr<string> interval_ = nullptr;
    // The ID of the region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The protected object.
    std::shared_ptr<string> resource_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The beginning of the time range to query. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTimestamp_ = nullptr;
    // The type of the error codes. Valid values:
    // 
    // *   **waf:** error codes that are returned to clients from WAF.
    // *   **upstream:** error codes that are returned to WAF from the origin server.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
