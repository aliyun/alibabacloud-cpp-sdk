// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDDOSFROMACCELERATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHDDOSFROMACCELERATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DetachDdosFromAcceleratorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachDdosFromAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosId, ddosId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachDdosFromAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosId, ddosId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachDdosFromAcceleratorResponseBody() = default ;
    DetachDdosFromAcceleratorResponseBody(const DetachDdosFromAcceleratorResponseBody &) = default ;
    DetachDdosFromAcceleratorResponseBody(DetachDdosFromAcceleratorResponseBody &&) = default ;
    DetachDdosFromAcceleratorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachDdosFromAcceleratorResponseBody() = default ;
    DetachDdosFromAcceleratorResponseBody& operator=(const DetachDdosFromAcceleratorResponseBody &) = default ;
    DetachDdosFromAcceleratorResponseBody& operator=(DetachDdosFromAcceleratorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ddosId_ == nullptr
        && this->requestId_ == nullptr; };
    // ddosId Field Functions 
    bool hasDdosId() const { return this->ddosId_ != nullptr;};
    void deleteDdosId() { this->ddosId_ = nullptr;};
    inline string getDdosId() const { DARABONBA_PTR_GET_DEFAULT(ddosId_, "") };
    inline DetachDdosFromAcceleratorResponseBody& setDdosId(string ddosId) { DARABONBA_PTR_SET_VALUE(ddosId_, ddosId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachDdosFromAcceleratorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Anti-DDoS Pro/Premium instance that was disassociated from the GA instance.
    shared_ptr<string> ddosId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
