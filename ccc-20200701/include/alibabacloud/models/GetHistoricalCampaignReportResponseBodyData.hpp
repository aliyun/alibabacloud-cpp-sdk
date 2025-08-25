// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORICALCAMPAIGNREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORICALCAMPAIGNREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetHistoricalCampaignReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoricalCampaignReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonRate, abandonRate_);
      DARABONBA_PTR_TO_JSON(AbandonedRate, abandonedRate_);
      DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_TO_JSON(CallsAbandoned, callsAbandoned_);
      DARABONBA_PTR_TO_JSON(CallsConnected, callsConnected_);
      DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_TO_JSON(ConnectedRate, connectedRate_);
      DARABONBA_PTR_TO_JSON(OccupancyRate, occupancyRate_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoricalCampaignReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonRate, abandonRate_);
      DARABONBA_PTR_FROM_JSON(AbandonedRate, abandonedRate_);
      DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_FROM_JSON(CallsAbandoned, callsAbandoned_);
      DARABONBA_PTR_FROM_JSON(CallsConnected, callsConnected_);
      DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_FROM_JSON(ConnectedRate, connectedRate_);
      DARABONBA_PTR_FROM_JSON(OccupancyRate, occupancyRate_);
    };
    GetHistoricalCampaignReportResponseBodyData() = default ;
    GetHistoricalCampaignReportResponseBodyData(const GetHistoricalCampaignReportResponseBodyData &) = default ;
    GetHistoricalCampaignReportResponseBodyData(GetHistoricalCampaignReportResponseBodyData &&) = default ;
    GetHistoricalCampaignReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoricalCampaignReportResponseBodyData() = default ;
    GetHistoricalCampaignReportResponseBodyData& operator=(const GetHistoricalCampaignReportResponseBodyData &) = default ;
    GetHistoricalCampaignReportResponseBodyData& operator=(GetHistoricalCampaignReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abandonRate_ != nullptr
        && this->abandonedRate_ != nullptr && this->answerRate_ != nullptr && this->callsAbandoned_ != nullptr && this->callsConnected_ != nullptr && this->callsDialed_ != nullptr
        && this->connectedRate_ != nullptr && this->occupancyRate_ != nullptr; };
    // abandonRate Field Functions 
    bool hasAbandonRate() const { return this->abandonRate_ != nullptr;};
    void deleteAbandonRate() { this->abandonRate_ = nullptr;};
    inline float abandonRate() const { DARABONBA_PTR_GET_DEFAULT(abandonRate_, 0.0) };
    inline GetHistoricalCampaignReportResponseBodyData& setAbandonRate(float abandonRate) { DARABONBA_PTR_SET_VALUE(abandonRate_, abandonRate) };


    // abandonedRate Field Functions 
    bool hasAbandonedRate() const { return this->abandonedRate_ != nullptr;};
    void deleteAbandonedRate() { this->abandonedRate_ = nullptr;};
    inline float abandonedRate() const { DARABONBA_PTR_GET_DEFAULT(abandonedRate_, 0.0) };
    inline GetHistoricalCampaignReportResponseBodyData& setAbandonedRate(float abandonedRate) { DARABONBA_PTR_SET_VALUE(abandonedRate_, abandonedRate) };


    // answerRate Field Functions 
    bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
    void deleteAnswerRate() { this->answerRate_ = nullptr;};
    inline float answerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, 0.0) };
    inline GetHistoricalCampaignReportResponseBodyData& setAnswerRate(float answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


    // callsAbandoned Field Functions 
    bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
    void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
    inline int64_t callsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
    inline GetHistoricalCampaignReportResponseBodyData& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


    // callsConnected Field Functions 
    bool hasCallsConnected() const { return this->callsConnected_ != nullptr;};
    void deleteCallsConnected() { this->callsConnected_ = nullptr;};
    inline int64_t callsConnected() const { DARABONBA_PTR_GET_DEFAULT(callsConnected_, 0L) };
    inline GetHistoricalCampaignReportResponseBodyData& setCallsConnected(int64_t callsConnected) { DARABONBA_PTR_SET_VALUE(callsConnected_, callsConnected) };


    // callsDialed Field Functions 
    bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
    void deleteCallsDialed() { this->callsDialed_ = nullptr;};
    inline int64_t callsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
    inline GetHistoricalCampaignReportResponseBodyData& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


    // connectedRate Field Functions 
    bool hasConnectedRate() const { return this->connectedRate_ != nullptr;};
    void deleteConnectedRate() { this->connectedRate_ = nullptr;};
    inline float connectedRate() const { DARABONBA_PTR_GET_DEFAULT(connectedRate_, 0.0) };
    inline GetHistoricalCampaignReportResponseBodyData& setConnectedRate(float connectedRate) { DARABONBA_PTR_SET_VALUE(connectedRate_, connectedRate) };


    // occupancyRate Field Functions 
    bool hasOccupancyRate() const { return this->occupancyRate_ != nullptr;};
    void deleteOccupancyRate() { this->occupancyRate_ = nullptr;};
    inline float occupancyRate() const { DARABONBA_PTR_GET_DEFAULT(occupancyRate_, 0.0) };
    inline GetHistoricalCampaignReportResponseBodyData& setOccupancyRate(float occupancyRate) { DARABONBA_PTR_SET_VALUE(occupancyRate_, occupancyRate) };


  protected:
    std::shared_ptr<float> abandonRate_ = nullptr;
    std::shared_ptr<float> abandonedRate_ = nullptr;
    std::shared_ptr<float> answerRate_ = nullptr;
    std::shared_ptr<int64_t> callsAbandoned_ = nullptr;
    std::shared_ptr<int64_t> callsConnected_ = nullptr;
    std::shared_ptr<int64_t> callsDialed_ = nullptr;
    std::shared_ptr<float> connectedRate_ = nullptr;
    std::shared_ptr<float> occupancyRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
