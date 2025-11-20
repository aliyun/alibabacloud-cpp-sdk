// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYREQUESTLOGCONFIGSLS_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYREQUESTLOGCONFIGSLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateGatewayRequestLogConfigSls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayRequestLogConfigSls& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayRequestLogConfigSls& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    CreateGatewayRequestLogConfigSls() = default ;
    CreateGatewayRequestLogConfigSls(const CreateGatewayRequestLogConfigSls &) = default ;
    CreateGatewayRequestLogConfigSls(CreateGatewayRequestLogConfigSls &&) = default ;
    CreateGatewayRequestLogConfigSls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayRequestLogConfigSls() = default ;
    CreateGatewayRequestLogConfigSls& operator=(const CreateGatewayRequestLogConfigSls &) = default ;
    CreateGatewayRequestLogConfigSls& operator=(CreateGatewayRequestLogConfigSls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateGatewayRequestLogConfigSls& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // Indicates if enabled.
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
