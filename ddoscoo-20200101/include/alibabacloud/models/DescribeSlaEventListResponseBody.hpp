// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLAEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLAEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlaEventListResponseBodySlaEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSlaEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlaEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlaEvent, slaEvent_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlaEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlaEvent, slaEvent_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeSlaEventListResponseBody() = default ;
    DescribeSlaEventListResponseBody(const DescribeSlaEventListResponseBody &) = default ;
    DescribeSlaEventListResponseBody(DescribeSlaEventListResponseBody &&) = default ;
    DescribeSlaEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlaEventListResponseBody() = default ;
    DescribeSlaEventListResponseBody& operator=(const DescribeSlaEventListResponseBody &) = default ;
    DescribeSlaEventListResponseBody& operator=(DescribeSlaEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->slaEvent_ != nullptr && this->total_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlaEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slaEvent Field Functions 
    bool hasSlaEvent() const { return this->slaEvent_ != nullptr;};
    void deleteSlaEvent() { this->slaEvent_ = nullptr;};
    inline const vector<DescribeSlaEventListResponseBodySlaEvent> & slaEvent() const { DARABONBA_PTR_GET_CONST(slaEvent_, vector<DescribeSlaEventListResponseBodySlaEvent>) };
    inline vector<DescribeSlaEventListResponseBodySlaEvent> slaEvent() { DARABONBA_PTR_GET(slaEvent_, vector<DescribeSlaEventListResponseBodySlaEvent>) };
    inline DescribeSlaEventListResponseBody& setSlaEvent(const vector<DescribeSlaEventListResponseBodySlaEvent> & slaEvent) { DARABONBA_PTR_SET_VALUE(slaEvent_, slaEvent) };
    inline DescribeSlaEventListResponseBody& setSlaEvent(vector<DescribeSlaEventListResponseBodySlaEvent> && slaEvent) { DARABONBA_PTR_SET_RVALUE(slaEvent_, slaEvent) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeSlaEventListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The destination rate limit events.
    std::shared_ptr<vector<DescribeSlaEventListResponseBodySlaEvent>> slaEvent_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
