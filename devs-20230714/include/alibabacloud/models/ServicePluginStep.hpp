// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEPLUGINSTEP_HPP_
#define ALIBABACLOUD_MODELS_SERVICEPLUGINSTEP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServicePluginStep : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServicePluginStep& obj) { 
      DARABONBA_ANY_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(plugin, plugin_);
    };
    friend void from_json(const Darabonba::Json& j, ServicePluginStep& obj) { 
      DARABONBA_ANY_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(plugin, plugin_);
    };
    ServicePluginStep() = default ;
    ServicePluginStep(const ServicePluginStep &) = default ;
    ServicePluginStep(ServicePluginStep &&) = default ;
    ServicePluginStep(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServicePluginStep() = default ;
    ServicePluginStep& operator=(const ServicePluginStep &) = default ;
    ServicePluginStep& operator=(ServicePluginStep &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->plugin_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline     const Darabonba::Json & args() const { DARABONBA_GET(args_) };
    Darabonba::Json & args() { DARABONBA_GET(args_) };
    inline ServicePluginStep& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
    inline ServicePluginStep& setArgs(Darabonba::Json & args) { DARABONBA_SET_RVALUE(args_, args) };


    // plugin Field Functions 
    bool hasPlugin() const { return this->plugin_ != nullptr;};
    void deletePlugin() { this->plugin_ = nullptr;};
    inline string plugin() const { DARABONBA_PTR_GET_DEFAULT(plugin_, "") };
    inline ServicePluginStep& setPlugin(string plugin) { DARABONBA_PTR_SET_VALUE(plugin_, plugin) };


  protected:
    Darabonba::Json args_ = nullptr;
    std::shared_ptr<string> plugin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
