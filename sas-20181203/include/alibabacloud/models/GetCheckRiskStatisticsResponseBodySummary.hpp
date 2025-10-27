// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODYSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODYSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckRiskStatisticsResponseBodySummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckRiskStatisticsResponseBodySummary& obj) { 
      DARABONBA_PTR_TO_JSON(HandledCheckToday, handledCheckToday_);
      DARABONBA_PTR_TO_JSON(HandledCheckTotal, handledCheckTotal_);
      DARABONBA_PTR_TO_JSON(HandledDays, handledDays_);
      DARABONBA_PTR_TO_JSON(RiskCheckCnt, riskCheckCnt_);
      DARABONBA_PTR_TO_JSON(RiskDays, riskDays_);
      DARABONBA_PTR_TO_JSON(RiskWarningCnt, riskWarningCnt_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckRiskStatisticsResponseBodySummary& obj) { 
      DARABONBA_PTR_FROM_JSON(HandledCheckToday, handledCheckToday_);
      DARABONBA_PTR_FROM_JSON(HandledCheckTotal, handledCheckTotal_);
      DARABONBA_PTR_FROM_JSON(HandledDays, handledDays_);
      DARABONBA_PTR_FROM_JSON(RiskCheckCnt, riskCheckCnt_);
      DARABONBA_PTR_FROM_JSON(RiskDays, riskDays_);
      DARABONBA_PTR_FROM_JSON(RiskWarningCnt, riskWarningCnt_);
    };
    GetCheckRiskStatisticsResponseBodySummary() = default ;
    GetCheckRiskStatisticsResponseBodySummary(const GetCheckRiskStatisticsResponseBodySummary &) = default ;
    GetCheckRiskStatisticsResponseBodySummary(GetCheckRiskStatisticsResponseBodySummary &&) = default ;
    GetCheckRiskStatisticsResponseBodySummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckRiskStatisticsResponseBodySummary() = default ;
    GetCheckRiskStatisticsResponseBodySummary& operator=(const GetCheckRiskStatisticsResponseBodySummary &) = default ;
    GetCheckRiskStatisticsResponseBodySummary& operator=(GetCheckRiskStatisticsResponseBodySummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->handledCheckToday_ == nullptr
        && return this->handledCheckTotal_ == nullptr && return this->handledDays_ == nullptr && return this->riskCheckCnt_ == nullptr && return this->riskDays_ == nullptr && return this->riskWarningCnt_ == nullptr; };
    // handledCheckToday Field Functions 
    bool hasHandledCheckToday() const { return this->handledCheckToday_ != nullptr;};
    void deleteHandledCheckToday() { this->handledCheckToday_ = nullptr;};
    inline int32_t handledCheckToday() const { DARABONBA_PTR_GET_DEFAULT(handledCheckToday_, 0) };
    inline GetCheckRiskStatisticsResponseBodySummary& setHandledCheckToday(int32_t handledCheckToday) { DARABONBA_PTR_SET_VALUE(handledCheckToday_, handledCheckToday) };


    // handledCheckTotal Field Functions 
    bool hasHandledCheckTotal() const { return this->handledCheckTotal_ != nullptr;};
    void deleteHandledCheckTotal() { this->handledCheckTotal_ = nullptr;};
    inline int32_t handledCheckTotal() const { DARABONBA_PTR_GET_DEFAULT(handledCheckTotal_, 0) };
    inline GetCheckRiskStatisticsResponseBodySummary& setHandledCheckTotal(int32_t handledCheckTotal) { DARABONBA_PTR_SET_VALUE(handledCheckTotal_, handledCheckTotal) };


    // handledDays Field Functions 
    bool hasHandledDays() const { return this->handledDays_ != nullptr;};
    void deleteHandledDays() { this->handledDays_ = nullptr;};
    inline int32_t handledDays() const { DARABONBA_PTR_GET_DEFAULT(handledDays_, 0) };
    inline GetCheckRiskStatisticsResponseBodySummary& setHandledDays(int32_t handledDays) { DARABONBA_PTR_SET_VALUE(handledDays_, handledDays) };


    // riskCheckCnt Field Functions 
    bool hasRiskCheckCnt() const { return this->riskCheckCnt_ != nullptr;};
    void deleteRiskCheckCnt() { this->riskCheckCnt_ = nullptr;};
    inline int32_t riskCheckCnt() const { DARABONBA_PTR_GET_DEFAULT(riskCheckCnt_, 0) };
    inline GetCheckRiskStatisticsResponseBodySummary& setRiskCheckCnt(int32_t riskCheckCnt) { DARABONBA_PTR_SET_VALUE(riskCheckCnt_, riskCheckCnt) };


    // riskDays Field Functions 
    bool hasRiskDays() const { return this->riskDays_ != nullptr;};
    void deleteRiskDays() { this->riskDays_ = nullptr;};
    inline int32_t riskDays() const { DARABONBA_PTR_GET_DEFAULT(riskDays_, 0) };
    inline GetCheckRiskStatisticsResponseBodySummary& setRiskDays(int32_t riskDays) { DARABONBA_PTR_SET_VALUE(riskDays_, riskDays) };


    // riskWarningCnt Field Functions 
    bool hasRiskWarningCnt() const { return this->riskWarningCnt_ != nullptr;};
    void deleteRiskWarningCnt() { this->riskWarningCnt_ = nullptr;};
    inline int32_t riskWarningCnt() const { DARABONBA_PTR_GET_DEFAULT(riskWarningCnt_, 0) };
    inline GetCheckRiskStatisticsResponseBodySummary& setRiskWarningCnt(int32_t riskWarningCnt) { DARABONBA_PTR_SET_VALUE(riskWarningCnt_, riskWarningCnt) };


  protected:
    // Check items handled today.
    std::shared_ptr<int32_t> handledCheckToday_ = nullptr;
    // A risk item exists.
    std::shared_ptr<int32_t> handledCheckTotal_ = nullptr;
    // Total days since check items were handled.
    std::shared_ptr<int32_t> handledDays_ = nullptr;
    // Check items that failed to pass the check.
    std::shared_ptr<int32_t> riskCheckCnt_ = nullptr;
    // Days since check items failed.
    std::shared_ptr<int32_t> riskDays_ = nullptr;
    // Risks to be handled.
    std::shared_ptr<int32_t> riskWarningCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
