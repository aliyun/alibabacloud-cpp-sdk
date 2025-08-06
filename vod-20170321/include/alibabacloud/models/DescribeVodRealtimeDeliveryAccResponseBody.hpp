// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRealtimeDeliveryAccResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RealTimeDeliveryAccData, realTimeDeliveryAccData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RealTimeDeliveryAccData, realTimeDeliveryAccData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodRealtimeDeliveryAccResponseBody() = default ;
    DescribeVodRealtimeDeliveryAccResponseBody(const DescribeVodRealtimeDeliveryAccResponseBody &) = default ;
    DescribeVodRealtimeDeliveryAccResponseBody(DescribeVodRealtimeDeliveryAccResponseBody &&) = default ;
    DescribeVodRealtimeDeliveryAccResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRealtimeDeliveryAccResponseBody() = default ;
    DescribeVodRealtimeDeliveryAccResponseBody& operator=(const DescribeVodRealtimeDeliveryAccResponseBody &) = default ;
    DescribeVodRealtimeDeliveryAccResponseBody& operator=(DescribeVodRealtimeDeliveryAccResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realTimeDeliveryAccData_ != nullptr
        && this->requestId_ != nullptr; };
    // realTimeDeliveryAccData Field Functions 
    bool hasRealTimeDeliveryAccData() const { return this->realTimeDeliveryAccData_ != nullptr;};
    void deleteRealTimeDeliveryAccData() { this->realTimeDeliveryAccData_ = nullptr;};
    inline const DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData & realTimeDeliveryAccData() const { DARABONBA_PTR_GET_CONST(realTimeDeliveryAccData_, DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData) };
    inline DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData realTimeDeliveryAccData() { DARABONBA_PTR_GET(realTimeDeliveryAccData_, DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData) };
    inline DescribeVodRealtimeDeliveryAccResponseBody& setRealTimeDeliveryAccData(const DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData & realTimeDeliveryAccData) { DARABONBA_PTR_SET_VALUE(realTimeDeliveryAccData_, realTimeDeliveryAccData) };
    inline DescribeVodRealtimeDeliveryAccResponseBody& setRealTimeDeliveryAccData(DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData && realTimeDeliveryAccData) { DARABONBA_PTR_SET_RVALUE(realTimeDeliveryAccData_, realTimeDeliveryAccData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodRealtimeDeliveryAccResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about real-time log deliveries.
    std::shared_ptr<DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData> realTimeDeliveryAccData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
