// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Buy, buy_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Indebt, indebt_);
      DARABONBA_PTR_TO_JSON(RamStatus, ramStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsStatus, slsStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Buy, buy_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Indebt, indebt_);
      DARABONBA_PTR_FROM_JSON(RamStatus, ramStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsStatus, slsStatus_);
    };
    GetOssCheckStatusResponseBody() = default ;
    GetOssCheckStatusResponseBody(const GetOssCheckStatusResponseBody &) = default ;
    GetOssCheckStatusResponseBody(GetOssCheckStatusResponseBody &&) = default ;
    GetOssCheckStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckStatusResponseBody() = default ;
    GetOssCheckStatusResponseBody& operator=(const GetOssCheckStatusResponseBody &) = default ;
    GetOssCheckStatusResponseBody& operator=(GetOssCheckStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bid_ == nullptr
        && return this->buy_ == nullptr && return this->commodityCode_ == nullptr && return this->indebt_ == nullptr && return this->ramStatus_ == nullptr && return this->requestId_ == nullptr
        && return this->slsStatus_ == nullptr; };
    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline GetOssCheckStatusResponseBody& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // buy Field Functions 
    bool hasBuy() const { return this->buy_ != nullptr;};
    void deleteBuy() { this->buy_ = nullptr;};
    inline bool buy() const { DARABONBA_PTR_GET_DEFAULT(buy_, false) };
    inline GetOssCheckStatusResponseBody& setBuy(bool buy) { DARABONBA_PTR_SET_VALUE(buy_, buy) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetOssCheckStatusResponseBody& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // indebt Field Functions 
    bool hasIndebt() const { return this->indebt_ != nullptr;};
    void deleteIndebt() { this->indebt_ = nullptr;};
    inline bool indebt() const { DARABONBA_PTR_GET_DEFAULT(indebt_, false) };
    inline GetOssCheckStatusResponseBody& setIndebt(bool indebt) { DARABONBA_PTR_SET_VALUE(indebt_, indebt) };


    // ramStatus Field Functions 
    bool hasRamStatus() const { return this->ramStatus_ != nullptr;};
    void deleteRamStatus() { this->ramStatus_ = nullptr;};
    inline string ramStatus() const { DARABONBA_PTR_GET_DEFAULT(ramStatus_, "") };
    inline GetOssCheckStatusResponseBody& setRamStatus(string ramStatus) { DARABONBA_PTR_SET_VALUE(ramStatus_, ramStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssCheckStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsStatus Field Functions 
    bool hasSlsStatus() const { return this->slsStatus_ != nullptr;};
    void deleteSlsStatus() { this->slsStatus_ = nullptr;};
    inline string slsStatus() const { DARABONBA_PTR_GET_DEFAULT(slsStatus_, "") };
    inline GetOssCheckStatusResponseBody& setSlsStatus(string slsStatus) { DARABONBA_PTR_SET_VALUE(slsStatus_, slsStatus) };


  protected:
    // Bid.
    std::shared_ptr<string> bid_ = nullptr;
    // Whether a product has been activated on Alibaba Cloud.
    std::shared_ptr<bool> buy_ = nullptr;
    // Commodity code.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // Whether there is an outstanding payment.
    std::shared_ptr<bool> indebt_ = nullptr;
    // Whether internal security is authorized.
    std::shared_ptr<string> ramStatus_ = nullptr;
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether log analysis function is authorized.
    std::shared_ptr<string> slsStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
