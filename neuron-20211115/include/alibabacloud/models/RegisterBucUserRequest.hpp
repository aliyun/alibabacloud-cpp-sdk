// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERBUCUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERBUCUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RegisterBucUserCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RegisterBucUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterBucUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterBucUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RegisterBucUserRequest() = default ;
    RegisterBucUserRequest(const RegisterBucUserRequest &) = default ;
    RegisterBucUserRequest(RegisterBucUserRequest &&) = default ;
    RegisterBucUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterBucUserRequest() = default ;
    RegisterBucUserRequest& operator=(const RegisterBucUserRequest &) = default ;
    RegisterBucUserRequest& operator=(RegisterBucUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RegisterBucUserCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, RegisterBucUserCmd) };
    inline RegisterBucUserCmd getBody() { DARABONBA_PTR_GET(body_, RegisterBucUserCmd) };
    inline RegisterBucUserRequest& setBody(const RegisterBucUserCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RegisterBucUserRequest& setBody(RegisterBucUserCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<RegisterBucUserCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
