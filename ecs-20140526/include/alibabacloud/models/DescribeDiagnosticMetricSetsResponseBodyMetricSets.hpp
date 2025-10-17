// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSETSRESPONSEBODYMETRICSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSETSRESPONSEBODYMETRICSETS_HPP_
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
  class DescribeDiagnosticMetricSetsResponseBodyMetricSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticMetricSetsResponseBodyMetricSets& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_TO_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_TO_JSON(MetricSetName, metricSetName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticMetricSetsResponseBodyMetricSets& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_FROM_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_FROM_JSON(MetricSetName, metricSetName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDiagnosticMetricSetsResponseBodyMetricSets() = default ;
    DescribeDiagnosticMetricSetsResponseBodyMetricSets(const DescribeDiagnosticMetricSetsResponseBodyMetricSets &) = default ;
    DescribeDiagnosticMetricSetsResponseBodyMetricSets(DescribeDiagnosticMetricSetsResponseBodyMetricSets &&) = default ;
    DescribeDiagnosticMetricSetsResponseBodyMetricSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticMetricSetsResponseBodyMetricSets() = default ;
    DescribeDiagnosticMetricSetsResponseBodyMetricSets& operator=(const DescribeDiagnosticMetricSetsResponseBodyMetricSets &) = default ;
    DescribeDiagnosticMetricSetsResponseBodyMetricSets& operator=(DescribeDiagnosticMetricSetsResponseBodyMetricSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->metricIds_ == nullptr && return this->metricSetId_ == nullptr && return this->metricSetName_ == nullptr && return this->resourceType_ == nullptr && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDiagnosticMetricSetsResponseBodyMetricSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metricIds Field Functions 
    bool hasMetricIds() const { return this->metricIds_ != nullptr;};
    void deleteMetricIds() { this->metricIds_ = nullptr;};
    inline const vector<string> & metricIds() const { DARABONBA_PTR_GET_CONST(metricIds_, vector<string>) };
    inline vector<string> metricIds() { DARABONBA_PTR_GET(metricIds_, vector<string>) };
    inline DescribeDiagnosticMetricSetsResponseBodyMetricSets& setMetricIds(const vector<string> & metricIds) { DARABONBA_PTR_SET_VALUE(metricIds_, metricIds) };
    inline DescribeDiagnosticMetricSetsResponseBodyMetricSets& setMetricIds(vector<string> && metricIds) { DARABONBA_PTR_SET_RVALUE(metricIds_, metricIds) };


    // metricSetId Field Functions 
    bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
    void deleteMetricSetId() { this->metricSetId_ = nullptr;};
    inline string metricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
    inline DescribeDiagnosticMetricSetsResponseBodyMetricSets& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


    // metricSetName Field Functions 
    bool hasMetricSetName() const { return this->metricSetName_ != nullptr;};
    void deleteMetricSetName() { this->metricSetName_ = nullptr;};
    inline string metricSetName() const { DARABONBA_PTR_GET_DEFAULT(metricSetName_, "") };
    inline DescribeDiagnosticMetricSetsResponseBodyMetricSets& setMetricSetName(string metricSetName) { DARABONBA_PTR_SET_VALUE(metricSetName_, metricSetName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDiagnosticMetricSetsResponseBodyMetricSets& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDiagnosticMetricSetsResponseBodyMetricSets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the diagnostic metric set.
    std::shared_ptr<string> description_ = nullptr;
    // The IDs of the diagnostic metrics.
    std::shared_ptr<vector<string>> metricIds_ = nullptr;
    // The ID of the diagnostic metric set.
    std::shared_ptr<string> metricSetId_ = nullptr;
    // The name of the diagnostic metric set.
    std::shared_ptr<string> metricSetName_ = nullptr;
    // The resource type supported by the diagnostic metric set.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The type of the diagnostic metric set. Valid values:
    // 
    // *   User: user-defined diagnostic metric set
    // *   Common: common diagnostic metric set
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
