// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDoSEventsResponseBodyDDoSEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDoSEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DDoSEvents, DDoSEvents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DDoSEvents, DDoSEvents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDDoSEventsResponseBody() = default ;
    DescribeDDoSEventsResponseBody(const DescribeDDoSEventsResponseBody &) = default ;
    DescribeDDoSEventsResponseBody(DescribeDDoSEventsResponseBody &&) = default ;
    DescribeDDoSEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSEventsResponseBody() = default ;
    DescribeDDoSEventsResponseBody& operator=(const DescribeDDoSEventsResponseBody &) = default ;
    DescribeDDoSEventsResponseBody& operator=(DescribeDDoSEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DDoSEvents_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // DDoSEvents Field Functions 
    bool hasDDoSEvents() const { return this->DDoSEvents_ != nullptr;};
    void deleteDDoSEvents() { this->DDoSEvents_ = nullptr;};
    inline const vector<DescribeDDoSEventsResponseBodyDDoSEvents> & DDoSEvents() const { DARABONBA_PTR_GET_CONST(DDoSEvents_, vector<DescribeDDoSEventsResponseBodyDDoSEvents>) };
    inline vector<DescribeDDoSEventsResponseBodyDDoSEvents> DDoSEvents() { DARABONBA_PTR_GET(DDoSEvents_, vector<DescribeDDoSEventsResponseBodyDDoSEvents>) };
    inline DescribeDDoSEventsResponseBody& setDDoSEvents(const vector<DescribeDDoSEventsResponseBodyDDoSEvents> & DDoSEvents) { DARABONBA_PTR_SET_VALUE(DDoSEvents_, DDoSEvents) };
    inline DescribeDDoSEventsResponseBody& setDDoSEvents(vector<DescribeDDoSEventsResponseBodyDDoSEvents> && DDoSEvents) { DARABONBA_PTR_SET_RVALUE(DDoSEvents_, DDoSEvents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDDoSEventsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The DDoS attack events.
    std::shared_ptr<vector<DescribeDDoSEventsResponseBodyDDoSEvents>> DDoSEvents_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned attack events.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
