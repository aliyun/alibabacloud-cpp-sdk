// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODYDATANORMALIZATIONLOGVIEWS_HPP_
#define ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODYDATANORMALIZATIONLOGVIEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataStorageResponseBodyDataNormalizationLogViews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataStorageResponseBodyDataNormalizationLogViews& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(DetectionRuleReferenceCount, detectionRuleReferenceCount_);
      DARABONBA_PTR_TO_JSON(DetectionRuleReferenceProductIds, detectionRuleReferenceProductIds_);
      DARABONBA_PTR_TO_JSON(LogSearchConditions, logSearchConditions_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogViewExisted, logViewExisted_);
      DARABONBA_PTR_TO_JSON(LogViewName, logViewName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataStorageResponseBodyDataNormalizationLogViews& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleReferenceCount, detectionRuleReferenceCount_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleReferenceProductIds, detectionRuleReferenceProductIds_);
      DARABONBA_PTR_FROM_JSON(LogSearchConditions, logSearchConditions_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogViewExisted, logViewExisted_);
      DARABONBA_PTR_FROM_JSON(LogViewName, logViewName_);
    };
    GetDataStorageResponseBodyDataNormalizationLogViews() = default ;
    GetDataStorageResponseBodyDataNormalizationLogViews(const GetDataStorageResponseBodyDataNormalizationLogViews &) = default ;
    GetDataStorageResponseBodyDataNormalizationLogViews(GetDataStorageResponseBodyDataNormalizationLogViews &&) = default ;
    GetDataStorageResponseBodyDataNormalizationLogViews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataStorageResponseBodyDataNormalizationLogViews() = default ;
    GetDataStorageResponseBodyDataNormalizationLogViews& operator=(const GetDataStorageResponseBodyDataNormalizationLogViews &) = default ;
    GetDataStorageResponseBodyDataNormalizationLogViews& operator=(GetDataStorageResponseBodyDataNormalizationLogViews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityName_ == nullptr
        && return this->categoryName_ == nullptr && return this->detectionRuleReferenceCount_ == nullptr && return this->detectionRuleReferenceProductIds_ == nullptr && return this->logSearchConditions_ == nullptr && return this->logStoreName_ == nullptr
        && return this->logViewExisted_ == nullptr && return this->logViewName_ == nullptr; };
    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string activityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // detectionRuleReferenceCount Field Functions 
    bool hasDetectionRuleReferenceCount() const { return this->detectionRuleReferenceCount_ != nullptr;};
    void deleteDetectionRuleReferenceCount() { this->detectionRuleReferenceCount_ = nullptr;};
    inline int32_t detectionRuleReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleReferenceCount_, 0) };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setDetectionRuleReferenceCount(int32_t detectionRuleReferenceCount) { DARABONBA_PTR_SET_VALUE(detectionRuleReferenceCount_, detectionRuleReferenceCount) };


    // detectionRuleReferenceProductIds Field Functions 
    bool hasDetectionRuleReferenceProductIds() const { return this->detectionRuleReferenceProductIds_ != nullptr;};
    void deleteDetectionRuleReferenceProductIds() { this->detectionRuleReferenceProductIds_ = nullptr;};
    inline const vector<string> & detectionRuleReferenceProductIds() const { DARABONBA_PTR_GET_CONST(detectionRuleReferenceProductIds_, vector<string>) };
    inline vector<string> detectionRuleReferenceProductIds() { DARABONBA_PTR_GET(detectionRuleReferenceProductIds_, vector<string>) };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setDetectionRuleReferenceProductIds(const vector<string> & detectionRuleReferenceProductIds) { DARABONBA_PTR_SET_VALUE(detectionRuleReferenceProductIds_, detectionRuleReferenceProductIds) };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setDetectionRuleReferenceProductIds(vector<string> && detectionRuleReferenceProductIds) { DARABONBA_PTR_SET_RVALUE(detectionRuleReferenceProductIds_, detectionRuleReferenceProductIds) };


    // logSearchConditions Field Functions 
    bool hasLogSearchConditions() const { return this->logSearchConditions_ != nullptr;};
    void deleteLogSearchConditions() { this->logSearchConditions_ = nullptr;};
    inline string logSearchConditions() const { DARABONBA_PTR_GET_DEFAULT(logSearchConditions_, "") };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setLogSearchConditions(string logSearchConditions) { DARABONBA_PTR_SET_VALUE(logSearchConditions_, logSearchConditions) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logViewExisted Field Functions 
    bool hasLogViewExisted() const { return this->logViewExisted_ != nullptr;};
    void deleteLogViewExisted() { this->logViewExisted_ = nullptr;};
    inline bool logViewExisted() const { DARABONBA_PTR_GET_DEFAULT(logViewExisted_, false) };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setLogViewExisted(bool logViewExisted) { DARABONBA_PTR_SET_VALUE(logViewExisted_, logViewExisted) };


    // logViewName Field Functions 
    bool hasLogViewName() const { return this->logViewName_ != nullptr;};
    void deleteLogViewName() { this->logViewName_ = nullptr;};
    inline string logViewName() const { DARABONBA_PTR_GET_DEFAULT(logViewName_, "") };
    inline GetDataStorageResponseBodyDataNormalizationLogViews& setLogViewName(string logViewName) { DARABONBA_PTR_SET_VALUE(logViewName_, logViewName) };


  protected:
    std::shared_ptr<string> activityName_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<int32_t> detectionRuleReferenceCount_ = nullptr;
    std::shared_ptr<vector<string>> detectionRuleReferenceProductIds_ = nullptr;
    std::shared_ptr<string> logSearchConditions_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<bool> logViewExisted_ = nullptr;
    std::shared_ptr<string> logViewName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
