// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILRESPONSEBODYCHECKITEMRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILRESPONSEBODYCHECKITEMRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterInspectReportDetailResponseBodyCheckItemResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterInspectReportDetailResponseBodyCheckItemResults& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(checkItemUid, checkItemUid_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fix, fix_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterInspectReportDetailResponseBodyCheckItemResults& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(checkItemUid, checkItemUid_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fix, fix_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(targets, targets_);
    };
    GetClusterInspectReportDetailResponseBodyCheckItemResults() = default ;
    GetClusterInspectReportDetailResponseBodyCheckItemResults(const GetClusterInspectReportDetailResponseBodyCheckItemResults &) = default ;
    GetClusterInspectReportDetailResponseBodyCheckItemResults(GetClusterInspectReportDetailResponseBodyCheckItemResults &&) = default ;
    GetClusterInspectReportDetailResponseBodyCheckItemResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterInspectReportDetailResponseBodyCheckItemResults() = default ;
    GetClusterInspectReportDetailResponseBodyCheckItemResults& operator=(const GetClusterInspectReportDetailResponseBodyCheckItemResults &) = default ;
    GetClusterInspectReportDetailResponseBodyCheckItemResults& operator=(GetClusterInspectReportDetailResponseBodyCheckItemResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->checkItemUid_ == nullptr && return this->description_ == nullptr && return this->fix_ == nullptr && return this->level_ == nullptr && return this->name_ == nullptr
        && return this->result_ == nullptr && return this->targetType_ == nullptr && return this->targets_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // checkItemUid Field Functions 
    bool hasCheckItemUid() const { return this->checkItemUid_ != nullptr;};
    void deleteCheckItemUid() { this->checkItemUid_ = nullptr;};
    inline string checkItemUid() const { DARABONBA_PTR_GET_DEFAULT(checkItemUid_, "") };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setCheckItemUid(string checkItemUid) { DARABONBA_PTR_SET_VALUE(checkItemUid_, checkItemUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fix Field Functions 
    bool hasFix() const { return this->fix_ != nullptr;};
    void deleteFix() { this->fix_ = nullptr;};
    inline string fix() const { DARABONBA_PTR_GET_DEFAULT(fix_, "") };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setFix(string fix) { DARABONBA_PTR_SET_VALUE(fix_, fix) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<string> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
    inline vector<string> targets() { DARABONBA_PTR_GET(targets_, vector<string>) };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline GetClusterInspectReportDetailResponseBodyCheckItemResults& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The category of the inspection item. Valid values:
    // 
    // *   security: Security compliance
    // *   performance: Performance efficiency
    // *   stability: Business stability
    // *   limitation: Service limits
    // *   cost: Cost optimization
    std::shared_ptr<string> category_ = nullptr;
    // The unique identifier of the inspection item.
    std::shared_ptr<string> checkItemUid_ = nullptr;
    // The description of the inspection item.
    std::shared_ptr<string> description_ = nullptr;
    // The fixing suggestion.
    std::shared_ptr<string> fix_ = nullptr;
    // The level of the inspection item. Valid values:
    // 
    // *   advice: Suggestions
    // *   warning: Low severity
    // *   error: Medium severity
    // *   critical: High severity
    std::shared_ptr<string> level_ = nullptr;
    // The name of the inspection item.
    std::shared_ptr<string> name_ = nullptr;
    // The inspection results. Valid values:
    // 
    // *   true: The inspection item is abnormal.
    // *   false: The inspection item is normal.
    // *   disable: The inspection item is not enabled.
    std::shared_ptr<string> result_ = nullptr;
    // The resource type of the inspection object.
    std::shared_ptr<string> targetType_ = nullptr;
    // The inspection objects.
    std::shared_ptr<vector<string>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
