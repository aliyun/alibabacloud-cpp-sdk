// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteAppPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
    };
    DeleteAppPluginRequest() = default ;
    DeleteAppPluginRequest(const DeleteAppPluginRequest &) = default ;
    DeleteAppPluginRequest(DeleteAppPluginRequest &&) = default ;
    DeleteAppPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppPluginRequest() = default ;
    DeleteAppPluginRequest& operator=(const DeleteAppPluginRequest &) = default ;
    DeleteAppPluginRequest& operator=(DeleteAppPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginId_ == nullptr; };
    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline DeleteAppPluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


  protected:
    // The gateway plug-in ID.
    shared_ptr<string> pluginId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
