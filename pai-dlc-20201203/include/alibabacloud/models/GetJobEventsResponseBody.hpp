// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetJobEventsResponseBody() = default ;
    GetJobEventsResponseBody(const GetJobEventsResponseBody &) = default ;
    GetJobEventsResponseBody(GetJobEventsResponseBody &&) = default ;
    GetJobEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobEventsResponseBody() = default ;
    GetJobEventsResponseBody& operator=(const GetJobEventsResponseBody &) = default ;
    GetJobEventsResponseBody& operator=(GetJobEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && return this->jobId_ == nullptr && return this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> events() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline GetJobEventsResponseBody& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetJobEventsResponseBody& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobEventsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The events.
    std::shared_ptr<vector<string>> events_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The request ID, which can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
