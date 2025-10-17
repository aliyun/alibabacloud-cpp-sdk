// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAVINGSPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESAVINGSPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateSavingsPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSavingsPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SavingsPlanId, savingsPlanId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSavingsPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SavingsPlanId, savingsPlanId_);
    };
    CreateSavingsPlanResponseBody() = default ;
    CreateSavingsPlanResponseBody(const CreateSavingsPlanResponseBody &) = default ;
    CreateSavingsPlanResponseBody(CreateSavingsPlanResponseBody &&) = default ;
    CreateSavingsPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSavingsPlanResponseBody() = default ;
    CreateSavingsPlanResponseBody& operator=(const CreateSavingsPlanResponseBody &) = default ;
    CreateSavingsPlanResponseBody& operator=(CreateSavingsPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->requestId_ == nullptr && return this->savingsPlanId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateSavingsPlanResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSavingsPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // savingsPlanId Field Functions 
    bool hasSavingsPlanId() const { return this->savingsPlanId_ != nullptr;};
    void deleteSavingsPlanId() { this->savingsPlanId_ = nullptr;};
    inline string savingsPlanId() const { DARABONBA_PTR_GET_DEFAULT(savingsPlanId_, "") };
    inline CreateSavingsPlanResponseBody& setSavingsPlanId(string savingsPlanId) { DARABONBA_PTR_SET_VALUE(savingsPlanId_, savingsPlanId) };


  protected:
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> savingsPlanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
