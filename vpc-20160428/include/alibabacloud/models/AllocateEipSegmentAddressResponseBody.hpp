// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEEIPSEGMENTADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEEIPSEGMENTADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateEipSegmentAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateEipSegmentAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipSegmentInstanceId, eipSegmentInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateEipSegmentAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipSegmentInstanceId, eipSegmentInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocateEipSegmentAddressResponseBody() = default ;
    AllocateEipSegmentAddressResponseBody(const AllocateEipSegmentAddressResponseBody &) = default ;
    AllocateEipSegmentAddressResponseBody(AllocateEipSegmentAddressResponseBody &&) = default ;
    AllocateEipSegmentAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateEipSegmentAddressResponseBody() = default ;
    AllocateEipSegmentAddressResponseBody& operator=(const AllocateEipSegmentAddressResponseBody &) = default ;
    AllocateEipSegmentAddressResponseBody& operator=(AllocateEipSegmentAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipSegmentInstanceId_ != nullptr
        && this->requestId_ != nullptr; };
    // eipSegmentInstanceId Field Functions 
    bool hasEipSegmentInstanceId() const { return this->eipSegmentInstanceId_ != nullptr;};
    void deleteEipSegmentInstanceId() { this->eipSegmentInstanceId_ = nullptr;};
    inline string eipSegmentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eipSegmentInstanceId_, "") };
    inline AllocateEipSegmentAddressResponseBody& setEipSegmentInstanceId(string eipSegmentInstanceId) { DARABONBA_PTR_SET_VALUE(eipSegmentInstanceId_, eipSegmentInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateEipSegmentAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the contiguous EIP group.
    std::shared_ptr<string> eipSegmentInstanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
