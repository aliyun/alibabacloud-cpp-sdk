// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXCALENDARRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXCALENDARRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadSchedulerxCalendarResponseBodyDataRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxCalendarResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxCalendarResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxCalendarResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ReadSchedulerxCalendarResponseBodyData() = default ;
    ReadSchedulerxCalendarResponseBodyData(const ReadSchedulerxCalendarResponseBodyData &) = default ;
    ReadSchedulerxCalendarResponseBodyData(ReadSchedulerxCalendarResponseBodyData &&) = default ;
    ReadSchedulerxCalendarResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxCalendarResponseBodyData() = default ;
    ReadSchedulerxCalendarResponseBodyData& operator=(const ReadSchedulerxCalendarResponseBodyData &) = default ;
    ReadSchedulerxCalendarResponseBodyData& operator=(ReadSchedulerxCalendarResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->records_ == nullptr && return this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ReadSchedulerxCalendarResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ReadSchedulerxCalendarResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::ReadSchedulerxCalendarResponseBodyDataRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::ReadSchedulerxCalendarResponseBodyDataRecords>) };
    inline vector<Models::ReadSchedulerxCalendarResponseBodyDataRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::ReadSchedulerxCalendarResponseBodyDataRecords>) };
    inline ReadSchedulerxCalendarResponseBodyData& setRecords(const vector<Models::ReadSchedulerxCalendarResponseBodyDataRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ReadSchedulerxCalendarResponseBodyData& setRecords(vector<Models::ReadSchedulerxCalendarResponseBodyDataRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ReadSchedulerxCalendarResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // When there is more data to retrieve, the server returns a nextToken. You can use this token in a subsequent request to continue reading from where you left off.
    std::shared_ptr<string> nextToken_ = nullptr;
    // *
    std::shared_ptr<vector<Models::ReadSchedulerxCalendarResponseBodyDataRecords>> records_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
