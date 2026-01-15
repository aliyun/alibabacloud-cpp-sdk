// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobInstanceEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobInstanceEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobInstanceEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTrainingJobInstanceEventsResponseBody() = default ;
    ListTrainingJobInstanceEventsResponseBody(const ListTrainingJobInstanceEventsResponseBody &) = default ;
    ListTrainingJobInstanceEventsResponseBody(ListTrainingJobInstanceEventsResponseBody &&) = default ;
    ListTrainingJobInstanceEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobInstanceEventsResponseBody() = default ;
    ListTrainingJobInstanceEventsResponseBody& operator=(const ListTrainingJobInstanceEventsResponseBody &) = default ;
    ListTrainingJobInstanceEventsResponseBody& operator=(ListTrainingJobInstanceEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> getEvents() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline ListTrainingJobInstanceEventsResponseBody& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline ListTrainingJobInstanceEventsResponseBody& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrainingJobInstanceEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListTrainingJobInstanceEventsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<string>> events_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
