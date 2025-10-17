// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostTypes, dedicatedHostTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostTypes, dedicatedHostTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedHostTypesResponseBody() = default ;
    DescribeDedicatedHostTypesResponseBody(const DescribeDedicatedHostTypesResponseBody &) = default ;
    DescribeDedicatedHostTypesResponseBody(DescribeDedicatedHostTypesResponseBody &&) = default ;
    DescribeDedicatedHostTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostTypesResponseBody() = default ;
    DescribeDedicatedHostTypesResponseBody& operator=(const DescribeDedicatedHostTypesResponseBody &) = default ;
    DescribeDedicatedHostTypesResponseBody& operator=(DescribeDedicatedHostTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostTypes_ == nullptr
        && return this->requestId_ == nullptr; };
    // dedicatedHostTypes Field Functions 
    bool hasDedicatedHostTypes() const { return this->dedicatedHostTypes_ != nullptr;};
    void deleteDedicatedHostTypes() { this->dedicatedHostTypes_ = nullptr;};
    inline const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes & dedicatedHostTypes() const { DARABONBA_PTR_GET_CONST(dedicatedHostTypes_, DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes dedicatedHostTypes() { DARABONBA_PTR_GET(dedicatedHostTypes_, DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes) };
    inline DescribeDedicatedHostTypesResponseBody& setDedicatedHostTypes(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes & dedicatedHostTypes) { DARABONBA_PTR_SET_VALUE(dedicatedHostTypes_, dedicatedHostTypes) };
    inline DescribeDedicatedHostTypesResponseBody& setDedicatedHostTypes(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes && dedicatedHostTypes) { DARABONBA_PTR_SET_RVALUE(dedicatedHostTypes_, dedicatedHostTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the dedicated host types.
    std::shared_ptr<DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes> dedicatedHostTypes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
