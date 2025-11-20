// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class InstallPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayIds, gatewayIds_);
      DARABONBA_PTR_TO_JSON(pluginClassId, pluginClassId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayIds, gatewayIds_);
      DARABONBA_PTR_FROM_JSON(pluginClassId, pluginClassId_);
    };
    InstallPluginRequest() = default ;
    InstallPluginRequest(const InstallPluginRequest &) = default ;
    InstallPluginRequest(InstallPluginRequest &&) = default ;
    InstallPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallPluginRequest() = default ;
    InstallPluginRequest& operator=(const InstallPluginRequest &) = default ;
    InstallPluginRequest& operator=(InstallPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayIds_ == nullptr
        && return this->pluginClassId_ == nullptr; };
    // gatewayIds Field Functions 
    bool hasGatewayIds() const { return this->gatewayIds_ != nullptr;};
    void deleteGatewayIds() { this->gatewayIds_ = nullptr;};
    inline const vector<string> & gatewayIds() const { DARABONBA_PTR_GET_CONST(gatewayIds_, vector<string>) };
    inline vector<string> gatewayIds() { DARABONBA_PTR_GET(gatewayIds_, vector<string>) };
    inline InstallPluginRequest& setGatewayIds(const vector<string> & gatewayIds) { DARABONBA_PTR_SET_VALUE(gatewayIds_, gatewayIds) };
    inline InstallPluginRequest& setGatewayIds(vector<string> && gatewayIds) { DARABONBA_PTR_SET_RVALUE(gatewayIds_, gatewayIds) };


    // pluginClassId Field Functions 
    bool hasPluginClassId() const { return this->pluginClassId_ != nullptr;};
    void deletePluginClassId() { this->pluginClassId_ = nullptr;};
    inline string pluginClassId() const { DARABONBA_PTR_GET_DEFAULT(pluginClassId_, "") };
    inline InstallPluginRequest& setPluginClassId(string pluginClassId) { DARABONBA_PTR_SET_VALUE(pluginClassId_, pluginClassId) };


  protected:
    // The list of gateway IDs.
    std::shared_ptr<vector<string>> gatewayIds_ = nullptr;
    // The plug-in type ID.
    std::shared_ptr<string> pluginClassId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
