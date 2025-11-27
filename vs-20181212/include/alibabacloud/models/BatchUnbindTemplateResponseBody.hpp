// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUNBINDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHUNBINDTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchUnbindTemplateResponseBodyBindings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchUnbindTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUnbindTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bindings, bindings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUnbindTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bindings, bindings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchUnbindTemplateResponseBody() = default ;
    BatchUnbindTemplateResponseBody(const BatchUnbindTemplateResponseBody &) = default ;
    BatchUnbindTemplateResponseBody(BatchUnbindTemplateResponseBody &&) = default ;
    BatchUnbindTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUnbindTemplateResponseBody() = default ;
    BatchUnbindTemplateResponseBody& operator=(const BatchUnbindTemplateResponseBody &) = default ;
    BatchUnbindTemplateResponseBody& operator=(BatchUnbindTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindings_ == nullptr
        && return this->requestId_ == nullptr; };
    // bindings Field Functions 
    bool hasBindings() const { return this->bindings_ != nullptr;};
    void deleteBindings() { this->bindings_ = nullptr;};
    inline const vector<BatchUnbindTemplateResponseBodyBindings> & bindings() const { DARABONBA_PTR_GET_CONST(bindings_, vector<BatchUnbindTemplateResponseBodyBindings>) };
    inline vector<BatchUnbindTemplateResponseBodyBindings> bindings() { DARABONBA_PTR_GET(bindings_, vector<BatchUnbindTemplateResponseBodyBindings>) };
    inline BatchUnbindTemplateResponseBody& setBindings(const vector<BatchUnbindTemplateResponseBodyBindings> & bindings) { DARABONBA_PTR_SET_VALUE(bindings_, bindings) };
    inline BatchUnbindTemplateResponseBody& setBindings(vector<BatchUnbindTemplateResponseBodyBindings> && bindings) { DARABONBA_PTR_SET_RVALUE(bindings_, bindings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchUnbindTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<BatchUnbindTemplateResponseBodyBindings>> bindings_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
