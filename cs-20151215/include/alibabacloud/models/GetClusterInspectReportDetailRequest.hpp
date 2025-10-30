// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterInspectReportDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterInspectReportDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(enableFilter, enableFilter_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterInspectReportDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(enableFilter, enableFilter_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
    };
    GetClusterInspectReportDetailRequest() = default ;
    GetClusterInspectReportDetailRequest(const GetClusterInspectReportDetailRequest &) = default ;
    GetClusterInspectReportDetailRequest(GetClusterInspectReportDetailRequest &&) = default ;
    GetClusterInspectReportDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterInspectReportDetailRequest() = default ;
    GetClusterInspectReportDetailRequest& operator=(const GetClusterInspectReportDetailRequest &) = default ;
    GetClusterInspectReportDetailRequest& operator=(GetClusterInspectReportDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->enableFilter_ == nullptr && return this->language_ == nullptr && return this->level_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->targetType_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetClusterInspectReportDetailRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // enableFilter Field Functions 
    bool hasEnableFilter() const { return this->enableFilter_ != nullptr;};
    void deleteEnableFilter() { this->enableFilter_ = nullptr;};
    inline bool enableFilter() const { DARABONBA_PTR_GET_DEFAULT(enableFilter_, false) };
    inline GetClusterInspectReportDetailRequest& setEnableFilter(bool enableFilter) { DARABONBA_PTR_SET_VALUE(enableFilter_, enableFilter) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetClusterInspectReportDetailRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetClusterInspectReportDetailRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetClusterInspectReportDetailRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetClusterInspectReportDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetClusterInspectReportDetailRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The category of the inspection item. Valid values:
    // 
    // *   security: Security compliance
    // *   performance: Performance efficiency
    // *   stability: Business stability
    // *   limitation: Service limits
    // *   cost: Cost optimization
    std::shared_ptr<string> category_ = nullptr;
    // Inspection results filtering. If this parameter is set to true, only abnormal inspection items are returned.
    std::shared_ptr<bool> enableFilter_ = nullptr;
    // The query language.
    // 
    // *   zh_CN
    // *   en_US
    std::shared_ptr<string> language_ = nullptr;
    // The level of the inspection item. Valid values:
    // 
    // *   advice: Suggestions
    // *   warning: Low severity
    // *   error: Medium severity
    // *   critical: High severity
    std::shared_ptr<string> level_ = nullptr;
    // The maximum number of entries per page. Maximum value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to display the returned tags on multiple pages.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The type of the inspection object. Only items that meet the targetType parameter are returned.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
