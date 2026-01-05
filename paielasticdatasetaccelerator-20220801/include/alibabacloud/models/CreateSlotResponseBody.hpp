// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESLOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class CreateSlotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlotId, slotId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlotId, slotId_);
    };
    CreateSlotResponseBody() = default ;
    CreateSlotResponseBody(const CreateSlotResponseBody &) = default ;
    CreateSlotResponseBody(CreateSlotResponseBody &&) = default ;
    CreateSlotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlotResponseBody() = default ;
    CreateSlotResponseBody& operator=(const CreateSlotResponseBody &) = default ;
    CreateSlotResponseBody& operator=(CreateSlotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointIds_ == nullptr
        && this->requestId_ == nullptr && this->slotId_ == nullptr; };
    // endpointIds Field Functions 
    bool hasEndpointIds() const { return this->endpointIds_ != nullptr;};
    void deleteEndpointIds() { this->endpointIds_ = nullptr;};
    inline string getEndpointIds() const { DARABONBA_PTR_GET_DEFAULT(endpointIds_, "") };
    inline CreateSlotResponseBody& setEndpointIds(string endpointIds) { DARABONBA_PTR_SET_VALUE(endpointIds_, endpointIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSlotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slotId Field Functions 
    bool hasSlotId() const { return this->slotId_ != nullptr;};
    void deleteSlotId() { this->slotId_ = nullptr;};
    inline string getSlotId() const { DARABONBA_PTR_GET_DEFAULT(slotId_, "") };
    inline CreateSlotResponseBody& setSlotId(string slotId) { DARABONBA_PTR_SET_VALUE(slotId_, slotId) };


  protected:
    shared_ptr<string> endpointIds_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> slotId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
