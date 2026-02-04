// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNDELIVERTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNDELIVERTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnDeliverTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnDeliverTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverId, deliverId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnDeliverTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverId, deliverId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDcdnDeliverTaskResponseBody() = default ;
    CreateDcdnDeliverTaskResponseBody(const CreateDcdnDeliverTaskResponseBody &) = default ;
    CreateDcdnDeliverTaskResponseBody(CreateDcdnDeliverTaskResponseBody &&) = default ;
    CreateDcdnDeliverTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnDeliverTaskResponseBody() = default ;
    CreateDcdnDeliverTaskResponseBody& operator=(const CreateDcdnDeliverTaskResponseBody &) = default ;
    CreateDcdnDeliverTaskResponseBody& operator=(CreateDcdnDeliverTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliverId_ == nullptr
        && this->requestId_ == nullptr; };
    // deliverId Field Functions 
    bool hasDeliverId() const { return this->deliverId_ != nullptr;};
    void deleteDeliverId() { this->deliverId_ = nullptr;};
    inline string getDeliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, "") };
    inline CreateDcdnDeliverTaskResponseBody& setDeliverId(string deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDcdnDeliverTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the change tracking task.
    shared_ptr<string> deliverId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
