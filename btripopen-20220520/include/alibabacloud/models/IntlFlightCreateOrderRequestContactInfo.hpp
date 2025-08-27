// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERREQUESTCONTACTINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERREQUESTCONTACTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightCreateOrderRequestContactInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightCreateOrderRequestContactInfo& obj) { 
      DARABONBA_PTR_TO_JSON(contact_email, contactEmail_);
      DARABONBA_PTR_TO_JSON(contact_name, contactName_);
      DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightCreateOrderRequestContactInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(contact_email, contactEmail_);
      DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
      DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
    };
    IntlFlightCreateOrderRequestContactInfo() = default ;
    IntlFlightCreateOrderRequestContactInfo(const IntlFlightCreateOrderRequestContactInfo &) = default ;
    IntlFlightCreateOrderRequestContactInfo(IntlFlightCreateOrderRequestContactInfo &&) = default ;
    IntlFlightCreateOrderRequestContactInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightCreateOrderRequestContactInfo() = default ;
    IntlFlightCreateOrderRequestContactInfo& operator=(const IntlFlightCreateOrderRequestContactInfo &) = default ;
    IntlFlightCreateOrderRequestContactInfo& operator=(IntlFlightCreateOrderRequestContactInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactEmail_ != nullptr
        && this->contactName_ != nullptr && this->contactPhone_ != nullptr; };
    // contactEmail Field Functions 
    bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
    void deleteContactEmail() { this->contactEmail_ = nullptr;};
    inline string contactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
    inline IntlFlightCreateOrderRequestContactInfo& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline IntlFlightCreateOrderRequestContactInfo& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string contactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline IntlFlightCreateOrderRequestContactInfo& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactEmail_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactPhone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
