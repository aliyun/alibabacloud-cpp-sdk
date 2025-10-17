// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECAPACITYRESERVATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECAPACITYRESERVATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateCapacityReservationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCapacityReservationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCapacityReservationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCapacityReservationResponseBody() = default ;
    CreateCapacityReservationResponseBody(const CreateCapacityReservationResponseBody &) = default ;
    CreateCapacityReservationResponseBody(CreateCapacityReservationResponseBody &&) = default ;
    CreateCapacityReservationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCapacityReservationResponseBody() = default ;
    CreateCapacityReservationResponseBody& operator=(const CreateCapacityReservationResponseBody &) = default ;
    CreateCapacityReservationResponseBody& operator=(CreateCapacityReservationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privatePoolOptionsId_ == nullptr
        && return this->requestId_ == nullptr; };
    // privatePoolOptionsId Field Functions 
    bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
    void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
    inline string privatePoolOptionsId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsId_, "") };
    inline CreateCapacityReservationResponseBody& setPrivatePoolOptionsId(string privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCapacityReservationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The capacity reservation ID.
    std::shared_ptr<string> privatePoolOptionsId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
