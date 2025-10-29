// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpgradeGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpgradeGatewayRequest() = default ;
    UpgradeGatewayRequest(const UpgradeGatewayRequest &) = default ;
    UpgradeGatewayRequest(UpgradeGatewayRequest &&) = default ;
    UpgradeGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeGatewayRequest() = default ;
    UpgradeGatewayRequest& operator=(const UpgradeGatewayRequest &) = default ;
    UpgradeGatewayRequest& operator=(UpgradeGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpgradeGatewayRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Gateway version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
