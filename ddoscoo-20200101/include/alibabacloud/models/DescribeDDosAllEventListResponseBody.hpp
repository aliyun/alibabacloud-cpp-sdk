// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDosAllEventListResponseBodyAttackEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosAllEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosAllEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackEvents, attackEvents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosAllEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackEvents, attackEvents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDDosAllEventListResponseBody() = default ;
    DescribeDDosAllEventListResponseBody(const DescribeDDosAllEventListResponseBody &) = default ;
    DescribeDDosAllEventListResponseBody(DescribeDDosAllEventListResponseBody &&) = default ;
    DescribeDDosAllEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosAllEventListResponseBody() = default ;
    DescribeDDosAllEventListResponseBody& operator=(const DescribeDDosAllEventListResponseBody &) = default ;
    DescribeDDosAllEventListResponseBody& operator=(DescribeDDosAllEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackEvents_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // attackEvents Field Functions 
    bool hasAttackEvents() const { return this->attackEvents_ != nullptr;};
    void deleteAttackEvents() { this->attackEvents_ = nullptr;};
    inline const vector<DescribeDDosAllEventListResponseBodyAttackEvents> & attackEvents() const { DARABONBA_PTR_GET_CONST(attackEvents_, vector<DescribeDDosAllEventListResponseBodyAttackEvents>) };
    inline vector<DescribeDDosAllEventListResponseBodyAttackEvents> attackEvents() { DARABONBA_PTR_GET(attackEvents_, vector<DescribeDDosAllEventListResponseBodyAttackEvents>) };
    inline DescribeDDosAllEventListResponseBody& setAttackEvents(const vector<DescribeDDosAllEventListResponseBodyAttackEvents> & attackEvents) { DARABONBA_PTR_SET_VALUE(attackEvents_, attackEvents) };
    inline DescribeDDosAllEventListResponseBody& setAttackEvents(vector<DescribeDDosAllEventListResponseBodyAttackEvents> && attackEvents) { DARABONBA_PTR_SET_RVALUE(attackEvents_, attackEvents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosAllEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDDosAllEventListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The DDoS attack events.
    std::shared_ptr<vector<DescribeDDosAllEventListResponseBodyAttackEvents>> attackEvents_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of DDoS attack events.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
