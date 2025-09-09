// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOssObjectsResponseBodyItemsRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(FileCategoryCode, fileCategoryCode_);
      DARABONBA_PTR_TO_JSON(FileCategoryName, fileCategoryName_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(FileCategoryCode, fileCategoryCode_);
      DARABONBA_PTR_FROM_JSON(FileCategoryName, fileCategoryName_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeOssObjectsResponseBodyItems() = default ;
    DescribeOssObjectsResponseBodyItems(const DescribeOssObjectsResponseBodyItems &) = default ;
    DescribeOssObjectsResponseBodyItems(DescribeOssObjectsResponseBodyItems &&) = default ;
    DescribeOssObjectsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectsResponseBodyItems() = default ;
    DescribeOssObjectsResponseBodyItems& operator=(const DescribeOssObjectsResponseBodyItems &) = default ;
    DescribeOssObjectsResponseBodyItems& operator=(DescribeOssObjectsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->category_ != nullptr && this->categoryName_ != nullptr && this->fileCategoryCode_ != nullptr && this->fileCategoryName_ != nullptr && this->fileId_ != nullptr
        && this->id_ != nullptr && this->instanceId_ != nullptr && this->lastModifiedTime_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr
        && this->riskLevelId_ != nullptr && this->riskLevelName_ != nullptr && this->ruleCount_ != nullptr && this->ruleList_ != nullptr && this->sensitiveCount_ != nullptr
        && this->size_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeOssObjectsResponseBodyItems& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int64_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0L) };
    inline DescribeOssObjectsResponseBodyItems& setCategory(int64_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeOssObjectsResponseBodyItems& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // fileCategoryCode Field Functions 
    bool hasFileCategoryCode() const { return this->fileCategoryCode_ != nullptr;};
    void deleteFileCategoryCode() { this->fileCategoryCode_ = nullptr;};
    inline int64_t fileCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryCode_, 0L) };
    inline DescribeOssObjectsResponseBodyItems& setFileCategoryCode(int64_t fileCategoryCode) { DARABONBA_PTR_SET_VALUE(fileCategoryCode_, fileCategoryCode) };


    // fileCategoryName Field Functions 
    bool hasFileCategoryName() const { return this->fileCategoryName_ != nullptr;};
    void deleteFileCategoryName() { this->fileCategoryName_ = nullptr;};
    inline string fileCategoryName() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryName_, "") };
    inline DescribeOssObjectsResponseBodyItems& setFileCategoryName(string fileCategoryName) { DARABONBA_PTR_SET_VALUE(fileCategoryName_, fileCategoryName) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline DescribeOssObjectsResponseBodyItems& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeOssObjectsResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeOssObjectsResponseBodyItems& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline DescribeOssObjectsResponseBodyItems& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOssObjectsResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeOssObjectsResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeOssObjectsResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeOssObjectsResponseBodyItems& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline DescribeOssObjectsResponseBodyItems& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::DescribeOssObjectsResponseBodyItemsRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::DescribeOssObjectsResponseBodyItemsRuleList>) };
    inline vector<Models::DescribeOssObjectsResponseBodyItemsRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::DescribeOssObjectsResponseBodyItemsRuleList>) };
    inline DescribeOssObjectsResponseBodyItems& setRuleList(const vector<Models::DescribeOssObjectsResponseBodyItemsRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeOssObjectsResponseBodyItems& setRuleList(vector<Models::DescribeOssObjectsResponseBodyItemsRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // sensitiveCount Field Functions 
    bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
    void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
    inline int32_t sensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
    inline DescribeOssObjectsResponseBodyItems& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeOssObjectsResponseBodyItems& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The type of the OSS object. Valid values include **900001**, **800015**, or **800005**, which indicates the MP4 file, PDF file, or OSS configuration file, respectively.
    std::shared_ptr<int64_t> category_ = nullptr;
    // The name of the file type.
    std::shared_ptr<string> categoryName_ = nullptr;
    // The code of the file type.
    std::shared_ptr<int64_t> fileCategoryCode_ = nullptr;
    // The name of the file type.
    std::shared_ptr<string> fileCategoryName_ = nullptr;
    // The file ID of the OSS object.
    std::shared_ptr<string> fileId_ = nullptr;
    // The ID of the OSS object.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the instance to which the OSS object belongs.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The time when the file was last modified.
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
    // The name of the OSS object.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID of the OSS object.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the sensitivity level of the OSS object. Valid values:
    // 
    // *   **1**: N/A, which indicates that no sensitive data is detected.
    // *   **2**: S1, which indicates the low sensitivity level.
    // *   **3**: S2, which indicates the medium sensitivity level.
    // *   **4**: S3, which indicates the high sensitivity level.
    // *   **5**: S4, which indicates the highest sensitivity level.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The name of the sensitivity level for the OSS object.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The number of rules that are hit.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // The rules.
    std::shared_ptr<vector<Models::DescribeOssObjectsResponseBodyItemsRuleList>> ruleList_ = nullptr;
    // The number of fields that are hit.
    std::shared_ptr<int32_t> sensitiveCount_ = nullptr;
    // The size of the file. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
