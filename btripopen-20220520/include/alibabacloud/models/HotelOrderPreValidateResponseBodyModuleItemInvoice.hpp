// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULEITEMINVOICE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULEITEMINVOICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateResponseBodyModuleItemInvoice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateResponseBodyModuleItemInvoice& obj) { 
      DARABONBA_PTR_TO_JSON(support_special, supportSpecial_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateResponseBodyModuleItemInvoice& obj) { 
      DARABONBA_PTR_FROM_JSON(support_special, supportSpecial_);
    };
    HotelOrderPreValidateResponseBodyModuleItemInvoice() = default ;
    HotelOrderPreValidateResponseBodyModuleItemInvoice(const HotelOrderPreValidateResponseBodyModuleItemInvoice &) = default ;
    HotelOrderPreValidateResponseBodyModuleItemInvoice(HotelOrderPreValidateResponseBodyModuleItemInvoice &&) = default ;
    HotelOrderPreValidateResponseBodyModuleItemInvoice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateResponseBodyModuleItemInvoice() = default ;
    HotelOrderPreValidateResponseBodyModuleItemInvoice& operator=(const HotelOrderPreValidateResponseBodyModuleItemInvoice &) = default ;
    HotelOrderPreValidateResponseBodyModuleItemInvoice& operator=(HotelOrderPreValidateResponseBodyModuleItemInvoice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportSpecial_ != nullptr; };
    // supportSpecial Field Functions 
    bool hasSupportSpecial() const { return this->supportSpecial_ != nullptr;};
    void deleteSupportSpecial() { this->supportSpecial_ = nullptr;};
    inline bool supportSpecial() const { DARABONBA_PTR_GET_DEFAULT(supportSpecial_, false) };
    inline HotelOrderPreValidateResponseBodyModuleItemInvoice& setSupportSpecial(bool supportSpecial) { DARABONBA_PTR_SET_VALUE(supportSpecial_, supportSpecial) };


  protected:
    std::shared_ptr<bool> supportSpecial_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
