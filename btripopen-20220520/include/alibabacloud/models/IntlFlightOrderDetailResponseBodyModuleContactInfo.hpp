// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULECONTACTINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULECONTACTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModuleContactInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModuleContactInfo& obj) { 
      DARABONBA_PTR_TO_JSON(contact_name, contactName_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModuleContactInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
    };
    IntlFlightOrderDetailResponseBodyModuleContactInfo() = default ;
    IntlFlightOrderDetailResponseBodyModuleContactInfo(const IntlFlightOrderDetailResponseBodyModuleContactInfo &) = default ;
    IntlFlightOrderDetailResponseBodyModuleContactInfo(IntlFlightOrderDetailResponseBodyModuleContactInfo &&) = default ;
    IntlFlightOrderDetailResponseBodyModuleContactInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModuleContactInfo() = default ;
    IntlFlightOrderDetailResponseBodyModuleContactInfo& operator=(const IntlFlightOrderDetailResponseBodyModuleContactInfo &) = default ;
    IntlFlightOrderDetailResponseBodyModuleContactInfo& operator=(IntlFlightOrderDetailResponseBodyModuleContactInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactName_ != nullptr; };
    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleContactInfo& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


  protected:
    std::shared_ptr<string> contactName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
