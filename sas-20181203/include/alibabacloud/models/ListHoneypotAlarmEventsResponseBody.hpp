// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents.hpp>
#include <alibabacloud/models/ListHoneypotAlarmEventsResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotAlarmEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAlarmEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotAlarmEvents, honeypotAlarmEvents_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAlarmEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotAlarmEvents, honeypotAlarmEvents_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHoneypotAlarmEventsResponseBody() = default ;
    ListHoneypotAlarmEventsResponseBody(const ListHoneypotAlarmEventsResponseBody &) = default ;
    ListHoneypotAlarmEventsResponseBody(ListHoneypotAlarmEventsResponseBody &&) = default ;
    ListHoneypotAlarmEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAlarmEventsResponseBody() = default ;
    ListHoneypotAlarmEventsResponseBody& operator=(const ListHoneypotAlarmEventsResponseBody &) = default ;
    ListHoneypotAlarmEventsResponseBody& operator=(ListHoneypotAlarmEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotAlarmEvents_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // honeypotAlarmEvents Field Functions 
    bool hasHoneypotAlarmEvents() const { return this->honeypotAlarmEvents_ != nullptr;};
    void deleteHoneypotAlarmEvents() { this->honeypotAlarmEvents_ = nullptr;};
    inline const vector<ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents> & honeypotAlarmEvents() const { DARABONBA_PTR_GET_CONST(honeypotAlarmEvents_, vector<ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents>) };
    inline vector<ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents> honeypotAlarmEvents() { DARABONBA_PTR_GET(honeypotAlarmEvents_, vector<ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents>) };
    inline ListHoneypotAlarmEventsResponseBody& setHoneypotAlarmEvents(const vector<ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents> & honeypotAlarmEvents) { DARABONBA_PTR_SET_VALUE(honeypotAlarmEvents_, honeypotAlarmEvents) };
    inline ListHoneypotAlarmEventsResponseBody& setHoneypotAlarmEvents(vector<ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents> && honeypotAlarmEvents) { DARABONBA_PTR_SET_RVALUE(honeypotAlarmEvents_, honeypotAlarmEvents) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotAlarmEventsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotAlarmEventsResponseBodyPageInfo) };
    inline ListHoneypotAlarmEventsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotAlarmEventsResponseBodyPageInfo) };
    inline ListHoneypotAlarmEventsResponseBody& setPageInfo(const ListHoneypotAlarmEventsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotAlarmEventsResponseBody& setPageInfo(ListHoneypotAlarmEventsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotAlarmEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert events.
    std::shared_ptr<vector<ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents>> honeypotAlarmEvents_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListHoneypotAlarmEventsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
