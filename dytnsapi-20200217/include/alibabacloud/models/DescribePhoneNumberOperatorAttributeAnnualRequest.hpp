// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBEROPERATORATTRIBUTEANNUALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBEROPERATORATTRIBUTEANNUALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberOperatorAttributeAnnualRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberOperatorAttributeAnnualRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(Number, number_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberOperatorAttributeAnnualRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
    };
    DescribePhoneNumberOperatorAttributeAnnualRequest() = default ;
    DescribePhoneNumberOperatorAttributeAnnualRequest(const DescribePhoneNumberOperatorAttributeAnnualRequest &) = default ;
    DescribePhoneNumberOperatorAttributeAnnualRequest(DescribePhoneNumberOperatorAttributeAnnualRequest &&) = default ;
    DescribePhoneNumberOperatorAttributeAnnualRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberOperatorAttributeAnnualRequest() = default ;
    DescribePhoneNumberOperatorAttributeAnnualRequest& operator=(const DescribePhoneNumberOperatorAttributeAnnualRequest &) = default ;
    DescribePhoneNumberOperatorAttributeAnnualRequest& operator=(DescribePhoneNumberOperatorAttributeAnnualRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->mask_ == nullptr && this->number_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    shared_ptr<string> authCode_ {};
    shared_ptr<string> mask_ {};
    shared_ptr<string> number_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
