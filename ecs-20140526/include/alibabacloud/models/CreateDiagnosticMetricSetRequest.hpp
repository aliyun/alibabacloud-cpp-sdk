// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICMETRICSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICMETRICSETREQUEST_HPP_
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
  class CreateDiagnosticMetricSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticMetricSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_TO_JSON(MetricSetName, metricSetName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticMetricSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_FROM_JSON(MetricSetName, metricSetName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateDiagnosticMetricSetRequest() = default ;
    CreateDiagnosticMetricSetRequest(const CreateDiagnosticMetricSetRequest &) = default ;
    CreateDiagnosticMetricSetRequest(CreateDiagnosticMetricSetRequest &&) = default ;
    CreateDiagnosticMetricSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticMetricSetRequest() = default ;
    CreateDiagnosticMetricSetRequest& operator=(const CreateDiagnosticMetricSetRequest &) = default ;
    CreateDiagnosticMetricSetRequest& operator=(CreateDiagnosticMetricSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->metricIds_ != nullptr && this->metricSetName_ != nullptr && this->regionId_ != nullptr && this->resourceType_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDiagnosticMetricSetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metricIds Field Functions 
    bool hasMetricIds() const { return this->metricIds_ != nullptr;};
    void deleteMetricIds() { this->metricIds_ = nullptr;};
    inline const vector<string> & metricIds() const { DARABONBA_PTR_GET_CONST(metricIds_, vector<string>) };
    inline vector<string> metricIds() { DARABONBA_PTR_GET(metricIds_, vector<string>) };
    inline CreateDiagnosticMetricSetRequest& setMetricIds(const vector<string> & metricIds) { DARABONBA_PTR_SET_VALUE(metricIds_, metricIds) };
    inline CreateDiagnosticMetricSetRequest& setMetricIds(vector<string> && metricIds) { DARABONBA_PTR_SET_RVALUE(metricIds_, metricIds) };


    // metricSetName Field Functions 
    bool hasMetricSetName() const { return this->metricSetName_ != nullptr;};
    void deleteMetricSetName() { this->metricSetName_ = nullptr;};
    inline string metricSetName() const { DARABONBA_PTR_GET_DEFAULT(metricSetName_, "") };
    inline CreateDiagnosticMetricSetRequest& setMetricSetName(string metricSetName) { DARABONBA_PTR_SET_VALUE(metricSetName_, metricSetName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDiagnosticMetricSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateDiagnosticMetricSetRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The description of the diagnostic metric set.
    std::shared_ptr<string> description_ = nullptr;
    // The IDs of diagnostic metrics. You can specify up to 100 diagnostic metric IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> metricIds_ = nullptr;
    // The name of the diagnostic metric set.
    std::shared_ptr<string> metricSetName_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the resource.
    // 
    // Default value: instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
