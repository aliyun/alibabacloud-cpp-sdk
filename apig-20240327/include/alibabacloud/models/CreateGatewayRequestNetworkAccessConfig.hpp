// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYREQUESTNETWORKACCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYREQUESTNETWORKACCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateGatewayRequestNetworkAccessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayRequestNetworkAccessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayRequestNetworkAccessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateGatewayRequestNetworkAccessConfig() = default ;
    CreateGatewayRequestNetworkAccessConfig(const CreateGatewayRequestNetworkAccessConfig &) = default ;
    CreateGatewayRequestNetworkAccessConfig(CreateGatewayRequestNetworkAccessConfig &&) = default ;
    CreateGatewayRequestNetworkAccessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayRequestNetworkAccessConfig() = default ;
    CreateGatewayRequestNetworkAccessConfig& operator=(const CreateGatewayRequestNetworkAccessConfig &) = default ;
    CreateGatewayRequestNetworkAccessConfig& operator=(CreateGatewayRequestNetworkAccessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateGatewayRequestNetworkAccessConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The network access type.
    // 
    // Valid values:
    // 
    // *   InternetAndIntranet
    // *   Intranet
    // *   Internet
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
