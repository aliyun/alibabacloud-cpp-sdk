// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class InvokeFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeFunctionRequest& obj) { 
      DARABONBA_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeFunctionRequest& obj) { 
      DARABONBA_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    InvokeFunctionRequest() = default ;
    InvokeFunctionRequest(const InvokeFunctionRequest &) = default ;
    InvokeFunctionRequest(InvokeFunctionRequest &&) = default ;
    InvokeFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeFunctionRequest() = default ;
    InvokeFunctionRequest& operator=(const InvokeFunctionRequest &) = default ;
    InvokeFunctionRequest& operator=(InvokeFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->qualifier_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> body() const { DARABONBA_GET(body_) };
    inline InvokeFunctionRequest& setBody(shared_ptr<Darabonba::IStream> body) { DARABONBA_SET_VALUE(body_, body) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline InvokeFunctionRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The request parameters of function invocation.
    shared_ptr<Darabonba::IStream> body_ = nullptr;
    // The version or alias of the function.
    std::shared_ptr<string> qualifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
