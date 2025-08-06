// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDIAGNOSTICMETRICSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDIAGNOSTICMETRICSETSREQUEST_HPP_
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
  class DeleteDiagnosticMetricSetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDiagnosticMetricSetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetricSetIds, metricSetIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDiagnosticMetricSetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricSetIds, metricSetIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDiagnosticMetricSetsRequest() = default ;
    DeleteDiagnosticMetricSetsRequest(const DeleteDiagnosticMetricSetsRequest &) = default ;
    DeleteDiagnosticMetricSetsRequest(DeleteDiagnosticMetricSetsRequest &&) = default ;
    DeleteDiagnosticMetricSetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDiagnosticMetricSetsRequest() = default ;
    DeleteDiagnosticMetricSetsRequest& operator=(const DeleteDiagnosticMetricSetsRequest &) = default ;
    DeleteDiagnosticMetricSetsRequest& operator=(DeleteDiagnosticMetricSetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricSetIds_ != nullptr
        && this->regionId_ != nullptr; };
    // metricSetIds Field Functions 
    bool hasMetricSetIds() const { return this->metricSetIds_ != nullptr;};
    void deleteMetricSetIds() { this->metricSetIds_ = nullptr;};
    inline const vector<string> & metricSetIds() const { DARABONBA_PTR_GET_CONST(metricSetIds_, vector<string>) };
    inline vector<string> metricSetIds() { DARABONBA_PTR_GET(metricSetIds_, vector<string>) };
    inline DeleteDiagnosticMetricSetsRequest& setMetricSetIds(const vector<string> & metricSetIds) { DARABONBA_PTR_SET_VALUE(metricSetIds_, metricSetIds) };
    inline DeleteDiagnosticMetricSetsRequest& setMetricSetIds(vector<string> && metricSetIds) { DARABONBA_PTR_SET_RVALUE(metricSetIds_, metricSetIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDiagnosticMetricSetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of diagnostic metric sets. You can specify up to 10 set IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> metricSetIds_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
