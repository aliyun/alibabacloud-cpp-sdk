// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMERMODULEBASICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMERMODULEBASICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeCustomerModuleBasicInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomerModuleBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomerModuleBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomerModuleBasicInfoResponseBody() = default ;
    DescribeCustomerModuleBasicInfoResponseBody(const DescribeCustomerModuleBasicInfoResponseBody &) = default ;
    DescribeCustomerModuleBasicInfoResponseBody(DescribeCustomerModuleBasicInfoResponseBody &&) = default ;
    DescribeCustomerModuleBasicInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomerModuleBasicInfoResponseBody() = default ;
    DescribeCustomerModuleBasicInfoResponseBody& operator=(const DescribeCustomerModuleBasicInfoResponseBody &) = default ;
    DescribeCustomerModuleBasicInfoResponseBody& operator=(DescribeCustomerModuleBasicInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CustomerModuleName, customerModuleName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InnerModuleName, innerModuleName_);
        DARABONBA_PTR_TO_JSON(ModuleType, moduleType_);
        DARABONBA_PTR_TO_JSON(StorePath, storePath_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomerModuleName, customerModuleName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InnerModuleName, innerModuleName_);
        DARABONBA_PTR_FROM_JSON(ModuleType, moduleType_);
        DARABONBA_PTR_FROM_JSON(StorePath, storePath_);
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
      virtual bool empty() const override { return this->customerModuleName_ == nullptr
        && this->description_ == nullptr && this->innerModuleName_ == nullptr && this->moduleType_ == nullptr && this->storePath_ == nullptr; };
      // customerModuleName Field Functions 
      bool hasCustomerModuleName() const { return this->customerModuleName_ != nullptr;};
      void deleteCustomerModuleName() { this->customerModuleName_ = nullptr;};
      inline string getCustomerModuleName() const { DARABONBA_PTR_GET_DEFAULT(customerModuleName_, "") };
      inline ResultObject& setCustomerModuleName(string customerModuleName) { DARABONBA_PTR_SET_VALUE(customerModuleName_, customerModuleName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // innerModuleName Field Functions 
      bool hasInnerModuleName() const { return this->innerModuleName_ != nullptr;};
      void deleteInnerModuleName() { this->innerModuleName_ = nullptr;};
      inline string getInnerModuleName() const { DARABONBA_PTR_GET_DEFAULT(innerModuleName_, "") };
      inline ResultObject& setInnerModuleName(string innerModuleName) { DARABONBA_PTR_SET_VALUE(innerModuleName_, innerModuleName) };


      // moduleType Field Functions 
      bool hasModuleType() const { return this->moduleType_ != nullptr;};
      void deleteModuleType() { this->moduleType_ = nullptr;};
      inline string getModuleType() const { DARABONBA_PTR_GET_DEFAULT(moduleType_, "") };
      inline ResultObject& setModuleType(string moduleType) { DARABONBA_PTR_SET_VALUE(moduleType_, moduleType) };


      // storePath Field Functions 
      bool hasStorePath() const { return this->storePath_ != nullptr;};
      void deleteStorePath() { this->storePath_ = nullptr;};
      inline string getStorePath() const { DARABONBA_PTR_GET_DEFAULT(storePath_, "") };
      inline ResultObject& setStorePath(string storePath) { DARABONBA_PTR_SET_VALUE(storePath_, storePath) };


    protected:
      // Customer model name.
      shared_ptr<string> customerModuleName_ {};
      // Remarks.
      shared_ptr<string> description_ {};
      // Model identifier.
      shared_ptr<string> innerModuleName_ {};
      // Module type.
      shared_ptr<string> moduleType_ {};
      // Test address.
      shared_ptr<string> storePath_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCustomerModuleBasicInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline DescribeCustomerModuleBasicInfoResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomerModuleBasicInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomerModuleBasicInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeCustomerModuleBasicInfoResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeCustomerModuleBasicInfoResponseBody::ResultObject) };
    inline DescribeCustomerModuleBasicInfoResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeCustomerModuleBasicInfoResponseBody::ResultObject) };
    inline DescribeCustomerModuleBasicInfoResponseBody& setResultObject(const DescribeCustomerModuleBasicInfoResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeCustomerModuleBasicInfoResponseBody& setResultObject(DescribeCustomerModuleBasicInfoResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCustomerModuleBasicInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code. A return value of 200 indicates success.
    shared_ptr<string> code_ {};
    // HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned result.
    shared_ptr<DescribeCustomerModuleBasicInfoResponseBody::ResultObject> resultObject_ {};
    // Indicates whether the application configuration information was successfully retrieved. Possible values: true: Success; false: Failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
