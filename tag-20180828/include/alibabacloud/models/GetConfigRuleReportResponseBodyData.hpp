// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULEREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULEREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetConfigRuleReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetConfigRuleReportResponseBodyData() = default ;
    GetConfigRuleReportResponseBodyData(const GetConfigRuleReportResponseBodyData &) = default ;
    GetConfigRuleReportResponseBodyData(GetConfigRuleReportResponseBodyData &&) = default ;
    GetConfigRuleReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleReportResponseBodyData() = default ;
    GetConfigRuleReportResponseBodyData& operator=(const GetConfigRuleReportResponseBodyData &) = default ;
    GetConfigRuleReportResponseBodyData& operator=(GetConfigRuleReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->reportId_ != nullptr && this->targetId_ != nullptr && this->targetType_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline GetConfigRuleReportResponseBodyData& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetConfigRuleReportResponseBodyData& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GetConfigRuleReportResponseBodyData& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetConfigRuleReportResponseBodyData& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The time when the report was generated. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The ID of the report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The ID of the object.
    // 
    // >  This parameter is returned if you set the `TargetType` and `TargetId` parameters in the current request to the same values as the parameters that are configured when you call the [GenerateConfigRuleReport](https://help.aliyun.com/document_detail/433313.html) operation to generate the report.
    std::shared_ptr<string> targetId_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   USER: the current logon account. This value is available if you use the Tag Policy feature in single-account mode.
    // *   ROOT: the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   FOLDER: a folder other than the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   ACCOUNT: a member in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // 
    // >  This parameter is returned if you set the `TargetType` and `TargetId` parameters in the current request to the same values as the parameters that are configured when you call the [GenerateConfigRuleReport](https://help.aliyun.com/document_detail/433313.html) operation to generate the report.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
