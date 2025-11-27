// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBINDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBINDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Binding.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetBindingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBindingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Binding, binding_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBindingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Binding, binding_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBindingResponseBody() = default ;
    GetBindingResponseBody(const GetBindingResponseBody &) = default ;
    GetBindingResponseBody(GetBindingResponseBody &&) = default ;
    GetBindingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBindingResponseBody() = default ;
    GetBindingResponseBody& operator=(const GetBindingResponseBody &) = default ;
    GetBindingResponseBody& operator=(GetBindingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binding_ == nullptr
        && return this->requestId_ == nullptr; };
    // binding Field Functions 
    bool hasBinding() const { return this->binding_ != nullptr;};
    void deleteBinding() { this->binding_ = nullptr;};
    inline const Binding & binding() const { DARABONBA_PTR_GET_CONST(binding_, Binding) };
    inline Binding binding() { DARABONBA_PTR_GET(binding_, Binding) };
    inline GetBindingResponseBody& setBinding(const Binding & binding) { DARABONBA_PTR_SET_VALUE(binding_, binding) };
    inline GetBindingResponseBody& setBinding(Binding && binding) { DARABONBA_PTR_SET_RVALUE(binding_, binding) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBindingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the binding.
    std::shared_ptr<Binding> binding_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
