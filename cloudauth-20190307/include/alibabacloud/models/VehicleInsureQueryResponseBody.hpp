// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEINSUREQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEINSUREQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(VehicleInfo, vehicleInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(VehicleInfo, vehicleInfo_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->vehicleInfo_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline ResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // vehicleInfo Field Functions 
      bool hasVehicleInfo() const { return this->vehicleInfo_ != nullptr;};
      void deleteVehicleInfo() { this->vehicleInfo_ = nullptr;};
      inline string getVehicleInfo() const { DARABONBA_PTR_GET_DEFAULT(vehicleInfo_, "") };
      inline ResultObject& setVehicleInfo(string vehicleInfo) { DARABONBA_PTR_SET_VALUE(vehicleInfo_, vehicleInfo) };


    protected:
      // Verification result code:
      // 
      // > 
      // > - 1: Found (charged)
      // > - 3: No record found (not charged)
      shared_ptr<string> bizCode_ {};
      // Insurance date information
      shared_ptr<string> vehicleInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VehicleInsureQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VehicleInsureQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VehicleInsureQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const VehicleInsureQueryResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, VehicleInsureQueryResponseBody::ResultObject) };
    inline VehicleInsureQueryResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, VehicleInsureQueryResponseBody::ResultObject) };
    inline VehicleInsureQueryResponseBody& setResultObject(const VehicleInsureQueryResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline VehicleInsureQueryResponseBody& setResultObject(VehicleInsureQueryResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 indicates success, others indicate failure.
    shared_ptr<string> code_ {};
    // Response message for the request information.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned result information.
    shared_ptr<VehicleInsureQueryResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
