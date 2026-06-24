// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOSEOUTDOMAININFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOSEOUTDOMAININFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryCloseoutDomainInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloseoutDomainInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloseoutDomainInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryCloseoutDomainInfoResponseBody() = default ;
    QueryCloseoutDomainInfoResponseBody(const QueryCloseoutDomainInfoResponseBody &) = default ;
    QueryCloseoutDomainInfoResponseBody(QueryCloseoutDomainInfoResponseBody &&) = default ;
    QueryCloseoutDomainInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloseoutDomainInfoResponseBody() = default ;
    QueryCloseoutDomainInfoResponseBody& operator=(const QueryCloseoutDomainInfoResponseBody &) = default ;
    QueryCloseoutDomainInfoResponseBody& operator=(QueryCloseoutDomainInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AuctionEndTime, auctionEndTime_);
        DARABONBA_PTR_TO_JSON(AuctionRemainingSeconds, auctionRemainingSeconds_);
        DARABONBA_PTR_TO_JSON(BaiduAntiLink, baiduAntiLink_);
        DARABONBA_PTR_TO_JSON(BaiduExLink, baiduExLink_);
        DARABONBA_PTR_TO_JSON(BaiduIndex, baiduIndex_);
        DARABONBA_PTR_TO_JSON(BaiduWeight, baiduWeight_);
        DARABONBA_PTR_TO_JSON(BookEndTime, bookEndTime_);
        DARABONBA_PTR_TO_JSON(BookRemainingSeconds, bookRemainingSeconds_);
        DARABONBA_PTR_TO_JSON(BookedPartners, bookedPartners_);
        DARABONBA_PTR_TO_JSON(Constitute, constitute_);
        DARABONBA_PTR_TO_JSON(CurrencyType, currencyType_);
        DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
        DARABONBA_PTR_TO_JSON(DomainLen, domainLen_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainType, domainType_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(FreezeAmount, freezeAmount_);
        DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
        DARABONBA_PTR_TO_JSON(IcpStatus, icpStatus_);
        DARABONBA_PTR_TO_JSON(Introduction, introduction_);
        DARABONBA_PTR_TO_JSON(IsPremium, isPremium_);
        DARABONBA_PTR_TO_JSON(PartnerTypes, partnerTypes_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(RegDate, regDate_);
        DARABONBA_PTR_TO_JSON(Registrar, registrar_);
        DARABONBA_PTR_TO_JSON(Reserved, reserved_);
        DARABONBA_PTR_TO_JSON(S360Weight, s360Weight_);
        DARABONBA_PTR_TO_JSON(SeoAttributes, seoAttributes_);
        DARABONBA_PTR_TO_JSON(ShortName, shortName_);
        DARABONBA_PTR_TO_JSON(SnatchNo, snatchNo_);
        DARABONBA_PTR_TO_JSON(SnatchTypeDesc, snatchTypeDesc_);
        DARABONBA_PTR_TO_JSON(SougouAntiLink, sougouAntiLink_);
        DARABONBA_PTR_TO_JSON(SougouIndex, sougouIndex_);
        DARABONBA_PTR_TO_JSON(SougouWeight, sougouWeight_);
        DARABONBA_PTR_TO_JSON(Suffix, suffix_);
        DARABONBA_PTR_TO_JSON(TransferInPrice, transferInPrice_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AuctionEndTime, auctionEndTime_);
        DARABONBA_PTR_FROM_JSON(AuctionRemainingSeconds, auctionRemainingSeconds_);
        DARABONBA_PTR_FROM_JSON(BaiduAntiLink, baiduAntiLink_);
        DARABONBA_PTR_FROM_JSON(BaiduExLink, baiduExLink_);
        DARABONBA_PTR_FROM_JSON(BaiduIndex, baiduIndex_);
        DARABONBA_PTR_FROM_JSON(BaiduWeight, baiduWeight_);
        DARABONBA_PTR_FROM_JSON(BookEndTime, bookEndTime_);
        DARABONBA_PTR_FROM_JSON(BookRemainingSeconds, bookRemainingSeconds_);
        DARABONBA_PTR_FROM_JSON(BookedPartners, bookedPartners_);
        DARABONBA_PTR_FROM_JSON(Constitute, constitute_);
        DARABONBA_PTR_FROM_JSON(CurrencyType, currencyType_);
        DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
        DARABONBA_PTR_FROM_JSON(DomainLen, domainLen_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(FreezeAmount, freezeAmount_);
        DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
        DARABONBA_PTR_FROM_JSON(IcpStatus, icpStatus_);
        DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
        DARABONBA_PTR_FROM_JSON(IsPremium, isPremium_);
        DARABONBA_PTR_FROM_JSON(PartnerTypes, partnerTypes_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(RegDate, regDate_);
        DARABONBA_PTR_FROM_JSON(Registrar, registrar_);
        DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
        DARABONBA_PTR_FROM_JSON(S360Weight, s360Weight_);
        DARABONBA_PTR_FROM_JSON(SeoAttributes, seoAttributes_);
        DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
        DARABONBA_PTR_FROM_JSON(SnatchNo, snatchNo_);
        DARABONBA_PTR_FROM_JSON(SnatchTypeDesc, snatchTypeDesc_);
        DARABONBA_PTR_FROM_JSON(SougouAntiLink, sougouAntiLink_);
        DARABONBA_PTR_FROM_JSON(SougouIndex, sougouIndex_);
        DARABONBA_PTR_FROM_JSON(SougouWeight, sougouWeight_);
        DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
        DARABONBA_PTR_FROM_JSON(TransferInPrice, transferInPrice_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auctionEndTime_ == nullptr
        && this->auctionRemainingSeconds_ == nullptr && this->baiduAntiLink_ == nullptr && this->baiduExLink_ == nullptr && this->baiduIndex_ == nullptr && this->baiduWeight_ == nullptr
        && this->bookEndTime_ == nullptr && this->bookRemainingSeconds_ == nullptr && this->bookedPartners_ == nullptr && this->constitute_ == nullptr && this->currencyType_ == nullptr
        && this->deliveryTime_ == nullptr && this->domainLen_ == nullptr && this->domainName_ == nullptr && this->domainType_ == nullptr && this->expireDate_ == nullptr
        && this->extend_ == nullptr && this->freezeAmount_ == nullptr && this->icpNumber_ == nullptr && this->icpStatus_ == nullptr && this->introduction_ == nullptr
        && this->isPremium_ == nullptr && this->partnerTypes_ == nullptr && this->price_ == nullptr && this->productId_ == nullptr && this->publishTime_ == nullptr
        && this->regDate_ == nullptr && this->registrar_ == nullptr && this->reserved_ == nullptr && this->s360Weight_ == nullptr && this->seoAttributes_ == nullptr
        && this->shortName_ == nullptr && this->snatchNo_ == nullptr && this->snatchTypeDesc_ == nullptr && this->sougouAntiLink_ == nullptr && this->sougouIndex_ == nullptr
        && this->sougouWeight_ == nullptr && this->suffix_ == nullptr && this->transferInPrice_ == nullptr && this->weight_ == nullptr; };
      // auctionEndTime Field Functions 
      bool hasAuctionEndTime() const { return this->auctionEndTime_ != nullptr;};
      void deleteAuctionEndTime() { this->auctionEndTime_ = nullptr;};
      inline string getAuctionEndTime() const { DARABONBA_PTR_GET_DEFAULT(auctionEndTime_, "") };
      inline Module& setAuctionEndTime(string auctionEndTime) { DARABONBA_PTR_SET_VALUE(auctionEndTime_, auctionEndTime) };


      // auctionRemainingSeconds Field Functions 
      bool hasAuctionRemainingSeconds() const { return this->auctionRemainingSeconds_ != nullptr;};
      void deleteAuctionRemainingSeconds() { this->auctionRemainingSeconds_ = nullptr;};
      inline int64_t getAuctionRemainingSeconds() const { DARABONBA_PTR_GET_DEFAULT(auctionRemainingSeconds_, 0L) };
      inline Module& setAuctionRemainingSeconds(int64_t auctionRemainingSeconds) { DARABONBA_PTR_SET_VALUE(auctionRemainingSeconds_, auctionRemainingSeconds) };


      // baiduAntiLink Field Functions 
      bool hasBaiduAntiLink() const { return this->baiduAntiLink_ != nullptr;};
      void deleteBaiduAntiLink() { this->baiduAntiLink_ = nullptr;};
      inline int32_t getBaiduAntiLink() const { DARABONBA_PTR_GET_DEFAULT(baiduAntiLink_, 0) };
      inline Module& setBaiduAntiLink(int32_t baiduAntiLink) { DARABONBA_PTR_SET_VALUE(baiduAntiLink_, baiduAntiLink) };


      // baiduExLink Field Functions 
      bool hasBaiduExLink() const { return this->baiduExLink_ != nullptr;};
      void deleteBaiduExLink() { this->baiduExLink_ = nullptr;};
      inline int32_t getBaiduExLink() const { DARABONBA_PTR_GET_DEFAULT(baiduExLink_, 0) };
      inline Module& setBaiduExLink(int32_t baiduExLink) { DARABONBA_PTR_SET_VALUE(baiduExLink_, baiduExLink) };


      // baiduIndex Field Functions 
      bool hasBaiduIndex() const { return this->baiduIndex_ != nullptr;};
      void deleteBaiduIndex() { this->baiduIndex_ = nullptr;};
      inline int32_t getBaiduIndex() const { DARABONBA_PTR_GET_DEFAULT(baiduIndex_, 0) };
      inline Module& setBaiduIndex(int32_t baiduIndex) { DARABONBA_PTR_SET_VALUE(baiduIndex_, baiduIndex) };


      // baiduWeight Field Functions 
      bool hasBaiduWeight() const { return this->baiduWeight_ != nullptr;};
      void deleteBaiduWeight() { this->baiduWeight_ = nullptr;};
      inline int32_t getBaiduWeight() const { DARABONBA_PTR_GET_DEFAULT(baiduWeight_, 0) };
      inline Module& setBaiduWeight(int32_t baiduWeight) { DARABONBA_PTR_SET_VALUE(baiduWeight_, baiduWeight) };


      // bookEndTime Field Functions 
      bool hasBookEndTime() const { return this->bookEndTime_ != nullptr;};
      void deleteBookEndTime() { this->bookEndTime_ = nullptr;};
      inline string getBookEndTime() const { DARABONBA_PTR_GET_DEFAULT(bookEndTime_, "") };
      inline Module& setBookEndTime(string bookEndTime) { DARABONBA_PTR_SET_VALUE(bookEndTime_, bookEndTime) };


      // bookRemainingSeconds Field Functions 
      bool hasBookRemainingSeconds() const { return this->bookRemainingSeconds_ != nullptr;};
      void deleteBookRemainingSeconds() { this->bookRemainingSeconds_ = nullptr;};
      inline int64_t getBookRemainingSeconds() const { DARABONBA_PTR_GET_DEFAULT(bookRemainingSeconds_, 0L) };
      inline Module& setBookRemainingSeconds(int64_t bookRemainingSeconds) { DARABONBA_PTR_SET_VALUE(bookRemainingSeconds_, bookRemainingSeconds) };


      // bookedPartners Field Functions 
      bool hasBookedPartners() const { return this->bookedPartners_ != nullptr;};
      void deleteBookedPartners() { this->bookedPartners_ = nullptr;};
      inline string getBookedPartners() const { DARABONBA_PTR_GET_DEFAULT(bookedPartners_, "") };
      inline Module& setBookedPartners(string bookedPartners) { DARABONBA_PTR_SET_VALUE(bookedPartners_, bookedPartners) };


      // constitute Field Functions 
      bool hasConstitute() const { return this->constitute_ != nullptr;};
      void deleteConstitute() { this->constitute_ = nullptr;};
      inline string getConstitute() const { DARABONBA_PTR_GET_DEFAULT(constitute_, "") };
      inline Module& setConstitute(string constitute) { DARABONBA_PTR_SET_VALUE(constitute_, constitute) };


      // currencyType Field Functions 
      bool hasCurrencyType() const { return this->currencyType_ != nullptr;};
      void deleteCurrencyType() { this->currencyType_ = nullptr;};
      inline string getCurrencyType() const { DARABONBA_PTR_GET_DEFAULT(currencyType_, "") };
      inline Module& setCurrencyType(string currencyType) { DARABONBA_PTR_SET_VALUE(currencyType_, currencyType) };


      // deliveryTime Field Functions 
      bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
      void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
      inline string getDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
      inline Module& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


      // domainLen Field Functions 
      bool hasDomainLen() const { return this->domainLen_ != nullptr;};
      void deleteDomainLen() { this->domainLen_ = nullptr;};
      inline int32_t getDomainLen() const { DARABONBA_PTR_GET_DEFAULT(domainLen_, 0) };
      inline Module& setDomainLen(int32_t domainLen) { DARABONBA_PTR_SET_VALUE(domainLen_, domainLen) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Module& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline Module& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline Module& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline Module& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // freezeAmount Field Functions 
      bool hasFreezeAmount() const { return this->freezeAmount_ != nullptr;};
      void deleteFreezeAmount() { this->freezeAmount_ = nullptr;};
      inline double getFreezeAmount() const { DARABONBA_PTR_GET_DEFAULT(freezeAmount_, 0.0) };
      inline Module& setFreezeAmount(double freezeAmount) { DARABONBA_PTR_SET_VALUE(freezeAmount_, freezeAmount) };


      // icpNumber Field Functions 
      bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
      void deleteIcpNumber() { this->icpNumber_ = nullptr;};
      inline string getIcpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
      inline Module& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


      // icpStatus Field Functions 
      bool hasIcpStatus() const { return this->icpStatus_ != nullptr;};
      void deleteIcpStatus() { this->icpStatus_ = nullptr;};
      inline bool getIcpStatus() const { DARABONBA_PTR_GET_DEFAULT(icpStatus_, false) };
      inline Module& setIcpStatus(bool icpStatus) { DARABONBA_PTR_SET_VALUE(icpStatus_, icpStatus) };


      // introduction Field Functions 
      bool hasIntroduction() const { return this->introduction_ != nullptr;};
      void deleteIntroduction() { this->introduction_ = nullptr;};
      inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
      inline Module& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


      // isPremium Field Functions 
      bool hasIsPremium() const { return this->isPremium_ != nullptr;};
      void deleteIsPremium() { this->isPremium_ = nullptr;};
      inline bool getIsPremium() const { DARABONBA_PTR_GET_DEFAULT(isPremium_, false) };
      inline Module& setIsPremium(bool isPremium) { DARABONBA_PTR_SET_VALUE(isPremium_, isPremium) };


      // partnerTypes Field Functions 
      bool hasPartnerTypes() const { return this->partnerTypes_ != nullptr;};
      void deletePartnerTypes() { this->partnerTypes_ = nullptr;};
      inline string getPartnerTypes() const { DARABONBA_PTR_GET_DEFAULT(partnerTypes_, "") };
      inline Module& setPartnerTypes(string partnerTypes) { DARABONBA_PTR_SET_VALUE(partnerTypes_, partnerTypes) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline Module& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Module& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline Module& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // regDate Field Functions 
      bool hasRegDate() const { return this->regDate_ != nullptr;};
      void deleteRegDate() { this->regDate_ = nullptr;};
      inline string getRegDate() const { DARABONBA_PTR_GET_DEFAULT(regDate_, "") };
      inline Module& setRegDate(string regDate) { DARABONBA_PTR_SET_VALUE(regDate_, regDate) };


      // registrar Field Functions 
      bool hasRegistrar() const { return this->registrar_ != nullptr;};
      void deleteRegistrar() { this->registrar_ = nullptr;};
      inline string getRegistrar() const { DARABONBA_PTR_GET_DEFAULT(registrar_, "") };
      inline Module& setRegistrar(string registrar) { DARABONBA_PTR_SET_VALUE(registrar_, registrar) };


      // reserved Field Functions 
      bool hasReserved() const { return this->reserved_ != nullptr;};
      void deleteReserved() { this->reserved_ = nullptr;};
      inline bool getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, false) };
      inline Module& setReserved(bool reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


      // s360Weight Field Functions 
      bool hasS360Weight() const { return this->s360Weight_ != nullptr;};
      void deleteS360Weight() { this->s360Weight_ = nullptr;};
      inline int32_t getS360Weight() const { DARABONBA_PTR_GET_DEFAULT(s360Weight_, 0) };
      inline Module& setS360Weight(int32_t s360Weight) { DARABONBA_PTR_SET_VALUE(s360Weight_, s360Weight) };


      // seoAttributes Field Functions 
      bool hasSeoAttributes() const { return this->seoAttributes_ != nullptr;};
      void deleteSeoAttributes() { this->seoAttributes_ = nullptr;};
      inline string getSeoAttributes() const { DARABONBA_PTR_GET_DEFAULT(seoAttributes_, "") };
      inline Module& setSeoAttributes(string seoAttributes) { DARABONBA_PTR_SET_VALUE(seoAttributes_, seoAttributes) };


      // shortName Field Functions 
      bool hasShortName() const { return this->shortName_ != nullptr;};
      void deleteShortName() { this->shortName_ = nullptr;};
      inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
      inline Module& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


      // snatchNo Field Functions 
      bool hasSnatchNo() const { return this->snatchNo_ != nullptr;};
      void deleteSnatchNo() { this->snatchNo_ = nullptr;};
      inline string getSnatchNo() const { DARABONBA_PTR_GET_DEFAULT(snatchNo_, "") };
      inline Module& setSnatchNo(string snatchNo) { DARABONBA_PTR_SET_VALUE(snatchNo_, snatchNo) };


      // snatchTypeDesc Field Functions 
      bool hasSnatchTypeDesc() const { return this->snatchTypeDesc_ != nullptr;};
      void deleteSnatchTypeDesc() { this->snatchTypeDesc_ = nullptr;};
      inline string getSnatchTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(snatchTypeDesc_, "") };
      inline Module& setSnatchTypeDesc(string snatchTypeDesc) { DARABONBA_PTR_SET_VALUE(snatchTypeDesc_, snatchTypeDesc) };


      // sougouAntiLink Field Functions 
      bool hasSougouAntiLink() const { return this->sougouAntiLink_ != nullptr;};
      void deleteSougouAntiLink() { this->sougouAntiLink_ = nullptr;};
      inline int32_t getSougouAntiLink() const { DARABONBA_PTR_GET_DEFAULT(sougouAntiLink_, 0) };
      inline Module& setSougouAntiLink(int32_t sougouAntiLink) { DARABONBA_PTR_SET_VALUE(sougouAntiLink_, sougouAntiLink) };


      // sougouIndex Field Functions 
      bool hasSougouIndex() const { return this->sougouIndex_ != nullptr;};
      void deleteSougouIndex() { this->sougouIndex_ = nullptr;};
      inline int32_t getSougouIndex() const { DARABONBA_PTR_GET_DEFAULT(sougouIndex_, 0) };
      inline Module& setSougouIndex(int32_t sougouIndex) { DARABONBA_PTR_SET_VALUE(sougouIndex_, sougouIndex) };


      // sougouWeight Field Functions 
      bool hasSougouWeight() const { return this->sougouWeight_ != nullptr;};
      void deleteSougouWeight() { this->sougouWeight_ = nullptr;};
      inline int32_t getSougouWeight() const { DARABONBA_PTR_GET_DEFAULT(sougouWeight_, 0) };
      inline Module& setSougouWeight(int32_t sougouWeight) { DARABONBA_PTR_SET_VALUE(sougouWeight_, sougouWeight) };


      // suffix Field Functions 
      bool hasSuffix() const { return this->suffix_ != nullptr;};
      void deleteSuffix() { this->suffix_ = nullptr;};
      inline string getSuffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
      inline Module& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


      // transferInPrice Field Functions 
      bool hasTransferInPrice() const { return this->transferInPrice_ != nullptr;};
      void deleteTransferInPrice() { this->transferInPrice_ = nullptr;};
      inline double getTransferInPrice() const { DARABONBA_PTR_GET_DEFAULT(transferInPrice_, 0.0) };
      inline Module& setTransferInPrice(double transferInPrice) { DARABONBA_PTR_SET_VALUE(transferInPrice_, transferInPrice) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Module& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> auctionEndTime_ {};
      shared_ptr<int64_t> auctionRemainingSeconds_ {};
      shared_ptr<int32_t> baiduAntiLink_ {};
      shared_ptr<int32_t> baiduExLink_ {};
      shared_ptr<int32_t> baiduIndex_ {};
      shared_ptr<int32_t> baiduWeight_ {};
      shared_ptr<string> bookEndTime_ {};
      shared_ptr<int64_t> bookRemainingSeconds_ {};
      shared_ptr<string> bookedPartners_ {};
      shared_ptr<string> constitute_ {};
      shared_ptr<string> currencyType_ {};
      shared_ptr<string> deliveryTime_ {};
      shared_ptr<int32_t> domainLen_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> domainType_ {};
      shared_ptr<string> expireDate_ {};
      shared_ptr<string> extend_ {};
      shared_ptr<double> freezeAmount_ {};
      shared_ptr<string> icpNumber_ {};
      shared_ptr<bool> icpStatus_ {};
      shared_ptr<string> introduction_ {};
      shared_ptr<bool> isPremium_ {};
      shared_ptr<string> partnerTypes_ {};
      shared_ptr<double> price_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<string> publishTime_ {};
      shared_ptr<string> regDate_ {};
      shared_ptr<string> registrar_ {};
      shared_ptr<bool> reserved_ {};
      shared_ptr<int32_t> s360Weight_ {};
      shared_ptr<string> seoAttributes_ {};
      shared_ptr<string> shortName_ {};
      shared_ptr<string> snatchNo_ {};
      shared_ptr<string> snatchTypeDesc_ {};
      shared_ptr<int32_t> sougouAntiLink_ {};
      shared_ptr<int32_t> sougouIndex_ {};
      shared_ptr<int32_t> sougouWeight_ {};
      shared_ptr<string> suffix_ {};
      shared_ptr<double> transferInPrice_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryCloseoutDomainInfoResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryCloseoutDomainInfoResponseBody::Module) };
    inline QueryCloseoutDomainInfoResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryCloseoutDomainInfoResponseBody::Module) };
    inline QueryCloseoutDomainInfoResponseBody& setModule(const QueryCloseoutDomainInfoResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryCloseoutDomainInfoResponseBody& setModule(QueryCloseoutDomainInfoResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCloseoutDomainInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryCloseoutDomainInfoResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
