// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYENABLEDPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYENABLEDPROTECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayEnabledProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayEnabledProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DisabledDays, disabledDays_);
      DARABONBA_PTR_TO_JSON(DisabledType, disabledType_);
      DARABONBA_PTR_TO_JSON(IsEnabledProtection, isEnabledProtection_);
      DARABONBA_PTR_TO_JSON(IsOpenButDisabled, isOpenButDisabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayEnabledProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DisabledDays, disabledDays_);
      DARABONBA_PTR_FROM_JSON(DisabledType, disabledType_);
      DARABONBA_PTR_FROM_JSON(IsEnabledProtection, isEnabledProtection_);
      DARABONBA_PTR_FROM_JSON(IsOpenButDisabled, isOpenButDisabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePostpayEnabledProtectionResponseBody() = default ;
    DescribePostpayEnabledProtectionResponseBody(const DescribePostpayEnabledProtectionResponseBody &) = default ;
    DescribePostpayEnabledProtectionResponseBody(DescribePostpayEnabledProtectionResponseBody &&) = default ;
    DescribePostpayEnabledProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayEnabledProtectionResponseBody() = default ;
    DescribePostpayEnabledProtectionResponseBody& operator=(const DescribePostpayEnabledProtectionResponseBody &) = default ;
    DescribePostpayEnabledProtectionResponseBody& operator=(DescribePostpayEnabledProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disabledDays_ == nullptr
        && this->disabledType_ == nullptr && this->isEnabledProtection_ == nullptr && this->isOpenButDisabled_ == nullptr && this->requestId_ == nullptr; };
    // disabledDays Field Functions 
    bool hasDisabledDays() const { return this->disabledDays_ != nullptr;};
    void deleteDisabledDays() { this->disabledDays_ = nullptr;};
    inline int64_t getDisabledDays() const { DARABONBA_PTR_GET_DEFAULT(disabledDays_, 0L) };
    inline DescribePostpayEnabledProtectionResponseBody& setDisabledDays(int64_t disabledDays) { DARABONBA_PTR_SET_VALUE(disabledDays_, disabledDays) };


    // disabledType Field Functions 
    bool hasDisabledType() const { return this->disabledType_ != nullptr;};
    void deleteDisabledType() { this->disabledType_ = nullptr;};
    inline string getDisabledType() const { DARABONBA_PTR_GET_DEFAULT(disabledType_, "") };
    inline DescribePostpayEnabledProtectionResponseBody& setDisabledType(string disabledType) { DARABONBA_PTR_SET_VALUE(disabledType_, disabledType) };


    // isEnabledProtection Field Functions 
    bool hasIsEnabledProtection() const { return this->isEnabledProtection_ != nullptr;};
    void deleteIsEnabledProtection() { this->isEnabledProtection_ = nullptr;};
    inline bool getIsEnabledProtection() const { DARABONBA_PTR_GET_DEFAULT(isEnabledProtection_, false) };
    inline DescribePostpayEnabledProtectionResponseBody& setIsEnabledProtection(bool isEnabledProtection) { DARABONBA_PTR_SET_VALUE(isEnabledProtection_, isEnabledProtection) };


    // isOpenButDisabled Field Functions 
    bool hasIsOpenButDisabled() const { return this->isOpenButDisabled_ != nullptr;};
    void deleteIsOpenButDisabled() { this->isOpenButDisabled_ = nullptr;};
    inline bool getIsOpenButDisabled() const { DARABONBA_PTR_GET_DEFAULT(isOpenButDisabled_, false) };
    inline DescribePostpayEnabledProtectionResponseBody& setIsOpenButDisabled(bool isOpenButDisabled) { DARABONBA_PTR_SET_VALUE(isOpenButDisabled_, isOpenButDisabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostpayEnabledProtectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> disabledDays_ {};
    shared_ptr<string> disabledType_ {};
    shared_ptr<bool> isEnabledProtection_ {};
    shared_ptr<bool> isOpenButDisabled_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
