// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Id2MetaVerifyWithOCRResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaVerifyWithOCRResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyWithOCRResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyWithOCRResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    Id2MetaVerifyWithOCRResponseBody() = default ;
    Id2MetaVerifyWithOCRResponseBody(const Id2MetaVerifyWithOCRResponseBody &) = default ;
    Id2MetaVerifyWithOCRResponseBody(Id2MetaVerifyWithOCRResponseBody &&) = default ;
    Id2MetaVerifyWithOCRResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyWithOCRResponseBody() = default ;
    Id2MetaVerifyWithOCRResponseBody& operator=(const Id2MetaVerifyWithOCRResponseBody &) = default ;
    Id2MetaVerifyWithOCRResponseBody& operator=(Id2MetaVerifyWithOCRResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Id2MetaVerifyWithOCRResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Id2MetaVerifyWithOCRResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Id2MetaVerifyWithOCRResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const Id2MetaVerifyWithOCRResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, Id2MetaVerifyWithOCRResponseBodyResultObject) };
    inline Id2MetaVerifyWithOCRResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, Id2MetaVerifyWithOCRResponseBodyResultObject) };
    inline Id2MetaVerifyWithOCRResponseBody& setResultObject(const Id2MetaVerifyWithOCRResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline Id2MetaVerifyWithOCRResponseBody& setResultObject(Id2MetaVerifyWithOCRResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 indicates success, any other value indicates failure.
    // **Important**
    // - This parameter indicates whether the API was called correctly. For detailed return code explanations, please refer to the error codes.
    // - Check the business verification results through the fields in ResultObject.
    std::shared_ptr<string> code_ = nullptr;
    // API call return message.
    // **Important**
    // This parameter only indicates if there was an exception with the API call.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Result object
    std::shared_ptr<Id2MetaVerifyWithOCRResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
