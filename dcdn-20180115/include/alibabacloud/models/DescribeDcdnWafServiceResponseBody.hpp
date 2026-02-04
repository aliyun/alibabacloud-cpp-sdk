// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_TO_JSON(RequestBillingType, requestBillingType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleBillingType, ruleBillingType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_FROM_JSON(RequestBillingType, requestBillingType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleBillingType, ruleBillingType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDcdnWafServiceResponseBody() = default ;
    DescribeDcdnWafServiceResponseBody(const DescribeDcdnWafServiceResponseBody &) = default ;
    DescribeDcdnWafServiceResponseBody(DescribeDcdnWafServiceResponseBody &&) = default ;
    DescribeDcdnWafServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafServiceResponseBody() = default ;
    DescribeDcdnWafServiceResponseBody& operator=(const DescribeDcdnWafServiceResponseBody &) = default ;
    DescribeDcdnWafServiceResponseBody& operator=(DescribeDcdnWafServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edition_ == nullptr
        && this->enabled_ == nullptr && this->openingTime_ == nullptr && this->requestBillingType_ == nullptr && this->requestId_ == nullptr && this->ruleBillingType_ == nullptr
        && this->status_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeDcdnWafServiceResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline DescribeDcdnWafServiceResponseBody& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // openingTime Field Functions 
    bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
    void deleteOpeningTime() { this->openingTime_ = nullptr;};
    inline string getOpeningTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, "") };
    inline DescribeDcdnWafServiceResponseBody& setOpeningTime(string openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


    // requestBillingType Field Functions 
    bool hasRequestBillingType() const { return this->requestBillingType_ != nullptr;};
    void deleteRequestBillingType() { this->requestBillingType_ = nullptr;};
    inline string getRequestBillingType() const { DARABONBA_PTR_GET_DEFAULT(requestBillingType_, "") };
    inline DescribeDcdnWafServiceResponseBody& setRequestBillingType(string requestBillingType) { DARABONBA_PTR_SET_VALUE(requestBillingType_, requestBillingType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleBillingType Field Functions 
    bool hasRuleBillingType() const { return this->ruleBillingType_ != nullptr;};
    void deleteRuleBillingType() { this->ruleBillingType_ = nullptr;};
    inline string getRuleBillingType() const { DARABONBA_PTR_GET_DEFAULT(ruleBillingType_, "") };
    inline DescribeDcdnWafServiceResponseBody& setRuleBillingType(string ruleBillingType) { DARABONBA_PTR_SET_VALUE(ruleBillingType_, ruleBillingType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnWafServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The edition of WAF.
    shared_ptr<string> edition_ {};
    // The status of WAF. Valid values:
    // 
    // *   on
    // *   off
    shared_ptr<string> enabled_ {};
    // The time when WAF was enabled.
    shared_ptr<string> openingTime_ {};
    // The metering method for requests.
    shared_ptr<string> requestBillingType_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The metering method for rules. You are charged for the number of SeCUs.
    shared_ptr<string> ruleBillingType_ {};
    // The status of WAF. Valid values:
    // 
    // *   Normal
    // *   WaitForExpire
    // *   Expired
    // *   Released
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
