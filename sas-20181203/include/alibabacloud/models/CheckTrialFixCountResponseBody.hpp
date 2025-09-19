// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTRIALFIXCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKTRIALFIXCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CheckTrialFixCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTrialFixCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanFix, canFix_);
      DARABONBA_PTR_TO_JSON(ExpendCount, expendCount_);
      DARABONBA_PTR_TO_JSON(RemainCount, remainCount_);
      DARABONBA_PTR_TO_JSON(RepairedCount, repairedCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(isTrial, isTrial_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTrialFixCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanFix, canFix_);
      DARABONBA_PTR_FROM_JSON(ExpendCount, expendCount_);
      DARABONBA_PTR_FROM_JSON(RemainCount, remainCount_);
      DARABONBA_PTR_FROM_JSON(RepairedCount, repairedCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(isTrial, isTrial_);
    };
    CheckTrialFixCountResponseBody() = default ;
    CheckTrialFixCountResponseBody(const CheckTrialFixCountResponseBody &) = default ;
    CheckTrialFixCountResponseBody(CheckTrialFixCountResponseBody &&) = default ;
    CheckTrialFixCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTrialFixCountResponseBody() = default ;
    CheckTrialFixCountResponseBody& operator=(const CheckTrialFixCountResponseBody &) = default ;
    CheckTrialFixCountResponseBody& operator=(CheckTrialFixCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canFix_ != nullptr
        && this->expendCount_ != nullptr && this->remainCount_ != nullptr && this->repairedCount_ != nullptr && this->requestId_ != nullptr && this->isTrial_ != nullptr; };
    // canFix Field Functions 
    bool hasCanFix() const { return this->canFix_ != nullptr;};
    void deleteCanFix() { this->canFix_ = nullptr;};
    inline bool canFix() const { DARABONBA_PTR_GET_DEFAULT(canFix_, false) };
    inline CheckTrialFixCountResponseBody& setCanFix(bool canFix) { DARABONBA_PTR_SET_VALUE(canFix_, canFix) };


    // expendCount Field Functions 
    bool hasExpendCount() const { return this->expendCount_ != nullptr;};
    void deleteExpendCount() { this->expendCount_ = nullptr;};
    inline int32_t expendCount() const { DARABONBA_PTR_GET_DEFAULT(expendCount_, 0) };
    inline CheckTrialFixCountResponseBody& setExpendCount(int32_t expendCount) { DARABONBA_PTR_SET_VALUE(expendCount_, expendCount) };


    // remainCount Field Functions 
    bool hasRemainCount() const { return this->remainCount_ != nullptr;};
    void deleteRemainCount() { this->remainCount_ = nullptr;};
    inline int32_t remainCount() const { DARABONBA_PTR_GET_DEFAULT(remainCount_, 0) };
    inline CheckTrialFixCountResponseBody& setRemainCount(int32_t remainCount) { DARABONBA_PTR_SET_VALUE(remainCount_, remainCount) };


    // repairedCount Field Functions 
    bool hasRepairedCount() const { return this->repairedCount_ != nullptr;};
    void deleteRepairedCount() { this->repairedCount_ = nullptr;};
    inline int32_t repairedCount() const { DARABONBA_PTR_GET_DEFAULT(repairedCount_, 0) };
    inline CheckTrialFixCountResponseBody& setRepairedCount(int32_t repairedCount) { DARABONBA_PTR_SET_VALUE(repairedCount_, repairedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckTrialFixCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool isTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline CheckTrialFixCountResponseBody& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


  protected:
    // Indicates whether the vulnerability can be fixed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canFix_ = nullptr;
    // The quota usage required for the current fix operation.
    std::shared_ptr<int32_t> expendCount_ = nullptr;
    // The quota that remains after the current fix operation is complete.
    std::shared_ptr<int32_t> remainCount_ = nullptr;
    // The number of the vulnerabilities that are fixed.
    std::shared_ptr<int32_t> repairedCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether Security Center is in free trial. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isTrial_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
