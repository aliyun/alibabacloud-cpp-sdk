// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAPIKEYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAPIKEYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateConsumerAPIKeyOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateConsumerAPIKeyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAPIKeyResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAPIKeyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateConsumerAPIKeyResult() = default ;
    CreateConsumerAPIKeyResult(const CreateConsumerAPIKeyResult &) = default ;
    CreateConsumerAPIKeyResult(CreateConsumerAPIKeyResult &&) = default ;
    CreateConsumerAPIKeyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAPIKeyResult() = default ;
    CreateConsumerAPIKeyResult& operator=(const CreateConsumerAPIKeyResult &) = default ;
    CreateConsumerAPIKeyResult& operator=(CreateConsumerAPIKeyResult &&) = default ;
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
    inline CreateConsumerAPIKeyResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateConsumerAPIKeyOutput & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateConsumerAPIKeyOutput) };
    inline CreateConsumerAPIKeyOutput getData() { DARABONBA_PTR_GET(data_, CreateConsumerAPIKeyOutput) };
    inline CreateConsumerAPIKeyResult& setData(const CreateConsumerAPIKeyOutput & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateConsumerAPIKeyResult& setData(CreateConsumerAPIKeyOutput && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateConsumerAPIKeyResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // SUCCESS 为成功，失败情况返回对应错误类型
    shared_ptr<string> code_ {};
    // 创建的消费者API密钥详细信息（包含完整密钥）
    shared_ptr<CreateConsumerAPIKeyOutput> data_ {};
    // 唯一的请求标识符，用于问题追踪
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
