// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVSWITCHCIDRRESERVATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVSWITCHCIDRRESERVATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVSwitchCidrReservationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVSwitchCidrReservationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVSwitchCidrReservationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
    };
    CreateVSwitchCidrReservationResponseBody() = default ;
    CreateVSwitchCidrReservationResponseBody(const CreateVSwitchCidrReservationResponseBody &) = default ;
    CreateVSwitchCidrReservationResponseBody(CreateVSwitchCidrReservationResponseBody &&) = default ;
    CreateVSwitchCidrReservationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVSwitchCidrReservationResponseBody() = default ;
    CreateVSwitchCidrReservationResponseBody& operator=(const CreateVSwitchCidrReservationResponseBody &) = default ;
    CreateVSwitchCidrReservationResponseBody& operator=(CreateVSwitchCidrReservationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vSwitchCidrReservationId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVSwitchCidrReservationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitchCidrReservationId Field Functions 
    bool hasVSwitchCidrReservationId() const { return this->vSwitchCidrReservationId_ != nullptr;};
    void deleteVSwitchCidrReservationId() { this->vSwitchCidrReservationId_ = nullptr;};
    inline string vSwitchCidrReservationId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationId_, "") };
    inline CreateVSwitchCidrReservationResponseBody& setVSwitchCidrReservationId(string vSwitchCidrReservationId) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationId_, vSwitchCidrReservationId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the reserved CIDR block.
    std::shared_ptr<string> vSwitchCidrReservationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
