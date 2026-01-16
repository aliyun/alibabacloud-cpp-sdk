// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMONALARMRECORDSTATISTICSDISTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEMONALARMRECORDSTATISTICSDISTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetEmonAlarmRecordStatisticsDistributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmonAlarmRecordStatisticsDistributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(timeEnd, timeEnd_);
      DARABONBA_PTR_TO_JSON(timeStart, timeStart_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmonAlarmRecordStatisticsDistributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(timeEnd, timeEnd_);
      DARABONBA_PTR_FROM_JSON(timeStart, timeStart_);
    };
    GetEmonAlarmRecordStatisticsDistributeRequest() = default ;
    GetEmonAlarmRecordStatisticsDistributeRequest(const GetEmonAlarmRecordStatisticsDistributeRequest &) = default ;
    GetEmonAlarmRecordStatisticsDistributeRequest(GetEmonAlarmRecordStatisticsDistributeRequest &&) = default ;
    GetEmonAlarmRecordStatisticsDistributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmonAlarmRecordStatisticsDistributeRequest() = default ;
    GetEmonAlarmRecordStatisticsDistributeRequest& operator=(const GetEmonAlarmRecordStatisticsDistributeRequest &) = default ;
    GetEmonAlarmRecordStatisticsDistributeRequest& operator=(GetEmonAlarmRecordStatisticsDistributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->groupId_ == nullptr && this->timeEnd_ == nullptr && this->timeStart_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // timeEnd Field Functions 
    bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
    void deleteTimeEnd() { this->timeEnd_ = nullptr;};
    inline int64_t getTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, 0L) };
    inline GetEmonAlarmRecordStatisticsDistributeRequest& setTimeEnd(int64_t timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


    // timeStart Field Functions 
    bool hasTimeStart() const { return this->timeStart_ != nullptr;};
    void deleteTimeStart() { this->timeStart_ = nullptr;};
    inline int64_t getTimeStart() const { DARABONBA_PTR_GET_DEFAULT(timeStart_, 0L) };
    inline GetEmonAlarmRecordStatisticsDistributeRequest& setTimeStart(int64_t timeStart) { DARABONBA_PTR_SET_VALUE(timeStart_, timeStart) };


  protected:
    shared_ptr<string> body_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int64_t> timeEnd_ {};
    shared_ptr<int64_t> timeStart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
