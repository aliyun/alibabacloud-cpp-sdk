// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELPROXYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELPROXYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelProxy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class DeleteModelProxyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelProxyResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelProxyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteModelProxyResult() = default ;
    DeleteModelProxyResult(const DeleteModelProxyResult &) = default ;
    DeleteModelProxyResult(DeleteModelProxyResult &&) = default ;
    DeleteModelProxyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelProxyResult() = default ;
    DeleteModelProxyResult& operator=(const DeleteModelProxyResult &) = default ;
    DeleteModelProxyResult& operator=(DeleteModelProxyResult &&) = default ;
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
    inline DeleteModelProxyResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModelProxy & data() const { DARABONBA_PTR_GET_CONST(data_, ModelProxy) };
    inline ModelProxy data() { DARABONBA_PTR_GET(data_, ModelProxy) };
    inline DeleteModelProxyResult& setData(const ModelProxy & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteModelProxyResult& setData(ModelProxy && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteModelProxyResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<ModelProxy> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
