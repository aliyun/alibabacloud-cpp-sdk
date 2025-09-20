// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEPARSESETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEPARSESETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeParseSettingResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ChangeParseSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeParseSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeParseSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ChangeParseSettingResponseBody() = default ;
    ChangeParseSettingResponseBody(const ChangeParseSettingResponseBody &) = default ;
    ChangeParseSettingResponseBody(ChangeParseSettingResponseBody &&) = default ;
    ChangeParseSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeParseSettingResponseBody() = default ;
    ChangeParseSettingResponseBody& operator=(const ChangeParseSettingResponseBody &) = default ;
    ChangeParseSettingResponseBody& operator=(ChangeParseSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ChangeParseSettingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChangeParseSettingResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ChangeParseSettingResponseBodyData) };
    inline ChangeParseSettingResponseBodyData data() { DARABONBA_PTR_GET(data_, ChangeParseSettingResponseBodyData) };
    inline ChangeParseSettingResponseBody& setData(const ChangeParseSettingResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChangeParseSettingResponseBody& setData(ChangeParseSettingResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChangeParseSettingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeParseSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ChangeParseSettingResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ChangeParseSettingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<ChangeParseSettingResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
