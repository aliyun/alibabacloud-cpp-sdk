// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWITHDCHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWITHDCHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeBandWithdChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandWithdChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandWithTypeInfo, bandWithTypeInfo_);
      DARABONBA_PTR_TO_JSON(ChargeContractType, chargeContractType_);
      DARABONBA_PTR_TO_JSON(ChargeCycleInfo, chargeCycleInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandWithdChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWithTypeInfo, bandWithTypeInfo_);
      DARABONBA_PTR_FROM_JSON(ChargeContractType, chargeContractType_);
      DARABONBA_PTR_FROM_JSON(ChargeCycleInfo, chargeCycleInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBandWithdChargeTypeResponseBody() = default ;
    DescribeBandWithdChargeTypeResponseBody(const DescribeBandWithdChargeTypeResponseBody &) = default ;
    DescribeBandWithdChargeTypeResponseBody(DescribeBandWithdChargeTypeResponseBody &&) = default ;
    DescribeBandWithdChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandWithdChargeTypeResponseBody() = default ;
    DescribeBandWithdChargeTypeResponseBody& operator=(const DescribeBandWithdChargeTypeResponseBody &) = default ;
    DescribeBandWithdChargeTypeResponseBody& operator=(DescribeBandWithdChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandWithTypeInfo_ == nullptr
        && this->chargeContractType_ == nullptr && this->chargeCycleInfo_ == nullptr && this->code_ == nullptr && this->requestId_ == nullptr; };
    // bandWithTypeInfo Field Functions 
    bool hasBandWithTypeInfo() const { return this->bandWithTypeInfo_ != nullptr;};
    void deleteBandWithTypeInfo() { this->bandWithTypeInfo_ = nullptr;};
    inline string getBandWithTypeInfo() const { DARABONBA_PTR_GET_DEFAULT(bandWithTypeInfo_, "") };
    inline DescribeBandWithdChargeTypeResponseBody& setBandWithTypeInfo(string bandWithTypeInfo) { DARABONBA_PTR_SET_VALUE(bandWithTypeInfo_, bandWithTypeInfo) };


    // chargeContractType Field Functions 
    bool hasChargeContractType() const { return this->chargeContractType_ != nullptr;};
    void deleteChargeContractType() { this->chargeContractType_ = nullptr;};
    inline string getChargeContractType() const { DARABONBA_PTR_GET_DEFAULT(chargeContractType_, "") };
    inline DescribeBandWithdChargeTypeResponseBody& setChargeContractType(string chargeContractType) { DARABONBA_PTR_SET_VALUE(chargeContractType_, chargeContractType) };


    // chargeCycleInfo Field Functions 
    bool hasChargeCycleInfo() const { return this->chargeCycleInfo_ != nullptr;};
    void deleteChargeCycleInfo() { this->chargeCycleInfo_ = nullptr;};
    inline string getChargeCycleInfo() const { DARABONBA_PTR_GET_DEFAULT(chargeCycleInfo_, "") };
    inline DescribeBandWithdChargeTypeResponseBody& setChargeCycleInfo(string chargeCycleInfo) { DARABONBA_PTR_SET_VALUE(chargeCycleInfo_, chargeCycleInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeBandWithdChargeTypeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBandWithdChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the metering method.
    shared_ptr<string> bandWithTypeInfo_ {};
    // The metering type.
    // 
    // *   ChargeByUnified: unified metering.
    // *   ChargeByGrade: differential metering.
    shared_ptr<string> chargeContractType_ {};
    // The metering cycle. Currently, this parameter is empty in the response.
    shared_ptr<string> chargeCycleInfo_ {};
    // The returned service code. A value of 0 indicates that the operation was successful.
    shared_ptr<int32_t> code_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
