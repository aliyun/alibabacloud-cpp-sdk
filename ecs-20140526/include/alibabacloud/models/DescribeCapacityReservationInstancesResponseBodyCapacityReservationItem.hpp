// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONINSTANCESRESPONSEBODYCAPACITYRESERVATIONITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONINSTANCESRESPONSEBODYCAPACITYRESERVATIONITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCapacityReservationInstancesResponseBodyCapacityReservationItemInstanceIdSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdSet, instanceIdSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdSet, instanceIdSet_);
    };
    DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem() = default ;
    DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem(const DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem &) = default ;
    DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem(DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem &&) = default ;
    DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem() = default ;
    DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem& operator=(const DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem &) = default ;
    DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem& operator=(DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIdSet_ != nullptr; };
    // instanceIdSet Field Functions 
    bool hasInstanceIdSet() const { return this->instanceIdSet_ != nullptr;};
    void deleteInstanceIdSet() { this->instanceIdSet_ = nullptr;};
    inline const vector<Models::DescribeCapacityReservationInstancesResponseBodyCapacityReservationItemInstanceIdSet> & instanceIdSet() const { DARABONBA_PTR_GET_CONST(instanceIdSet_, vector<Models::DescribeCapacityReservationInstancesResponseBodyCapacityReservationItemInstanceIdSet>) };
    inline vector<Models::DescribeCapacityReservationInstancesResponseBodyCapacityReservationItemInstanceIdSet> instanceIdSet() { DARABONBA_PTR_GET(instanceIdSet_, vector<Models::DescribeCapacityReservationInstancesResponseBodyCapacityReservationItemInstanceIdSet>) };
    inline DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem& setInstanceIdSet(const vector<Models::DescribeCapacityReservationInstancesResponseBodyCapacityReservationItemInstanceIdSet> & instanceIdSet) { DARABONBA_PTR_SET_VALUE(instanceIdSet_, instanceIdSet) };
    inline DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem& setInstanceIdSet(vector<Models::DescribeCapacityReservationInstancesResponseBodyCapacityReservationItemInstanceIdSet> && instanceIdSet) { DARABONBA_PTR_SET_RVALUE(instanceIdSet_, instanceIdSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeCapacityReservationInstancesResponseBodyCapacityReservationItemInstanceIdSet>> instanceIdSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
