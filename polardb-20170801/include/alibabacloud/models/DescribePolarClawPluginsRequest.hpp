// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWPLUGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWPLUGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawPluginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawPluginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PluginList, pluginList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawPluginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PluginList, pluginList_);
    };
    DescribePolarClawPluginsRequest() = default ;
    DescribePolarClawPluginsRequest(const DescribePolarClawPluginsRequest &) = default ;
    DescribePolarClawPluginsRequest(DescribePolarClawPluginsRequest &&) = default ;
    DescribePolarClawPluginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawPluginsRequest() = default ;
    DescribePolarClawPluginsRequest& operator=(const DescribePolarClawPluginsRequest &) = default ;
    DescribePolarClawPluginsRequest& operator=(DescribePolarClawPluginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->pluginList_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawPluginsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // pluginList Field Functions 
    bool hasPluginList() const { return this->pluginList_ != nullptr;};
    void deletePluginList() { this->pluginList_ = nullptr;};
    inline const vector<string> & getPluginList() const { DARABONBA_PTR_GET_CONST(pluginList_, vector<string>) };
    inline vector<string> getPluginList() { DARABONBA_PTR_GET(pluginList_, vector<string>) };
    inline DescribePolarClawPluginsRequest& setPluginList(const vector<string> & pluginList) { DARABONBA_PTR_SET_VALUE(pluginList_, pluginList) };
    inline DescribePolarClawPluginsRequest& setPluginList(vector<string> && pluginList) { DARABONBA_PTR_SET_RVALUE(pluginList_, pluginList) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<vector<string>> pluginList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
