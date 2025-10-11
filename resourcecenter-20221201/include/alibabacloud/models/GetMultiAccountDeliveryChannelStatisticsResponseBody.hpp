// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetMultiAccountDeliveryChannelStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountDeliveryChannelStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelStatistics, deliveryChannelStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountDeliveryChannelStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelStatistics, deliveryChannelStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMultiAccountDeliveryChannelStatisticsResponseBody() = default ;
    GetMultiAccountDeliveryChannelStatisticsResponseBody(const GetMultiAccountDeliveryChannelStatisticsResponseBody &) = default ;
    GetMultiAccountDeliveryChannelStatisticsResponseBody(GetMultiAccountDeliveryChannelStatisticsResponseBody &&) = default ;
    GetMultiAccountDeliveryChannelStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountDeliveryChannelStatisticsResponseBody() = default ;
    GetMultiAccountDeliveryChannelStatisticsResponseBody& operator=(const GetMultiAccountDeliveryChannelStatisticsResponseBody &) = default ;
    GetMultiAccountDeliveryChannelStatisticsResponseBody& operator=(GetMultiAccountDeliveryChannelStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliveryChannelStatistics_ != nullptr
        && this->requestId_ != nullptr; };
    // deliveryChannelStatistics Field Functions 
    bool hasDeliveryChannelStatistics() const { return this->deliveryChannelStatistics_ != nullptr;};
    void deleteDeliveryChannelStatistics() { this->deliveryChannelStatistics_ = nullptr;};
    inline const GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics & deliveryChannelStatistics() const { DARABONBA_PTR_GET_CONST(deliveryChannelStatistics_, GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics) };
    inline GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics deliveryChannelStatistics() { DARABONBA_PTR_GET(deliveryChannelStatistics_, GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics) };
    inline GetMultiAccountDeliveryChannelStatisticsResponseBody& setDeliveryChannelStatistics(const GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics & deliveryChannelStatistics) { DARABONBA_PTR_SET_VALUE(deliveryChannelStatistics_, deliveryChannelStatistics) };
    inline GetMultiAccountDeliveryChannelStatisticsResponseBody& setDeliveryChannelStatistics(GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics && deliveryChannelStatistics) { DARABONBA_PTR_SET_RVALUE(deliveryChannelStatistics_, deliveryChannelStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultiAccountDeliveryChannelStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the delivery channel.
    std::shared_ptr<GetMultiAccountDeliveryChannelStatisticsResponseBodyDeliveryChannelStatistics> deliveryChannelStatistics_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
