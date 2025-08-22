// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSIGHTSEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSIGHTSEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInsightsEventsResponseBodyInsightsEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListInsightsEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInsightsEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InsightsEvents, insightsEvents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInsightsEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InsightsEvents, insightsEvents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInsightsEventsResponseBody() = default ;
    ListInsightsEventsResponseBody(const ListInsightsEventsResponseBody &) = default ;
    ListInsightsEventsResponseBody(ListInsightsEventsResponseBody &&) = default ;
    ListInsightsEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInsightsEventsResponseBody() = default ;
    ListInsightsEventsResponseBody& operator=(const ListInsightsEventsResponseBody &) = default ;
    ListInsightsEventsResponseBody& operator=(ListInsightsEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->insightsEvents_ != nullptr
        && this->requestId_ != nullptr; };
    // insightsEvents Field Functions 
    bool hasInsightsEvents() const { return this->insightsEvents_ != nullptr;};
    void deleteInsightsEvents() { this->insightsEvents_ = nullptr;};
    inline const vector<ListInsightsEventsResponseBodyInsightsEvents> & insightsEvents() const { DARABONBA_PTR_GET_CONST(insightsEvents_, vector<ListInsightsEventsResponseBodyInsightsEvents>) };
    inline vector<ListInsightsEventsResponseBodyInsightsEvents> insightsEvents() { DARABONBA_PTR_GET(insightsEvents_, vector<ListInsightsEventsResponseBodyInsightsEvents>) };
    inline ListInsightsEventsResponseBody& setInsightsEvents(const vector<ListInsightsEventsResponseBodyInsightsEvents> & insightsEvents) { DARABONBA_PTR_SET_VALUE(insightsEvents_, insightsEvents) };
    inline ListInsightsEventsResponseBody& setInsightsEvents(vector<ListInsightsEventsResponseBodyInsightsEvents> && insightsEvents) { DARABONBA_PTR_SET_RVALUE(insightsEvents_, insightsEvents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInsightsEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the event.
    std::shared_ptr<vector<ListInsightsEventsResponseBodyInsightsEvents>> insightsEvents_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
