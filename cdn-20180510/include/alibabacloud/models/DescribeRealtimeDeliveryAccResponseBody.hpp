// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRealtimeDeliveryAccResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReatTimeDeliveryAccData, reatTimeDeliveryAccData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReatTimeDeliveryAccData, reatTimeDeliveryAccData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRealtimeDeliveryAccResponseBody() = default ;
    DescribeRealtimeDeliveryAccResponseBody(const DescribeRealtimeDeliveryAccResponseBody &) = default ;
    DescribeRealtimeDeliveryAccResponseBody(DescribeRealtimeDeliveryAccResponseBody &&) = default ;
    DescribeRealtimeDeliveryAccResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRealtimeDeliveryAccResponseBody() = default ;
    DescribeRealtimeDeliveryAccResponseBody& operator=(const DescribeRealtimeDeliveryAccResponseBody &) = default ;
    DescribeRealtimeDeliveryAccResponseBody& operator=(DescribeRealtimeDeliveryAccResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reatTimeDeliveryAccData_ == nullptr
        && return this->requestId_ == nullptr; };
    // reatTimeDeliveryAccData Field Functions 
    bool hasReatTimeDeliveryAccData() const { return this->reatTimeDeliveryAccData_ != nullptr;};
    void deleteReatTimeDeliveryAccData() { this->reatTimeDeliveryAccData_ = nullptr;};
    inline const DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData & reatTimeDeliveryAccData() const { DARABONBA_PTR_GET_CONST(reatTimeDeliveryAccData_, DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData) };
    inline DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData reatTimeDeliveryAccData() { DARABONBA_PTR_GET(reatTimeDeliveryAccData_, DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData) };
    inline DescribeRealtimeDeliveryAccResponseBody& setReatTimeDeliveryAccData(const DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData & reatTimeDeliveryAccData) { DARABONBA_PTR_SET_VALUE(reatTimeDeliveryAccData_, reatTimeDeliveryAccData) };
    inline DescribeRealtimeDeliveryAccResponseBody& setReatTimeDeliveryAccData(DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData && reatTimeDeliveryAccData) { DARABONBA_PTR_SET_RVALUE(reatTimeDeliveryAccData_, reatTimeDeliveryAccData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRealtimeDeliveryAccResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics about real-time log deliveries.
    std::shared_ptr<DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData> reatTimeDeliveryAccData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
