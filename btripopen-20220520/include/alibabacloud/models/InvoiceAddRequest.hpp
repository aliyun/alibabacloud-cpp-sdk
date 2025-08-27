// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICEADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICEADDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(bank_name, bankName_);
      DARABONBA_PTR_TO_JSON(bank_no, bankNo_);
      DARABONBA_PTR_TO_JSON(tax_no, taxNo_);
      DARABONBA_PTR_TO_JSON(tel, tel_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(unit_type, unitType_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(bank_name, bankName_);
      DARABONBA_PTR_FROM_JSON(bank_no, bankNo_);
      DARABONBA_PTR_FROM_JSON(tax_no, taxNo_);
      DARABONBA_PTR_FROM_JSON(tel, tel_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(unit_type, unitType_);
    };
    InvoiceAddRequest() = default ;
    InvoiceAddRequest(const InvoiceAddRequest &) = default ;
    InvoiceAddRequest(InvoiceAddRequest &&) = default ;
    InvoiceAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceAddRequest() = default ;
    InvoiceAddRequest& operator=(const InvoiceAddRequest &) = default ;
    InvoiceAddRequest& operator=(InvoiceAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->bankName_ != nullptr && this->bankNo_ != nullptr && this->taxNo_ != nullptr && this->tel_ != nullptr && this->thirdPartId_ != nullptr
        && this->title_ != nullptr && this->type_ != nullptr && this->unitType_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline InvoiceAddRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // bankName Field Functions 
    bool hasBankName() const { return this->bankName_ != nullptr;};
    void deleteBankName() { this->bankName_ = nullptr;};
    inline string bankName() const { DARABONBA_PTR_GET_DEFAULT(bankName_, "") };
    inline InvoiceAddRequest& setBankName(string bankName) { DARABONBA_PTR_SET_VALUE(bankName_, bankName) };


    // bankNo Field Functions 
    bool hasBankNo() const { return this->bankNo_ != nullptr;};
    void deleteBankNo() { this->bankNo_ = nullptr;};
    inline string bankNo() const { DARABONBA_PTR_GET_DEFAULT(bankNo_, "") };
    inline InvoiceAddRequest& setBankNo(string bankNo) { DARABONBA_PTR_SET_VALUE(bankNo_, bankNo) };


    // taxNo Field Functions 
    bool hasTaxNo() const { return this->taxNo_ != nullptr;};
    void deleteTaxNo() { this->taxNo_ = nullptr;};
    inline string taxNo() const { DARABONBA_PTR_GET_DEFAULT(taxNo_, "") };
    inline InvoiceAddRequest& setTaxNo(string taxNo) { DARABONBA_PTR_SET_VALUE(taxNo_, taxNo) };


    // tel Field Functions 
    bool hasTel() const { return this->tel_ != nullptr;};
    void deleteTel() { this->tel_ = nullptr;};
    inline string tel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
    inline InvoiceAddRequest& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceAddRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline InvoiceAddRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline InvoiceAddRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unitType Field Functions 
    bool hasUnitType() const { return this->unitType_ != nullptr;};
    void deleteUnitType() { this->unitType_ = nullptr;};
    inline int32_t unitType() const { DARABONBA_PTR_GET_DEFAULT(unitType_, 0) };
    inline InvoiceAddRequest& setUnitType(int32_t unitType) { DARABONBA_PTR_SET_VALUE(unitType_, unitType) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> bankName_ = nullptr;
    std::shared_ptr<string> bankNo_ = nullptr;
    std::shared_ptr<string> taxNo_ = nullptr;
    std::shared_ptr<string> tel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<int32_t> unitType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
