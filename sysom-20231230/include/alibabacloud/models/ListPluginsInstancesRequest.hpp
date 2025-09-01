// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListPluginsInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(instance_id_name, instanceIdName_);
      DARABONBA_PTR_TO_JSON(instance_tag, instanceTag_);
      DARABONBA_PTR_TO_JSON(operation_type, operationType_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(plugin_id, pluginId_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(instance_id_name, instanceIdName_);
      DARABONBA_PTR_FROM_JSON(instance_tag, instanceTag_);
      DARABONBA_PTR_FROM_JSON(operation_type, operationType_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(plugin_id, pluginId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    ListPluginsInstancesRequest() = default ;
    ListPluginsInstancesRequest(const ListPluginsInstancesRequest &) = default ;
    ListPluginsInstancesRequest(ListPluginsInstancesRequest &&) = default ;
    ListPluginsInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsInstancesRequest() = default ;
    ListPluginsInstancesRequest& operator=(const ListPluginsInstancesRequest &) = default ;
    ListPluginsInstancesRequest& operator=(ListPluginsInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->current_ != nullptr
        && this->instanceIdName_ != nullptr && this->instanceTag_ != nullptr && this->operationType_ != nullptr && this->pageSize_ != nullptr && this->pluginId_ != nullptr
        && this->region_ != nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline ListPluginsInstancesRequest& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // instanceIdName Field Functions 
    bool hasInstanceIdName() const { return this->instanceIdName_ != nullptr;};
    void deleteInstanceIdName() { this->instanceIdName_ = nullptr;};
    inline string instanceIdName() const { DARABONBA_PTR_GET_DEFAULT(instanceIdName_, "") };
    inline ListPluginsInstancesRequest& setInstanceIdName(string instanceIdName) { DARABONBA_PTR_SET_VALUE(instanceIdName_, instanceIdName) };


    // instanceTag Field Functions 
    bool hasInstanceTag() const { return this->instanceTag_ != nullptr;};
    void deleteInstanceTag() { this->instanceTag_ = nullptr;};
    inline string instanceTag() const { DARABONBA_PTR_GET_DEFAULT(instanceTag_, "") };
    inline ListPluginsInstancesRequest& setInstanceTag(string instanceTag) { DARABONBA_PTR_SET_VALUE(instanceTag_, instanceTag) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListPluginsInstancesRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPluginsInstancesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ListPluginsInstancesRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListPluginsInstancesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    std::shared_ptr<int64_t> current_ = nullptr;
    std::shared_ptr<string> instanceIdName_ = nullptr;
    std::shared_ptr<string> instanceTag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pluginId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
