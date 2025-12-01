// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataObjectsResponseBodyItemsModelTags.hpp>
#include <alibabacloud/models/DescribeDataObjectsResponseBodyItemsRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataObjectsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectFileCategory, objectFileCategory_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectFileCategory, objectFileCategory_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeDataObjectsResponseBodyItems() = default ;
    DescribeDataObjectsResponseBodyItems(const DescribeDataObjectsResponseBodyItems &) = default ;
    DescribeDataObjectsResponseBodyItems(DescribeDataObjectsResponseBodyItems &&) = default ;
    DescribeDataObjectsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectsResponseBodyItems() = default ;
    DescribeDataObjectsResponseBodyItems& operator=(const DescribeDataObjectsResponseBodyItems &) = default ;
    DescribeDataObjectsResponseBodyItems& operator=(DescribeDataObjectsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categories_ == nullptr
        && return this->id_ == nullptr && return this->instanceDescription_ == nullptr && return this->instanceId_ == nullptr && return this->lastModifiedTime_ == nullptr && return this->lastScanTime_ == nullptr
        && return this->memberAccount_ == nullptr && return this->modelTags_ == nullptr && return this->name_ == nullptr && return this->objectFileCategory_ == nullptr && return this->objectType_ == nullptr
        && return this->path_ == nullptr && return this->productCode_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr && return this->regionName_ == nullptr
        && return this->ruleList_ == nullptr && return this->sensitiveCount_ == nullptr && return this->templateId_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline DescribeDataObjectsResponseBodyItems& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline DescribeDataObjectsResponseBodyItems& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDataObjectsResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline DescribeDataObjectsResponseBodyItems& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDataObjectsResponseBodyItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline DescribeDataObjectsResponseBodyItems& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeDataObjectsResponseBodyItems& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // memberAccount Field Functions 
    bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
    void deleteMemberAccount() { this->memberAccount_ = nullptr;};
    inline int64_t memberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
    inline DescribeDataObjectsResponseBodyItems& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


    // modelTags Field Functions 
    bool hasModelTags() const { return this->modelTags_ != nullptr;};
    void deleteModelTags() { this->modelTags_ = nullptr;};
    inline const vector<Models::DescribeDataObjectsResponseBodyItemsModelTags> & modelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Models::DescribeDataObjectsResponseBodyItemsModelTags>) };
    inline vector<Models::DescribeDataObjectsResponseBodyItemsModelTags> modelTags() { DARABONBA_PTR_GET(modelTags_, vector<Models::DescribeDataObjectsResponseBodyItemsModelTags>) };
    inline DescribeDataObjectsResponseBodyItems& setModelTags(const vector<Models::DescribeDataObjectsResponseBodyItemsModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
    inline DescribeDataObjectsResponseBodyItems& setModelTags(vector<Models::DescribeDataObjectsResponseBodyItemsModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataObjectsResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectFileCategory Field Functions 
    bool hasObjectFileCategory() const { return this->objectFileCategory_ != nullptr;};
    void deleteObjectFileCategory() { this->objectFileCategory_ = nullptr;};
    inline string objectFileCategory() const { DARABONBA_PTR_GET_DEFAULT(objectFileCategory_, "") };
    inline DescribeDataObjectsResponseBodyItems& setObjectFileCategory(string objectFileCategory) { DARABONBA_PTR_SET_VALUE(objectFileCategory_, objectFileCategory) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeDataObjectsResponseBodyItems& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeDataObjectsResponseBodyItems& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeDataObjectsResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeDataObjectsResponseBodyItems& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataObjectsResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeDataObjectsResponseBodyItems& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::DescribeDataObjectsResponseBodyItemsRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::DescribeDataObjectsResponseBodyItemsRuleList>) };
    inline vector<Models::DescribeDataObjectsResponseBodyItemsRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::DescribeDataObjectsResponseBodyItemsRuleList>) };
    inline DescribeDataObjectsResponseBodyItems& setRuleList(const vector<Models::DescribeDataObjectsResponseBodyItemsRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeDataObjectsResponseBodyItems& setRuleList(vector<Models::DescribeDataObjectsResponseBodyItemsRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // sensitiveCount Field Functions 
    bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
    void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
    inline int32_t sensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
    inline DescribeDataObjectsResponseBodyItems& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDataObjectsResponseBodyItems& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // List of industry categories for the sensitive data.
    std::shared_ptr<vector<string>> categories_ = nullptr;
    // The unique identifier ID of the data object.
    std::shared_ptr<string> id_ = nullptr;
    // The instance description of the data object.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // Data asset instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Latest file modification time, in milliseconds.
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
    // The timestamp of the last scan, in milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // Member account ID.
    std::shared_ptr<int64_t> memberAccount_ = nullptr;
    // List of data tags.
    std::shared_ptr<vector<Models::DescribeDataObjectsResponseBodyItemsModelTags>> modelTags_ = nullptr;
    // The name of the data object.
    std::shared_ptr<string> name_ = nullptr;
    // File category name.
    std::shared_ptr<string> objectFileCategory_ = nullptr;
    // The type of the data object.
    std::shared_ptr<string> objectType_ = nullptr;
    // The path of the data object.
    std::shared_ptr<string> path_ = nullptr;
    // The product name that the data object belongs to. Values:
    // - **MaxCompute**
    // - **OSS**
    // - **ADB-MYSQL**
    // - **TableStore**
    // - **RDS**
    // - **SELF_DB**
    // - **PolarDB-X**
    // - **PolarDB**
    // - **ADB-PG**
    // - **OceanBase**
    // - **MongoDB**
    // - **Redis**
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID corresponding to the product name that the data object belongs to. Values:
    // - **1**: MaxCompute
    // - **2**: OSS
    // - **3**: ADB-MYSQL
    // - **4**: TableStore
    // - **5**: RDS
    // - **6**: SELF_DB
    // - **7**: PolarDB-X
    // - **8**: PolarDB
    // - **9**: ADB-PG
    // - **10**: OceanBase
    // - **11**: MongoDB
    // - **25**: Redis
    std::shared_ptr<int64_t> productId_ = nullptr;
    // The region ID to which the OSS storage object belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // Region name.
    std::shared_ptr<string> regionName_ = nullptr;
    // List of matched identification models.
    std::shared_ptr<vector<Models::DescribeDataObjectsResponseBodyItemsRuleList>> ruleList_ = nullptr;
    // Number of sensitive data items.
    std::shared_ptr<int32_t> sensitiveCount_ = nullptr;
    // Industry template ID
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
