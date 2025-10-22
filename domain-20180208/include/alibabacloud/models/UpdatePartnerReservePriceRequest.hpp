// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPARTNERRESERVEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPARTNERRESERVEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class UpdatePartnerReservePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePartnerReservePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BiddingId, biddingId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PartnerType, partnerType_);
      DARABONBA_PTR_TO_JSON(ReservePrice, reservePrice_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePartnerReservePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BiddingId, biddingId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PartnerType, partnerType_);
      DARABONBA_PTR_FROM_JSON(ReservePrice, reservePrice_);
    };
    UpdatePartnerReservePriceRequest() = default ;
    UpdatePartnerReservePriceRequest(const UpdatePartnerReservePriceRequest &) = default ;
    UpdatePartnerReservePriceRequest(UpdatePartnerReservePriceRequest &&) = default ;
    UpdatePartnerReservePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePartnerReservePriceRequest() = default ;
    UpdatePartnerReservePriceRequest& operator=(const UpdatePartnerReservePriceRequest &) = default ;
    UpdatePartnerReservePriceRequest& operator=(UpdatePartnerReservePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->biddingId_ == nullptr
        && return this->domainName_ == nullptr && return this->partnerType_ == nullptr && return this->reservePrice_ == nullptr; };
    // biddingId Field Functions 
    bool hasBiddingId() const { return this->biddingId_ != nullptr;};
    void deleteBiddingId() { this->biddingId_ = nullptr;};
    inline int32_t biddingId() const { DARABONBA_PTR_GET_DEFAULT(biddingId_, 0) };
    inline UpdatePartnerReservePriceRequest& setBiddingId(int32_t biddingId) { DARABONBA_PTR_SET_VALUE(biddingId_, biddingId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdatePartnerReservePriceRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // partnerType Field Functions 
    bool hasPartnerType() const { return this->partnerType_ != nullptr;};
    void deletePartnerType() { this->partnerType_ = nullptr;};
    inline string partnerType() const { DARABONBA_PTR_GET_DEFAULT(partnerType_, "") };
    inline UpdatePartnerReservePriceRequest& setPartnerType(string partnerType) { DARABONBA_PTR_SET_VALUE(partnerType_, partnerType) };


    // reservePrice Field Functions 
    bool hasReservePrice() const { return this->reservePrice_ != nullptr;};
    void deleteReservePrice() { this->reservePrice_ = nullptr;};
    inline double reservePrice() const { DARABONBA_PTR_GET_DEFAULT(reservePrice_, 0.0) };
    inline UpdatePartnerReservePriceRequest& setReservePrice(double reservePrice) { DARABONBA_PTR_SET_VALUE(reservePrice_, reservePrice) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> biddingId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> partnerType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> reservePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
