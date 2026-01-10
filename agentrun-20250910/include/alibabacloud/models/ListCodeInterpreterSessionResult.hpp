// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCODEINTERPRETERSESSIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCODEINTERPRETERSESSIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CodeInterpreterSessionListOut.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListCodeInterpreterSessionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCodeInterpreterSessionResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCodeInterpreterSessionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListCodeInterpreterSessionResult() = default ;
    ListCodeInterpreterSessionResult(const ListCodeInterpreterSessionResult &) = default ;
    ListCodeInterpreterSessionResult(ListCodeInterpreterSessionResult &&) = default ;
    ListCodeInterpreterSessionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCodeInterpreterSessionResult() = default ;
    ListCodeInterpreterSessionResult& operator=(const ListCodeInterpreterSessionResult &) = default ;
    ListCodeInterpreterSessionResult& operator=(ListCodeInterpreterSessionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCodeInterpreterSessionResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CodeInterpreterSessionListOut & getData() const { DARABONBA_PTR_GET_CONST(data_, CodeInterpreterSessionListOut) };
    inline CodeInterpreterSessionListOut getData() { DARABONBA_PTR_GET(data_, CodeInterpreterSessionListOut) };
    inline ListCodeInterpreterSessionResult& setData(const CodeInterpreterSessionListOut & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCodeInterpreterSessionResult& setData(CodeInterpreterSessionListOut && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCodeInterpreterSessionResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // SUCCESS 为成功，失败情况返回对应错误类型，比如 ERR_BAD_REQUEST ERR_VALIDATION_FAILED ERR_INTERNAL_SERVER_ERROR
    shared_ptr<string> code_ {};
    shared_ptr<CodeInterpreterSessionListOut> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
