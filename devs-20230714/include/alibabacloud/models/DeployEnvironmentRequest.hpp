// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYENVIRONMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYENVIRONMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployEnvironmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployEnvironmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeployEnvironmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeployEnvironmentRequest() = default ;
    DeployEnvironmentRequest(const DeployEnvironmentRequest &) = default ;
    DeployEnvironmentRequest(DeployEnvironmentRequest &&) = default ;
    DeployEnvironmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployEnvironmentRequest() = default ;
    DeployEnvironmentRequest& operator=(const DeployEnvironmentRequest &) = default ;
    DeployEnvironmentRequest& operator=(DeployEnvironmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeployEnvironmentOptions & body() const { DARABONBA_PTR_GET_CONST(body_, DeployEnvironmentOptions) };
    inline DeployEnvironmentOptions body() { DARABONBA_PTR_GET(body_, DeployEnvironmentOptions) };
    inline DeployEnvironmentRequest& setBody(const DeployEnvironmentOptions & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeployEnvironmentRequest& setBody(DeployEnvironmentOptions && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<DeployEnvironmentOptions> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
