// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODYDATACONFIGMAPSRELATEAPPS_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODYDATACONFIGMAPSRELATEAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps() = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps(const ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps &) = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps(ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps &&) = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps() = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps& operator=(const ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps &) = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps& operator=(ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
