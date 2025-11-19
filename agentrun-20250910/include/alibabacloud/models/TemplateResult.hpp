// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATERESULT_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Template.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class TemplateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    TemplateResult() = default ;
    TemplateResult(const TemplateResult &) = default ;
    TemplateResult(TemplateResult &&) = default ;
    TemplateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateResult() = default ;
    TemplateResult& operator=(const TemplateResult &) = default ;
    TemplateResult& operator=(TemplateResult &&) = default ;
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
    inline TemplateResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Template & data() const { DARABONBA_PTR_GET_CONST(data_, Template) };
    inline Template data() { DARABONBA_PTR_GET(data_, Template) };
    inline TemplateResult& setData(const Template & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TemplateResult& setData(Template && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TemplateResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // SUCCESS 为成功，失败情况返回对应错误类型
    std::shared_ptr<string> code_ = nullptr;
    // 模板的详细信息
    // 
    // This parameter is required.
    std::shared_ptr<Template> data_ = nullptr;
    // 唯一的请求标识符，用于问题追踪
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
