// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGDELIVERYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGDELIVERYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateLogDeliveryConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLogDeliveryConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLogDeliveryConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLogDeliveryConfigResponseBody() = default ;
    CreateLogDeliveryConfigResponseBody(const CreateLogDeliveryConfigResponseBody &) = default ;
    CreateLogDeliveryConfigResponseBody(CreateLogDeliveryConfigResponseBody &&) = default ;
    CreateLogDeliveryConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLogDeliveryConfigResponseBody() = default ;
    CreateLogDeliveryConfigResponseBody& operator=(const CreateLogDeliveryConfigResponseBody &) = default ;
    CreateLogDeliveryConfigResponseBody& operator=(CreateLogDeliveryConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryName_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliveryName Field Functions 
    bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
    void deleteDeliveryName() { this->deliveryName_ = nullptr;};
    inline string deliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
    inline CreateLogDeliveryConfigResponseBody& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLogDeliveryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the log delivery configuration.
    std::shared_ptr<string> deliveryName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
