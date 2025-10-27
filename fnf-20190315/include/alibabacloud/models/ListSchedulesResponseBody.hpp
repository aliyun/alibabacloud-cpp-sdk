// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSchedulesResponseBodySchedules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListSchedulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchedulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schedules, schedules_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchedulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schedules, schedules_);
    };
    ListSchedulesResponseBody() = default ;
    ListSchedulesResponseBody(const ListSchedulesResponseBody &) = default ;
    ListSchedulesResponseBody(ListSchedulesResponseBody &&) = default ;
    ListSchedulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchedulesResponseBody() = default ;
    ListSchedulesResponseBody& operator=(const ListSchedulesResponseBody &) = default ;
    ListSchedulesResponseBody& operator=(ListSchedulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->schedules_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSchedulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSchedulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedules Field Functions 
    bool hasSchedules() const { return this->schedules_ != nullptr;};
    void deleteSchedules() { this->schedules_ = nullptr;};
    inline const vector<ListSchedulesResponseBodySchedules> & schedules() const { DARABONBA_PTR_GET_CONST(schedules_, vector<ListSchedulesResponseBodySchedules>) };
    inline vector<ListSchedulesResponseBodySchedules> schedules() { DARABONBA_PTR_GET(schedules_, vector<ListSchedulesResponseBodySchedules>) };
    inline ListSchedulesResponseBody& setSchedules(const vector<ListSchedulesResponseBodySchedules> & schedules) { DARABONBA_PTR_SET_VALUE(schedules_, schedules) };
    inline ListSchedulesResponseBody& setSchedules(vector<ListSchedulesResponseBodySchedules> && schedules) { DARABONBA_PTR_SET_RVALUE(schedules_, schedules) };


  protected:
    // The token for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time-based schedules that are queried.
    std::shared_ptr<vector<ListSchedulesResponseBodySchedules>> schedules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
