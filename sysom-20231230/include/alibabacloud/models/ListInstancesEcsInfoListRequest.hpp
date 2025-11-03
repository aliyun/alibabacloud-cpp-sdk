// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESECSINFOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESECSINFOLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstancesEcsInfoListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesEcsInfoListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(info_type, infoType_);
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
      DARABONBA_PTR_TO_JSON(managed_type, managedType_);
      DARABONBA_PTR_TO_JSON(plugin_id, pluginId_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesEcsInfoListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(info_type, infoType_);
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
      DARABONBA_PTR_FROM_JSON(managed_type, managedType_);
      DARABONBA_PTR_FROM_JSON(plugin_id, pluginId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    ListInstancesEcsInfoListRequest() = default ;
    ListInstancesEcsInfoListRequest(const ListInstancesEcsInfoListRequest &) = default ;
    ListInstancesEcsInfoListRequest(ListInstancesEcsInfoListRequest &&) = default ;
    ListInstancesEcsInfoListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesEcsInfoListRequest() = default ;
    ListInstancesEcsInfoListRequest& operator=(const ListInstancesEcsInfoListRequest &) = default ;
    ListInstancesEcsInfoListRequest& operator=(ListInstancesEcsInfoListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->infoType_ == nullptr
        && return this->instanceId_ == nullptr && return this->managedType_ == nullptr && return this->pluginId_ == nullptr && return this->region_ == nullptr; };
    // infoType Field Functions 
    bool hasInfoType() const { return this->infoType_ != nullptr;};
    void deleteInfoType() { this->infoType_ = nullptr;};
    inline string infoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
    inline ListInstancesEcsInfoListRequest& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesEcsInfoListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // managedType Field Functions 
    bool hasManagedType() const { return this->managedType_ != nullptr;};
    void deleteManagedType() { this->managedType_ = nullptr;};
    inline string managedType() const { DARABONBA_PTR_GET_DEFAULT(managedType_, "") };
    inline ListInstancesEcsInfoListRequest& setManagedType(string managedType) { DARABONBA_PTR_SET_VALUE(managedType_, managedType) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ListInstancesEcsInfoListRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListInstancesEcsInfoListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> infoType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> managedType_ = nullptr;
    std::shared_ptr<string> pluginId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
