// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class InvokePluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokePluginRequest& obj) { 
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
    };
    friend void from_json(const Darabonba::Json& j, InvokePluginRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
    };
    InvokePluginRequest() = default ;
    InvokePluginRequest(const InvokePluginRequest &) = default ;
    InvokePluginRequest(InvokePluginRequest &&) = default ;
    InvokePluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokePluginRequest() = default ;
    InvokePluginRequest& operator=(const InvokePluginRequest &) = default ;
    InvokePluginRequest& operator=(InvokePluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->params_ != nullptr
        && this->pluginId_ != nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline InvokePluginRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline InvokePluginRequest& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline InvokePluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


  protected:
    Darabonba::Json params_ = nullptr;
    std::shared_ptr<string> pluginId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
