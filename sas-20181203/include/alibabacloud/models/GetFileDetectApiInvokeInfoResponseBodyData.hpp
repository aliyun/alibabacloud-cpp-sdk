// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTAPIINVOKEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTAPIINVOKEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectApiInvokeInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectApiInvokeInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCount, authCount_);
      DARABONBA_PTR_TO_JSON(AuthCountInSaleVersion, authCountInSaleVersion_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(FlowRate, flowRate_);
      DARABONBA_PTR_TO_JSON(InvokeCount, invokeCount_);
      DARABONBA_PTR_TO_JSON(InvokeCountInSaleVersion, invokeCountInSaleVersion_);
      DARABONBA_PTR_TO_JSON(RemainAuthCount, remainAuthCount_);
      DARABONBA_PTR_TO_JSON(SaleVersion, saleVersion_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectApiInvokeInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCount, authCount_);
      DARABONBA_PTR_FROM_JSON(AuthCountInSaleVersion, authCountInSaleVersion_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(FlowRate, flowRate_);
      DARABONBA_PTR_FROM_JSON(InvokeCount, invokeCount_);
      DARABONBA_PTR_FROM_JSON(InvokeCountInSaleVersion, invokeCountInSaleVersion_);
      DARABONBA_PTR_FROM_JSON(RemainAuthCount, remainAuthCount_);
      DARABONBA_PTR_FROM_JSON(SaleVersion, saleVersion_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
    };
    GetFileDetectApiInvokeInfoResponseBodyData() = default ;
    GetFileDetectApiInvokeInfoResponseBodyData(const GetFileDetectApiInvokeInfoResponseBodyData &) = default ;
    GetFileDetectApiInvokeInfoResponseBodyData(GetFileDetectApiInvokeInfoResponseBodyData &&) = default ;
    GetFileDetectApiInvokeInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectApiInvokeInfoResponseBodyData() = default ;
    GetFileDetectApiInvokeInfoResponseBodyData& operator=(const GetFileDetectApiInvokeInfoResponseBodyData &) = default ;
    GetFileDetectApiInvokeInfoResponseBodyData& operator=(GetFileDetectApiInvokeInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authCount_ != nullptr
        && this->authCountInSaleVersion_ != nullptr && this->expire_ != nullptr && this->flowRate_ != nullptr && this->invokeCount_ != nullptr && this->invokeCountInSaleVersion_ != nullptr
        && this->remainAuthCount_ != nullptr && this->saleVersion_ != nullptr && this->timeUnit_ != nullptr; };
    // authCount Field Functions 
    bool hasAuthCount() const { return this->authCount_ != nullptr;};
    void deleteAuthCount() { this->authCount_ = nullptr;};
    inline int64_t authCount() const { DARABONBA_PTR_GET_DEFAULT(authCount_, 0L) };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setAuthCount(int64_t authCount) { DARABONBA_PTR_SET_VALUE(authCount_, authCount) };


    // authCountInSaleVersion Field Functions 
    bool hasAuthCountInSaleVersion() const { return this->authCountInSaleVersion_ != nullptr;};
    void deleteAuthCountInSaleVersion() { this->authCountInSaleVersion_ = nullptr;};
    inline int64_t authCountInSaleVersion() const { DARABONBA_PTR_GET_DEFAULT(authCountInSaleVersion_, 0L) };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setAuthCountInSaleVersion(int64_t authCountInSaleVersion) { DARABONBA_PTR_SET_VALUE(authCountInSaleVersion_, authCountInSaleVersion) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // flowRate Field Functions 
    bool hasFlowRate() const { return this->flowRate_ != nullptr;};
    void deleteFlowRate() { this->flowRate_ = nullptr;};
    inline int32_t flowRate() const { DARABONBA_PTR_GET_DEFAULT(flowRate_, 0) };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setFlowRate(int32_t flowRate) { DARABONBA_PTR_SET_VALUE(flowRate_, flowRate) };


    // invokeCount Field Functions 
    bool hasInvokeCount() const { return this->invokeCount_ != nullptr;};
    void deleteInvokeCount() { this->invokeCount_ = nullptr;};
    inline int64_t invokeCount() const { DARABONBA_PTR_GET_DEFAULT(invokeCount_, 0L) };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setInvokeCount(int64_t invokeCount) { DARABONBA_PTR_SET_VALUE(invokeCount_, invokeCount) };


    // invokeCountInSaleVersion Field Functions 
    bool hasInvokeCountInSaleVersion() const { return this->invokeCountInSaleVersion_ != nullptr;};
    void deleteInvokeCountInSaleVersion() { this->invokeCountInSaleVersion_ = nullptr;};
    inline int64_t invokeCountInSaleVersion() const { DARABONBA_PTR_GET_DEFAULT(invokeCountInSaleVersion_, 0L) };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setInvokeCountInSaleVersion(int64_t invokeCountInSaleVersion) { DARABONBA_PTR_SET_VALUE(invokeCountInSaleVersion_, invokeCountInSaleVersion) };


    // remainAuthCount Field Functions 
    bool hasRemainAuthCount() const { return this->remainAuthCount_ != nullptr;};
    void deleteRemainAuthCount() { this->remainAuthCount_ = nullptr;};
    inline int64_t remainAuthCount() const { DARABONBA_PTR_GET_DEFAULT(remainAuthCount_, 0L) };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setRemainAuthCount(int64_t remainAuthCount) { DARABONBA_PTR_SET_VALUE(remainAuthCount_, remainAuthCount) };


    // saleVersion Field Functions 
    bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
    void deleteSaleVersion() { this->saleVersion_ = nullptr;};
    inline int32_t saleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, 0) };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setSaleVersion(int32_t saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline GetFileDetectApiInvokeInfoResponseBodyData& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    // The total number of authorizations.
    std::shared_ptr<int64_t> authCount_ = nullptr;
    // The total number of authorizations(excluding trials).
    std::shared_ptr<int64_t> authCountInSaleVersion_ = nullptr;
    // The timestamp of the expiration date of the authorization number.
    std::shared_ptr<int64_t> expire_ = nullptr;
    // The frequency of calls.
    std::shared_ptr<int32_t> flowRate_ = nullptr;
    // The number of authorizations used.
    std::shared_ptr<int64_t> invokeCount_ = nullptr;
    // The number of authorizations used(excluding trials).
    std::shared_ptr<int64_t> invokeCountInSaleVersion_ = nullptr;
    // The number of remaining authorizations.
    std::shared_ptr<int64_t> remainAuthCount_ = nullptr;
    // The Authorized Version. Valid values include:
    // 
    // * **1:** trial version
    // * **2:** Enterprise Edition
    std::shared_ptr<int32_t> saleVersion_ = nullptr;
    // The time unit of the frequency limit. Value:
    // 
    // * **SECONDS**
    // * **MINUTES**
    std::shared_ptr<string> timeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
