// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMVODLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMVODLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeStreamVodListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamVodListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamVodListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeStreamVodListResponseBody() = default ;
    DescribeStreamVodListResponseBody(const DescribeStreamVodListResponseBody &) = default ;
    DescribeStreamVodListResponseBody(DescribeStreamVodListResponseBody &&) = default ;
    DescribeStreamVodListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamVodListResponseBody() = default ;
    DescribeStreamVodListResponseBody& operator=(const DescribeStreamVodListResponseBody &) = default ;
    DescribeStreamVodListResponseBody& operator=(DescribeStreamVodListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Records& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Records& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->records_ == nullptr
        && this->requestId_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeStreamVodListResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeStreamVodListResponseBody::Records>) };
    inline vector<DescribeStreamVodListResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribeStreamVodListResponseBody::Records>) };
    inline DescribeStreamVodListResponseBody& setRecords(const vector<DescribeStreamVodListResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeStreamVodListResponseBody& setRecords(vector<DescribeStreamVodListResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStreamVodListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeStreamVodListResponseBody::Records>> records_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
