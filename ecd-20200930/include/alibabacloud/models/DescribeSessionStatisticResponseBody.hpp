// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESESSIONSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESESSIONSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSessionStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSessionStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSessionStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSessionStatisticResponseBody() = default ;
    DescribeSessionStatisticResponseBody(const DescribeSessionStatisticResponseBody &) = default ;
    DescribeSessionStatisticResponseBody(DescribeSessionStatisticResponseBody &&) = default ;
    DescribeSessionStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSessionStatisticResponseBody() = default ;
    DescribeSessionStatisticResponseBody& operator=(const DescribeSessionStatisticResponseBody &) = default ;
    DescribeSessionStatisticResponseBody& operator=(DescribeSessionStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
      };
      friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
      };
      Statistic() = default ;
      Statistic(const Statistic &) = default ;
      Statistic(Statistic &&) = default ;
      Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistic() = default ;
      Statistic& operator=(const Statistic &) = default ;
      Statistic& operator=(Statistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->timePoint_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Statistic& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // timePoint Field Functions 
      bool hasTimePoint() const { return this->timePoint_ != nullptr;};
      void deleteTimePoint() { this->timePoint_ = nullptr;};
      inline int64_t getTimePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, 0L) };
      inline Statistic& setTimePoint(int64_t timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


    protected:
      // The total number of sessions in the time range.
      shared_ptr<int64_t> count_ {};
      // The point in time.
      shared_ptr<int64_t> timePoint_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statistic_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSessionStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const vector<DescribeSessionStatisticResponseBody::Statistic> & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<DescribeSessionStatisticResponseBody::Statistic>) };
    inline vector<DescribeSessionStatisticResponseBody::Statistic> getStatistic() { DARABONBA_PTR_GET(statistic_, vector<DescribeSessionStatisticResponseBody::Statistic>) };
    inline DescribeSessionStatisticResponseBody& setStatistic(const vector<DescribeSessionStatisticResponseBody::Statistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeSessionStatisticResponseBody& setStatistic(vector<DescribeSessionStatisticResponseBody::Statistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSessionStatisticResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics.
    shared_ptr<vector<DescribeSessionStatisticResponseBody::Statistic>> statistic_ {};
    // The total number of sessions returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
