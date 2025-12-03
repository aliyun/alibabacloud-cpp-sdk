// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSRESPONSEBODYPLUGINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSRESPONSEBODYPLUGINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePluginsResponseBodyPluginsPluginAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginsResponseBodyPlugins : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginsResponseBodyPlugins& obj) { 
      DARABONBA_PTR_TO_JSON(PluginAttribute, pluginAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginsResponseBodyPlugins& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginAttribute, pluginAttribute_);
    };
    DescribePluginsResponseBodyPlugins() = default ;
    DescribePluginsResponseBodyPlugins(const DescribePluginsResponseBodyPlugins &) = default ;
    DescribePluginsResponseBodyPlugins(DescribePluginsResponseBodyPlugins &&) = default ;
    DescribePluginsResponseBodyPlugins(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginsResponseBodyPlugins() = default ;
    DescribePluginsResponseBodyPlugins& operator=(const DescribePluginsResponseBodyPlugins &) = default ;
    DescribePluginsResponseBodyPlugins& operator=(DescribePluginsResponseBodyPlugins &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginAttribute_ == nullptr; };
    // pluginAttribute Field Functions 
    bool hasPluginAttribute() const { return this->pluginAttribute_ != nullptr;};
    void deletePluginAttribute() { this->pluginAttribute_ = nullptr;};
    inline const vector<Models::DescribePluginsResponseBodyPluginsPluginAttribute> & pluginAttribute() const { DARABONBA_PTR_GET_CONST(pluginAttribute_, vector<Models::DescribePluginsResponseBodyPluginsPluginAttribute>) };
    inline vector<Models::DescribePluginsResponseBodyPluginsPluginAttribute> pluginAttribute() { DARABONBA_PTR_GET(pluginAttribute_, vector<Models::DescribePluginsResponseBodyPluginsPluginAttribute>) };
    inline DescribePluginsResponseBodyPlugins& setPluginAttribute(const vector<Models::DescribePluginsResponseBodyPluginsPluginAttribute> & pluginAttribute) { DARABONBA_PTR_SET_VALUE(pluginAttribute_, pluginAttribute) };
    inline DescribePluginsResponseBodyPlugins& setPluginAttribute(vector<Models::DescribePluginsResponseBodyPluginsPluginAttribute> && pluginAttribute) { DARABONBA_PTR_SET_RVALUE(pluginAttribute_, pluginAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribePluginsResponseBodyPluginsPluginAttribute>> pluginAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
