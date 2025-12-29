// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEMETAVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleMetaVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleMetaVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleMetaVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    VehicleMetaVerifyResponseBody() = default ;
    VehicleMetaVerifyResponseBody(const VehicleMetaVerifyResponseBody &) = default ;
    VehicleMetaVerifyResponseBody(VehicleMetaVerifyResponseBody &&) = default ;
    VehicleMetaVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleMetaVerifyResponseBody() = default ;
    VehicleMetaVerifyResponseBody& operator=(const VehicleMetaVerifyResponseBody &) = default ;
    VehicleMetaVerifyResponseBody& operator=(VehicleMetaVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
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
      virtual bool empty() const override { return this->bizCode_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline ResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    protected:
      // Verification result.
      // 
      // - 1: Consistent (billable)
      // - 2: Inconsistent (billable)
      // - 3: No record found (non-billable)
      shared_ptr<string> bizCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VehicleMetaVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VehicleMetaVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VehicleMetaVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const VehicleMetaVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, VehicleMetaVerifyResponseBody::ResultObject) };
    inline VehicleMetaVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, VehicleMetaVerifyResponseBody::ResultObject) };
    inline VehicleMetaVerifyResponseBody& setResultObject(const VehicleMetaVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline VehicleMetaVerifyResponseBody& setResultObject(VehicleMetaVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Response code, **200** indicates that the API response was successful.
    shared_ptr<string> code_ {};
    // Response message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Returned result information.
    shared_ptr<VehicleMetaVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
