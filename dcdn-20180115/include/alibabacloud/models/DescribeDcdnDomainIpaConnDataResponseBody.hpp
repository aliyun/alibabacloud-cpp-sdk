// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPACONNDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPACONNDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainIpaConnDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainIpaConnDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionDataPerInterval, connectionDataPerInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainIpaConnDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionDataPerInterval, connectionDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainIpaConnDataResponseBody() = default ;
    DescribeDcdnDomainIpaConnDataResponseBody(const DescribeDcdnDomainIpaConnDataResponseBody &) = default ;
    DescribeDcdnDomainIpaConnDataResponseBody(DescribeDcdnDomainIpaConnDataResponseBody &&) = default ;
    DescribeDcdnDomainIpaConnDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainIpaConnDataResponseBody() = default ;
    DescribeDcdnDomainIpaConnDataResponseBody& operator=(const DescribeDcdnDomainIpaConnDataResponseBody &) = default ;
    DescribeDcdnDomainIpaConnDataResponseBody& operator=(DescribeDcdnDomainIpaConnDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionDataPerInterval_ != nullptr
        && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // connectionDataPerInterval Field Functions 
    bool hasConnectionDataPerInterval() const { return this->connectionDataPerInterval_ != nullptr;};
    void deleteConnectionDataPerInterval() { this->connectionDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerInterval & connectionDataPerInterval() const { DARABONBA_PTR_GET_CONST(connectionDataPerInterval_, DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerInterval) };
    inline DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerInterval connectionDataPerInterval() { DARABONBA_PTR_GET(connectionDataPerInterval_, DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerInterval) };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setConnectionDataPerInterval(const DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerInterval & connectionDataPerInterval) { DARABONBA_PTR_SET_VALUE(connectionDataPerInterval_, connectionDataPerInterval) };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setConnectionDataPerInterval(DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerInterval && connectionDataPerInterval) { DARABONBA_PTR_SET_RVALUE(connectionDataPerInterval_, connectionDataPerInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The number of user connections at each time interval.
    std::shared_ptr<DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerInterval> connectionDataPerInterval_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
