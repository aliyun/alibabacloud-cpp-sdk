// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RELEASEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReleaseInstanceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ReleaseInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReleaseInstanceResponseBody() = default ;
    ReleaseInstanceResponseBody(const ReleaseInstanceResponseBody &) = default ;
    ReleaseInstanceResponseBody(ReleaseInstanceResponseBody &&) = default ;
    ReleaseInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseInstanceResponseBody() = default ;
    ReleaseInstanceResponseBody& operator=(const ReleaseInstanceResponseBody &) = default ;
    ReleaseInstanceResponseBody& operator=(ReleaseInstanceResponseBody &&) = default ;
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
    inline ReleaseInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReleaseInstanceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ReleaseInstanceResponseBodyData) };
    inline ReleaseInstanceResponseBodyData data() { DARABONBA_PTR_GET(data_, ReleaseInstanceResponseBodyData) };
    inline ReleaseInstanceResponseBody& setData(const ReleaseInstanceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReleaseInstanceResponseBody& setData(ReleaseInstanceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReleaseInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReleaseInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReleaseInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    std::shared_ptr<string> code_ = nullptr;
    // data
    std::shared_ptr<ReleaseInstanceResponseBodyData> data_ = nullptr;
    // The description of the execution result.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request, which can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
    // A value of true indicates that the execution is complete.
    // 
    // A value of false indicates that an error occurs during the execution.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
