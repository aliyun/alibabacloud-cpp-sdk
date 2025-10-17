// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTAUTORENEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTAUTORENEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostAutoRenewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostAutoRenewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostRenewAttributes, dedicatedHostRenewAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostAutoRenewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostRenewAttributes, dedicatedHostRenewAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedHostAutoRenewResponseBody() = default ;
    DescribeDedicatedHostAutoRenewResponseBody(const DescribeDedicatedHostAutoRenewResponseBody &) = default ;
    DescribeDedicatedHostAutoRenewResponseBody(DescribeDedicatedHostAutoRenewResponseBody &&) = default ;
    DescribeDedicatedHostAutoRenewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostAutoRenewResponseBody() = default ;
    DescribeDedicatedHostAutoRenewResponseBody& operator=(const DescribeDedicatedHostAutoRenewResponseBody &) = default ;
    DescribeDedicatedHostAutoRenewResponseBody& operator=(DescribeDedicatedHostAutoRenewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostRenewAttributes_ == nullptr
        && return this->requestId_ == nullptr; };
    // dedicatedHostRenewAttributes Field Functions 
    bool hasDedicatedHostRenewAttributes() const { return this->dedicatedHostRenewAttributes_ != nullptr;};
    void deleteDedicatedHostRenewAttributes() { this->dedicatedHostRenewAttributes_ = nullptr;};
    inline const DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes & dedicatedHostRenewAttributes() const { DARABONBA_PTR_GET_CONST(dedicatedHostRenewAttributes_, DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes) };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes dedicatedHostRenewAttributes() { DARABONBA_PTR_GET(dedicatedHostRenewAttributes_, DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes) };
    inline DescribeDedicatedHostAutoRenewResponseBody& setDedicatedHostRenewAttributes(const DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes & dedicatedHostRenewAttributes) { DARABONBA_PTR_SET_VALUE(dedicatedHostRenewAttributes_, dedicatedHostRenewAttributes) };
    inline DescribeDedicatedHostAutoRenewResponseBody& setDedicatedHostRenewAttributes(DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes && dedicatedHostRenewAttributes) { DARABONBA_PTR_SET_RVALUE(dedicatedHostRenewAttributes_, dedicatedHostRenewAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostAutoRenewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The array that consists of dedicated host auto-renewal attributes.
    std::shared_ptr<DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes> dedicatedHostRenewAttributes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
