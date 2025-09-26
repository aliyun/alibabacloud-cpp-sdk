// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCODEINTERPRETERSESSIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCODEINTERPRETERSESSIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CodeInterpreterSessionOut.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetCodeInterpreterSessionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCodeInterpreterSessionResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCodeInterpreterSessionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCodeInterpreterSessionResult() = default ;
    GetCodeInterpreterSessionResult(const GetCodeInterpreterSessionResult &) = default ;
    GetCodeInterpreterSessionResult(GetCodeInterpreterSessionResult &&) = default ;
    GetCodeInterpreterSessionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCodeInterpreterSessionResult() = default ;
    GetCodeInterpreterSessionResult& operator=(const GetCodeInterpreterSessionResult &) = default ;
    GetCodeInterpreterSessionResult& operator=(GetCodeInterpreterSessionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCodeInterpreterSessionResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CodeInterpreterSessionOut & data() const { DARABONBA_PTR_GET_CONST(data_, CodeInterpreterSessionOut) };
    inline CodeInterpreterSessionOut data() { DARABONBA_PTR_GET(data_, CodeInterpreterSessionOut) };
    inline GetCodeInterpreterSessionResult& setData(const CodeInterpreterSessionOut & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCodeInterpreterSessionResult& setData(CodeInterpreterSessionOut && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCodeInterpreterSessionResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // SUCCESS 为成功，失败情况返回对应错误类型，比如 ERR_BAD_REQUEST ERR_VALIDATION_FAILED ERR_INTERNAL_SERVER_ERROR
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<CodeInterpreterSessionOut> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
