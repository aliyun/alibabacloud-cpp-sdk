// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBASICACCELERATEIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEBASICACCELERATEIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DeleteBasicAccelerateIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBasicAccelerateIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBasicAccelerateIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteBasicAccelerateIpResponseBody() = default ;
    DeleteBasicAccelerateIpResponseBody(const DeleteBasicAccelerateIpResponseBody &) = default ;
    DeleteBasicAccelerateIpResponseBody(DeleteBasicAccelerateIpResponseBody &&) = default ;
    DeleteBasicAccelerateIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBasicAccelerateIpResponseBody() = default ;
    DeleteBasicAccelerateIpResponseBody& operator=(const DeleteBasicAccelerateIpResponseBody &) = default ;
    DeleteBasicAccelerateIpResponseBody& operator=(DeleteBasicAccelerateIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateIpId_ == nullptr
        && this->requestId_ == nullptr; };
    // accelerateIpId Field Functions 
    bool hasAccelerateIpId() const { return this->accelerateIpId_ != nullptr;};
    void deleteAccelerateIpId() { this->accelerateIpId_ = nullptr;};
    inline string getAccelerateIpId() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpId_, "") };
    inline DeleteBasicAccelerateIpResponseBody& setAccelerateIpId(string accelerateIpId) { DARABONBA_PTR_SET_VALUE(accelerateIpId_, accelerateIpId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteBasicAccelerateIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the accelerated IP address that is deleted.
    shared_ptr<string> accelerateIpId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
