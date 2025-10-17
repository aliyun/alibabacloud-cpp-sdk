// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDIAGNOSTICMETRICSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDIAGNOSTICMETRICSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDiagnosticMetricSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiagnosticMetricSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_TO_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_TO_JSON(MetricSetName, metricSetName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiagnosticMetricSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_FROM_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_FROM_JSON(MetricSetName, metricSetName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ModifyDiagnosticMetricSetRequest() = default ;
    ModifyDiagnosticMetricSetRequest(const ModifyDiagnosticMetricSetRequest &) = default ;
    ModifyDiagnosticMetricSetRequest(ModifyDiagnosticMetricSetRequest &&) = default ;
    ModifyDiagnosticMetricSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiagnosticMetricSetRequest() = default ;
    ModifyDiagnosticMetricSetRequest& operator=(const ModifyDiagnosticMetricSetRequest &) = default ;
    ModifyDiagnosticMetricSetRequest& operator=(ModifyDiagnosticMetricSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->metricIds_ == nullptr && return this->metricSetId_ == nullptr && return this->metricSetName_ == nullptr && return this->regionId_ == nullptr && return this->resourceType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDiagnosticMetricSetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metricIds Field Functions 
    bool hasMetricIds() const { return this->metricIds_ != nullptr;};
    void deleteMetricIds() { this->metricIds_ = nullptr;};
    inline const vector<string> & metricIds() const { DARABONBA_PTR_GET_CONST(metricIds_, vector<string>) };
    inline vector<string> metricIds() { DARABONBA_PTR_GET(metricIds_, vector<string>) };
    inline ModifyDiagnosticMetricSetRequest& setMetricIds(const vector<string> & metricIds) { DARABONBA_PTR_SET_VALUE(metricIds_, metricIds) };
    inline ModifyDiagnosticMetricSetRequest& setMetricIds(vector<string> && metricIds) { DARABONBA_PTR_SET_RVALUE(metricIds_, metricIds) };


    // metricSetId Field Functions 
    bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
    void deleteMetricSetId() { this->metricSetId_ = nullptr;};
    inline string metricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
    inline ModifyDiagnosticMetricSetRequest& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


    // metricSetName Field Functions 
    bool hasMetricSetName() const { return this->metricSetName_ != nullptr;};
    void deleteMetricSetName() { this->metricSetName_ = nullptr;};
    inline string metricSetName() const { DARABONBA_PTR_GET_DEFAULT(metricSetName_, "") };
    inline ModifyDiagnosticMetricSetRequest& setMetricSetName(string metricSetName) { DARABONBA_PTR_SET_VALUE(metricSetName_, metricSetName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDiagnosticMetricSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ModifyDiagnosticMetricSetRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The description of the diagnostic metric set.
    std::shared_ptr<string> description_ = nullptr;
    // The IDs of diagnostic metrics.
    std::shared_ptr<vector<string>> metricIds_ = nullptr;
    // The IDs of the diagnostic metric sets.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricSetId_ = nullptr;
    // The name of the diagnostic metric set.
    std::shared_ptr<string> metricSetName_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
