// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeThreatEventDetailResponseBodyThreatEventDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeThreatEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ThreatEventDetail, threatEventDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ThreatEventDetail, threatEventDetail_);
    };
    DescribeThreatEventDetailResponseBody() = default ;
    DescribeThreatEventDetailResponseBody(const DescribeThreatEventDetailResponseBody &) = default ;
    DescribeThreatEventDetailResponseBody(DescribeThreatEventDetailResponseBody &&) = default ;
    DescribeThreatEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatEventDetailResponseBody() = default ;
    DescribeThreatEventDetailResponseBody& operator=(const DescribeThreatEventDetailResponseBody &) = default ;
    DescribeThreatEventDetailResponseBody& operator=(DescribeThreatEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->threatEventDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeThreatEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threatEventDetail Field Functions 
    bool hasThreatEventDetail() const { return this->threatEventDetail_ != nullptr;};
    void deleteThreatEventDetail() { this->threatEventDetail_ = nullptr;};
    inline const DescribeThreatEventDetailResponseBodyThreatEventDetail & threatEventDetail() const { DARABONBA_PTR_GET_CONST(threatEventDetail_, DescribeThreatEventDetailResponseBodyThreatEventDetail) };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail threatEventDetail() { DARABONBA_PTR_GET(threatEventDetail_, DescribeThreatEventDetailResponseBodyThreatEventDetail) };
    inline DescribeThreatEventDetailResponseBody& setThreatEventDetail(const DescribeThreatEventDetailResponseBodyThreatEventDetail & threatEventDetail) { DARABONBA_PTR_SET_VALUE(threatEventDetail_, threatEventDetail) };
    inline DescribeThreatEventDetailResponseBody& setThreatEventDetail(DescribeThreatEventDetailResponseBodyThreatEventDetail && threatEventDetail) { DARABONBA_PTR_SET_RVALUE(threatEventDetail_, threatEventDetail) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeThreatEventDetailResponseBodyThreatEventDetail> threatEventDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
