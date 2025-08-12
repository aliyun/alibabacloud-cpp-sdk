// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutHybridMonitorMetricDataRequestMetricList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutHybridMonitorMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutHybridMonitorMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetricList, metricList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutHybridMonitorMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricList, metricList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutHybridMonitorMetricDataRequest() = default ;
    PutHybridMonitorMetricDataRequest(const PutHybridMonitorMetricDataRequest &) = default ;
    PutHybridMonitorMetricDataRequest(PutHybridMonitorMetricDataRequest &&) = default ;
    PutHybridMonitorMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutHybridMonitorMetricDataRequest() = default ;
    PutHybridMonitorMetricDataRequest& operator=(const PutHybridMonitorMetricDataRequest &) = default ;
    PutHybridMonitorMetricDataRequest& operator=(PutHybridMonitorMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricList_ != nullptr
        && this->namespace_ != nullptr && this->regionId_ != nullptr; };
    // metricList Field Functions 
    bool hasMetricList() const { return this->metricList_ != nullptr;};
    void deleteMetricList() { this->metricList_ = nullptr;};
    inline const vector<PutHybridMonitorMetricDataRequestMetricList> & metricList() const { DARABONBA_PTR_GET_CONST(metricList_, vector<PutHybridMonitorMetricDataRequestMetricList>) };
    inline vector<PutHybridMonitorMetricDataRequestMetricList> metricList() { DARABONBA_PTR_GET(metricList_, vector<PutHybridMonitorMetricDataRequestMetricList>) };
    inline PutHybridMonitorMetricDataRequest& setMetricList(const vector<PutHybridMonitorMetricDataRequestMetricList> & metricList) { DARABONBA_PTR_SET_VALUE(metricList_, metricList) };
    inline PutHybridMonitorMetricDataRequest& setMetricList(vector<PutHybridMonitorMetricDataRequestMetricList> && metricList) { DARABONBA_PTR_SET_RVALUE(metricList_, metricList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutHybridMonitorMetricDataRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutHybridMonitorMetricDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The monitoring data.
    // 
    // Valid values of N: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<vector<PutHybridMonitorMetricDataRequestMetricList>> metricList_ = nullptr;
    // The name of the namespace.
    // 
    // For information about how to obtain the name of a namespace, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
