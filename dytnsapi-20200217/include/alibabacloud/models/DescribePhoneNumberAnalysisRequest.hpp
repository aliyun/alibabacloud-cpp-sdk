// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(NumberType, numberType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(NumberType, numberType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribePhoneNumberAnalysisRequest() = default ;
    DescribePhoneNumberAnalysisRequest(const DescribePhoneNumberAnalysisRequest &) = default ;
    DescribePhoneNumberAnalysisRequest(DescribePhoneNumberAnalysisRequest &&) = default ;
    DescribePhoneNumberAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberAnalysisRequest() = default ;
    DescribePhoneNumberAnalysisRequest& operator=(const DescribePhoneNumberAnalysisRequest &) = default ;
    DescribePhoneNumberAnalysisRequest& operator=(DescribePhoneNumberAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->inputNumber_ == nullptr && this->mask_ == nullptr && this->numberType_ == nullptr && this->ownerId_ == nullptr && this->rate_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline DescribePhoneNumberAnalysisRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // inputNumber Field Functions 
    bool hasInputNumber() const { return this->inputNumber_ != nullptr;};
    void deleteInputNumber() { this->inputNumber_ = nullptr;};
    inline string getInputNumber() const { DARABONBA_PTR_GET_DEFAULT(inputNumber_, "") };
    inline DescribePhoneNumberAnalysisRequest& setInputNumber(string inputNumber) { DARABONBA_PTR_SET_VALUE(inputNumber_, inputNumber) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline DescribePhoneNumberAnalysisRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // numberType Field Functions 
    bool hasNumberType() const { return this->numberType_ != nullptr;};
    void deleteNumberType() { this->numberType_ = nullptr;};
    inline int64_t getNumberType() const { DARABONBA_PTR_GET_DEFAULT(numberType_, 0L) };
    inline DescribePhoneNumberAnalysisRequest& setNumberType(int64_t numberType) { DARABONBA_PTR_SET_VALUE(numberType_, numberType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePhoneNumberAnalysisRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int64_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0L) };
    inline DescribePhoneNumberAnalysisRequest& setRate(int64_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePhoneNumberAnalysisRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePhoneNumberAnalysisRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> inputNumber_ {};
    shared_ptr<string> mask_ {};
    shared_ptr<int64_t> numberType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> rate_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
