// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetPluginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EnableOnly, enableOnly_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EnableOnly, enableOnly_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetPluginsRequest() = default ;
    GetPluginsRequest(const GetPluginsRequest &) = default ;
    GetPluginsRequest(GetPluginsRequest &&) = default ;
    GetPluginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginsRequest() = default ;
    GetPluginsRequest& operator=(const GetPluginsRequest &) = default ;
    GetPluginsRequest& operator=(GetPluginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->category_ != nullptr && this->enableOnly_ != nullptr && this->gatewayUniqueId_ != nullptr && this->name_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetPluginsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline GetPluginsRequest& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // enableOnly Field Functions 
    bool hasEnableOnly() const { return this->enableOnly_ != nullptr;};
    void deleteEnableOnly() { this->enableOnly_ = nullptr;};
    inline bool enableOnly() const { DARABONBA_PTR_GET_DEFAULT(enableOnly_, false) };
    inline GetPluginsRequest& setEnableOnly(bool enableOnly) { DARABONBA_PTR_SET_VALUE(enableOnly_, enableOnly) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetPluginsRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPluginsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The language of the response. Valid values:
    // 
    // zh: Chinese en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The type of the plug-in. Valid values:
    // 
    // *   0: custom
    // *   1: permission authorization
    // *   2: security protection
    // *   3: transmission protocol
    // *   4: traffic control
    // *   5: traffic observation
    std::shared_ptr<int32_t> category_ = nullptr;
    // Specifies whether to enable the plug-in.
    std::shared_ptr<bool> enableOnly_ = nullptr;
    // The ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
