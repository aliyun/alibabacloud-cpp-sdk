// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWRESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCEIDSETS_HPP_
#define ALIBABACLOUD_MODELS_RENEWRESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCEIDSETS_HPP_
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
  class RenewReservedInstancesResponseBodyReservedInstanceIdSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewReservedInstancesResponseBodyReservedInstanceIdSets& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewReservedInstancesResponseBodyReservedInstanceIdSets& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
    };
    RenewReservedInstancesResponseBodyReservedInstanceIdSets() = default ;
    RenewReservedInstancesResponseBodyReservedInstanceIdSets(const RenewReservedInstancesResponseBodyReservedInstanceIdSets &) = default ;
    RenewReservedInstancesResponseBodyReservedInstanceIdSets(RenewReservedInstancesResponseBodyReservedInstanceIdSets &&) = default ;
    RenewReservedInstancesResponseBodyReservedInstanceIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewReservedInstancesResponseBodyReservedInstanceIdSets() = default ;
    RenewReservedInstancesResponseBodyReservedInstanceIdSets& operator=(const RenewReservedInstancesResponseBodyReservedInstanceIdSets &) = default ;
    RenewReservedInstancesResponseBodyReservedInstanceIdSets& operator=(RenewReservedInstancesResponseBodyReservedInstanceIdSets &&) = default ;
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
    inline RenewReservedInstancesResponseBodyReservedInstanceIdSets& setReservedInstanceId(const vector<string> & reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };
    inline RenewReservedInstancesResponseBodyReservedInstanceIdSets& setReservedInstanceId(vector<string> && reservedInstanceId) { DARABONBA_PTR_SET_RVALUE(reservedInstanceId_, reservedInstanceId) };


  protected:
    std::shared_ptr<vector<string>> reservedInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
