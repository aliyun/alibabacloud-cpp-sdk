// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSMAXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSMAXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSBpsMaxResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSBpsMaxResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxAtkBps, maxAtkBps_);
      DARABONBA_PTR_TO_JSON(MaxAtkPps, maxAtkPps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSBpsMaxResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxAtkBps, maxAtkBps_);
      DARABONBA_PTR_FROM_JSON(MaxAtkPps, maxAtkPps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDoSBpsMaxResponseBody() = default ;
    DescribeDDoSBpsMaxResponseBody(const DescribeDDoSBpsMaxResponseBody &) = default ;
    DescribeDDoSBpsMaxResponseBody(DescribeDDoSBpsMaxResponseBody &&) = default ;
    DescribeDDoSBpsMaxResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSBpsMaxResponseBody() = default ;
    DescribeDDoSBpsMaxResponseBody& operator=(const DescribeDDoSBpsMaxResponseBody &) = default ;
    DescribeDDoSBpsMaxResponseBody& operator=(DescribeDDoSBpsMaxResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->maxAtkBps_ == nullptr && this->maxAtkPps_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDDoSBpsMaxResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxAtkBps Field Functions 
    bool hasMaxAtkBps() const { return this->maxAtkBps_ != nullptr;};
    void deleteMaxAtkBps() { this->maxAtkBps_ = nullptr;};
    inline int64_t getMaxAtkBps() const { DARABONBA_PTR_GET_DEFAULT(maxAtkBps_, 0L) };
    inline DescribeDDoSBpsMaxResponseBody& setMaxAtkBps(int64_t maxAtkBps) { DARABONBA_PTR_SET_VALUE(maxAtkBps_, maxAtkBps) };


    // maxAtkPps Field Functions 
    bool hasMaxAtkPps() const { return this->maxAtkPps_ != nullptr;};
    void deleteMaxAtkPps() { this->maxAtkPps_ = nullptr;};
    inline int64_t getMaxAtkPps() const { DARABONBA_PTR_GET_DEFAULT(maxAtkPps_, 0L) };
    inline DescribeDDoSBpsMaxResponseBody& setMaxAtkPps(int64_t maxAtkPps) { DARABONBA_PTR_SET_VALUE(maxAtkPps_, maxAtkPps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSBpsMaxResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDDoSBpsMaxResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> maxAtkBps_ {};
    shared_ptr<int64_t> maxAtkPps_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
