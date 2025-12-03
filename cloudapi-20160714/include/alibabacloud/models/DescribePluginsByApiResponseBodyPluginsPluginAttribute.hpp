// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSBYAPIRESPONSEBODYPLUGINSPLUGINATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSBYAPIRESPONSEBODYPLUGINSPLUGINATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginsByApiResponseBodyPluginsPluginAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginsByApiResponseBodyPluginsPluginAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PluginData, pluginData_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginsByApiResponseBodyPluginsPluginAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PluginData, pluginData_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribePluginsByApiResponseBodyPluginsPluginAttribute() = default ;
    DescribePluginsByApiResponseBodyPluginsPluginAttribute(const DescribePluginsByApiResponseBodyPluginsPluginAttribute &) = default ;
    DescribePluginsByApiResponseBodyPluginsPluginAttribute(DescribePluginsByApiResponseBodyPluginsPluginAttribute &&) = default ;
    DescribePluginsByApiResponseBodyPluginsPluginAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginsByApiResponseBodyPluginsPluginAttribute() = default ;
    DescribePluginsByApiResponseBodyPluginsPluginAttribute& operator=(const DescribePluginsByApiResponseBodyPluginsPluginAttribute &) = default ;
    DescribePluginsByApiResponseBodyPluginsPluginAttribute& operator=(DescribePluginsByApiResponseBodyPluginsPluginAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->modifiedTime_ == nullptr && return this->pluginData_ == nullptr && return this->pluginId_ == nullptr && return this->pluginName_ == nullptr
        && return this->pluginType_ == nullptr && return this->regionId_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribePluginsByApiResponseBodyPluginsPluginAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePluginsByApiResponseBodyPluginsPluginAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribePluginsByApiResponseBodyPluginsPluginAttribute& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // pluginData Field Functions 
    bool hasPluginData() const { return this->pluginData_ != nullptr;};
    void deletePluginData() { this->pluginData_ = nullptr;};
    inline string pluginData() const { DARABONBA_PTR_GET_DEFAULT(pluginData_, "") };
    inline DescribePluginsByApiResponseBodyPluginsPluginAttribute& setPluginData(string pluginData) { DARABONBA_PTR_SET_VALUE(pluginData_, pluginData) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline DescribePluginsByApiResponseBodyPluginsPluginAttribute& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline DescribePluginsByApiResponseBodyPluginsPluginAttribute& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline DescribePluginsByApiResponseBodyPluginsPluginAttribute& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePluginsByApiResponseBodyPluginsPluginAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The time when the plug-in was created. The time is displayed in UTC.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The plug-in description.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the plug-in was last modified. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The definition statement of the plug-in.
    std::shared_ptr<string> pluginData_ = nullptr;
    // The plug-in ID.
    std::shared_ptr<string> pluginId_ = nullptr;
    // The plug-in name.
    std::shared_ptr<string> pluginName_ = nullptr;
    // The plug-in type.
    std::shared_ptr<string> pluginType_ = nullptr;
    // The region where the plug-in resides.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
