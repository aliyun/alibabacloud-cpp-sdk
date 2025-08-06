// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyReservedInstancesResponseBodyReservedInstanceIdSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyReservedInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReservedInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceIdSets, reservedInstanceIdSets_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReservedInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceIdSets, reservedInstanceIdSets_);
    };
    ModifyReservedInstancesResponseBody() = default ;
    ModifyReservedInstancesResponseBody(const ModifyReservedInstancesResponseBody &) = default ;
    ModifyReservedInstancesResponseBody(ModifyReservedInstancesResponseBody &&) = default ;
    ModifyReservedInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReservedInstancesResponseBody() = default ;
    ModifyReservedInstancesResponseBody& operator=(const ModifyReservedInstancesResponseBody &) = default ;
    ModifyReservedInstancesResponseBody& operator=(ModifyReservedInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->reservedInstanceIdSets_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyReservedInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedInstanceIdSets Field Functions 
    bool hasReservedInstanceIdSets() const { return this->reservedInstanceIdSets_ != nullptr;};
    void deleteReservedInstanceIdSets() { this->reservedInstanceIdSets_ = nullptr;};
    inline const ModifyReservedInstancesResponseBodyReservedInstanceIdSets & reservedInstanceIdSets() const { DARABONBA_PTR_GET_CONST(reservedInstanceIdSets_, ModifyReservedInstancesResponseBodyReservedInstanceIdSets) };
    inline ModifyReservedInstancesResponseBodyReservedInstanceIdSets reservedInstanceIdSets() { DARABONBA_PTR_GET(reservedInstanceIdSets_, ModifyReservedInstancesResponseBodyReservedInstanceIdSets) };
    inline ModifyReservedInstancesResponseBody& setReservedInstanceIdSets(const ModifyReservedInstancesResponseBodyReservedInstanceIdSets & reservedInstanceIdSets) { DARABONBA_PTR_SET_VALUE(reservedInstanceIdSets_, reservedInstanceIdSets) };
    inline ModifyReservedInstancesResponseBody& setReservedInstanceIdSets(ModifyReservedInstancesResponseBodyReservedInstanceIdSets && reservedInstanceIdSets) { DARABONBA_PTR_SET_RVALUE(reservedInstanceIdSets_, reservedInstanceIdSets) };


  protected:
    // Details about the reserved instance.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the reserved instances.
    std::shared_ptr<ModifyReservedInstancesResponseBodyReservedInstanceIdSets> reservedInstanceIdSets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
