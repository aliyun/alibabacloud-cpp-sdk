// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxEventsNum, maxEventsNum_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxEventsNum, maxEventsNum_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetJobEventsRequest() = default ;
    GetJobEventsRequest(const GetJobEventsRequest &) = default ;
    GetJobEventsRequest(GetJobEventsRequest &&) = default ;
    GetJobEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobEventsRequest() = default ;
    GetJobEventsRequest& operator=(const GetJobEventsRequest &) = default ;
    GetJobEventsRequest& operator=(GetJobEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->maxEventsNum_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetJobEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxEventsNum Field Functions 
    bool hasMaxEventsNum() const { return this->maxEventsNum_ != nullptr;};
    void deleteMaxEventsNum() { this->maxEventsNum_ = nullptr;};
    inline int32_t maxEventsNum() const { DARABONBA_PTR_GET_DEFAULT(maxEventsNum_, 0) };
    inline GetJobEventsRequest& setMaxEventsNum(int32_t maxEventsNum) { DARABONBA_PTR_SET_VALUE(maxEventsNum_, maxEventsNum) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time (UTC) of the time range for querying events. The default value is the current time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The maximum number of events that can be returned. Default value: 2000.
    std::shared_ptr<int32_t> maxEventsNum_ = nullptr;
    // The start time (UTC) of the time range for querying events. The default value is 7 days ago.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
