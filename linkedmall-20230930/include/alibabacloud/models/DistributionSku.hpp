// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTRIBUTIONSKU_HPP_
#define ALIBABACLOUD_MODELS_DISTRIBUTIONSKU_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class DistributionSku : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistributionSku& obj) { 
      DARABONBA_PTR_TO_JSON(aliasTitle, aliasTitle_);
      DARABONBA_PTR_TO_JSON(barCode, barCode_);
      DARABONBA_PTR_TO_JSON(creditPeriod, creditPeriod_);
      DARABONBA_PTR_TO_JSON(dxPrice, dxPrice_);
      DARABONBA_PTR_TO_JSON(hasCredit, hasCredit_);
      DARABONBA_PTR_TO_JSON(hasInvoice, hasInvoice_);
      DARABONBA_PTR_TO_JSON(jxPrice, jxPrice_);
      DARABONBA_PTR_TO_JSON(picUrl, picUrl_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
      DARABONBA_PTR_TO_JSON(skuStatus, skuStatus_);
      DARABONBA_PTR_TO_JSON(taxCode, taxCode_);
      DARABONBA_PTR_TO_JSON(taxRate, taxRate_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DistributionSku& obj) { 
      DARABONBA_PTR_FROM_JSON(aliasTitle, aliasTitle_);
      DARABONBA_PTR_FROM_JSON(barCode, barCode_);
      DARABONBA_PTR_FROM_JSON(creditPeriod, creditPeriod_);
      DARABONBA_PTR_FROM_JSON(dxPrice, dxPrice_);
      DARABONBA_PTR_FROM_JSON(hasCredit, hasCredit_);
      DARABONBA_PTR_FROM_JSON(hasInvoice, hasInvoice_);
      DARABONBA_PTR_FROM_JSON(jxPrice, jxPrice_);
      DARABONBA_PTR_FROM_JSON(picUrl, picUrl_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
      DARABONBA_PTR_FROM_JSON(skuStatus, skuStatus_);
      DARABONBA_PTR_FROM_JSON(taxCode, taxCode_);
      DARABONBA_PTR_FROM_JSON(taxRate, taxRate_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    DistributionSku() = default ;
    DistributionSku(const DistributionSku &) = default ;
    DistributionSku(DistributionSku &&) = default ;
    DistributionSku(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistributionSku() = default ;
    DistributionSku& operator=(const DistributionSku &) = default ;
    DistributionSku& operator=(DistributionSku &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasTitle_ == nullptr
        && this->barCode_ == nullptr && this->creditPeriod_ == nullptr && this->dxPrice_ == nullptr && this->hasCredit_ == nullptr && this->hasInvoice_ == nullptr
        && this->jxPrice_ == nullptr && this->picUrl_ == nullptr && this->quantity_ == nullptr && this->skuId_ == nullptr && this->skuStatus_ == nullptr
        && this->taxCode_ == nullptr && this->taxRate_ == nullptr && this->title_ == nullptr; };
    // aliasTitle Field Functions 
    bool hasAliasTitle() const { return this->aliasTitle_ != nullptr;};
    void deleteAliasTitle() { this->aliasTitle_ = nullptr;};
    inline string getAliasTitle() const { DARABONBA_PTR_GET_DEFAULT(aliasTitle_, "") };
    inline DistributionSku& setAliasTitle(string aliasTitle) { DARABONBA_PTR_SET_VALUE(aliasTitle_, aliasTitle) };


    // barCode Field Functions 
    bool hasBarCode() const { return this->barCode_ != nullptr;};
    void deleteBarCode() { this->barCode_ = nullptr;};
    inline string getBarCode() const { DARABONBA_PTR_GET_DEFAULT(barCode_, "") };
    inline DistributionSku& setBarCode(string barCode) { DARABONBA_PTR_SET_VALUE(barCode_, barCode) };


    // creditPeriod Field Functions 
    bool hasCreditPeriod() const { return this->creditPeriod_ != nullptr;};
    void deleteCreditPeriod() { this->creditPeriod_ = nullptr;};
    inline int32_t getCreditPeriod() const { DARABONBA_PTR_GET_DEFAULT(creditPeriod_, 0) };
    inline DistributionSku& setCreditPeriod(int32_t creditPeriod) { DARABONBA_PTR_SET_VALUE(creditPeriod_, creditPeriod) };


    // dxPrice Field Functions 
    bool hasDxPrice() const { return this->dxPrice_ != nullptr;};
    void deleteDxPrice() { this->dxPrice_ = nullptr;};
    inline int64_t getDxPrice() const { DARABONBA_PTR_GET_DEFAULT(dxPrice_, 0L) };
    inline DistributionSku& setDxPrice(int64_t dxPrice) { DARABONBA_PTR_SET_VALUE(dxPrice_, dxPrice) };


    // hasCredit Field Functions 
    bool hasHasCredit() const { return this->hasCredit_ != nullptr;};
    void deleteHasCredit() { this->hasCredit_ = nullptr;};
    inline bool getHasCredit() const { DARABONBA_PTR_GET_DEFAULT(hasCredit_, false) };
    inline DistributionSku& setHasCredit(bool hasCredit) { DARABONBA_PTR_SET_VALUE(hasCredit_, hasCredit) };


    // hasInvoice Field Functions 
    bool hasHasInvoice() const { return this->hasInvoice_ != nullptr;};
    void deleteHasInvoice() { this->hasInvoice_ = nullptr;};
    inline bool getHasInvoice() const { DARABONBA_PTR_GET_DEFAULT(hasInvoice_, false) };
    inline DistributionSku& setHasInvoice(bool hasInvoice) { DARABONBA_PTR_SET_VALUE(hasInvoice_, hasInvoice) };


    // jxPrice Field Functions 
    bool hasJxPrice() const { return this->jxPrice_ != nullptr;};
    void deleteJxPrice() { this->jxPrice_ = nullptr;};
    inline int64_t getJxPrice() const { DARABONBA_PTR_GET_DEFAULT(jxPrice_, 0L) };
    inline DistributionSku& setJxPrice(int64_t jxPrice) { DARABONBA_PTR_SET_VALUE(jxPrice_, jxPrice) };


    // picUrl Field Functions 
    bool hasPicUrl() const { return this->picUrl_ != nullptr;};
    void deletePicUrl() { this->picUrl_ = nullptr;};
    inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
    inline DistributionSku& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline DistributionSku& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline DistributionSku& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    // skuStatus Field Functions 
    bool hasSkuStatus() const { return this->skuStatus_ != nullptr;};
    void deleteSkuStatus() { this->skuStatus_ = nullptr;};
    inline string getSkuStatus() const { DARABONBA_PTR_GET_DEFAULT(skuStatus_, "") };
    inline DistributionSku& setSkuStatus(string skuStatus) { DARABONBA_PTR_SET_VALUE(skuStatus_, skuStatus) };


    // taxCode Field Functions 
    bool hasTaxCode() const { return this->taxCode_ != nullptr;};
    void deleteTaxCode() { this->taxCode_ = nullptr;};
    inline string getTaxCode() const { DARABONBA_PTR_GET_DEFAULT(taxCode_, "") };
    inline DistributionSku& setTaxCode(string taxCode) { DARABONBA_PTR_SET_VALUE(taxCode_, taxCode) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline int32_t getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, 0) };
    inline DistributionSku& setTaxRate(int32_t taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DistributionSku& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> aliasTitle_ {};
    shared_ptr<string> barCode_ {};
    shared_ptr<int32_t> creditPeriod_ {};
    shared_ptr<int64_t> dxPrice_ {};
    shared_ptr<bool> hasCredit_ {};
    shared_ptr<bool> hasInvoice_ {};
    shared_ptr<int64_t> jxPrice_ {};
    shared_ptr<string> picUrl_ {};
    shared_ptr<int32_t> quantity_ {};
    shared_ptr<string> skuId_ {};
    shared_ptr<string> skuStatus_ {};
    shared_ptr<string> taxCode_ {};
    shared_ptr<int32_t> taxRate_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
