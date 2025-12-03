// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSRESPONSEBODYPLUGINSPLUGINATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSRESPONSEBODYPLUGINSPLUGINATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePluginsResponseBodyPluginsPluginAttributeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginsResponseBodyPluginsPluginAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginsResponseBodyPluginsPluginAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PluginData, pluginData_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginsResponseBodyPluginsPluginAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PluginData, pluginData_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribePluginsResponseBodyPluginsPluginAttribute() = default ;
    DescribePluginsResponseBodyPluginsPluginAttribute(const DescribePluginsResponseBodyPluginsPluginAttribute &) = default ;
    DescribePluginsResponseBodyPluginsPluginAttribute(DescribePluginsResponseBodyPluginsPluginAttribute &&) = default ;
    DescribePluginsResponseBodyPluginsPluginAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginsResponseBodyPluginsPluginAttribute() = default ;
    DescribePluginsResponseBodyPluginsPluginAttribute& operator=(const DescribePluginsResponseBodyPluginsPluginAttribute &) = default ;
    DescribePluginsResponseBodyPluginsPluginAttribute& operator=(DescribePluginsResponseBodyPluginsPluginAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->modifiedTime_ == nullptr && return this->pluginData_ == nullptr && return this->pluginId_ == nullptr && return this->pluginName_ == nullptr
        && return this->pluginType_ == nullptr && return this->regionId_ == nullptr && return this->tags_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // pluginData Field Functions 
    bool hasPluginData() const { return this->pluginData_ != nullptr;};
    void deletePluginData() { this->pluginData_ = nullptr;};
    inline string pluginData() const { DARABONBA_PTR_GET_DEFAULT(pluginData_, "") };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setPluginData(string pluginData) { DARABONBA_PTR_SET_VALUE(pluginData_, pluginData) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribePluginsResponseBodyPluginsPluginAttributeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribePluginsResponseBodyPluginsPluginAttributeTags) };
    inline Models::DescribePluginsResponseBodyPluginsPluginAttributeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribePluginsResponseBodyPluginsPluginAttributeTags) };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setTags(const Models::DescribePluginsResponseBodyPluginsPluginAttributeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribePluginsResponseBodyPluginsPluginAttribute& setTags(Models::DescribePluginsResponseBodyPluginsPluginAttributeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The creation time (UTC) of the plug-in.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The plug-in description.
    std::shared_ptr<string> description_ = nullptr;
    // The last modification time (UTC) of the plug-in.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The definition statement of the plug-in.
    std::shared_ptr<string> pluginData_ = nullptr;
    // The ID of the plug-in.
    std::shared_ptr<string> pluginId_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> pluginName_ = nullptr;
    // The type of the plug-in.
    std::shared_ptr<string> pluginType_ = nullptr;
    // The region where the plug-in is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribePluginsResponseBodyPluginsPluginAttributeTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
