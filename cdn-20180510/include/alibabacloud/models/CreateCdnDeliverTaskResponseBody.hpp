// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDNDELIVERTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECDNDELIVERTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class CreateCdnDeliverTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdnDeliverTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverId, deliverId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdnDeliverTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverId, deliverId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCdnDeliverTaskResponseBody() = default ;
    CreateCdnDeliverTaskResponseBody(const CreateCdnDeliverTaskResponseBody &) = default ;
    CreateCdnDeliverTaskResponseBody(CreateCdnDeliverTaskResponseBody &&) = default ;
    CreateCdnDeliverTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdnDeliverTaskResponseBody() = default ;
    CreateCdnDeliverTaskResponseBody& operator=(const CreateCdnDeliverTaskResponseBody &) = default ;
    CreateCdnDeliverTaskResponseBody& operator=(CreateCdnDeliverTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliverId_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliverId Field Functions 
    bool hasDeliverId() const { return this->deliverId_ != nullptr;};
    void deleteDeliverId() { this->deliverId_ = nullptr;};
    inline string deliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, "") };
    inline CreateCdnDeliverTaskResponseBody& setDeliverId(string deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCdnDeliverTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the tracking task.
    std::shared_ptr<string> deliverId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
