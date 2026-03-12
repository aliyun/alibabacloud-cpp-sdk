// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class CheckDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Avail, avail_);
      DARABONBA_PTR_TO_JSON(FeeCommand, feeCommand_);
      DARABONBA_PTR_TO_JSON(FeeCurrency, feeCurrency_);
      DARABONBA_PTR_TO_JSON(FeeFee, feeFee_);
      DARABONBA_PTR_TO_JSON(FeePeriod, feePeriod_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RmbFee, rmbFee_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Avail, avail_);
      DARABONBA_PTR_FROM_JSON(FeeCommand, feeCommand_);
      DARABONBA_PTR_FROM_JSON(FeeCurrency, feeCurrency_);
      DARABONBA_PTR_FROM_JSON(FeeFee, feeFee_);
      DARABONBA_PTR_FROM_JSON(FeePeriod, feePeriod_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RmbFee, rmbFee_);
    };
    CheckDomainResponseBody() = default ;
    CheckDomainResponseBody(const CheckDomainResponseBody &) = default ;
    CheckDomainResponseBody(CheckDomainResponseBody &&) = default ;
    CheckDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDomainResponseBody() = default ;
    CheckDomainResponseBody& operator=(const CheckDomainResponseBody &) = default ;
    CheckDomainResponseBody& operator=(CheckDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avail_ == nullptr
        && this->feeCommand_ == nullptr && this->feeCurrency_ == nullptr && this->feeFee_ == nullptr && this->feePeriod_ == nullptr && this->name_ == nullptr
        && this->reason_ == nullptr && this->requestId_ == nullptr && this->rmbFee_ == nullptr; };
    // avail Field Functions 
    bool hasAvail() const { return this->avail_ != nullptr;};
    void deleteAvail() { this->avail_ = nullptr;};
    inline int32_t getAvail() const { DARABONBA_PTR_GET_DEFAULT(avail_, 0) };
    inline CheckDomainResponseBody& setAvail(int32_t avail) { DARABONBA_PTR_SET_VALUE(avail_, avail) };


    // feeCommand Field Functions 
    bool hasFeeCommand() const { return this->feeCommand_ != nullptr;};
    void deleteFeeCommand() { this->feeCommand_ = nullptr;};
    inline string getFeeCommand() const { DARABONBA_PTR_GET_DEFAULT(feeCommand_, "") };
    inline CheckDomainResponseBody& setFeeCommand(string feeCommand) { DARABONBA_PTR_SET_VALUE(feeCommand_, feeCommand) };


    // feeCurrency Field Functions 
    bool hasFeeCurrency() const { return this->feeCurrency_ != nullptr;};
    void deleteFeeCurrency() { this->feeCurrency_ = nullptr;};
    inline string getFeeCurrency() const { DARABONBA_PTR_GET_DEFAULT(feeCurrency_, "") };
    inline CheckDomainResponseBody& setFeeCurrency(string feeCurrency) { DARABONBA_PTR_SET_VALUE(feeCurrency_, feeCurrency) };


    // feeFee Field Functions 
    bool hasFeeFee() const { return this->feeFee_ != nullptr;};
    void deleteFeeFee() { this->feeFee_ = nullptr;};
    inline string getFeeFee() const { DARABONBA_PTR_GET_DEFAULT(feeFee_, "") };
    inline CheckDomainResponseBody& setFeeFee(string feeFee) { DARABONBA_PTR_SET_VALUE(feeFee_, feeFee) };


    // feePeriod Field Functions 
    bool hasFeePeriod() const { return this->feePeriod_ != nullptr;};
    void deleteFeePeriod() { this->feePeriod_ = nullptr;};
    inline int32_t getFeePeriod() const { DARABONBA_PTR_GET_DEFAULT(feePeriod_, 0) };
    inline CheckDomainResponseBody& setFeePeriod(int32_t feePeriod) { DARABONBA_PTR_SET_VALUE(feePeriod_, feePeriod) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CheckDomainResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CheckDomainResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rmbFee Field Functions 
    bool hasRmbFee() const { return this->rmbFee_ != nullptr;};
    void deleteRmbFee() { this->rmbFee_ = nullptr;};
    inline string getRmbFee() const { DARABONBA_PTR_GET_DEFAULT(rmbFee_, "") };
    inline CheckDomainResponseBody& setRmbFee(string rmbFee) { DARABONBA_PTR_SET_VALUE(rmbFee_, rmbFee) };


  protected:
    shared_ptr<int32_t> avail_ {};
    shared_ptr<string> feeCommand_ {};
    shared_ptr<string> feeCurrency_ {};
    shared_ptr<string> feeFee_ {};
    shared_ptr<int32_t> feePeriod_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rmbFee_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
