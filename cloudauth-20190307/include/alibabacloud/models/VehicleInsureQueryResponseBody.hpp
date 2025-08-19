// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEINSUREQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEINSUREQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VehicleInsureQueryResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleInsureQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleInsureQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleInsureQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    VehicleInsureQueryResponseBody() = default ;
    VehicleInsureQueryResponseBody(const VehicleInsureQueryResponseBody &) = default ;
    VehicleInsureQueryResponseBody(VehicleInsureQueryResponseBody &&) = default ;
    VehicleInsureQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleInsureQueryResponseBody() = default ;
    VehicleInsureQueryResponseBody& operator=(const VehicleInsureQueryResponseBody &) = default ;
    VehicleInsureQueryResponseBody& operator=(VehicleInsureQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->resultObject_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VehicleInsureQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VehicleInsureQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VehicleInsureQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const VehicleInsureQueryResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, VehicleInsureQueryResponseBodyResultObject) };
    inline VehicleInsureQueryResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, VehicleInsureQueryResponseBodyResultObject) };
    inline VehicleInsureQueryResponseBody& setResultObject(const VehicleInsureQueryResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline VehicleInsureQueryResponseBody& setResultObject(VehicleInsureQueryResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 indicates success, others indicate failure.
    std::shared_ptr<string> code_ = nullptr;
    // Response message for the request information.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned result information.
    std::shared_ptr<VehicleInsureQueryResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
