// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSETSREQUEST_HPP_
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
  class DescribeDiagnosticMetricSetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticMetricSetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MetricSetIds, metricSetIds_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticMetricSetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MetricSetIds, metricSetIds_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDiagnosticMetricSetsRequest() = default ;
    DescribeDiagnosticMetricSetsRequest(const DescribeDiagnosticMetricSetsRequest &) = default ;
    DescribeDiagnosticMetricSetsRequest(DescribeDiagnosticMetricSetsRequest &&) = default ;
    DescribeDiagnosticMetricSetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticMetricSetsRequest() = default ;
    DescribeDiagnosticMetricSetsRequest& operator=(const DescribeDiagnosticMetricSetsRequest &) = default ;
    DescribeDiagnosticMetricSetsRequest& operator=(DescribeDiagnosticMetricSetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->metricSetIds_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->type_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDiagnosticMetricSetsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // metricSetIds Field Functions 
    bool hasMetricSetIds() const { return this->metricSetIds_ != nullptr;};
    void deleteMetricSetIds() { this->metricSetIds_ = nullptr;};
    inline const vector<string> & getMetricSetIds() const { DARABONBA_PTR_GET_CONST(metricSetIds_, vector<string>) };
    inline vector<string> getMetricSetIds() { DARABONBA_PTR_GET(metricSetIds_, vector<string>) };
    inline DescribeDiagnosticMetricSetsRequest& setMetricSetIds(const vector<string> & metricSetIds) { DARABONBA_PTR_SET_VALUE(metricSetIds_, metricSetIds) };
    inline DescribeDiagnosticMetricSetsRequest& setMetricSetIds(vector<string> && metricSetIds) { DARABONBA_PTR_SET_RVALUE(metricSetIds_, metricSetIds) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiagnosticMetricSetsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiagnosticMetricSetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDiagnosticMetricSetsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDiagnosticMetricSetsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value:
    // 
    // *   If this parameter is left empty, the default value is 10.
    // *   If you set this parameter to a value that is greater than 100, the default value is 100.
    shared_ptr<int32_t> maxResults_ {};
    // The IDs of diagnostic metric sets.
    shared_ptr<vector<string>> metricSetIds_ {};
    // The pagination token that is used in the request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    shared_ptr<string> nextToken_ {};
    // The region ID of the diagnostic metric set. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource type supported by the diagnostic metric set.
    shared_ptr<string> resourceType_ {};
    // The type of the diagnostic metric set. Valid values:
    // 
    // *   User: custom diagnostic metric set
    // *   Common: public diagnostic metric set
    // 
    // Default value: User.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
