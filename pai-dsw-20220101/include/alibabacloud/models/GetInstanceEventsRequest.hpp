// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(MaxEventsNum, maxEventsNum_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(MaxEventsNum, maxEventsNum_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetInstanceEventsRequest() = default ;
    GetInstanceEventsRequest(const GetInstanceEventsRequest &) = default ;
    GetInstanceEventsRequest(GetInstanceEventsRequest &&) = default ;
    GetInstanceEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceEventsRequest() = default ;
    GetInstanceEventsRequest& operator=(const GetInstanceEventsRequest &) = default ;
    GetInstanceEventsRequest& operator=(GetInstanceEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->eventLevel_ == nullptr && this->maxEventsNum_ == nullptr && this->offset_ == nullptr && this->reverse_ == nullptr && this->startTime_ == nullptr
        && this->token_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetInstanceEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline GetInstanceEventsRequest& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // maxEventsNum Field Functions 
    bool hasMaxEventsNum() const { return this->maxEventsNum_ != nullptr;};
    void deleteMaxEventsNum() { this->maxEventsNum_ = nullptr;};
    inline int32_t getMaxEventsNum() const { DARABONBA_PTR_GET_DEFAULT(maxEventsNum_, 0) };
    inline GetInstanceEventsRequest& setMaxEventsNum(int32_t maxEventsNum) { DARABONBA_PTR_SET_VALUE(maxEventsNum_, maxEventsNum) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline GetInstanceEventsRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline GetInstanceEventsRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInstanceEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetInstanceEventsRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The end of the time range to query.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> eventLevel_ {};
    // The maximum number of events. Default value: 2000.
    shared_ptr<int32_t> maxEventsNum_ {};
    shared_ptr<int32_t> offset_ {};
    shared_ptr<bool> reverse_ {};
    // The beginning of the time range to query.
    shared_ptr<string> startTime_ {};
    // The token used to share the URL.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
