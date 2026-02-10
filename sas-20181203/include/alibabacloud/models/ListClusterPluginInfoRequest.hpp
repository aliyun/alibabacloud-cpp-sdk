// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERPLUGININFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERPLUGININFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterPluginInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterPluginInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterPluginInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
    };
    ListClusterPluginInfoRequest() = default ;
    ListClusterPluginInfoRequest(const ListClusterPluginInfoRequest &) = default ;
    ListClusterPluginInfoRequest(ListClusterPluginInfoRequest &&) = default ;
    ListClusterPluginInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterPluginInfoRequest() = default ;
    ListClusterPluginInfoRequest& operator=(const ListClusterPluginInfoRequest &) = default ;
    ListClusterPluginInfoRequest& operator=(ListClusterPluginInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIds_ == nullptr
        && this->lang_ == nullptr && this->pluginName_ == nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline const vector<string> & getClusterIds() const { DARABONBA_PTR_GET_CONST(clusterIds_, vector<string>) };
    inline vector<string> getClusterIds() { DARABONBA_PTR_GET(clusterIds_, vector<string>) };
    inline ListClusterPluginInfoRequest& setClusterIds(const vector<string> & clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };
    inline ListClusterPluginInfoRequest& setClusterIds(vector<string> && clusterIds) { DARABONBA_PTR_SET_RVALUE(clusterIds_, clusterIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListClusterPluginInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline ListClusterPluginInfoRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


  protected:
    // The IDs of the clusters.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> clusterIds_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The name of the plug-in.
    shared_ptr<string> pluginName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
