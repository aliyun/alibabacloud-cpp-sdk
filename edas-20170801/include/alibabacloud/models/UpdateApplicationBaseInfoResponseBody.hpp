// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONBASEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONBASEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApplicationBaseInfoResponseBodyApplcation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationBaseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applcation, applcation_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applcation, applcation_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationBaseInfoResponseBody() = default ;
    UpdateApplicationBaseInfoResponseBody(const UpdateApplicationBaseInfoResponseBody &) = default ;
    UpdateApplicationBaseInfoResponseBody(UpdateApplicationBaseInfoResponseBody &&) = default ;
    UpdateApplicationBaseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationBaseInfoResponseBody() = default ;
    UpdateApplicationBaseInfoResponseBody& operator=(const UpdateApplicationBaseInfoResponseBody &) = default ;
    UpdateApplicationBaseInfoResponseBody& operator=(UpdateApplicationBaseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applcation_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // applcation Field Functions 
    bool hasApplcation() const { return this->applcation_ != nullptr;};
    void deleteApplcation() { this->applcation_ = nullptr;};
    inline const UpdateApplicationBaseInfoResponseBodyApplcation & applcation() const { DARABONBA_PTR_GET_CONST(applcation_, UpdateApplicationBaseInfoResponseBodyApplcation) };
    inline UpdateApplicationBaseInfoResponseBodyApplcation applcation() { DARABONBA_PTR_GET(applcation_, UpdateApplicationBaseInfoResponseBodyApplcation) };
    inline UpdateApplicationBaseInfoResponseBody& setApplcation(const UpdateApplicationBaseInfoResponseBodyApplcation & applcation) { DARABONBA_PTR_SET_VALUE(applcation_, applcation) };
    inline UpdateApplicationBaseInfoResponseBody& setApplcation(UpdateApplicationBaseInfoResponseBodyApplcation && applcation) { DARABONBA_PTR_SET_RVALUE(applcation_, applcation) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateApplicationBaseInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateApplicationBaseInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationBaseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The applications that you want to modify.
    std::shared_ptr<UpdateApplicationBaseInfoResponseBodyApplcation> applcation_ = nullptr;
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
