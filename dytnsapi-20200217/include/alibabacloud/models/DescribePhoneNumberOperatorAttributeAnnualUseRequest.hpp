// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBEROPERATORATTRIBUTEANNUALUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBEROPERATORATTRIBUTEANNUALUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberOperatorAttributeAnnualUseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberOperatorAttributeAnnualUseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberOperatorAttributeAnnualUseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
    };
    DescribePhoneNumberOperatorAttributeAnnualUseRequest() = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseRequest(const DescribePhoneNumberOperatorAttributeAnnualUseRequest &) = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseRequest(DescribePhoneNumberOperatorAttributeAnnualUseRequest &&) = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberOperatorAttributeAnnualUseRequest() = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseRequest& operator=(const DescribePhoneNumberOperatorAttributeAnnualUseRequest &) = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseRequest& operator=(DescribePhoneNumberOperatorAttributeAnnualUseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->inputNumber_ == nullptr && this->mask_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualUseRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // inputNumber Field Functions 
    bool hasInputNumber() const { return this->inputNumber_ != nullptr;};
    void deleteInputNumber() { this->inputNumber_ = nullptr;};
    inline string getInputNumber() const { DARABONBA_PTR_GET_DEFAULT(inputNumber_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualUseRequest& setInputNumber(string inputNumber) { DARABONBA_PTR_SET_VALUE(inputNumber_, inputNumber) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualUseRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> inputNumber_ {};
    // This parameter is required.
    shared_ptr<string> mask_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
