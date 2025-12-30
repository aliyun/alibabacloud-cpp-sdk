// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPORTDOMAINEXPIRESNATCHSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPORTDOMAINEXPIRESNATCHSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryExportDomainExpireSnatchsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExportDomainExpireSnatchsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExportDomainExpireSnatchsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryExportDomainExpireSnatchsResponseBody() = default ;
    QueryExportDomainExpireSnatchsResponseBody(const QueryExportDomainExpireSnatchsResponseBody &) = default ;
    QueryExportDomainExpireSnatchsResponseBody(QueryExportDomainExpireSnatchsResponseBody &&) = default ;
    QueryExportDomainExpireSnatchsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExportDomainExpireSnatchsResponseBody() = default ;
    QueryExportDomainExpireSnatchsResponseBody& operator=(const QueryExportDomainExpireSnatchsResponseBody &) = default ;
    QueryExportDomainExpireSnatchsResponseBody& operator=(QueryExportDomainExpireSnatchsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auctionEndTime_ == nullptr
        && this->auctionRemainingSeconds_ == nullptr && this->baiduAntiLink_ == nullptr && this->baiduExLink_ == nullptr && this->baiduIndex_ == nullptr && this->baiduWeight_ == nullptr
        && this->bookEndTime_ == nullptr && this->bookRemainingSeconds_ == nullptr && this->bookedNum_ == nullptr && this->bookedPartners_ == nullptr && this->constitute_ == nullptr
        && this->currencyType_ == nullptr && this->deliveryTime_ == nullptr && this->domainId_ == nullptr && this->domainLen_ == nullptr && this->domainName_ == nullptr
        && this->domainType_ == nullptr && this->endDate_ == nullptr && this->expireDate_ == nullptr && this->extend_ == nullptr && this->freezeAmount_ == nullptr
        && this->icpNumber_ == nullptr && this->icpStatus_ == nullptr && this->introduction_ == nullptr && this->isPremium_ == nullptr && this->partnerTypes_ == nullptr
        && this->price_ == nullptr && this->productId_ == nullptr && this->publishTime_ == nullptr && this->regDate_ == nullptr && this->registrar_ == nullptr
        && this->renewPrice_ == nullptr && this->reserved_ == nullptr && this->rmbPrice_ == nullptr && this->s360Weight_ == nullptr && this->seoAttributes_ == nullptr
        && this->shortName_ == nullptr && this->snatchNo_ == nullptr && this->snatchTypeDesc_ == nullptr && this->sougouAntiLink_ == nullptr && this->sougouIndex_ == nullptr
        && this->sougouWeight_ == nullptr && this->suffix_ == nullptr && this->weight_ == nullptr; };
      // auctionEndTime Field Functions 
      bool hasAuctionEndTime() const { return this->auctionEndTime_ != nullptr;};
      void deleteAuctionEndTime() { this->auctionEndTime_ = nullptr;};
      inline string getAuctionEndTime() const { DARABONBA_PTR_GET_DEFAULT(auctionEndTime_, "") };
      inline Data& setAuctionEndTime(string auctionEndTime) { DARABONBA_PTR_SET_VALUE(auctionEndTime_, auctionEndTime) };


      // auctionRemainingSeconds Field Functions 
      bool hasAuctionRemainingSeconds() const { return this->auctionRemainingSeconds_ != nullptr;};
      void deleteAuctionRemainingSeconds() { this->auctionRemainingSeconds_ = nullptr;};
      inline int64_t getAuctionRemainingSeconds() const { DARABONBA_PTR_GET_DEFAULT(auctionRemainingSeconds_, 0L) };
      inline Data& setAuctionRemainingSeconds(int64_t auctionRemainingSeconds) { DARABONBA_PTR_SET_VALUE(auctionRemainingSeconds_, auctionRemainingSeconds) };


      // baiduAntiLink Field Functions 
      bool hasBaiduAntiLink() const { return this->baiduAntiLink_ != nullptr;};
      void deleteBaiduAntiLink() { this->baiduAntiLink_ = nullptr;};
      inline int32_t getBaiduAntiLink() const { DARABONBA_PTR_GET_DEFAULT(baiduAntiLink_, 0) };
      inline Data& setBaiduAntiLink(int32_t baiduAntiLink) { DARABONBA_PTR_SET_VALUE(baiduAntiLink_, baiduAntiLink) };


      // baiduExLink Field Functions 
      bool hasBaiduExLink() const { return this->baiduExLink_ != nullptr;};
      void deleteBaiduExLink() { this->baiduExLink_ = nullptr;};
      inline int32_t getBaiduExLink() const { DARABONBA_PTR_GET_DEFAULT(baiduExLink_, 0) };
      inline Data& setBaiduExLink(int32_t baiduExLink) { DARABONBA_PTR_SET_VALUE(baiduExLink_, baiduExLink) };


      // baiduIndex Field Functions 
      bool hasBaiduIndex() const { return this->baiduIndex_ != nullptr;};
      void deleteBaiduIndex() { this->baiduIndex_ = nullptr;};
      inline int32_t getBaiduIndex() const { DARABONBA_PTR_GET_DEFAULT(baiduIndex_, 0) };
      inline Data& setBaiduIndex(int32_t baiduIndex) { DARABONBA_PTR_SET_VALUE(baiduIndex_, baiduIndex) };


      // baiduWeight Field Functions 
      bool hasBaiduWeight() const { return this->baiduWeight_ != nullptr;};
      void deleteBaiduWeight() { this->baiduWeight_ = nullptr;};
      inline int32_t getBaiduWeight() const { DARABONBA_PTR_GET_DEFAULT(baiduWeight_, 0) };
      inline Data& setBaiduWeight(int32_t baiduWeight) { DARABONBA_PTR_SET_VALUE(baiduWeight_, baiduWeight) };


      // bookEndTime Field Functions 
      bool hasBookEndTime() const { return this->bookEndTime_ != nullptr;};
      void deleteBookEndTime() { this->bookEndTime_ = nullptr;};
      inline string getBookEndTime() const { DARABONBA_PTR_GET_DEFAULT(bookEndTime_, "") };
      inline Data& setBookEndTime(string bookEndTime) { DARABONBA_PTR_SET_VALUE(bookEndTime_, bookEndTime) };


      // bookRemainingSeconds Field Functions 
      bool hasBookRemainingSeconds() const { return this->bookRemainingSeconds_ != nullptr;};
      void deleteBookRemainingSeconds() { this->bookRemainingSeconds_ = nullptr;};
      inline int64_t getBookRemainingSeconds() const { DARABONBA_PTR_GET_DEFAULT(bookRemainingSeconds_, 0L) };
      inline Data& setBookRemainingSeconds(int64_t bookRemainingSeconds) { DARABONBA_PTR_SET_VALUE(bookRemainingSeconds_, bookRemainingSeconds) };


      // bookedNum Field Functions 
      bool hasBookedNum() const { return this->bookedNum_ != nullptr;};
      void deleteBookedNum() { this->bookedNum_ = nullptr;};
      inline int32_t getBookedNum() const { DARABONBA_PTR_GET_DEFAULT(bookedNum_, 0) };
      inline Data& setBookedNum(int32_t bookedNum) { DARABONBA_PTR_SET_VALUE(bookedNum_, bookedNum) };


      // bookedPartners Field Functions 
      bool hasBookedPartners() const { return this->bookedPartners_ != nullptr;};
      void deleteBookedPartners() { this->bookedPartners_ = nullptr;};
      inline string getBookedPartners() const { DARABONBA_PTR_GET_DEFAULT(bookedPartners_, "") };
      inline Data& setBookedPartners(string bookedPartners) { DARABONBA_PTR_SET_VALUE(bookedPartners_, bookedPartners) };


      // constitute Field Functions 
      bool hasConstitute() const { return this->constitute_ != nullptr;};
      void deleteConstitute() { this->constitute_ = nullptr;};
      inline string getConstitute() const { DARABONBA_PTR_GET_DEFAULT(constitute_, "") };
      inline Data& setConstitute(string constitute) { DARABONBA_PTR_SET_VALUE(constitute_, constitute) };


      // currencyType Field Functions 
      bool hasCurrencyType() const { return this->currencyType_ != nullptr;};
      void deleteCurrencyType() { this->currencyType_ = nullptr;};
      inline string getCurrencyType() const { DARABONBA_PTR_GET_DEFAULT(currencyType_, "") };
      inline Data& setCurrencyType(string currencyType) { DARABONBA_PTR_SET_VALUE(currencyType_, currencyType) };


      // deliveryTime Field Functions 
      bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
      void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
      inline string getDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
      inline Data& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Data& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // domainLen Field Functions 
      bool hasDomainLen() const { return this->domainLen_ != nullptr;};
      void deleteDomainLen() { this->domainLen_ = nullptr;};
      inline int32_t getDomainLen() const { DARABONBA_PTR_GET_DEFAULT(domainLen_, 0) };
      inline Data& setDomainLen(int32_t domainLen) { DARABONBA_PTR_SET_VALUE(domainLen_, domainLen) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline Data& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline Data& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline Data& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // freezeAmount Field Functions 
      bool hasFreezeAmount() const { return this->freezeAmount_ != nullptr;};
      void deleteFreezeAmount() { this->freezeAmount_ = nullptr;};
      inline double getFreezeAmount() const { DARABONBA_PTR_GET_DEFAULT(freezeAmount_, 0.0) };
      inline Data& setFreezeAmount(double freezeAmount) { DARABONBA_PTR_SET_VALUE(freezeAmount_, freezeAmount) };


      // icpNumber Field Functions 
      bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
      void deleteIcpNumber() { this->icpNumber_ = nullptr;};
      inline string getIcpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
      inline Data& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


      // icpStatus Field Functions 
      bool hasIcpStatus() const { return this->icpStatus_ != nullptr;};
      void deleteIcpStatus() { this->icpStatus_ = nullptr;};
      inline bool getIcpStatus() const { DARABONBA_PTR_GET_DEFAULT(icpStatus_, false) };
      inline Data& setIcpStatus(bool icpStatus) { DARABONBA_PTR_SET_VALUE(icpStatus_, icpStatus) };


      // introduction Field Functions 
      bool hasIntroduction() const { return this->introduction_ != nullptr;};
      void deleteIntroduction() { this->introduction_ = nullptr;};
      inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
      inline Data& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


      // isPremium Field Functions 
      bool hasIsPremium() const { return this->isPremium_ != nullptr;};
      void deleteIsPremium() { this->isPremium_ = nullptr;};
      inline bool getIsPremium() const { DARABONBA_PTR_GET_DEFAULT(isPremium_, false) };
      inline Data& setIsPremium(bool isPremium) { DARABONBA_PTR_SET_VALUE(isPremium_, isPremium) };


      // partnerTypes Field Functions 
      bool hasPartnerTypes() const { return this->partnerTypes_ != nullptr;};
      void deletePartnerTypes() { this->partnerTypes_ = nullptr;};
      inline string getPartnerTypes() const { DARABONBA_PTR_GET_DEFAULT(partnerTypes_, "") };
      inline Data& setPartnerTypes(string partnerTypes) { DARABONBA_PTR_SET_VALUE(partnerTypes_, partnerTypes) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline Data& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Data& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline Data& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // regDate Field Functions 
      bool hasRegDate() const { return this->regDate_ != nullptr;};
      void deleteRegDate() { this->regDate_ = nullptr;};
      inline string getRegDate() const { DARABONBA_PTR_GET_DEFAULT(regDate_, "") };
      inline Data& setRegDate(string regDate) { DARABONBA_PTR_SET_VALUE(regDate_, regDate) };


      // registrar Field Functions 
      bool hasRegistrar() const { return this->registrar_ != nullptr;};
      void deleteRegistrar() { this->registrar_ = nullptr;};
      inline string getRegistrar() const { DARABONBA_PTR_GET_DEFAULT(registrar_, "") };
      inline Data& setRegistrar(string registrar) { DARABONBA_PTR_SET_VALUE(registrar_, registrar) };


      // renewPrice Field Functions 
      bool hasRenewPrice() const { return this->renewPrice_ != nullptr;};
      void deleteRenewPrice() { this->renewPrice_ = nullptr;};
      inline double getRenewPrice() const { DARABONBA_PTR_GET_DEFAULT(renewPrice_, 0.0) };
      inline Data& setRenewPrice(double renewPrice) { DARABONBA_PTR_SET_VALUE(renewPrice_, renewPrice) };


      // reserved Field Functions 
      bool hasReserved() const { return this->reserved_ != nullptr;};
      void deleteReserved() { this->reserved_ = nullptr;};
      inline bool getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, false) };
      inline Data& setReserved(bool reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


      // rmbPrice Field Functions 
      bool hasRmbPrice() const { return this->rmbPrice_ != nullptr;};
      void deleteRmbPrice() { this->rmbPrice_ = nullptr;};
      inline double getRmbPrice() const { DARABONBA_PTR_GET_DEFAULT(rmbPrice_, 0.0) };
      inline Data& setRmbPrice(double rmbPrice) { DARABONBA_PTR_SET_VALUE(rmbPrice_, rmbPrice) };


      // s360Weight Field Functions 
      bool hasS360Weight() const { return this->s360Weight_ != nullptr;};
      void deleteS360Weight() { this->s360Weight_ = nullptr;};
      inline int32_t getS360Weight() const { DARABONBA_PTR_GET_DEFAULT(s360Weight_, 0) };
      inline Data& setS360Weight(int32_t s360Weight) { DARABONBA_PTR_SET_VALUE(s360Weight_, s360Weight) };


      // seoAttributes Field Functions 
      bool hasSeoAttributes() const { return this->seoAttributes_ != nullptr;};
      void deleteSeoAttributes() { this->seoAttributes_ = nullptr;};
      inline string getSeoAttributes() const { DARABONBA_PTR_GET_DEFAULT(seoAttributes_, "") };
      inline Data& setSeoAttributes(string seoAttributes) { DARABONBA_PTR_SET_VALUE(seoAttributes_, seoAttributes) };


      // shortName Field Functions 
      bool hasShortName() const { return this->shortName_ != nullptr;};
      void deleteShortName() { this->shortName_ = nullptr;};
      inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
      inline Data& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


      // snatchNo Field Functions 
      bool hasSnatchNo() const { return this->snatchNo_ != nullptr;};
      void deleteSnatchNo() { this->snatchNo_ = nullptr;};
      inline string getSnatchNo() const { DARABONBA_PTR_GET_DEFAULT(snatchNo_, "") };
      inline Data& setSnatchNo(string snatchNo) { DARABONBA_PTR_SET_VALUE(snatchNo_, snatchNo) };


      // snatchTypeDesc Field Functions 
      bool hasSnatchTypeDesc() const { return this->snatchTypeDesc_ != nullptr;};
      void deleteSnatchTypeDesc() { this->snatchTypeDesc_ = nullptr;};
      inline string getSnatchTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(snatchTypeDesc_, "") };
      inline Data& setSnatchTypeDesc(string snatchTypeDesc) { DARABONBA_PTR_SET_VALUE(snatchTypeDesc_, snatchTypeDesc) };


      // sougouAntiLink Field Functions 
      bool hasSougouAntiLink() const { return this->sougouAntiLink_ != nullptr;};
      void deleteSougouAntiLink() { this->sougouAntiLink_ = nullptr;};
      inline int32_t getSougouAntiLink() const { DARABONBA_PTR_GET_DEFAULT(sougouAntiLink_, 0) };
      inline Data& setSougouAntiLink(int32_t sougouAntiLink) { DARABONBA_PTR_SET_VALUE(sougouAntiLink_, sougouAntiLink) };


      // sougouIndex Field Functions 
      bool hasSougouIndex() const { return this->sougouIndex_ != nullptr;};
      void deleteSougouIndex() { this->sougouIndex_ = nullptr;};
      inline int32_t getSougouIndex() const { DARABONBA_PTR_GET_DEFAULT(sougouIndex_, 0) };
      inline Data& setSougouIndex(int32_t sougouIndex) { DARABONBA_PTR_SET_VALUE(sougouIndex_, sougouIndex) };


      // sougouWeight Field Functions 
      bool hasSougouWeight() const { return this->sougouWeight_ != nullptr;};
      void deleteSougouWeight() { this->sougouWeight_ = nullptr;};
      inline int32_t getSougouWeight() const { DARABONBA_PTR_GET_DEFAULT(sougouWeight_, 0) };
      inline Data& setSougouWeight(int32_t sougouWeight) { DARABONBA_PTR_SET_VALUE(sougouWeight_, sougouWeight) };


      // suffix Field Functions 
      bool hasSuffix() const { return this->suffix_ != nullptr;};
      void deleteSuffix() { this->suffix_ = nullptr;};
      inline string getSuffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
      inline Data& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Data& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> auctionEndTime_ {};
      shared_ptr<int64_t> auctionRemainingSeconds_ {};
      shared_ptr<int32_t> baiduAntiLink_ {};
      shared_ptr<int32_t> baiduExLink_ {};
      shared_ptr<int32_t> baiduIndex_ {};
      shared_ptr<int32_t> baiduWeight_ {};
      shared_ptr<string> bookEndTime_ {};
      shared_ptr<int64_t> bookRemainingSeconds_ {};
      shared_ptr<int32_t> bookedNum_ {};
      shared_ptr<string> bookedPartners_ {};
      shared_ptr<string> constitute_ {};
      shared_ptr<string> currencyType_ {};
      shared_ptr<string> deliveryTime_ {};
      shared_ptr<string> domainId_ {};
      shared_ptr<int32_t> domainLen_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> domainType_ {};
      shared_ptr<string> endDate_ {};
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
      shared_ptr<double> renewPrice_ {};
      shared_ptr<bool> reserved_ {};
      shared_ptr<double> rmbPrice_ {};
      shared_ptr<int32_t> s360Weight_ {};
      shared_ptr<string> seoAttributes_ {};
      shared_ptr<string> shortName_ {};
      shared_ptr<string> snatchNo_ {};
      shared_ptr<string> snatchTypeDesc_ {};
      shared_ptr<int32_t> sougouAntiLink_ {};
      shared_ptr<int32_t> sougouIndex_ {};
      shared_ptr<int32_t> sougouWeight_ {};
      shared_ptr<string> suffix_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryExportDomainExpireSnatchsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryExportDomainExpireSnatchsResponseBody::Data>) };
    inline vector<QueryExportDomainExpireSnatchsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryExportDomainExpireSnatchsResponseBody::Data>) };
    inline QueryExportDomainExpireSnatchsResponseBody& setData(const vector<QueryExportDomainExpireSnatchsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryExportDomainExpireSnatchsResponseBody& setData(vector<QueryExportDomainExpireSnatchsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryExportDomainExpireSnatchsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryExportDomainExpireSnatchsResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
