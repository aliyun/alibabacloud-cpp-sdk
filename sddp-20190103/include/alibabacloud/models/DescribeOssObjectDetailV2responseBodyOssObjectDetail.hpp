// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2RESPONSEBODYOSSOBJECTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2RESPONSEBODYOSSOBJECTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectDetailV2ResponseBodyOssObjectDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(FileCategoryName, fileCategoryName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModelTagIds, modelTagIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectAcl, objectAcl_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(FileCategoryName, fileCategoryName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModelTagIds, modelTagIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectAcl, objectAcl_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetail() = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetail(const DescribeOssObjectDetailV2ResponseBodyOssObjectDetail &) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetail(DescribeOssObjectDetailV2ResponseBodyOssObjectDetail &&) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectDetailV2ResponseBodyOssObjectDetail() = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& operator=(const DescribeOssObjectDetailV2ResponseBodyOssObjectDetail &) = default ;
    DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& operator=(DescribeOssObjectDetailV2ResponseBodyOssObjectDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->categoryName_ != nullptr && this->fileCategoryName_ != nullptr && this->id_ != nullptr && this->modelTagIds_ != nullptr && this->name_ != nullptr
        && this->objectAcl_ != nullptr && this->regionId_ != nullptr && this->riskLevelId_ != nullptr && this->riskLevelName_ != nullptr && this->ruleList_ != nullptr
        && this->size_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // fileCategoryName Field Functions 
    bool hasFileCategoryName() const { return this->fileCategoryName_ != nullptr;};
    void deleteFileCategoryName() { this->fileCategoryName_ = nullptr;};
    inline string fileCategoryName() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryName_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setFileCategoryName(string fileCategoryName) { DARABONBA_PTR_SET_VALUE(fileCategoryName_, fileCategoryName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modelTagIds Field Functions 
    bool hasModelTagIds() const { return this->modelTagIds_ != nullptr;};
    void deleteModelTagIds() { this->modelTagIds_ = nullptr;};
    inline string modelTagIds() const { DARABONBA_PTR_GET_DEFAULT(modelTagIds_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setModelTagIds(string modelTagIds) { DARABONBA_PTR_SET_VALUE(modelTagIds_, modelTagIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectAcl Field Functions 
    bool hasObjectAcl() const { return this->objectAcl_ != nullptr;};
    void deleteObjectAcl() { this->objectAcl_ = nullptr;};
    inline string objectAcl() const { DARABONBA_PTR_GET_DEFAULT(objectAcl_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setObjectAcl(string objectAcl) { DARABONBA_PTR_SET_VALUE(objectAcl_, objectAcl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int32_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setRiskLevelId(int32_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList>) };
    inline vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList>) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setRuleList(const vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setRuleList(vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeOssObjectDetailV2ResponseBodyOssObjectDetail& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The name of the Bucket to which the OSS storage object belongs.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The major category of the model.
    std::shared_ptr<string> categoryName_ = nullptr;
    // File type.
    std::shared_ptr<string> fileCategoryName_ = nullptr;
    // The unique ID of the OSS object.
    std::shared_ptr<string> id_ = nullptr;
    // Data labels, separated by commas. Values:
    // - **101**: Personal Sensitive Information.
    // - **102**: Personal Information.
    // - **107**: General Information.
    std::shared_ptr<string> modelTagIds_ = nullptr;
    // OSS storage object name.
    std::shared_ptr<string> name_ = nullptr;
    // OSS Object ACL
    std::shared_ptr<string> objectAcl_ = nullptr;
    // The region ID to which the OSS storage object belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The sensitivity level of the OSS object. Valid values:
    // 
    // *   **1**: N/A, which indicates that no sensitive data is detected.
    // *   **2**: S1, which indicates the low sensitivity level.
    // *   **3**: S2, which indicates the medium sensitivity level.
    // *   **4**: S3, which indicates the high sensitivity level.
    // *   **5**: S4, which indicates the highest sensitivity level.
    std::shared_ptr<int32_t> riskLevelId_ = nullptr;
    // The risk level name of the OSS storage object.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // A list of sensitive data recognition rules hit by the OSS storage object.
    std::shared_ptr<vector<Models::DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList>> ruleList_ = nullptr;
    // File size. Unit: Byte.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
