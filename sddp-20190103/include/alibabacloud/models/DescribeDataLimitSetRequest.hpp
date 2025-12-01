// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(RegionType, regionType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(RegionType, regionType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeDataLimitSetRequest() = default ;
    DescribeDataLimitSetRequest(const DescribeDataLimitSetRequest &) = default ;
    DescribeDataLimitSetRequest(DescribeDataLimitSetRequest &&) = default ;
    DescribeDataLimitSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitSetRequest() = default ;
    DescribeDataLimitSetRequest& operator=(const DescribeDataLimitSetRequest &) = default ;
    DescribeDataLimitSetRequest& operator=(DescribeDataLimitSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureType_ == nullptr
        && return this->lang_ == nullptr && return this->parentId_ == nullptr && return this->regionType_ == nullptr && return this->resourceType_ == nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeDataLimitSetRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataLimitSetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeDataLimitSetRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // regionType Field Functions 
    bool hasRegionType() const { return this->regionType_ != nullptr;};
    void deleteRegionType() { this->regionType_ = nullptr;};
    inline string regionType() const { DARABONBA_PTR_GET_DEFAULT(regionType_, "") };
    inline DescribeDataLimitSetRequest& setRegionType(string regionType) { DARABONBA_PTR_SET_VALUE(regionType_, regionType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline DescribeDataLimitSetRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh_cn**: Simplified Chinese (default)
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The parent asset ID of the data asset.
    // 
    // You can call the [DescribeDataLimitDetail](~~DescribeDataLimitDetail~~) or [DescribeDataLimits](~~DescribeDataLimits~~) operation to obtain the parent asset ID of the data asset from the value of the **ParentId** parameter.
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> regionType_ = nullptr;
    // The type of service to which the data asset belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: OSS
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore
    // *   **5**: ApsaraDB RDS
    std::shared_ptr<int32_t> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
