// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSBYGROUPRESPONSEBODYPLUGINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSBYGROUPRESPONSEBODYPLUGINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePluginsByGroupResponseBodyPluginsPluginAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginsByGroupResponseBodyPlugins : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginsByGroupResponseBodyPlugins& obj) { 
      DARABONBA_PTR_TO_JSON(PluginAttribute, pluginAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginsByGroupResponseBodyPlugins& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginAttribute, pluginAttribute_);
    };
    DescribePluginsByGroupResponseBodyPlugins() = default ;
    DescribePluginsByGroupResponseBodyPlugins(const DescribePluginsByGroupResponseBodyPlugins &) = default ;
    DescribePluginsByGroupResponseBodyPlugins(DescribePluginsByGroupResponseBodyPlugins &&) = default ;
    DescribePluginsByGroupResponseBodyPlugins(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginsByGroupResponseBodyPlugins() = default ;
    DescribePluginsByGroupResponseBodyPlugins& operator=(const DescribePluginsByGroupResponseBodyPlugins &) = default ;
    DescribePluginsByGroupResponseBodyPlugins& operator=(DescribePluginsByGroupResponseBodyPlugins &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginAttribute_ == nullptr; };
    // pluginAttribute Field Functions 
    bool hasPluginAttribute() const { return this->pluginAttribute_ != nullptr;};
    void deletePluginAttribute() { this->pluginAttribute_ = nullptr;};
    inline const vector<Models::DescribePluginsByGroupResponseBodyPluginsPluginAttribute> & pluginAttribute() const { DARABONBA_PTR_GET_CONST(pluginAttribute_, vector<Models::DescribePluginsByGroupResponseBodyPluginsPluginAttribute>) };
    inline vector<Models::DescribePluginsByGroupResponseBodyPluginsPluginAttribute> pluginAttribute() { DARABONBA_PTR_GET(pluginAttribute_, vector<Models::DescribePluginsByGroupResponseBodyPluginsPluginAttribute>) };
    inline DescribePluginsByGroupResponseBodyPlugins& setPluginAttribute(const vector<Models::DescribePluginsByGroupResponseBodyPluginsPluginAttribute> & pluginAttribute) { DARABONBA_PTR_SET_VALUE(pluginAttribute_, pluginAttribute) };
    inline DescribePluginsByGroupResponseBodyPlugins& setPluginAttribute(vector<Models::DescribePluginsByGroupResponseBodyPluginsPluginAttribute> && pluginAttribute) { DARABONBA_PTR_SET_RVALUE(pluginAttribute_, pluginAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribePluginsByGroupResponseBodyPluginsPluginAttribute>> pluginAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
