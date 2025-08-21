// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMONALARMRECORDSTATISTICSDISTRIBUTERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETEMONALARMRECORDSTATISTICSDISTRIBUTERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEmonAlarmRecordStatisticsDistributeResponseBodyResultAlarmGroupTotal.hpp>
#include <alibabacloud/models/GetEmonAlarmRecordStatisticsDistributeResponseBodyResultChannelTotal.hpp>
#include <alibabacloud/models/GetEmonAlarmRecordStatisticsDistributeResponseBodyResultLevelTotal.hpp>
#include <alibabacloud/models/GetEmonAlarmRecordStatisticsDistributeResponseBodyResultReceiverTotal.hpp>
#include <alibabacloud/models/GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetEmonAlarmRecordStatisticsDistributeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(alarmGroup, alarmGroup_);
      DARABONBA_PTR_TO_JSON(alarmGroupTotal, alarmGroupTotal_);
      DARABONBA_PTR_TO_JSON(channelTotal, channelTotal_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(levelTotal, levelTotal_);
      DARABONBA_PTR_TO_JSON(receiverTotal, receiverTotal_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(alarmGroup, alarmGroup_);
      DARABONBA_PTR_FROM_JSON(alarmGroupTotal, alarmGroupTotal_);
      DARABONBA_PTR_FROM_JSON(channelTotal, channelTotal_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(levelTotal, levelTotal_);
      DARABONBA_PTR_FROM_JSON(receiverTotal, receiverTotal_);
      DARABONBA_PTR_FROM_JSON(statistics, statistics_);
    };
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResult() = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResult(const GetEmonAlarmRecordStatisticsDistributeResponseBodyResult &) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResult(GetEmonAlarmRecordStatisticsDistributeResponseBodyResult &&) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmonAlarmRecordStatisticsDistributeResponseBodyResult() = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& operator=(const GetEmonAlarmRecordStatisticsDistributeResponseBodyResult &) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& operator=(GetEmonAlarmRecordStatisticsDistributeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmGroup_ != nullptr
        && this->alarmGroupTotal_ != nullptr && this->channelTotal_ != nullptr && this->count_ != nullptr && this->levelTotal_ != nullptr && this->receiverTotal_ != nullptr
        && this->statistics_ != nullptr; };
    // alarmGroup Field Functions 
    bool hasAlarmGroup() const { return this->alarmGroup_ != nullptr;};
    void deleteAlarmGroup() { this->alarmGroup_ = nullptr;};
    inline string alarmGroup() const { DARABONBA_PTR_GET_DEFAULT(alarmGroup_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setAlarmGroup(string alarmGroup) { DARABONBA_PTR_SET_VALUE(alarmGroup_, alarmGroup) };


    // alarmGroupTotal Field Functions 
    bool hasAlarmGroupTotal() const { return this->alarmGroupTotal_ != nullptr;};
    void deleteAlarmGroupTotal() { this->alarmGroupTotal_ = nullptr;};
    inline const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultAlarmGroupTotal> & alarmGroupTotal() const { DARABONBA_PTR_GET_CONST(alarmGroupTotal_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultAlarmGroupTotal>) };
    inline vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultAlarmGroupTotal> alarmGroupTotal() { DARABONBA_PTR_GET(alarmGroupTotal_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultAlarmGroupTotal>) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setAlarmGroupTotal(const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultAlarmGroupTotal> & alarmGroupTotal) { DARABONBA_PTR_SET_VALUE(alarmGroupTotal_, alarmGroupTotal) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setAlarmGroupTotal(vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultAlarmGroupTotal> && alarmGroupTotal) { DARABONBA_PTR_SET_RVALUE(alarmGroupTotal_, alarmGroupTotal) };


    // channelTotal Field Functions 
    bool hasChannelTotal() const { return this->channelTotal_ != nullptr;};
    void deleteChannelTotal() { this->channelTotal_ = nullptr;};
    inline const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultChannelTotal> & channelTotal() const { DARABONBA_PTR_GET_CONST(channelTotal_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultChannelTotal>) };
    inline vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultChannelTotal> channelTotal() { DARABONBA_PTR_GET(channelTotal_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultChannelTotal>) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setChannelTotal(const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultChannelTotal> & channelTotal) { DARABONBA_PTR_SET_VALUE(channelTotal_, channelTotal) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setChannelTotal(vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultChannelTotal> && channelTotal) { DARABONBA_PTR_SET_RVALUE(channelTotal_, channelTotal) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // levelTotal Field Functions 
    bool hasLevelTotal() const { return this->levelTotal_ != nullptr;};
    void deleteLevelTotal() { this->levelTotal_ = nullptr;};
    inline const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultLevelTotal> & levelTotal() const { DARABONBA_PTR_GET_CONST(levelTotal_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultLevelTotal>) };
    inline vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultLevelTotal> levelTotal() { DARABONBA_PTR_GET(levelTotal_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultLevelTotal>) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setLevelTotal(const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultLevelTotal> & levelTotal) { DARABONBA_PTR_SET_VALUE(levelTotal_, levelTotal) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setLevelTotal(vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultLevelTotal> && levelTotal) { DARABONBA_PTR_SET_RVALUE(levelTotal_, levelTotal) };


    // receiverTotal Field Functions 
    bool hasReceiverTotal() const { return this->receiverTotal_ != nullptr;};
    void deleteReceiverTotal() { this->receiverTotal_ = nullptr;};
    inline const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultReceiverTotal> & receiverTotal() const { DARABONBA_PTR_GET_CONST(receiverTotal_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultReceiverTotal>) };
    inline vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultReceiverTotal> receiverTotal() { DARABONBA_PTR_GET(receiverTotal_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultReceiverTotal>) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setReceiverTotal(const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultReceiverTotal> & receiverTotal) { DARABONBA_PTR_SET_VALUE(receiverTotal_, receiverTotal) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setReceiverTotal(vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultReceiverTotal> && receiverTotal) { DARABONBA_PTR_SET_RVALUE(receiverTotal_, receiverTotal) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics> & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics>) };
    inline vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics> statistics() { DARABONBA_PTR_GET(statistics_, vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics>) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setStatistics(const vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResult& setStatistics(vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    std::shared_ptr<string> alarmGroup_ = nullptr;
    std::shared_ptr<vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultAlarmGroupTotal>> alarmGroupTotal_ = nullptr;
    std::shared_ptr<vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultChannelTotal>> channelTotal_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultLevelTotal>> levelTotal_ = nullptr;
    std::shared_ptr<vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultReceiverTotal>> receiverTotal_ = nullptr;
    std::shared_ptr<vector<Models::GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics>> statistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
