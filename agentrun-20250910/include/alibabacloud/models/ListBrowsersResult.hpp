// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROWSERSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTBROWSERSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListBrowsersOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListBrowsersResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrowsersResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrowsersResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListBrowsersResult() = default ;
    ListBrowsersResult(const ListBrowsersResult &) = default ;
    ListBrowsersResult(ListBrowsersResult &&) = default ;
    ListBrowsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrowsersResult() = default ;
    ListBrowsersResult& operator=(const ListBrowsersResult &) = default ;
    ListBrowsersResult& operator=(ListBrowsersResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBrowsersResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListBrowsersOutput & data() const { DARABONBA_PTR_GET_CONST(data_, ListBrowsersOutput) };
    inline ListBrowsersOutput data() { DARABONBA_PTR_GET(data_, ListBrowsersOutput) };
    inline ListBrowsersResult& setData(const ListBrowsersOutput & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBrowsersResult& setData(ListBrowsersOutput && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBrowsersResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // SUCCESS 为成功，失败情况返回对应错误类型，比如 ERR_BAD_REQUEST ERR_VALIDATION_FAILED ERR_INTERNAL_SERVER_ERROR
    std::shared_ptr<string> code_ = nullptr;
    // 浏览器列表的详细信息
    std::shared_ptr<ListBrowsersOutput> data_ = nullptr;
    // 唯一的请求标识符，用于问题追踪
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
