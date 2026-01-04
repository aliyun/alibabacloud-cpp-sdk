// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIRTUALPHYSICALCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIRTUALPHYSICALCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateVirtualPhysicalConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVirtualPhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVirtualPhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateVirtualPhysicalConnectionResponseBody() = default ;
    UpdateVirtualPhysicalConnectionResponseBody(const UpdateVirtualPhysicalConnectionResponseBody &) = default ;
    UpdateVirtualPhysicalConnectionResponseBody(UpdateVirtualPhysicalConnectionResponseBody &&) = default ;
    UpdateVirtualPhysicalConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVirtualPhysicalConnectionResponseBody() = default ;
    UpdateVirtualPhysicalConnectionResponseBody& operator=(const UpdateVirtualPhysicalConnectionResponseBody &) = default ;
    UpdateVirtualPhysicalConnectionResponseBody& operator=(UpdateVirtualPhysicalConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateVirtualPhysicalConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline UpdateVirtualPhysicalConnectionResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the VLAN ID of the hosted connection is changed. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
