// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTASYNCINVOKECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTASYNCINVOKECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutAsyncInvokeConfigInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutAsyncInvokeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutAsyncInvokeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, PutAsyncInvokeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    PutAsyncInvokeConfigRequest() = default ;
    PutAsyncInvokeConfigRequest(const PutAsyncInvokeConfigRequest &) = default ;
    PutAsyncInvokeConfigRequest(PutAsyncInvokeConfigRequest &&) = default ;
    PutAsyncInvokeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutAsyncInvokeConfigRequest() = default ;
    PutAsyncInvokeConfigRequest& operator=(const PutAsyncInvokeConfigRequest &) = default ;
    PutAsyncInvokeConfigRequest& operator=(PutAsyncInvokeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->qualifier_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PutAsyncInvokeConfigInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, PutAsyncInvokeConfigInput) };
    inline PutAsyncInvokeConfigInput getBody() { DARABONBA_PTR_GET(body_, PutAsyncInvokeConfigInput) };
    inline PutAsyncInvokeConfigRequest& setBody(const PutAsyncInvokeConfigInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PutAsyncInvokeConfigRequest& setBody(PutAsyncInvokeConfigInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline PutAsyncInvokeConfigRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The configurations of asynchronous function invocations.
    // 
    // This parameter is required.
    shared_ptr<PutAsyncInvokeConfigInput> body_ {};
    // The version or alias of the function.
    shared_ptr<string> qualifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
