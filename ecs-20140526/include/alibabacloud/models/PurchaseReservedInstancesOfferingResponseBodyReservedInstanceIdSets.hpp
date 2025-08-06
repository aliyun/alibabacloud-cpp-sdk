// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSEBODYRESERVEDINSTANCEIDSETS_HPP_
#define ALIBABACLOUD_MODELS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSEBODYRESERVEDINSTANCEIDSETS_HPP_
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
  class PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
    };
    PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets() = default ;
    PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets(const PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets &) = default ;
    PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets(PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets &&) = default ;
    PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets() = default ;
    PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets& operator=(const PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets &) = default ;
    PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets& operator=(PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reservedInstanceId_ != nullptr; };
    // reservedInstanceId Field Functions 
    bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
    void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
    inline const vector<string> & reservedInstanceId() const { DARABONBA_PTR_GET_CONST(reservedInstanceId_, vector<string>) };
    inline vector<string> reservedInstanceId() { DARABONBA_PTR_GET(reservedInstanceId_, vector<string>) };
    inline PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets& setReservedInstanceId(const vector<string> & reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };
    inline PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets& setReservedInstanceId(vector<string> && reservedInstanceId) { DARABONBA_PTR_SET_RVALUE(reservedInstanceId_, reservedInstanceId) };


  protected:
    std::shared_ptr<vector<string>> reservedInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
