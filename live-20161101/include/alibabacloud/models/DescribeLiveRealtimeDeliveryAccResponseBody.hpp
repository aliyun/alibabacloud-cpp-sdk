// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRealtimeDeliveryAccResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RealTimeDeliveryAccData, realTimeDeliveryAccData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RealTimeDeliveryAccData, realTimeDeliveryAccData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveRealtimeDeliveryAccResponseBody() = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody(const DescribeLiveRealtimeDeliveryAccResponseBody &) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody(DescribeLiveRealtimeDeliveryAccResponseBody &&) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRealtimeDeliveryAccResponseBody() = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody& operator=(const DescribeLiveRealtimeDeliveryAccResponseBody &) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody& operator=(DescribeLiveRealtimeDeliveryAccResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->realTimeDeliveryAccData_ == nullptr
        && return this->requestId_ == nullptr; };
    // realTimeDeliveryAccData Field Functions 
    bool hasRealTimeDeliveryAccData() const { return this->realTimeDeliveryAccData_ != nullptr;};
    void deleteRealTimeDeliveryAccData() { this->realTimeDeliveryAccData_ = nullptr;};
    inline const DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData & realTimeDeliveryAccData() const { DARABONBA_PTR_GET_CONST(realTimeDeliveryAccData_, DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData) };
    inline DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData realTimeDeliveryAccData() { DARABONBA_PTR_GET(realTimeDeliveryAccData_, DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData) };
    inline DescribeLiveRealtimeDeliveryAccResponseBody& setRealTimeDeliveryAccData(const DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData & realTimeDeliveryAccData) { DARABONBA_PTR_SET_VALUE(realTimeDeliveryAccData_, realTimeDeliveryAccData) };
    inline DescribeLiveRealtimeDeliveryAccResponseBody& setRealTimeDeliveryAccData(DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData && realTimeDeliveryAccData) { DARABONBA_PTR_SET_RVALUE(realTimeDeliveryAccData_, realTimeDeliveryAccData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRealtimeDeliveryAccResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about real-time log deliveries.
    std::shared_ptr<DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData> realTimeDeliveryAccData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
