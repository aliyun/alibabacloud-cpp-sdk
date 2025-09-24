// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERESELLERCONSUMEAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGERESELLERCONSUMEAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ChangeResellerConsumeAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeResellerConsumeAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustType, adjustType_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(ExtendMap, extendMap_);
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeResellerConsumeAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustType, adjustType_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(ExtendMap, extendMap_);
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ChangeResellerConsumeAmountRequest() = default ;
    ChangeResellerConsumeAmountRequest(const ChangeResellerConsumeAmountRequest &) = default ;
    ChangeResellerConsumeAmountRequest(ChangeResellerConsumeAmountRequest &&) = default ;
    ChangeResellerConsumeAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeResellerConsumeAmountRequest() = default ;
    ChangeResellerConsumeAmountRequest& operator=(const ChangeResellerConsumeAmountRequest &) = default ;
    ChangeResellerConsumeAmountRequest& operator=(ChangeResellerConsumeAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustType_ != nullptr
        && this->amount_ != nullptr && this->businessType_ != nullptr && this->currency_ != nullptr && this->extendMap_ != nullptr && this->outBizId_ != nullptr
        && this->ownerId_ != nullptr && this->source_ != nullptr; };
    // adjustType Field Functions 
    bool hasAdjustType() const { return this->adjustType_ != nullptr;};
    void deleteAdjustType() { this->adjustType_ = nullptr;};
    inline string adjustType() const { DARABONBA_PTR_GET_DEFAULT(adjustType_, "") };
    inline ChangeResellerConsumeAmountRequest& setAdjustType(string adjustType) { DARABONBA_PTR_SET_VALUE(adjustType_, adjustType) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline ChangeResellerConsumeAmountRequest& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ChangeResellerConsumeAmountRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline ChangeResellerConsumeAmountRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // extendMap Field Functions 
    bool hasExtendMap() const { return this->extendMap_ != nullptr;};
    void deleteExtendMap() { this->extendMap_ = nullptr;};
    inline string extendMap() const { DARABONBA_PTR_GET_DEFAULT(extendMap_, "") };
    inline ChangeResellerConsumeAmountRequest& setExtendMap(string extendMap) { DARABONBA_PTR_SET_VALUE(extendMap_, extendMap) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline ChangeResellerConsumeAmountRequest& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ChangeResellerConsumeAmountRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ChangeResellerConsumeAmountRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The type of the consumption amount adjustment. Valid values: increase: The consumption amount increases because new consumption occurs. decrease: The consumption amount decreases because funds are added to the account. This parameter is required.
    // 
    // This parameter is required.
    std::shared_ptr<string> adjustType_ = nullptr;
    // The amount to be adjusted. Unit: CNY
    // 
    // This parameter is required.
    std::shared_ptr<string> amount_ = nullptr;
    // The type of the business.
    // 
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    // The type of the currency.
    // 
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    // The extended field of a message.
    std::shared_ptr<string> extendMap_ = nullptr;
    // The ID of the primary key for external business. The ID is used for idempotence verification.
    // 
    // This parameter is required.
    std::shared_ptr<string> outBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The source of the request. Specify the system name for the parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
