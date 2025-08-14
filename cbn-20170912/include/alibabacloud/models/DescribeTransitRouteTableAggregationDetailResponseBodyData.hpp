// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeTransitRouteTableAggregationDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouteTableAggregationDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouteTableAggregationDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeTransitRouteTableAggregationDetailResponseBodyData() = default ;
    DescribeTransitRouteTableAggregationDetailResponseBodyData(const DescribeTransitRouteTableAggregationDetailResponseBodyData &) = default ;
    DescribeTransitRouteTableAggregationDetailResponseBodyData(DescribeTransitRouteTableAggregationDetailResponseBodyData &&) = default ;
    DescribeTransitRouteTableAggregationDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouteTableAggregationDetailResponseBodyData() = default ;
    DescribeTransitRouteTableAggregationDetailResponseBodyData& operator=(const DescribeTransitRouteTableAggregationDetailResponseBodyData &) = default ;
    DescribeTransitRouteTableAggregationDetailResponseBodyData& operator=(DescribeTransitRouteTableAggregationDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->instanceId_ != nullptr && this->status_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTransitRouteTableAggregationDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTransitRouteTableAggregationDetailResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTransitRouteTableAggregationDetailResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if the configuration of the aggregate route fails.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the virtual private cloud (VPC) for which the aggregate route is configured.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the aggregate route. Valid values:
    // 
    // *   **Configured**: The aggregate route is advertised to the VPC.
    // *   **Configuring**: The aggregate route is being advertised.
    // *   **ConfigFailed**: The aggregate route failed to be advertised.
    // *   **PartialConfigured**: Failed to advertise the aggregate route to some VPCs.
    // *   **Deleting**: The aggregate route is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
