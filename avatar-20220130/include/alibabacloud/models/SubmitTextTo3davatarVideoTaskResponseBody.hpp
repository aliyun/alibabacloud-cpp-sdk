// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTextTo3DAvatarVideoTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitTextTo3DAvatarVideoTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTextTo3DAvatarVideoTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTextTo3DAvatarVideoTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitTextTo3DAvatarVideoTaskResponseBody() = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBody(const SubmitTextTo3DAvatarVideoTaskResponseBody &) = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBody(SubmitTextTo3DAvatarVideoTaskResponseBody &&) = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTextTo3DAvatarVideoTaskResponseBody() = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBody& operator=(const SubmitTextTo3DAvatarVideoTaskResponseBody &) = default ;
    SubmitTextTo3DAvatarVideoTaskResponseBody& operator=(SubmitTextTo3DAvatarVideoTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitTextTo3DAvatarVideoTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitTextTo3DAvatarVideoTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SubmitTextTo3DAvatarVideoTaskResponseBodyData) };
    inline SubmitTextTo3DAvatarVideoTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, SubmitTextTo3DAvatarVideoTaskResponseBodyData) };
    inline SubmitTextTo3DAvatarVideoTaskResponseBody& setData(const SubmitTextTo3DAvatarVideoTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitTextTo3DAvatarVideoTaskResponseBody& setData(SubmitTextTo3DAvatarVideoTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitTextTo3DAvatarVideoTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitTextTo3DAvatarVideoTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitTextTo3DAvatarVideoTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<SubmitTextTo3DAvatarVideoTaskResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
