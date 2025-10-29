// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPROUTEENVIRONMENTINFOGATEWAYINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPROUTEENVIRONMENTINFOGATEWAYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpRouteEnvironmentInfoGatewayInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRouteEnvironmentInfoGatewayInfo& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRouteEnvironmentInfoGatewayInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    HttpRouteEnvironmentInfoGatewayInfo() = default ;
    HttpRouteEnvironmentInfoGatewayInfo(const HttpRouteEnvironmentInfoGatewayInfo &) = default ;
    HttpRouteEnvironmentInfoGatewayInfo(HttpRouteEnvironmentInfoGatewayInfo &&) = default ;
    HttpRouteEnvironmentInfoGatewayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRouteEnvironmentInfoGatewayInfo() = default ;
    HttpRouteEnvironmentInfoGatewayInfo& operator=(const HttpRouteEnvironmentInfoGatewayInfo &) = default ;
    HttpRouteEnvironmentInfoGatewayInfo& operator=(HttpRouteEnvironmentInfoGatewayInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->name_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline HttpRouteEnvironmentInfoGatewayInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpRouteEnvironmentInfoGatewayInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
