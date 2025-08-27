// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
    };
    IntlFlightOtaItemDetailRequest() = default ;
    IntlFlightOtaItemDetailRequest(const IntlFlightOtaItemDetailRequest &) = default ;
    IntlFlightOtaItemDetailRequest(IntlFlightOtaItemDetailRequest &&) = default ;
    IntlFlightOtaItemDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailRequest() = default ;
    IntlFlightOtaItemDetailRequest& operator=(const IntlFlightOtaItemDetailRequest &) = default ;
    IntlFlightOtaItemDetailRequest& operator=(IntlFlightOtaItemDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->isvName_ != nullptr && this->language_ != nullptr && this->supplierCode_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightOtaItemDetailRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightOtaItemDetailRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightOtaItemDetailRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline IntlFlightOtaItemDetailRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string supplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline IntlFlightOtaItemDetailRequest& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> supplierCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
