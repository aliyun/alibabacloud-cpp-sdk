// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCEIDSETS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCEIDSETS_HPP_
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
  class ModifyReservedInstancesResponseBodyReservedInstanceIdSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReservedInstancesResponseBodyReservedInstanceIdSets& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReservedInstancesResponseBodyReservedInstanceIdSets& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
    };
    ModifyReservedInstancesResponseBodyReservedInstanceIdSets() = default ;
    ModifyReservedInstancesResponseBodyReservedInstanceIdSets(const ModifyReservedInstancesResponseBodyReservedInstanceIdSets &) = default ;
    ModifyReservedInstancesResponseBodyReservedInstanceIdSets(ModifyReservedInstancesResponseBodyReservedInstanceIdSets &&) = default ;
    ModifyReservedInstancesResponseBodyReservedInstanceIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReservedInstancesResponseBodyReservedInstanceIdSets() = default ;
    ModifyReservedInstancesResponseBodyReservedInstanceIdSets& operator=(const ModifyReservedInstancesResponseBodyReservedInstanceIdSets &) = default ;
    ModifyReservedInstancesResponseBodyReservedInstanceIdSets& operator=(ModifyReservedInstancesResponseBodyReservedInstanceIdSets &&) = default ;
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
    inline ModifyReservedInstancesResponseBodyReservedInstanceIdSets& setReservedInstanceId(const vector<string> & reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };
    inline ModifyReservedInstancesResponseBodyReservedInstanceIdSets& setReservedInstanceId(vector<string> && reservedInstanceId) { DARABONBA_PTR_SET_RVALUE(reservedInstanceId_, reservedInstanceId) };


  protected:
    std::shared_ptr<vector<string>> reservedInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
