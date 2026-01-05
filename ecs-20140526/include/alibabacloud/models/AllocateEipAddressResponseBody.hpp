// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AllocateEipAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateEipAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateEipAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocateEipAddressResponseBody() = default ;
    AllocateEipAddressResponseBody(const AllocateEipAddressResponseBody &) = default ;
    AllocateEipAddressResponseBody(AllocateEipAddressResponseBody &&) = default ;
    AllocateEipAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateEipAddressResponseBody() = default ;
    AllocateEipAddressResponseBody& operator=(const AllocateEipAddressResponseBody &) = default ;
    AllocateEipAddressResponseBody& operator=(AllocateEipAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->eipAddress_ == nullptr && this->requestId_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline AllocateEipAddressResponseBody& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline string getEipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
    inline AllocateEipAddressResponseBody& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateEipAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> allocationId_ {};
    shared_ptr<string> eipAddress_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
