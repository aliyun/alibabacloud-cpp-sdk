// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeThreatEventResponseBodyThreatEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeThreatEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ThreatEvents, threatEvents_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ThreatEvents, threatEvents_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeThreatEventResponseBody() = default ;
    DescribeThreatEventResponseBody(const DescribeThreatEventResponseBody &) = default ;
    DescribeThreatEventResponseBody(DescribeThreatEventResponseBody &&) = default ;
    DescribeThreatEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatEventResponseBody() = default ;
    DescribeThreatEventResponseBody& operator=(const DescribeThreatEventResponseBody &) = default ;
    DescribeThreatEventResponseBody& operator=(DescribeThreatEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->threatEvents_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeThreatEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threatEvents Field Functions 
    bool hasThreatEvents() const { return this->threatEvents_ != nullptr;};
    void deleteThreatEvents() { this->threatEvents_ = nullptr;};
    inline const vector<DescribeThreatEventResponseBodyThreatEvents> & threatEvents() const { DARABONBA_PTR_GET_CONST(threatEvents_, vector<DescribeThreatEventResponseBodyThreatEvents>) };
    inline vector<DescribeThreatEventResponseBodyThreatEvents> threatEvents() { DARABONBA_PTR_GET(threatEvents_, vector<DescribeThreatEventResponseBodyThreatEvents>) };
    inline DescribeThreatEventResponseBody& setThreatEvents(const vector<DescribeThreatEventResponseBodyThreatEvents> & threatEvents) { DARABONBA_PTR_SET_VALUE(threatEvents_, threatEvents) };
    inline DescribeThreatEventResponseBody& setThreatEvents(vector<DescribeThreatEventResponseBodyThreatEvents> && threatEvents) { DARABONBA_PTR_SET_RVALUE(threatEvents_, threatEvents) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeThreatEventResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeThreatEventResponseBodyThreatEvents>> threatEvents_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
