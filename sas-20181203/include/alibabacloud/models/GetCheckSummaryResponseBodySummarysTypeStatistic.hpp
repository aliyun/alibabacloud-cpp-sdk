// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODYSUMMARYSTYPESTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODYSUMMARYSTYPESTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckSummaryResponseBodySummarysTypeStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSummaryResponseBodySummarysTypeStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(NotCheckCount, notCheckCount_);
      DARABONBA_PTR_TO_JSON(NotCheckHighCount, notCheckHighCount_);
      DARABONBA_PTR_TO_JSON(NotCheckLowCount, notCheckLowCount_);
      DARABONBA_PTR_TO_JSON(NotCheckMediumCount, notCheckMediumCount_);
      DARABONBA_PTR_TO_JSON(NotPassCount, notPassCount_);
      DARABONBA_PTR_TO_JSON(NotPassHighCount, notPassHighCount_);
      DARABONBA_PTR_TO_JSON(NotPassLowCount, notPassLowCount_);
      DARABONBA_PTR_TO_JSON(NotPassMediumCount, notPassMediumCount_);
      DARABONBA_PTR_TO_JSON(PassCount, passCount_);
      DARABONBA_PTR_TO_JSON(PassHighCount, passHighCount_);
      DARABONBA_PTR_TO_JSON(PassLowCount, passLowCount_);
      DARABONBA_PTR_TO_JSON(PassMediumCount, passMediumCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSummaryResponseBodySummarysTypeStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(NotCheckCount, notCheckCount_);
      DARABONBA_PTR_FROM_JSON(NotCheckHighCount, notCheckHighCount_);
      DARABONBA_PTR_FROM_JSON(NotCheckLowCount, notCheckLowCount_);
      DARABONBA_PTR_FROM_JSON(NotCheckMediumCount, notCheckMediumCount_);
      DARABONBA_PTR_FROM_JSON(NotPassCount, notPassCount_);
      DARABONBA_PTR_FROM_JSON(NotPassHighCount, notPassHighCount_);
      DARABONBA_PTR_FROM_JSON(NotPassLowCount, notPassLowCount_);
      DARABONBA_PTR_FROM_JSON(NotPassMediumCount, notPassMediumCount_);
      DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
      DARABONBA_PTR_FROM_JSON(PassHighCount, passHighCount_);
      DARABONBA_PTR_FROM_JSON(PassLowCount, passLowCount_);
      DARABONBA_PTR_FROM_JSON(PassMediumCount, passMediumCount_);
    };
    GetCheckSummaryResponseBodySummarysTypeStatistic() = default ;
    GetCheckSummaryResponseBodySummarysTypeStatistic(const GetCheckSummaryResponseBodySummarysTypeStatistic &) = default ;
    GetCheckSummaryResponseBodySummarysTypeStatistic(GetCheckSummaryResponseBodySummarysTypeStatistic &&) = default ;
    GetCheckSummaryResponseBodySummarysTypeStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSummaryResponseBodySummarysTypeStatistic() = default ;
    GetCheckSummaryResponseBodySummarysTypeStatistic& operator=(const GetCheckSummaryResponseBodySummarysTypeStatistic &) = default ;
    GetCheckSummaryResponseBodySummarysTypeStatistic& operator=(GetCheckSummaryResponseBodySummarysTypeStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notCheckCount_ == nullptr
        && return this->notCheckHighCount_ == nullptr && return this->notCheckLowCount_ == nullptr && return this->notCheckMediumCount_ == nullptr && return this->notPassCount_ == nullptr && return this->notPassHighCount_ == nullptr
        && return this->notPassLowCount_ == nullptr && return this->notPassMediumCount_ == nullptr && return this->passCount_ == nullptr && return this->passHighCount_ == nullptr && return this->passLowCount_ == nullptr
        && return this->passMediumCount_ == nullptr; };
    // notCheckCount Field Functions 
    bool hasNotCheckCount() const { return this->notCheckCount_ != nullptr;};
    void deleteNotCheckCount() { this->notCheckCount_ = nullptr;};
    inline int32_t notCheckCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setNotCheckCount(int32_t notCheckCount) { DARABONBA_PTR_SET_VALUE(notCheckCount_, notCheckCount) };


    // notCheckHighCount Field Functions 
    bool hasNotCheckHighCount() const { return this->notCheckHighCount_ != nullptr;};
    void deleteNotCheckHighCount() { this->notCheckHighCount_ = nullptr;};
    inline int32_t notCheckHighCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckHighCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setNotCheckHighCount(int32_t notCheckHighCount) { DARABONBA_PTR_SET_VALUE(notCheckHighCount_, notCheckHighCount) };


    // notCheckLowCount Field Functions 
    bool hasNotCheckLowCount() const { return this->notCheckLowCount_ != nullptr;};
    void deleteNotCheckLowCount() { this->notCheckLowCount_ = nullptr;};
    inline int32_t notCheckLowCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckLowCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setNotCheckLowCount(int32_t notCheckLowCount) { DARABONBA_PTR_SET_VALUE(notCheckLowCount_, notCheckLowCount) };


    // notCheckMediumCount Field Functions 
    bool hasNotCheckMediumCount() const { return this->notCheckMediumCount_ != nullptr;};
    void deleteNotCheckMediumCount() { this->notCheckMediumCount_ = nullptr;};
    inline int32_t notCheckMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckMediumCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setNotCheckMediumCount(int32_t notCheckMediumCount) { DARABONBA_PTR_SET_VALUE(notCheckMediumCount_, notCheckMediumCount) };


    // notPassCount Field Functions 
    bool hasNotPassCount() const { return this->notPassCount_ != nullptr;};
    void deleteNotPassCount() { this->notPassCount_ = nullptr;};
    inline int32_t notPassCount() const { DARABONBA_PTR_GET_DEFAULT(notPassCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setNotPassCount(int32_t notPassCount) { DARABONBA_PTR_SET_VALUE(notPassCount_, notPassCount) };


    // notPassHighCount Field Functions 
    bool hasNotPassHighCount() const { return this->notPassHighCount_ != nullptr;};
    void deleteNotPassHighCount() { this->notPassHighCount_ = nullptr;};
    inline int32_t notPassHighCount() const { DARABONBA_PTR_GET_DEFAULT(notPassHighCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setNotPassHighCount(int32_t notPassHighCount) { DARABONBA_PTR_SET_VALUE(notPassHighCount_, notPassHighCount) };


    // notPassLowCount Field Functions 
    bool hasNotPassLowCount() const { return this->notPassLowCount_ != nullptr;};
    void deleteNotPassLowCount() { this->notPassLowCount_ = nullptr;};
    inline int32_t notPassLowCount() const { DARABONBA_PTR_GET_DEFAULT(notPassLowCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setNotPassLowCount(int32_t notPassLowCount) { DARABONBA_PTR_SET_VALUE(notPassLowCount_, notPassLowCount) };


    // notPassMediumCount Field Functions 
    bool hasNotPassMediumCount() const { return this->notPassMediumCount_ != nullptr;};
    void deleteNotPassMediumCount() { this->notPassMediumCount_ = nullptr;};
    inline int32_t notPassMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notPassMediumCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setNotPassMediumCount(int32_t notPassMediumCount) { DARABONBA_PTR_SET_VALUE(notPassMediumCount_, notPassMediumCount) };


    // passCount Field Functions 
    bool hasPassCount() const { return this->passCount_ != nullptr;};
    void deletePassCount() { this->passCount_ = nullptr;};
    inline int32_t passCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


    // passHighCount Field Functions 
    bool hasPassHighCount() const { return this->passHighCount_ != nullptr;};
    void deletePassHighCount() { this->passHighCount_ = nullptr;};
    inline int32_t passHighCount() const { DARABONBA_PTR_GET_DEFAULT(passHighCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setPassHighCount(int32_t passHighCount) { DARABONBA_PTR_SET_VALUE(passHighCount_, passHighCount) };


    // passLowCount Field Functions 
    bool hasPassLowCount() const { return this->passLowCount_ != nullptr;};
    void deletePassLowCount() { this->passLowCount_ = nullptr;};
    inline int32_t passLowCount() const { DARABONBA_PTR_GET_DEFAULT(passLowCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setPassLowCount(int32_t passLowCount) { DARABONBA_PTR_SET_VALUE(passLowCount_, passLowCount) };


    // passMediumCount Field Functions 
    bool hasPassMediumCount() const { return this->passMediumCount_ != nullptr;};
    void deletePassMediumCount() { this->passMediumCount_ = nullptr;};
    inline int32_t passMediumCount() const { DARABONBA_PTR_GET_DEFAULT(passMediumCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysTypeStatistic& setPassMediumCount(int32_t passMediumCount) { DARABONBA_PTR_SET_VALUE(passMediumCount_, passMediumCount) };


  protected:
    // The number of unchecked check items.
    std::shared_ptr<int32_t> notCheckCount_ = nullptr;
    // The number of unchecked high-risk check items.
    std::shared_ptr<int32_t> notCheckHighCount_ = nullptr;
    // The number of unchecked low-risk check items.
    std::shared_ptr<int32_t> notCheckLowCount_ = nullptr;
    // The number of unchecked medium-risk check items.
    std::shared_ptr<int32_t> notCheckMediumCount_ = nullptr;
    // The number of check items that failed to pass the check.
    std::shared_ptr<int32_t> notPassCount_ = nullptr;
    // The number of high-risk check items that failed to pass the check.
    std::shared_ptr<int32_t> notPassHighCount_ = nullptr;
    // The number of low-risk check items that failed to pass the check.
    std::shared_ptr<int32_t> notPassLowCount_ = nullptr;
    // The number of medium-risk check items that failed to pass the check.
    std::shared_ptr<int32_t> notPassMediumCount_ = nullptr;
    // The number of check items that pass the check.
    std::shared_ptr<int32_t> passCount_ = nullptr;
    // The number of high-risk check items that pass the check.
    std::shared_ptr<int32_t> passHighCount_ = nullptr;
    // The number of low-risk check items that pass the check.
    std::shared_ptr<int32_t> passLowCount_ = nullptr;
    // The number of medium-risk check items that pass the check.
    std::shared_ptr<int32_t> passMediumCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
