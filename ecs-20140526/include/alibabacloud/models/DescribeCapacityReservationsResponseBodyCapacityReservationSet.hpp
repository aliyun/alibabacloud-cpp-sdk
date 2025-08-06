// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODYCAPACITYRESERVATIONSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODYCAPACITYRESERVATIONSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCapacityReservationsResponseBodyCapacityReservationSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationsResponseBodyCapacityReservationSet& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityReservationItem, capacityReservationItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationsResponseBodyCapacityReservationSet& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityReservationItem, capacityReservationItem_);
    };
    DescribeCapacityReservationsResponseBodyCapacityReservationSet() = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSet(const DescribeCapacityReservationsResponseBodyCapacityReservationSet &) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSet(DescribeCapacityReservationsResponseBodyCapacityReservationSet &&) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationsResponseBodyCapacityReservationSet() = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSet& operator=(const DescribeCapacityReservationsResponseBodyCapacityReservationSet &) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSet& operator=(DescribeCapacityReservationsResponseBodyCapacityReservationSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacityReservationItem_ != nullptr; };
    // capacityReservationItem Field Functions 
    bool hasCapacityReservationItem() const { return this->capacityReservationItem_ != nullptr;};
    void deleteCapacityReservationItem() { this->capacityReservationItem_ = nullptr;};
    inline const vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem> & capacityReservationItem() const { DARABONBA_PTR_GET_CONST(capacityReservationItem_, vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem>) };
    inline vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem> capacityReservationItem() { DARABONBA_PTR_GET(capacityReservationItem_, vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem>) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSet& setCapacityReservationItem(const vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem> & capacityReservationItem) { DARABONBA_PTR_SET_VALUE(capacityReservationItem_, capacityReservationItem) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSet& setCapacityReservationItem(vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem> && capacityReservationItem) { DARABONBA_PTR_SET_RVALUE(capacityReservationItem_, capacityReservationItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItem>> capacityReservationItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
