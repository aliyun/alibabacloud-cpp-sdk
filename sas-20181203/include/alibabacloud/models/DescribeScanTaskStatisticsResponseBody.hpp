// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANTASKSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANTASKSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeScanTaskStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScanTaskStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DealedRiskNum, dealedRiskNum_);
      DARABONBA_PTR_TO_JSON(PersonalTaskNum, personalTaskNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalTaskNum, totalTaskNum_);
      DARABONBA_PTR_TO_JSON(UserNum, userNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScanTaskStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DealedRiskNum, dealedRiskNum_);
      DARABONBA_PTR_FROM_JSON(PersonalTaskNum, personalTaskNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalTaskNum, totalTaskNum_);
      DARABONBA_PTR_FROM_JSON(UserNum, userNum_);
    };
    DescribeScanTaskStatisticsResponseBody() = default ;
    DescribeScanTaskStatisticsResponseBody(const DescribeScanTaskStatisticsResponseBody &) = default ;
    DescribeScanTaskStatisticsResponseBody(DescribeScanTaskStatisticsResponseBody &&) = default ;
    DescribeScanTaskStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScanTaskStatisticsResponseBody() = default ;
    DescribeScanTaskStatisticsResponseBody& operator=(const DescribeScanTaskStatisticsResponseBody &) = default ;
    DescribeScanTaskStatisticsResponseBody& operator=(DescribeScanTaskStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dealedRiskNum_ == nullptr
        && return this->personalTaskNum_ == nullptr && return this->requestId_ == nullptr && return this->totalTaskNum_ == nullptr && return this->userNum_ == nullptr; };
    // dealedRiskNum Field Functions 
    bool hasDealedRiskNum() const { return this->dealedRiskNum_ != nullptr;};
    void deleteDealedRiskNum() { this->dealedRiskNum_ = nullptr;};
    inline int32_t dealedRiskNum() const { DARABONBA_PTR_GET_DEFAULT(dealedRiskNum_, 0) };
    inline DescribeScanTaskStatisticsResponseBody& setDealedRiskNum(int32_t dealedRiskNum) { DARABONBA_PTR_SET_VALUE(dealedRiskNum_, dealedRiskNum) };


    // personalTaskNum Field Functions 
    bool hasPersonalTaskNum() const { return this->personalTaskNum_ != nullptr;};
    void deletePersonalTaskNum() { this->personalTaskNum_ = nullptr;};
    inline int64_t personalTaskNum() const { DARABONBA_PTR_GET_DEFAULT(personalTaskNum_, 0L) };
    inline DescribeScanTaskStatisticsResponseBody& setPersonalTaskNum(int64_t personalTaskNum) { DARABONBA_PTR_SET_VALUE(personalTaskNum_, personalTaskNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScanTaskStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalTaskNum Field Functions 
    bool hasTotalTaskNum() const { return this->totalTaskNum_ != nullptr;};
    void deleteTotalTaskNum() { this->totalTaskNum_ = nullptr;};
    inline int64_t totalTaskNum() const { DARABONBA_PTR_GET_DEFAULT(totalTaskNum_, 0L) };
    inline DescribeScanTaskStatisticsResponseBody& setTotalTaskNum(int64_t totalTaskNum) { DARABONBA_PTR_SET_VALUE(totalTaskNum_, totalTaskNum) };


    // userNum Field Functions 
    bool hasUserNum() const { return this->userNum_ != nullptr;};
    void deleteUserNum() { this->userNum_ = nullptr;};
    inline int64_t userNum() const { DARABONBA_PTR_GET_DEFAULT(userNum_, 0L) };
    inline DescribeScanTaskStatisticsResponseBody& setUserNum(int64_t userNum) { DARABONBA_PTR_SET_VALUE(userNum_, userNum) };


  protected:
    // The number of risks that are handled for the user.
    std::shared_ptr<int32_t> dealedRiskNum_ = nullptr;
    // The total number of tasks that are created for the user.
    std::shared_ptr<int64_t> personalTaskNum_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of virus detection tasks.
    std::shared_ptr<int64_t> totalTaskNum_ = nullptr;
    // The number of risks that are detected for the user.
    std::shared_ptr<int64_t> userNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
