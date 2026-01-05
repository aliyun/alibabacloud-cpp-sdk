// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSETSRESPONSEBODY_HPP_
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
  class DescribeDiagnosticMetricSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticMetricSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricSets, metricSets_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticMetricSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricSets, metricSets_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiagnosticMetricSetsResponseBody() = default ;
    DescribeDiagnosticMetricSetsResponseBody(const DescribeDiagnosticMetricSetsResponseBody &) = default ;
    DescribeDiagnosticMetricSetsResponseBody(DescribeDiagnosticMetricSetsResponseBody &&) = default ;
    DescribeDiagnosticMetricSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticMetricSetsResponseBody() = default ;
    DescribeDiagnosticMetricSetsResponseBody& operator=(const DescribeDiagnosticMetricSetsResponseBody &) = default ;
    DescribeDiagnosticMetricSetsResponseBody& operator=(DescribeDiagnosticMetricSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricSets& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MetricIds, metricIds_);
        DARABONBA_PTR_TO_JSON(MetricSetId, metricSetId_);
        DARABONBA_PTR_TO_JSON(MetricSetName, metricSetName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, MetricSets& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MetricIds, metricIds_);
        DARABONBA_PTR_FROM_JSON(MetricSetId, metricSetId_);
        DARABONBA_PTR_FROM_JSON(MetricSetName, metricSetName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      MetricSets() = default ;
      MetricSets(const MetricSets &) = default ;
      MetricSets(MetricSets &&) = default ;
      MetricSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricSets() = default ;
      MetricSets& operator=(const MetricSets &) = default ;
      MetricSets& operator=(MetricSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->metricIds_ == nullptr && this->metricSetId_ == nullptr && this->metricSetName_ == nullptr && this->resourceType_ == nullptr && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MetricSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // metricIds Field Functions 
      bool hasMetricIds() const { return this->metricIds_ != nullptr;};
      void deleteMetricIds() { this->metricIds_ = nullptr;};
      inline const vector<string> & getMetricIds() const { DARABONBA_PTR_GET_CONST(metricIds_, vector<string>) };
      inline vector<string> getMetricIds() { DARABONBA_PTR_GET(metricIds_, vector<string>) };
      inline MetricSets& setMetricIds(const vector<string> & metricIds) { DARABONBA_PTR_SET_VALUE(metricIds_, metricIds) };
      inline MetricSets& setMetricIds(vector<string> && metricIds) { DARABONBA_PTR_SET_RVALUE(metricIds_, metricIds) };


      // metricSetId Field Functions 
      bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
      void deleteMetricSetId() { this->metricSetId_ = nullptr;};
      inline string getMetricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
      inline MetricSets& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


      // metricSetName Field Functions 
      bool hasMetricSetName() const { return this->metricSetName_ != nullptr;};
      void deleteMetricSetName() { this->metricSetName_ = nullptr;};
      inline string getMetricSetName() const { DARABONBA_PTR_GET_DEFAULT(metricSetName_, "") };
      inline MetricSets& setMetricSetName(string metricSetName) { DARABONBA_PTR_SET_VALUE(metricSetName_, metricSetName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline MetricSets& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MetricSets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The description of the diagnostic metric set.
      shared_ptr<string> description_ {};
      // The IDs of the diagnostic metrics.
      shared_ptr<vector<string>> metricIds_ {};
      // The ID of the diagnostic metric set.
      shared_ptr<string> metricSetId_ {};
      // The name of the diagnostic metric set.
      shared_ptr<string> metricSetName_ {};
      // The resource type supported by the diagnostic metric set.
      shared_ptr<string> resourceType_ {};
      // The type of the diagnostic metric set. Valid values:
      // 
      // *   User: user-defined diagnostic metric set
      // *   Common: common diagnostic metric set
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->metricSets_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // metricSets Field Functions 
    bool hasMetricSets() const { return this->metricSets_ != nullptr;};
    void deleteMetricSets() { this->metricSets_ = nullptr;};
    inline const vector<DescribeDiagnosticMetricSetsResponseBody::MetricSets> & getMetricSets() const { DARABONBA_PTR_GET_CONST(metricSets_, vector<DescribeDiagnosticMetricSetsResponseBody::MetricSets>) };
    inline vector<DescribeDiagnosticMetricSetsResponseBody::MetricSets> getMetricSets() { DARABONBA_PTR_GET(metricSets_, vector<DescribeDiagnosticMetricSetsResponseBody::MetricSets>) };
    inline DescribeDiagnosticMetricSetsResponseBody& setMetricSets(const vector<DescribeDiagnosticMetricSetsResponseBody::MetricSets> & metricSets) { DARABONBA_PTR_SET_VALUE(metricSets_, metricSets) };
    inline DescribeDiagnosticMetricSetsResponseBody& setMetricSets(vector<DescribeDiagnosticMetricSetsResponseBody::MetricSets> && metricSets) { DARABONBA_PTR_SET_RVALUE(metricSets_, metricSets) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiagnosticMetricSetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosticMetricSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostic metric sets.
    shared_ptr<vector<DescribeDiagnosticMetricSetsResponseBody::MetricSets>> metricSets_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
