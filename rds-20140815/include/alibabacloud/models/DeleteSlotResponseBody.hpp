// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESLOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESLOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteSlotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSlotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlotName, slotName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSlotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlotName, slotName_);
    };
    DeleteSlotResponseBody() = default ;
    DeleteSlotResponseBody(const DeleteSlotResponseBody &) = default ;
    DeleteSlotResponseBody(DeleteSlotResponseBody &&) = default ;
    DeleteSlotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSlotResponseBody() = default ;
    DeleteSlotResponseBody& operator=(const DeleteSlotResponseBody &) = default ;
    DeleteSlotResponseBody& operator=(DeleteSlotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->slotName_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSlotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slotName Field Functions 
    bool hasSlotName() const { return this->slotName_ != nullptr;};
    void deleteSlotName() { this->slotName_ = nullptr;};
    inline string slotName() const { DARABONBA_PTR_GET_DEFAULT(slotName_, "") };
    inline DeleteSlotResponseBody& setSlotName(string slotName) { DARABONBA_PTR_SET_VALUE(slotName_, slotName) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the replication slot.
    std::shared_ptr<string> slotName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
