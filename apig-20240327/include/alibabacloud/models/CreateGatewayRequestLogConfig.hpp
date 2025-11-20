// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYREQUESTLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYREQUESTLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateGatewayRequestLogConfigSls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateGatewayRequestLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayRequestLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(sls, sls_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayRequestLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(sls, sls_);
    };
    CreateGatewayRequestLogConfig() = default ;
    CreateGatewayRequestLogConfig(const CreateGatewayRequestLogConfig &) = default ;
    CreateGatewayRequestLogConfig(CreateGatewayRequestLogConfig &&) = default ;
    CreateGatewayRequestLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayRequestLogConfig() = default ;
    CreateGatewayRequestLogConfig& operator=(const CreateGatewayRequestLogConfig &) = default ;
    CreateGatewayRequestLogConfig& operator=(CreateGatewayRequestLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sls_ == nullptr; };
    // sls Field Functions 
    bool hasSls() const { return this->sls_ != nullptr;};
    void deleteSls() { this->sls_ = nullptr;};
    inline const Models::CreateGatewayRequestLogConfigSls & sls() const { DARABONBA_PTR_GET_CONST(sls_, Models::CreateGatewayRequestLogConfigSls) };
    inline Models::CreateGatewayRequestLogConfigSls sls() { DARABONBA_PTR_GET(sls_, Models::CreateGatewayRequestLogConfigSls) };
    inline CreateGatewayRequestLogConfig& setSls(const Models::CreateGatewayRequestLogConfigSls & sls) { DARABONBA_PTR_SET_VALUE(sls_, sls) };
    inline CreateGatewayRequestLogConfig& setSls(Models::CreateGatewayRequestLogConfigSls && sls) { DARABONBA_PTR_SET_RVALUE(sls_, sls) };


  protected:
    // The Simple Log Service configurations.
    std::shared_ptr<Models::CreateGatewayRequestLogConfigSls> sls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
