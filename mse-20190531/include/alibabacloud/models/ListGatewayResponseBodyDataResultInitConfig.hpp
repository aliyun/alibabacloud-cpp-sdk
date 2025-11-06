// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTINITCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTINITCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayResponseBodyDataResultInitConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBodyDataResultInitConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(SupportWaf, supportWaf_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBodyDataResultInitConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(SupportWaf, supportWaf_);
    };
    ListGatewayResponseBodyDataResultInitConfig() = default ;
    ListGatewayResponseBodyDataResultInitConfig(const ListGatewayResponseBodyDataResultInitConfig &) = default ;
    ListGatewayResponseBodyDataResultInitConfig(ListGatewayResponseBodyDataResultInitConfig &&) = default ;
    ListGatewayResponseBodyDataResultInitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBodyDataResultInitConfig() = default ;
    ListGatewayResponseBodyDataResultInitConfig& operator=(const ListGatewayResponseBodyDataResultInitConfig &) = default ;
    ListGatewayResponseBodyDataResultInitConfig& operator=(ListGatewayResponseBodyDataResultInitConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableWaf_ == nullptr
        && return this->supportWaf_ == nullptr; };
    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline ListGatewayResponseBodyDataResultInitConfig& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // supportWaf Field Functions 
    bool hasSupportWaf() const { return this->supportWaf_ != nullptr;};
    void deleteSupportWaf() { this->supportWaf_ = nullptr;};
    inline bool supportWaf() const { DARABONBA_PTR_GET_DEFAULT(supportWaf_, false) };
    inline ListGatewayResponseBodyDataResultInitConfig& setSupportWaf(bool supportWaf) { DARABONBA_PTR_SET_VALUE(supportWaf_, supportWaf) };


  protected:
    // Indicates whether Web Application Firewall (WAF) is enabled.
    std::shared_ptr<bool> enableWaf_ = nullptr;
    // Indicates whether WAF is supported.
    std::shared_ptr<bool> supportWaf_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
