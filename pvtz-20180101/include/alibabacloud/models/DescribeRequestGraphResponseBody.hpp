// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREQUESTGRAPHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREQUESTGRAPHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeRequestGraphResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRequestGraphResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestDetails, requestDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRequestGraphResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestDetails, requestDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRequestGraphResponseBody() = default ;
    DescribeRequestGraphResponseBody(const DescribeRequestGraphResponseBody &) = default ;
    DescribeRequestGraphResponseBody(DescribeRequestGraphResponseBody &&) = default ;
    DescribeRequestGraphResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRequestGraphResponseBody() = default ;
    DescribeRequestGraphResponseBody& operator=(const DescribeRequestGraphResponseBody &) = default ;
    DescribeRequestGraphResponseBody& operator=(DescribeRequestGraphResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RequestDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestDetails& obj) { 
        DARABONBA_PTR_TO_JSON(ZoneRequestTop, zoneRequestTop_);
      };
      friend void from_json(const Darabonba::Json& j, RequestDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(ZoneRequestTop, zoneRequestTop_);
      };
      RequestDetails() = default ;
      RequestDetails(const RequestDetails &) = default ;
      RequestDetails(RequestDetails &&) = default ;
      RequestDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestDetails() = default ;
      RequestDetails& operator=(const RequestDetails &) = default ;
      RequestDetails& operator=(RequestDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ZoneRequestTop : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZoneRequestTop& obj) { 
          DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, ZoneRequestTop& obj) { 
          DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        ZoneRequestTop() = default ;
        ZoneRequestTop(const ZoneRequestTop &) = default ;
        ZoneRequestTop(ZoneRequestTop &&) = default ;
        ZoneRequestTop(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZoneRequestTop() = default ;
        ZoneRequestTop& operator=(const ZoneRequestTop &) = default ;
        ZoneRequestTop& operator=(ZoneRequestTop &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requestCount_ == nullptr
        && this->time_ == nullptr && this->timestamp_ == nullptr; };
        // requestCount Field Functions 
        bool hasRequestCount() const { return this->requestCount_ != nullptr;};
        void deleteRequestCount() { this->requestCount_ = nullptr;};
        inline int64_t getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
        inline ZoneRequestTop& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline ZoneRequestTop& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline ZoneRequestTop& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The number of DNS requests.
        shared_ptr<int64_t> requestCount_ {};
        // The time when the data was collected. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> time_ {};
        // The time when the data was collected. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->zoneRequestTop_ == nullptr; };
      // zoneRequestTop Field Functions 
      bool hasZoneRequestTop() const { return this->zoneRequestTop_ != nullptr;};
      void deleteZoneRequestTop() { this->zoneRequestTop_ = nullptr;};
      inline const vector<RequestDetails::ZoneRequestTop> & getZoneRequestTop() const { DARABONBA_PTR_GET_CONST(zoneRequestTop_, vector<RequestDetails::ZoneRequestTop>) };
      inline vector<RequestDetails::ZoneRequestTop> getZoneRequestTop() { DARABONBA_PTR_GET(zoneRequestTop_, vector<RequestDetails::ZoneRequestTop>) };
      inline RequestDetails& setZoneRequestTop(const vector<RequestDetails::ZoneRequestTop> & zoneRequestTop) { DARABONBA_PTR_SET_VALUE(zoneRequestTop_, zoneRequestTop) };
      inline RequestDetails& setZoneRequestTop(vector<RequestDetails::ZoneRequestTop> && zoneRequestTop) { DARABONBA_PTR_SET_RVALUE(zoneRequestTop_, zoneRequestTop) };


    protected:
      shared_ptr<vector<RequestDetails::ZoneRequestTop>> zoneRequestTop_ {};
    };

    virtual bool empty() const override { return this->requestDetails_ == nullptr
        && this->requestId_ == nullptr; };
    // requestDetails Field Functions 
    bool hasRequestDetails() const { return this->requestDetails_ != nullptr;};
    void deleteRequestDetails() { this->requestDetails_ = nullptr;};
    inline const DescribeRequestGraphResponseBody::RequestDetails & getRequestDetails() const { DARABONBA_PTR_GET_CONST(requestDetails_, DescribeRequestGraphResponseBody::RequestDetails) };
    inline DescribeRequestGraphResponseBody::RequestDetails getRequestDetails() { DARABONBA_PTR_GET(requestDetails_, DescribeRequestGraphResponseBody::RequestDetails) };
    inline DescribeRequestGraphResponseBody& setRequestDetails(const DescribeRequestGraphResponseBody::RequestDetails & requestDetails) { DARABONBA_PTR_SET_VALUE(requestDetails_, requestDetails) };
    inline DescribeRequestGraphResponseBody& setRequestDetails(DescribeRequestGraphResponseBody::RequestDetails && requestDetails) { DARABONBA_PTR_SET_RVALUE(requestDetails_, requestDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRequestGraphResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the DNS requests.
    shared_ptr<DescribeRequestGraphResponseBody::RequestDetails> requestDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
