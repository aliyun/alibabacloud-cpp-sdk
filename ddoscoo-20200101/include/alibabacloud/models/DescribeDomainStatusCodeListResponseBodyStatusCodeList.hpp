// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATUSCODELISTRESPONSEBODYSTATUSCODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATUSCODELISTRESPONSEBODYSTATUSCODELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainStatusCodeListResponseBodyStatusCodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatusCodeListResponseBodyStatusCodeList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatusCodeListResponseBodyStatusCodeList& obj) { 
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
    DescribeDomainStatusCodeListResponseBodyStatusCodeList() = default ;
    DescribeDomainStatusCodeListResponseBodyStatusCodeList(const DescribeDomainStatusCodeListResponseBodyStatusCodeList &) = default ;
    DescribeDomainStatusCodeListResponseBodyStatusCodeList(DescribeDomainStatusCodeListResponseBodyStatusCodeList &&) = default ;
    DescribeDomainStatusCodeListResponseBodyStatusCodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatusCodeListResponseBodyStatusCodeList() = default ;
    DescribeDomainStatusCodeListResponseBodyStatusCodeList& operator=(const DescribeDomainStatusCodeListResponseBodyStatusCodeList &) = default ;
    DescribeDomainStatusCodeListResponseBodyStatusCodeList& operator=(DescribeDomainStatusCodeListResponseBodyStatusCodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->status200_ == nullptr && return this->status2XX_ == nullptr && return this->status3XX_ == nullptr && return this->status403_ == nullptr && return this->status404_ == nullptr
        && return this->status405_ == nullptr && return this->status410_ == nullptr && return this->status499_ == nullptr && return this->status4XX_ == nullptr && return this->status501_ == nullptr
        && return this->status502_ == nullptr && return this->status503_ == nullptr && return this->status504_ == nullptr && return this->status5XX_ == nullptr && return this->time_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // status200 Field Functions 
    bool hasStatus200() const { return this->status200_ != nullptr;};
    void deleteStatus200() { this->status200_ = nullptr;};
    inline int64_t status200() const { DARABONBA_PTR_GET_DEFAULT(status200_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus200(int64_t status200) { DARABONBA_PTR_SET_VALUE(status200_, status200) };


    // status2XX Field Functions 
    bool hasStatus2XX() const { return this->status2XX_ != nullptr;};
    void deleteStatus2XX() { this->status2XX_ = nullptr;};
    inline int64_t status2XX() const { DARABONBA_PTR_GET_DEFAULT(status2XX_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus2XX(int64_t status2XX) { DARABONBA_PTR_SET_VALUE(status2XX_, status2XX) };


    // status3XX Field Functions 
    bool hasStatus3XX() const { return this->status3XX_ != nullptr;};
    void deleteStatus3XX() { this->status3XX_ = nullptr;};
    inline int64_t status3XX() const { DARABONBA_PTR_GET_DEFAULT(status3XX_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus3XX(int64_t status3XX) { DARABONBA_PTR_SET_VALUE(status3XX_, status3XX) };


    // status403 Field Functions 
    bool hasStatus403() const { return this->status403_ != nullptr;};
    void deleteStatus403() { this->status403_ = nullptr;};
    inline int64_t status403() const { DARABONBA_PTR_GET_DEFAULT(status403_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus403(int64_t status403) { DARABONBA_PTR_SET_VALUE(status403_, status403) };


    // status404 Field Functions 
    bool hasStatus404() const { return this->status404_ != nullptr;};
    void deleteStatus404() { this->status404_ = nullptr;};
    inline int64_t status404() const { DARABONBA_PTR_GET_DEFAULT(status404_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus404(int64_t status404) { DARABONBA_PTR_SET_VALUE(status404_, status404) };


    // status405 Field Functions 
    bool hasStatus405() const { return this->status405_ != nullptr;};
    void deleteStatus405() { this->status405_ = nullptr;};
    inline int64_t status405() const { DARABONBA_PTR_GET_DEFAULT(status405_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus405(int64_t status405) { DARABONBA_PTR_SET_VALUE(status405_, status405) };


    // status410 Field Functions 
    bool hasStatus410() const { return this->status410_ != nullptr;};
    void deleteStatus410() { this->status410_ = nullptr;};
    inline int64_t status410() const { DARABONBA_PTR_GET_DEFAULT(status410_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus410(int64_t status410) { DARABONBA_PTR_SET_VALUE(status410_, status410) };


    // status499 Field Functions 
    bool hasStatus499() const { return this->status499_ != nullptr;};
    void deleteStatus499() { this->status499_ = nullptr;};
    inline int64_t status499() const { DARABONBA_PTR_GET_DEFAULT(status499_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus499(int64_t status499) { DARABONBA_PTR_SET_VALUE(status499_, status499) };


    // status4XX Field Functions 
    bool hasStatus4XX() const { return this->status4XX_ != nullptr;};
    void deleteStatus4XX() { this->status4XX_ = nullptr;};
    inline int64_t status4XX() const { DARABONBA_PTR_GET_DEFAULT(status4XX_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus4XX(int64_t status4XX) { DARABONBA_PTR_SET_VALUE(status4XX_, status4XX) };


    // status501 Field Functions 
    bool hasStatus501() const { return this->status501_ != nullptr;};
    void deleteStatus501() { this->status501_ = nullptr;};
    inline int64_t status501() const { DARABONBA_PTR_GET_DEFAULT(status501_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus501(int64_t status501) { DARABONBA_PTR_SET_VALUE(status501_, status501) };


    // status502 Field Functions 
    bool hasStatus502() const { return this->status502_ != nullptr;};
    void deleteStatus502() { this->status502_ = nullptr;};
    inline int64_t status502() const { DARABONBA_PTR_GET_DEFAULT(status502_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus502(int64_t status502) { DARABONBA_PTR_SET_VALUE(status502_, status502) };


    // status503 Field Functions 
    bool hasStatus503() const { return this->status503_ != nullptr;};
    void deleteStatus503() { this->status503_ = nullptr;};
    inline int64_t status503() const { DARABONBA_PTR_GET_DEFAULT(status503_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus503(int64_t status503) { DARABONBA_PTR_SET_VALUE(status503_, status503) };


    // status504 Field Functions 
    bool hasStatus504() const { return this->status504_ != nullptr;};
    void deleteStatus504() { this->status504_ = nullptr;};
    inline int64_t status504() const { DARABONBA_PTR_GET_DEFAULT(status504_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus504(int64_t status504) { DARABONBA_PTR_SET_VALUE(status504_, status504) };


    // status5XX Field Functions 
    bool hasStatus5XX() const { return this->status5XX_ != nullptr;};
    void deleteStatus5XX() { this->status5XX_ = nullptr;};
    inline int64_t status5XX() const { DARABONBA_PTR_GET_DEFAULT(status5XX_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setStatus5XX(int64_t status5XX) { DARABONBA_PTR_SET_VALUE(status5XX_, status5XX) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeDomainStatusCodeListResponseBodyStatusCodeList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The index number of the returned data.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The number of 200 status codes.
    std::shared_ptr<int64_t> status200_ = nullptr;
    // The number of 2xx status codes.
    std::shared_ptr<int64_t> status2XX_ = nullptr;
    // The number of 3xx status codes.
    std::shared_ptr<int64_t> status3XX_ = nullptr;
    // The number of 403 status codes.
    std::shared_ptr<int64_t> status403_ = nullptr;
    // The number of 404 status codes.
    std::shared_ptr<int64_t> status404_ = nullptr;
    // The number of 405 status codes.
    std::shared_ptr<int64_t> status405_ = nullptr;
    std::shared_ptr<int64_t> status410_ = nullptr;
    std::shared_ptr<int64_t> status499_ = nullptr;
    // The number of 4xx status codes.
    std::shared_ptr<int64_t> status4XX_ = nullptr;
    // The number of 501 status codes.
    std::shared_ptr<int64_t> status501_ = nullptr;
    // The number of 502 status codes.
    std::shared_ptr<int64_t> status502_ = nullptr;
    // The number of 503 status codes.
    std::shared_ptr<int64_t> status503_ = nullptr;
    // The number of 504 status codes.
    std::shared_ptr<int64_t> status504_ = nullptr;
    // The number of 5xx status codes.
    std::shared_ptr<int64_t> status5XX_ = nullptr;
    // The time when the data was collected. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
