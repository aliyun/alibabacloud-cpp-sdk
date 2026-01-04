// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATUSCODELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATUSCODELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainStatusCodeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatusCodeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCodeList, statusCodeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatusCodeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCodeList, statusCodeList_);
    };
    DescribeDomainStatusCodeListResponseBody() = default ;
    DescribeDomainStatusCodeListResponseBody(const DescribeDomainStatusCodeListResponseBody &) = default ;
    DescribeDomainStatusCodeListResponseBody(DescribeDomainStatusCodeListResponseBody &&) = default ;
    DescribeDomainStatusCodeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatusCodeListResponseBody() = default ;
    DescribeDomainStatusCodeListResponseBody& operator=(const DescribeDomainStatusCodeListResponseBody &) = default ;
    DescribeDomainStatusCodeListResponseBody& operator=(DescribeDomainStatusCodeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatusCodeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatusCodeList& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Status200, status200_);
        DARABONBA_PTR_TO_JSON(Status2XX, status2XX_);
        DARABONBA_PTR_TO_JSON(Status3XX, status3XX_);
        DARABONBA_PTR_TO_JSON(Status403, status403_);
        DARABONBA_PTR_TO_JSON(Status404, status404_);
        DARABONBA_PTR_TO_JSON(Status405, status405_);
        DARABONBA_PTR_TO_JSON(Status410, status410_);
        DARABONBA_PTR_TO_JSON(Status499, status499_);
        DARABONBA_PTR_TO_JSON(Status4XX, status4XX_);
        DARABONBA_PTR_TO_JSON(Status501, status501_);
        DARABONBA_PTR_TO_JSON(Status502, status502_);
        DARABONBA_PTR_TO_JSON(Status503, status503_);
        DARABONBA_PTR_TO_JSON(Status504, status504_);
        DARABONBA_PTR_TO_JSON(Status5XX, status5XX_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, StatusCodeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Status200, status200_);
        DARABONBA_PTR_FROM_JSON(Status2XX, status2XX_);
        DARABONBA_PTR_FROM_JSON(Status3XX, status3XX_);
        DARABONBA_PTR_FROM_JSON(Status403, status403_);
        DARABONBA_PTR_FROM_JSON(Status404, status404_);
        DARABONBA_PTR_FROM_JSON(Status405, status405_);
        DARABONBA_PTR_FROM_JSON(Status410, status410_);
        DARABONBA_PTR_FROM_JSON(Status499, status499_);
        DARABONBA_PTR_FROM_JSON(Status4XX, status4XX_);
        DARABONBA_PTR_FROM_JSON(Status501, status501_);
        DARABONBA_PTR_FROM_JSON(Status502, status502_);
        DARABONBA_PTR_FROM_JSON(Status503, status503_);
        DARABONBA_PTR_FROM_JSON(Status504, status504_);
        DARABONBA_PTR_FROM_JSON(Status5XX, status5XX_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      StatusCodeList() = default ;
      StatusCodeList(const StatusCodeList &) = default ;
      StatusCodeList(StatusCodeList &&) = default ;
      StatusCodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatusCodeList() = default ;
      StatusCodeList& operator=(const StatusCodeList &) = default ;
      StatusCodeList& operator=(StatusCodeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->index_ == nullptr
        && this->status200_ == nullptr && this->status2XX_ == nullptr && this->status3XX_ == nullptr && this->status403_ == nullptr && this->status404_ == nullptr
        && this->status405_ == nullptr && this->status410_ == nullptr && this->status499_ == nullptr && this->status4XX_ == nullptr && this->status501_ == nullptr
        && this->status502_ == nullptr && this->status503_ == nullptr && this->status504_ == nullptr && this->status5XX_ == nullptr && this->time_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline StatusCodeList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // status200 Field Functions 
      bool hasStatus200() const { return this->status200_ != nullptr;};
      void deleteStatus200() { this->status200_ = nullptr;};
      inline int64_t getStatus200() const { DARABONBA_PTR_GET_DEFAULT(status200_, 0L) };
      inline StatusCodeList& setStatus200(int64_t status200) { DARABONBA_PTR_SET_VALUE(status200_, status200) };


      // status2XX Field Functions 
      bool hasStatus2XX() const { return this->status2XX_ != nullptr;};
      void deleteStatus2XX() { this->status2XX_ = nullptr;};
      inline int64_t getStatus2XX() const { DARABONBA_PTR_GET_DEFAULT(status2XX_, 0L) };
      inline StatusCodeList& setStatus2XX(int64_t status2XX) { DARABONBA_PTR_SET_VALUE(status2XX_, status2XX) };


      // status3XX Field Functions 
      bool hasStatus3XX() const { return this->status3XX_ != nullptr;};
      void deleteStatus3XX() { this->status3XX_ = nullptr;};
      inline int64_t getStatus3XX() const { DARABONBA_PTR_GET_DEFAULT(status3XX_, 0L) };
      inline StatusCodeList& setStatus3XX(int64_t status3XX) { DARABONBA_PTR_SET_VALUE(status3XX_, status3XX) };


      // status403 Field Functions 
      bool hasStatus403() const { return this->status403_ != nullptr;};
      void deleteStatus403() { this->status403_ = nullptr;};
      inline int64_t getStatus403() const { DARABONBA_PTR_GET_DEFAULT(status403_, 0L) };
      inline StatusCodeList& setStatus403(int64_t status403) { DARABONBA_PTR_SET_VALUE(status403_, status403) };


      // status404 Field Functions 
      bool hasStatus404() const { return this->status404_ != nullptr;};
      void deleteStatus404() { this->status404_ = nullptr;};
      inline int64_t getStatus404() const { DARABONBA_PTR_GET_DEFAULT(status404_, 0L) };
      inline StatusCodeList& setStatus404(int64_t status404) { DARABONBA_PTR_SET_VALUE(status404_, status404) };


      // status405 Field Functions 
      bool hasStatus405() const { return this->status405_ != nullptr;};
      void deleteStatus405() { this->status405_ = nullptr;};
      inline int64_t getStatus405() const { DARABONBA_PTR_GET_DEFAULT(status405_, 0L) };
      inline StatusCodeList& setStatus405(int64_t status405) { DARABONBA_PTR_SET_VALUE(status405_, status405) };


      // status410 Field Functions 
      bool hasStatus410() const { return this->status410_ != nullptr;};
      void deleteStatus410() { this->status410_ = nullptr;};
      inline int64_t getStatus410() const { DARABONBA_PTR_GET_DEFAULT(status410_, 0L) };
      inline StatusCodeList& setStatus410(int64_t status410) { DARABONBA_PTR_SET_VALUE(status410_, status410) };


      // status499 Field Functions 
      bool hasStatus499() const { return this->status499_ != nullptr;};
      void deleteStatus499() { this->status499_ = nullptr;};
      inline int64_t getStatus499() const { DARABONBA_PTR_GET_DEFAULT(status499_, 0L) };
      inline StatusCodeList& setStatus499(int64_t status499) { DARABONBA_PTR_SET_VALUE(status499_, status499) };


      // status4XX Field Functions 
      bool hasStatus4XX() const { return this->status4XX_ != nullptr;};
      void deleteStatus4XX() { this->status4XX_ = nullptr;};
      inline int64_t getStatus4XX() const { DARABONBA_PTR_GET_DEFAULT(status4XX_, 0L) };
      inline StatusCodeList& setStatus4XX(int64_t status4XX) { DARABONBA_PTR_SET_VALUE(status4XX_, status4XX) };


      // status501 Field Functions 
      bool hasStatus501() const { return this->status501_ != nullptr;};
      void deleteStatus501() { this->status501_ = nullptr;};
      inline int64_t getStatus501() const { DARABONBA_PTR_GET_DEFAULT(status501_, 0L) };
      inline StatusCodeList& setStatus501(int64_t status501) { DARABONBA_PTR_SET_VALUE(status501_, status501) };


      // status502 Field Functions 
      bool hasStatus502() const { return this->status502_ != nullptr;};
      void deleteStatus502() { this->status502_ = nullptr;};
      inline int64_t getStatus502() const { DARABONBA_PTR_GET_DEFAULT(status502_, 0L) };
      inline StatusCodeList& setStatus502(int64_t status502) { DARABONBA_PTR_SET_VALUE(status502_, status502) };


      // status503 Field Functions 
      bool hasStatus503() const { return this->status503_ != nullptr;};
      void deleteStatus503() { this->status503_ = nullptr;};
      inline int64_t getStatus503() const { DARABONBA_PTR_GET_DEFAULT(status503_, 0L) };
      inline StatusCodeList& setStatus503(int64_t status503) { DARABONBA_PTR_SET_VALUE(status503_, status503) };


      // status504 Field Functions 
      bool hasStatus504() const { return this->status504_ != nullptr;};
      void deleteStatus504() { this->status504_ = nullptr;};
      inline int64_t getStatus504() const { DARABONBA_PTR_GET_DEFAULT(status504_, 0L) };
      inline StatusCodeList& setStatus504(int64_t status504) { DARABONBA_PTR_SET_VALUE(status504_, status504) };


      // status5XX Field Functions 
      bool hasStatus5XX() const { return this->status5XX_ != nullptr;};
      void deleteStatus5XX() { this->status5XX_ = nullptr;};
      inline int64_t getStatus5XX() const { DARABONBA_PTR_GET_DEFAULT(status5XX_, 0L) };
      inline StatusCodeList& setStatus5XX(int64_t status5XX) { DARABONBA_PTR_SET_VALUE(status5XX_, status5XX) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline StatusCodeList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The index number of the returned data.
      shared_ptr<int32_t> index_ {};
      // The number of 200 status codes.
      shared_ptr<int64_t> status200_ {};
      // The number of 2xx status codes.
      shared_ptr<int64_t> status2XX_ {};
      // The number of 3xx status codes.
      shared_ptr<int64_t> status3XX_ {};
      // The number of 403 status codes.
      shared_ptr<int64_t> status403_ {};
      // The number of 404 status codes.
      shared_ptr<int64_t> status404_ {};
      // The number of 405 status codes.
      shared_ptr<int64_t> status405_ {};
      shared_ptr<int64_t> status410_ {};
      shared_ptr<int64_t> status499_ {};
      // The number of 4xx status codes.
      shared_ptr<int64_t> status4XX_ {};
      // The number of 501 status codes.
      shared_ptr<int64_t> status501_ {};
      // The number of 502 status codes.
      shared_ptr<int64_t> status502_ {};
      // The number of 503 status codes.
      shared_ptr<int64_t> status503_ {};
      // The number of 504 status codes.
      shared_ptr<int64_t> status504_ {};
      // The number of 5xx status codes.
      shared_ptr<int64_t> status5XX_ {};
      // The time when the data was collected. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statusCodeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainStatusCodeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCodeList Field Functions 
    bool hasStatusCodeList() const { return this->statusCodeList_ != nullptr;};
    void deleteStatusCodeList() { this->statusCodeList_ = nullptr;};
    inline const vector<DescribeDomainStatusCodeListResponseBody::StatusCodeList> & getStatusCodeList() const { DARABONBA_PTR_GET_CONST(statusCodeList_, vector<DescribeDomainStatusCodeListResponseBody::StatusCodeList>) };
    inline vector<DescribeDomainStatusCodeListResponseBody::StatusCodeList> getStatusCodeList() { DARABONBA_PTR_GET(statusCodeList_, vector<DescribeDomainStatusCodeListResponseBody::StatusCodeList>) };
    inline DescribeDomainStatusCodeListResponseBody& setStatusCodeList(const vector<DescribeDomainStatusCodeListResponseBody::StatusCodeList> & statusCodeList) { DARABONBA_PTR_SET_VALUE(statusCodeList_, statusCodeList) };
    inline DescribeDomainStatusCodeListResponseBody& setStatusCodeList(vector<DescribeDomainStatusCodeListResponseBody::StatusCodeList> && statusCodeList) { DARABONBA_PTR_SET_RVALUE(statusCodeList_, statusCodeList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The statistics on response status codes.
    shared_ptr<vector<DescribeDomainStatusCodeListResponseBody::StatusCodeList>> statusCodeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
