// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENVIRONMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENVIRONMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class UpdateEnvironmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnvironmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnvironmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateEnvironmentRequest() = default ;
    UpdateEnvironmentRequest(const UpdateEnvironmentRequest &) = default ;
    UpdateEnvironmentRequest(UpdateEnvironmentRequest &&) = default ;
    UpdateEnvironmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnvironmentRequest() = default ;
    UpdateEnvironmentRequest& operator=(const UpdateEnvironmentRequest &) = default ;
    UpdateEnvironmentRequest& operator=(UpdateEnvironmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Environment & body() const { DARABONBA_PTR_GET_CONST(body_, Environment) };
    inline Environment body() { DARABONBA_PTR_GET(body_, Environment) };
    inline UpdateEnvironmentRequest& setBody(const Environment & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateEnvironmentRequest& setBody(Environment && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<Environment> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
