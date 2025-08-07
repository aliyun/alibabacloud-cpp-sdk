// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERINFORMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERINFORMATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserInformationResponseBodyDeliverySettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetUserInformationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserInformationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserInformationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserInformationResponseBody() = default ;
    GetUserInformationResponseBody(const GetUserInformationResponseBody &) = default ;
    GetUserInformationResponseBody(GetUserInformationResponseBody &&) = default ;
    GetUserInformationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserInformationResponseBody() = default ;
    GetUserInformationResponseBody& operator=(const GetUserInformationResponseBody &) = default ;
    GetUserInformationResponseBody& operator=(GetUserInformationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliverySettings_ != nullptr
        && this->requestId_ != nullptr; };
    // deliverySettings Field Functions 
    bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
    void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
    inline const GetUserInformationResponseBodyDeliverySettings & deliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, GetUserInformationResponseBodyDeliverySettings) };
    inline GetUserInformationResponseBodyDeliverySettings deliverySettings() { DARABONBA_PTR_GET(deliverySettings_, GetUserInformationResponseBodyDeliverySettings) };
    inline GetUserInformationResponseBody& setDeliverySettings(const GetUserInformationResponseBodyDeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
    inline GetUserInformationResponseBody& setDeliverySettings(GetUserInformationResponseBodyDeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserInformationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The delivery settings.
    std::shared_ptr<GetUserInformationResponseBodyDeliverySettings> deliverySettings_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
