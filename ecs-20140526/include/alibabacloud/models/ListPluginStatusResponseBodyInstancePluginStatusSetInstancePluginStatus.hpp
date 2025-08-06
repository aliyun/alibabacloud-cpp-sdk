// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODYINSTANCEPLUGINSTATUSSETINSTANCEPLUGINSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODYINSTANCEPLUGINSTATUSSETINSTANCEPLUGINSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PluginStatusSet, pluginStatusSet_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PluginStatusSet, pluginStatusSet_);
    };
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus() = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus(const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus &) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus(ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus &&) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus() = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus& operator=(const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus &) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus& operator=(ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->pluginStatusSet_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pluginStatusSet Field Functions 
    bool hasPluginStatusSet() const { return this->pluginStatusSet_ != nullptr;};
    void deletePluginStatusSet() { this->pluginStatusSet_ = nullptr;};
    inline const Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet & pluginStatusSet() const { DARABONBA_PTR_GET_CONST(pluginStatusSet_, Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet) };
    inline Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet pluginStatusSet() { DARABONBA_PTR_GET(pluginStatusSet_, Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet) };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus& setPluginStatusSet(const Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet & pluginStatusSet) { DARABONBA_PTR_SET_VALUE(pluginStatusSet_, pluginStatusSet) };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatus& setPluginStatusSet(Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet && pluginStatusSet) { DARABONBA_PTR_SET_RVALUE(pluginStatusSet_, pluginStatusSet) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The queried Cloud Assistant plug-ins.
    std::shared_ptr<Models::ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSet> pluginStatusSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
