// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateModelProxyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateModelProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateModelProxyRequest() = default ;
    UpdateModelProxyRequest(const UpdateModelProxyRequest &) = default ;
    UpdateModelProxyRequest(UpdateModelProxyRequest &&) = default ;
    UpdateModelProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelProxyRequest() = default ;
    UpdateModelProxyRequest& operator=(const UpdateModelProxyRequest &) = default ;
    UpdateModelProxyRequest& operator=(UpdateModelProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateModelProxyInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateModelProxyInput) };
    inline UpdateModelProxyInput getBody() { DARABONBA_PTR_GET(body_, UpdateModelProxyInput) };
    inline UpdateModelProxyRequest& setBody(const UpdateModelProxyInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateModelProxyRequest& setBody(UpdateModelProxyInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateModelProxyInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
