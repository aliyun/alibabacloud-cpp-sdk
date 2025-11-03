// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALSYSOMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITIALSYSOMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InitialSysomResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InitialSysomResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitialSysomResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, InitialSysomResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    InitialSysomResponseBody() = default ;
    InitialSysomResponseBody(const InitialSysomResponseBody &) = default ;
    InitialSysomResponseBody(InitialSysomResponseBody &&) = default ;
    InitialSysomResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitialSysomResponseBody() = default ;
    InitialSysomResponseBody& operator=(const InitialSysomResponseBody &) = default ;
    InitialSysomResponseBody& operator=(InitialSysomResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->code_ == nullptr && return this->data_ == nullptr && return this->message_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitialSysomResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitialSysomResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InitialSysomResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, InitialSysomResponseBodyData) };
    inline InitialSysomResponseBodyData data() { DARABONBA_PTR_GET(data_, InitialSysomResponseBodyData) };
    inline InitialSysomResponseBody& setData(const InitialSysomResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InitialSysomResponseBody& setData(InitialSysomResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InitialSysomResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<InitialSysomResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
