// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILRESPONSEBODYOSSOBJECTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILRESPONSEBODYOSSOBJECTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectDetailResponseBodyOssObjectDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectDetailResponseBodyOssObjectDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectDetailResponseBodyOssObjectDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    DescribeOssObjectDetailResponseBodyOssObjectDetail() = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetail(const DescribeOssObjectDetailResponseBodyOssObjectDetail &) = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetail(DescribeOssObjectDetailResponseBodyOssObjectDetail &&) = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectDetailResponseBodyOssObjectDetail() = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetail& operator=(const DescribeOssObjectDetailResponseBodyOssObjectDetail &) = default ;
    DescribeOssObjectDetailResponseBodyOssObjectDetail& operator=(DescribeOssObjectDetailResponseBodyOssObjectDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->categoryName_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->riskLevelName_ == nullptr && return this->ruleList_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetail& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetail& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetail& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList>) };
    inline vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList>) };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetail& setRuleList(const vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetail& setRuleList(vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The name of the OSS bucket to which the OSS object belongs.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The type of the OSS object.
    std::shared_ptr<string> categoryName_ = nullptr;
    // The name of the OSS object.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID of the OSS object.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the sensitivity level for the OSS object.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // A list of the sensitive data detection rules that the OSS object hits.
    std::shared_ptr<vector<Models::DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList>> ruleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
