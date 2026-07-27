// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
    };
    GetAppPluginRequest() = default ;
    GetAppPluginRequest(const GetAppPluginRequest &) = default ;
    GetAppPluginRequest(GetAppPluginRequest &&) = default ;
    GetAppPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppPluginRequest() = default ;
    GetAppPluginRequest& operator=(const GetAppPluginRequest &) = default ;
    GetAppPluginRequest& operator=(GetAppPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginId_ == nullptr; };
    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline GetAppPluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


  protected:
    // The gateway plug-in ID.
    shared_ptr<string> pluginId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
