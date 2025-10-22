// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPORTDOMAINEXPIRESNATCHSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPORTDOMAINEXPIRESNATCHSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryExportDomainExpireSnatchsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExportDomainExpireSnatchsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionEndTime, auctionEndTime_);
      DARABONBA_PTR_TO_JSON(AuctionRemainingSeconds, auctionRemainingSeconds_);
      DARABONBA_PTR_TO_JSON(BaiduAntiLink, baiduAntiLink_);
      DARABONBA_PTR_TO_JSON(BaiduExLink, baiduExLink_);
      DARABONBA_PTR_TO_JSON(BaiduIndex, baiduIndex_);
      DARABONBA_PTR_TO_JSON(BaiduWeight, baiduWeight_);
      DARABONBA_PTR_TO_JSON(BookEndTime, bookEndTime_);
      DARABONBA_PTR_TO_JSON(BookRemainingSeconds, bookRemainingSeconds_);
      DARABONBA_PTR_TO_JSON(BookedNum, bookedNum_);
      DARABONBA_PTR_TO_JSON(BookedPartners, bookedPartners_);
      DARABONBA_PTR_TO_JSON(Constitute, constitute_);
      DARABONBA_PTR_TO_JSON(CurrencyType, currencyType_);
      DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainLen, domainLen_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(FreezeAmount, freezeAmount_);
      DARABONBA_PTR_TO_JSON(Introduction, introduction_);
      DARABONBA_PTR_TO_JSON(IsPremium, isPremium_);
      DARABONBA_PTR_TO_JSON(PartnerTypes, partnerTypes_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(RegDate, regDate_);
      DARABONBA_PTR_TO_JSON(Registrar, registrar_);
      DARABONBA_PTR_TO_JSON(RenewPrice, renewPrice_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(RmbPrice, rmbPrice_);
      DARABONBA_PTR_TO_JSON(S360Weight, s360Weight_);
      DARABONBA_PTR_TO_JSON(SeoAttributes, seoAttributes_);
      DARABONBA_PTR_TO_JSON(ShortName, shortName_);
      DARABONBA_PTR_TO_JSON(SnatchNo, snatchNo_);
      DARABONBA_PTR_TO_JSON(SnatchTypeDesc, snatchTypeDesc_);
      DARABONBA_PTR_TO_JSON(SougouAntiLink, sougouAntiLink_);
      DARABONBA_PTR_TO_JSON(SougouIndex, sougouIndex_);
      DARABONBA_PTR_TO_JSON(SougouWeight, sougouWeight_);
      DARABONBA_PTR_TO_JSON(Suffix, suffix_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExportDomainExpireSnatchsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionEndTime, auctionEndTime_);
      DARABONBA_PTR_FROM_JSON(AuctionRemainingSeconds, auctionRemainingSeconds_);
      DARABONBA_PTR_FROM_JSON(BaiduAntiLink, baiduAntiLink_);
      DARABONBA_PTR_FROM_JSON(BaiduExLink, baiduExLink_);
      DARABONBA_PTR_FROM_JSON(BaiduIndex, baiduIndex_);
      DARABONBA_PTR_FROM_JSON(BaiduWeight, baiduWeight_);
      DARABONBA_PTR_FROM_JSON(BookEndTime, bookEndTime_);
      DARABONBA_PTR_FROM_JSON(BookRemainingSeconds, bookRemainingSeconds_);
      DARABONBA_PTR_FROM_JSON(BookedNum, bookedNum_);
      DARABONBA_PTR_FROM_JSON(BookedPartners, bookedPartners_);
      DARABONBA_PTR_FROM_JSON(Constitute, constitute_);
      DARABONBA_PTR_FROM_JSON(CurrencyType, currencyType_);
      DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainLen, domainLen_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(FreezeAmount, freezeAmount_);
      DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(IsPremium, isPremium_);
      DARABONBA_PTR_FROM_JSON(PartnerTypes, partnerTypes_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(RegDate, regDate_);
      DARABONBA_PTR_FROM_JSON(Registrar, registrar_);
      DARABONBA_PTR_FROM_JSON(RenewPrice, renewPrice_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(RmbPrice, rmbPrice_);
      DARABONBA_PTR_FROM_JSON(S360Weight, s360Weight_);
      DARABONBA_PTR_FROM_JSON(SeoAttributes, seoAttributes_);
      DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
      DARABONBA_PTR_FROM_JSON(SnatchNo, snatchNo_);
      DARABONBA_PTR_FROM_JSON(SnatchTypeDesc, snatchTypeDesc_);
      DARABONBA_PTR_FROM_JSON(SougouAntiLink, sougouAntiLink_);
      DARABONBA_PTR_FROM_JSON(SougouIndex, sougouIndex_);
      DARABONBA_PTR_FROM_JSON(SougouWeight, sougouWeight_);
      DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    QueryExportDomainExpireSnatchsResponseBodyData() = default ;
    QueryExportDomainExpireSnatchsResponseBodyData(const QueryExportDomainExpireSnatchsResponseBodyData &) = default ;
    QueryExportDomainExpireSnatchsResponseBodyData(QueryExportDomainExpireSnatchsResponseBodyData &&) = default ;
    QueryExportDomainExpireSnatchsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExportDomainExpireSnatchsResponseBodyData() = default ;
    QueryExportDomainExpireSnatchsResponseBodyData& operator=(const QueryExportDomainExpireSnatchsResponseBodyData &) = default ;
    QueryExportDomainExpireSnatchsResponseBodyData& operator=(QueryExportDomainExpireSnatchsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionEndTime_ == nullptr
        && return this->auctionRemainingSeconds_ == nullptr && return this->baiduAntiLink_ == nullptr && return this->baiduExLink_ == nullptr && return this->baiduIndex_ == nullptr && return this->baiduWeight_ == nullptr
        && return this->bookEndTime_ == nullptr && return this->bookRemainingSeconds_ == nullptr && return this->bookedNum_ == nullptr && return this->bookedPartners_ == nullptr && return this->constitute_ == nullptr
        && return this->currencyType_ == nullptr && return this->deliveryTime_ == nullptr && return this->domainId_ == nullptr && return this->domainLen_ == nullptr && return this->domainName_ == nullptr
        && return this->domainType_ == nullptr && return this->endDate_ == nullptr && return this->expireDate_ == nullptr && return this->extend_ == nullptr && return this->freezeAmount_ == nullptr
        && return this->introduction_ == nullptr && return this->isPremium_ == nullptr && return this->partnerTypes_ == nullptr && return this->price_ == nullptr && return this->productId_ == nullptr
        && return this->publishTime_ == nullptr && return this->regDate_ == nullptr && return this->registrar_ == nullptr && return this->renewPrice_ == nullptr && return this->reserved_ == nullptr
        && return this->rmbPrice_ == nullptr && return this->s360Weight_ == nullptr && return this->seoAttributes_ == nullptr && return this->shortName_ == nullptr && return this->snatchNo_ == nullptr
        && return this->snatchTypeDesc_ == nullptr && return this->sougouAntiLink_ == nullptr && return this->sougouIndex_ == nullptr && return this->sougouWeight_ == nullptr && return this->suffix_ == nullptr
        && return this->weight_ == nullptr; };
    // auctionEndTime Field Functions 
    bool hasAuctionEndTime() const { return this->auctionEndTime_ != nullptr;};
    void deleteAuctionEndTime() { this->auctionEndTime_ = nullptr;};
    inline string auctionEndTime() const { DARABONBA_PTR_GET_DEFAULT(auctionEndTime_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setAuctionEndTime(string auctionEndTime) { DARABONBA_PTR_SET_VALUE(auctionEndTime_, auctionEndTime) };


    // auctionRemainingSeconds Field Functions 
    bool hasAuctionRemainingSeconds() const { return this->auctionRemainingSeconds_ != nullptr;};
    void deleteAuctionRemainingSeconds() { this->auctionRemainingSeconds_ = nullptr;};
    inline int64_t auctionRemainingSeconds() const { DARABONBA_PTR_GET_DEFAULT(auctionRemainingSeconds_, 0L) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setAuctionRemainingSeconds(int64_t auctionRemainingSeconds) { DARABONBA_PTR_SET_VALUE(auctionRemainingSeconds_, auctionRemainingSeconds) };


    // baiduAntiLink Field Functions 
    bool hasBaiduAntiLink() const { return this->baiduAntiLink_ != nullptr;};
    void deleteBaiduAntiLink() { this->baiduAntiLink_ = nullptr;};
    inline int32_t baiduAntiLink() const { DARABONBA_PTR_GET_DEFAULT(baiduAntiLink_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setBaiduAntiLink(int32_t baiduAntiLink) { DARABONBA_PTR_SET_VALUE(baiduAntiLink_, baiduAntiLink) };


    // baiduExLink Field Functions 
    bool hasBaiduExLink() const { return this->baiduExLink_ != nullptr;};
    void deleteBaiduExLink() { this->baiduExLink_ = nullptr;};
    inline int32_t baiduExLink() const { DARABONBA_PTR_GET_DEFAULT(baiduExLink_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setBaiduExLink(int32_t baiduExLink) { DARABONBA_PTR_SET_VALUE(baiduExLink_, baiduExLink) };


    // baiduIndex Field Functions 
    bool hasBaiduIndex() const { return this->baiduIndex_ != nullptr;};
    void deleteBaiduIndex() { this->baiduIndex_ = nullptr;};
    inline int32_t baiduIndex() const { DARABONBA_PTR_GET_DEFAULT(baiduIndex_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setBaiduIndex(int32_t baiduIndex) { DARABONBA_PTR_SET_VALUE(baiduIndex_, baiduIndex) };


    // baiduWeight Field Functions 
    bool hasBaiduWeight() const { return this->baiduWeight_ != nullptr;};
    void deleteBaiduWeight() { this->baiduWeight_ = nullptr;};
    inline int32_t baiduWeight() const { DARABONBA_PTR_GET_DEFAULT(baiduWeight_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setBaiduWeight(int32_t baiduWeight) { DARABONBA_PTR_SET_VALUE(baiduWeight_, baiduWeight) };


    // bookEndTime Field Functions 
    bool hasBookEndTime() const { return this->bookEndTime_ != nullptr;};
    void deleteBookEndTime() { this->bookEndTime_ = nullptr;};
    inline string bookEndTime() const { DARABONBA_PTR_GET_DEFAULT(bookEndTime_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setBookEndTime(string bookEndTime) { DARABONBA_PTR_SET_VALUE(bookEndTime_, bookEndTime) };


    // bookRemainingSeconds Field Functions 
    bool hasBookRemainingSeconds() const { return this->bookRemainingSeconds_ != nullptr;};
    void deleteBookRemainingSeconds() { this->bookRemainingSeconds_ = nullptr;};
    inline int64_t bookRemainingSeconds() const { DARABONBA_PTR_GET_DEFAULT(bookRemainingSeconds_, 0L) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setBookRemainingSeconds(int64_t bookRemainingSeconds) { DARABONBA_PTR_SET_VALUE(bookRemainingSeconds_, bookRemainingSeconds) };


    // bookedNum Field Functions 
    bool hasBookedNum() const { return this->bookedNum_ != nullptr;};
    void deleteBookedNum() { this->bookedNum_ = nullptr;};
    inline int32_t bookedNum() const { DARABONBA_PTR_GET_DEFAULT(bookedNum_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setBookedNum(int32_t bookedNum) { DARABONBA_PTR_SET_VALUE(bookedNum_, bookedNum) };


    // bookedPartners Field Functions 
    bool hasBookedPartners() const { return this->bookedPartners_ != nullptr;};
    void deleteBookedPartners() { this->bookedPartners_ = nullptr;};
    inline string bookedPartners() const { DARABONBA_PTR_GET_DEFAULT(bookedPartners_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setBookedPartners(string bookedPartners) { DARABONBA_PTR_SET_VALUE(bookedPartners_, bookedPartners) };


    // constitute Field Functions 
    bool hasConstitute() const { return this->constitute_ != nullptr;};
    void deleteConstitute() { this->constitute_ = nullptr;};
    inline string constitute() const { DARABONBA_PTR_GET_DEFAULT(constitute_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setConstitute(string constitute) { DARABONBA_PTR_SET_VALUE(constitute_, constitute) };


    // currencyType Field Functions 
    bool hasCurrencyType() const { return this->currencyType_ != nullptr;};
    void deleteCurrencyType() { this->currencyType_ = nullptr;};
    inline string currencyType() const { DARABONBA_PTR_GET_DEFAULT(currencyType_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setCurrencyType(string currencyType) { DARABONBA_PTR_SET_VALUE(currencyType_, currencyType) };


    // deliveryTime Field Functions 
    bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
    void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
    inline string deliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainLen Field Functions 
    bool hasDomainLen() const { return this->domainLen_ != nullptr;};
    void deleteDomainLen() { this->domainLen_ = nullptr;};
    inline int32_t domainLen() const { DARABONBA_PTR_GET_DEFAULT(domainLen_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setDomainLen(int32_t domainLen) { DARABONBA_PTR_SET_VALUE(domainLen_, domainLen) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // freezeAmount Field Functions 
    bool hasFreezeAmount() const { return this->freezeAmount_ != nullptr;};
    void deleteFreezeAmount() { this->freezeAmount_ = nullptr;};
    inline double freezeAmount() const { DARABONBA_PTR_GET_DEFAULT(freezeAmount_, 0.0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setFreezeAmount(double freezeAmount) { DARABONBA_PTR_SET_VALUE(freezeAmount_, freezeAmount) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // isPremium Field Functions 
    bool hasIsPremium() const { return this->isPremium_ != nullptr;};
    void deleteIsPremium() { this->isPremium_ = nullptr;};
    inline bool isPremium() const { DARABONBA_PTR_GET_DEFAULT(isPremium_, false) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setIsPremium(bool isPremium) { DARABONBA_PTR_SET_VALUE(isPremium_, isPremium) };


    // partnerTypes Field Functions 
    bool hasPartnerTypes() const { return this->partnerTypes_ != nullptr;};
    void deletePartnerTypes() { this->partnerTypes_ = nullptr;};
    inline string partnerTypes() const { DARABONBA_PTR_GET_DEFAULT(partnerTypes_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setPartnerTypes(string partnerTypes) { DARABONBA_PTR_SET_VALUE(partnerTypes_, partnerTypes) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // regDate Field Functions 
    bool hasRegDate() const { return this->regDate_ != nullptr;};
    void deleteRegDate() { this->regDate_ = nullptr;};
    inline string regDate() const { DARABONBA_PTR_GET_DEFAULT(regDate_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setRegDate(string regDate) { DARABONBA_PTR_SET_VALUE(regDate_, regDate) };


    // registrar Field Functions 
    bool hasRegistrar() const { return this->registrar_ != nullptr;};
    void deleteRegistrar() { this->registrar_ = nullptr;};
    inline string registrar() const { DARABONBA_PTR_GET_DEFAULT(registrar_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setRegistrar(string registrar) { DARABONBA_PTR_SET_VALUE(registrar_, registrar) };


    // renewPrice Field Functions 
    bool hasRenewPrice() const { return this->renewPrice_ != nullptr;};
    void deleteRenewPrice() { this->renewPrice_ = nullptr;};
    inline double renewPrice() const { DARABONBA_PTR_GET_DEFAULT(renewPrice_, 0.0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setRenewPrice(double renewPrice) { DARABONBA_PTR_SET_VALUE(renewPrice_, renewPrice) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline bool reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, false) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setReserved(bool reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // rmbPrice Field Functions 
    bool hasRmbPrice() const { return this->rmbPrice_ != nullptr;};
    void deleteRmbPrice() { this->rmbPrice_ = nullptr;};
    inline double rmbPrice() const { DARABONBA_PTR_GET_DEFAULT(rmbPrice_, 0.0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setRmbPrice(double rmbPrice) { DARABONBA_PTR_SET_VALUE(rmbPrice_, rmbPrice) };


    // s360Weight Field Functions 
    bool hasS360Weight() const { return this->s360Weight_ != nullptr;};
    void deleteS360Weight() { this->s360Weight_ = nullptr;};
    inline int32_t s360Weight() const { DARABONBA_PTR_GET_DEFAULT(s360Weight_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setS360Weight(int32_t s360Weight) { DARABONBA_PTR_SET_VALUE(s360Weight_, s360Weight) };


    // seoAttributes Field Functions 
    bool hasSeoAttributes() const { return this->seoAttributes_ != nullptr;};
    void deleteSeoAttributes() { this->seoAttributes_ = nullptr;};
    inline string seoAttributes() const { DARABONBA_PTR_GET_DEFAULT(seoAttributes_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setSeoAttributes(string seoAttributes) { DARABONBA_PTR_SET_VALUE(seoAttributes_, seoAttributes) };


    // shortName Field Functions 
    bool hasShortName() const { return this->shortName_ != nullptr;};
    void deleteShortName() { this->shortName_ = nullptr;};
    inline string shortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


    // snatchNo Field Functions 
    bool hasSnatchNo() const { return this->snatchNo_ != nullptr;};
    void deleteSnatchNo() { this->snatchNo_ = nullptr;};
    inline string snatchNo() const { DARABONBA_PTR_GET_DEFAULT(snatchNo_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setSnatchNo(string snatchNo) { DARABONBA_PTR_SET_VALUE(snatchNo_, snatchNo) };


    // snatchTypeDesc Field Functions 
    bool hasSnatchTypeDesc() const { return this->snatchTypeDesc_ != nullptr;};
    void deleteSnatchTypeDesc() { this->snatchTypeDesc_ = nullptr;};
    inline string snatchTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(snatchTypeDesc_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setSnatchTypeDesc(string snatchTypeDesc) { DARABONBA_PTR_SET_VALUE(snatchTypeDesc_, snatchTypeDesc) };


    // sougouAntiLink Field Functions 
    bool hasSougouAntiLink() const { return this->sougouAntiLink_ != nullptr;};
    void deleteSougouAntiLink() { this->sougouAntiLink_ = nullptr;};
    inline int32_t sougouAntiLink() const { DARABONBA_PTR_GET_DEFAULT(sougouAntiLink_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setSougouAntiLink(int32_t sougouAntiLink) { DARABONBA_PTR_SET_VALUE(sougouAntiLink_, sougouAntiLink) };


    // sougouIndex Field Functions 
    bool hasSougouIndex() const { return this->sougouIndex_ != nullptr;};
    void deleteSougouIndex() { this->sougouIndex_ = nullptr;};
    inline int32_t sougouIndex() const { DARABONBA_PTR_GET_DEFAULT(sougouIndex_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setSougouIndex(int32_t sougouIndex) { DARABONBA_PTR_SET_VALUE(sougouIndex_, sougouIndex) };


    // sougouWeight Field Functions 
    bool hasSougouWeight() const { return this->sougouWeight_ != nullptr;};
    void deleteSougouWeight() { this->sougouWeight_ = nullptr;};
    inline int32_t sougouWeight() const { DARABONBA_PTR_GET_DEFAULT(sougouWeight_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setSougouWeight(int32_t sougouWeight) { DARABONBA_PTR_SET_VALUE(sougouWeight_, sougouWeight) };


    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string suffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline QueryExportDomainExpireSnatchsResponseBodyData& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> auctionEndTime_ = nullptr;
    std::shared_ptr<int64_t> auctionRemainingSeconds_ = nullptr;
    std::shared_ptr<int32_t> baiduAntiLink_ = nullptr;
    std::shared_ptr<int32_t> baiduExLink_ = nullptr;
    std::shared_ptr<int32_t> baiduIndex_ = nullptr;
    std::shared_ptr<int32_t> baiduWeight_ = nullptr;
    std::shared_ptr<string> bookEndTime_ = nullptr;
    std::shared_ptr<int64_t> bookRemainingSeconds_ = nullptr;
    std::shared_ptr<int32_t> bookedNum_ = nullptr;
    std::shared_ptr<string> bookedPartners_ = nullptr;
    std::shared_ptr<string> constitute_ = nullptr;
    std::shared_ptr<string> currencyType_ = nullptr;
    std::shared_ptr<string> deliveryTime_ = nullptr;
    std::shared_ptr<string> domainId_ = nullptr;
    std::shared_ptr<int32_t> domainLen_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainType_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<string> expireDate_ = nullptr;
    std::shared_ptr<string> extend_ = nullptr;
    std::shared_ptr<double> freezeAmount_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    std::shared_ptr<bool> isPremium_ = nullptr;
    std::shared_ptr<string> partnerTypes_ = nullptr;
    std::shared_ptr<double> price_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> publishTime_ = nullptr;
    std::shared_ptr<string> regDate_ = nullptr;
    std::shared_ptr<string> registrar_ = nullptr;
    std::shared_ptr<double> renewPrice_ = nullptr;
    std::shared_ptr<bool> reserved_ = nullptr;
    std::shared_ptr<double> rmbPrice_ = nullptr;
    std::shared_ptr<int32_t> s360Weight_ = nullptr;
    std::shared_ptr<string> seoAttributes_ = nullptr;
    std::shared_ptr<string> shortName_ = nullptr;
    std::shared_ptr<string> snatchNo_ = nullptr;
    std::shared_ptr<string> snatchTypeDesc_ = nullptr;
    std::shared_ptr<int32_t> sougouAntiLink_ = nullptr;
    std::shared_ptr<int32_t> sougouIndex_ = nullptr;
    std::shared_ptr<int32_t> sougouWeight_ = nullptr;
    std::shared_ptr<string> suffix_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
