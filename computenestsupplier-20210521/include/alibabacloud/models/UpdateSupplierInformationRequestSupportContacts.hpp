// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUPPLIERINFORMATIONREQUESTSUPPORTCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUPPLIERINFORMATIONREQUESTSUPPORTCONTACTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateSupplierInformationRequestSupportContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSupplierInformationRequestSupportContacts& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSupplierInformationRequestSupportContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateSupplierInformationRequestSupportContacts() = default ;
    UpdateSupplierInformationRequestSupportContacts(const UpdateSupplierInformationRequestSupportContacts &) = default ;
    UpdateSupplierInformationRequestSupportContacts(UpdateSupplierInformationRequestSupportContacts &&) = default ;
    UpdateSupplierInformationRequestSupportContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSupplierInformationRequestSupportContacts() = default ;
    UpdateSupplierInformationRequestSupportContacts& operator=(const UpdateSupplierInformationRequestSupportContacts &) = default ;
    UpdateSupplierInformationRequestSupportContacts& operator=(UpdateSupplierInformationRequestSupportContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->value_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateSupplierInformationRequestSupportContacts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateSupplierInformationRequestSupportContacts& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The type of  contact information
    std::shared_ptr<string> type_ = nullptr;
    // The value of contact information
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
