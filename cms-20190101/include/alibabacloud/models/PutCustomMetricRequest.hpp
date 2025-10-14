// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCUSTOMMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCUSTOMMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutCustomMetricRequestMetricList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutCustomMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutCustomMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetricList, metricList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutCustomMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricList, metricList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutCustomMetricRequest() = default ;
    PutCustomMetricRequest(const PutCustomMetricRequest &) = default ;
    PutCustomMetricRequest(PutCustomMetricRequest &&) = default ;
    PutCustomMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutCustomMetricRequest() = default ;
    PutCustomMetricRequest& operator=(const PutCustomMetricRequest &) = default ;
    PutCustomMetricRequest& operator=(PutCustomMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricList_ == nullptr
        && return this->regionId_ == nullptr; };
    // metricList Field Functions 
    bool hasMetricList() const { return this->metricList_ != nullptr;};
    void deleteMetricList() { this->metricList_ = nullptr;};
    inline const vector<PutCustomMetricRequestMetricList> & metricList() const { DARABONBA_PTR_GET_CONST(metricList_, vector<PutCustomMetricRequestMetricList>) };
    inline vector<PutCustomMetricRequestMetricList> metricList() { DARABONBA_PTR_GET(metricList_, vector<PutCustomMetricRequestMetricList>) };
    inline PutCustomMetricRequest& setMetricList(const vector<PutCustomMetricRequestMetricList> & metricList) { DARABONBA_PTR_SET_VALUE(metricList_, metricList) };
    inline PutCustomMetricRequest& setMetricList(vector<PutCustomMetricRequestMetricList> && metricList) { DARABONBA_PTR_SET_RVALUE(metricList_, metricList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutCustomMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The monitoring data.
    // 
    // This parameter is required.
    std::shared_ptr<vector<PutCustomMetricRequestMetricList>> metricList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
