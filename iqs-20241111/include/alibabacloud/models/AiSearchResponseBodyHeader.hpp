// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODYHEADER_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODYHEADER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiSearchResponseBodyHeaderQueryContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class AiSearchResponseBodyHeader : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiSearchResponseBodyHeader& obj) { 
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_PTR_TO_JSON(eventId, eventId_);
      DARABONBA_PTR_TO_JSON(queryContext, queryContext_);
      DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
    };
    friend void from_json(const Darabonba::Json& j, AiSearchResponseBodyHeader& obj) { 
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_PTR_FROM_JSON(eventId, eventId_);
      DARABONBA_PTR_FROM_JSON(queryContext, queryContext_);
      DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
    };
    AiSearchResponseBodyHeader() = default ;
    AiSearchResponseBodyHeader(const AiSearchResponseBodyHeader &) = default ;
    AiSearchResponseBodyHeader(AiSearchResponseBodyHeader &&) = default ;
    AiSearchResponseBodyHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiSearchResponseBodyHeader() = default ;
    AiSearchResponseBodyHeader& operator=(const AiSearchResponseBodyHeader &) = default ;
    AiSearchResponseBodyHeader& operator=(AiSearchResponseBodyHeader &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->eventId_ != nullptr && this->queryContext_ != nullptr && this->responseTime_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline AiSearchResponseBodyHeader& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline AiSearchResponseBodyHeader& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // queryContext Field Functions 
    bool hasQueryContext() const { return this->queryContext_ != nullptr;};
    void deleteQueryContext() { this->queryContext_ = nullptr;};
    inline const Models::AiSearchResponseBodyHeaderQueryContext & queryContext() const { DARABONBA_PTR_GET_CONST(queryContext_, Models::AiSearchResponseBodyHeaderQueryContext) };
    inline Models::AiSearchResponseBodyHeaderQueryContext queryContext() { DARABONBA_PTR_GET(queryContext_, Models::AiSearchResponseBodyHeaderQueryContext) };
    inline AiSearchResponseBodyHeader& setQueryContext(const Models::AiSearchResponseBodyHeaderQueryContext & queryContext) { DARABONBA_PTR_SET_VALUE(queryContext_, queryContext) };
    inline AiSearchResponseBodyHeader& setQueryContext(Models::AiSearchResponseBodyHeaderQueryContext && queryContext) { DARABONBA_PTR_SET_RVALUE(queryContext_, queryContext) };


    // responseTime Field Functions 
    bool hasResponseTime() const { return this->responseTime_ != nullptr;};
    void deleteResponseTime() { this->responseTime_ = nullptr;};
    inline int64_t responseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0L) };
    inline AiSearchResponseBodyHeader& setResponseTime(int64_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


  protected:
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<Models::AiSearchResponseBodyHeaderQueryContext> queryContext_ = nullptr;
    std::shared_ptr<int64_t> responseTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
