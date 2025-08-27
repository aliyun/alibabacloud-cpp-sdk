// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEAGENTINFOSCABINCLASSINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEAGENTINFOSCABINCLASSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(class_name, className_);
      DARABONBA_PTR_TO_JSON(inner_cabin_class, innerCabinClass_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(class_name, className_);
      DARABONBA_PTR_FROM_JSON(inner_cabin_class, innerCabinClass_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
    };
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo(const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo(FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo& operator=(const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo& operator=(FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinClass_ != nullptr
        && this->className_ != nullptr && this->innerCabinClass_ != nullptr && this->quantity_ != nullptr; };
    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // innerCabinClass Field Functions 
    bool hasInnerCabinClass() const { return this->innerCabinClass_ != nullptr;};
    void deleteInnerCabinClass() { this->innerCabinClass_ = nullptr;};
    inline int32_t innerCabinClass() const { DARABONBA_PTR_GET_DEFAULT(innerCabinClass_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo& setInnerCabinClass(int32_t innerCabinClass) { DARABONBA_PTR_SET_VALUE(innerCabinClass_, innerCabinClass) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosCabinClassInfo& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


  protected:
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<int32_t> innerCabinClass_ = nullptr;
    std::shared_ptr<string> quantity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
