// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPLUGINFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPLUGINFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppPluginFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppPluginFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppPluginFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
    };
    ListAppPluginFilesRequest() = default ;
    ListAppPluginFilesRequest(const ListAppPluginFilesRequest &) = default ;
    ListAppPluginFilesRequest(ListAppPluginFilesRequest &&) = default ;
    ListAppPluginFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppPluginFilesRequest() = default ;
    ListAppPluginFilesRequest& operator=(const ListAppPluginFilesRequest &) = default ;
    ListAppPluginFilesRequest& operator=(ListAppPluginFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginId_ == nullptr
        && this->pluginVersion_ == nullptr; };
    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ListAppPluginFilesRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline ListAppPluginFilesRequest& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


  protected:
    // The gateway plug-in ID.
    shared_ptr<string> pluginId_ {};
    // The version number. If not specified, the currently active version is used.
    shared_ptr<string> pluginVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
