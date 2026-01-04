// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCANALLOCATEVPCPRIVATEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCANALLOCATEVPCPRIVATEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CheckCanAllocateVpcPrivateIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCanAllocateVpcPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanAllocate, canAllocate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCanAllocateVpcPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanAllocate, canAllocate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckCanAllocateVpcPrivateIpAddressResponseBody() = default ;
    CheckCanAllocateVpcPrivateIpAddressResponseBody(const CheckCanAllocateVpcPrivateIpAddressResponseBody &) = default ;
    CheckCanAllocateVpcPrivateIpAddressResponseBody(CheckCanAllocateVpcPrivateIpAddressResponseBody &&) = default ;
    CheckCanAllocateVpcPrivateIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCanAllocateVpcPrivateIpAddressResponseBody() = default ;
    CheckCanAllocateVpcPrivateIpAddressResponseBody& operator=(const CheckCanAllocateVpcPrivateIpAddressResponseBody &) = default ;
    CheckCanAllocateVpcPrivateIpAddressResponseBody& operator=(CheckCanAllocateVpcPrivateIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canAllocate_ == nullptr
        && this->requestId_ == nullptr; };
    // canAllocate Field Functions 
    bool hasCanAllocate() const { return this->canAllocate_ != nullptr;};
    void deleteCanAllocate() { this->canAllocate_ = nullptr;};
    inline bool getCanAllocate() const { DARABONBA_PTR_GET_DEFAULT(canAllocate_, false) };
    inline CheckCanAllocateVpcPrivateIpAddressResponseBody& setCanAllocate(bool canAllocate) { DARABONBA_PTR_SET_VALUE(canAllocate_, canAllocate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCanAllocateVpcPrivateIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the private IP address is available. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> canAllocate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
