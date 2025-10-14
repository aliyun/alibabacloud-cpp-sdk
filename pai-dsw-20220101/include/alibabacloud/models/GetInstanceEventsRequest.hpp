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
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(MaxEventsNum, maxEventsNum_);
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
        && return this->eventLevel_ == nullptr && return this->maxEventsNum_ == nullptr && return this->startTime_ == nullptr && return this->token_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetInstanceEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline GetInstanceEventsRequest& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // maxEventsNum Field Functions 
    bool hasMaxEventsNum() const { return this->maxEventsNum_ != nullptr;};
    void deleteMaxEventsNum() { this->maxEventsNum_ = nullptr;};
    inline int32_t maxEventsNum() const { DARABONBA_PTR_GET_DEFAULT(maxEventsNum_, 0) };
    inline GetInstanceEventsRequest& setMaxEventsNum(int32_t maxEventsNum) { DARABONBA_PTR_SET_VALUE(maxEventsNum_, maxEventsNum) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInstanceEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetInstanceEventsRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The end of the time range to query.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> eventLevel_ = nullptr;
    // The maximum number of events. Default value: 2000.
    std::shared_ptr<int32_t> maxEventsNum_ = nullptr;
    // The beginning of the time range to query.
    std::shared_ptr<string> startTime_ = nullptr;
    // The token used to share the URL.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
