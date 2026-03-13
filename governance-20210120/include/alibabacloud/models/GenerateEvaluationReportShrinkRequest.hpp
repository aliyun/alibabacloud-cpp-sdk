// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEEVALUATIONREPORTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEEVALUATIONREPORTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GenerateEvaluationReportShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateEvaluationReportShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountIds, accountIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateEvaluationReportShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
    };
    GenerateEvaluationReportShrinkRequest() = default ;
    GenerateEvaluationReportShrinkRequest(const GenerateEvaluationReportShrinkRequest &) = default ;
    GenerateEvaluationReportShrinkRequest(GenerateEvaluationReportShrinkRequest &&) = default ;
    GenerateEvaluationReportShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateEvaluationReportShrinkRequest() = default ;
    GenerateEvaluationReportShrinkRequest& operator=(const GenerateEvaluationReportShrinkRequest &) = default ;
    GenerateEvaluationReportShrinkRequest& operator=(GenerateEvaluationReportShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountIdsShrink_ == nullptr && this->regionId_ == nullptr && this->reportType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GenerateEvaluationReportShrinkRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountIdsShrink Field Functions 
    bool hasAccountIdsShrink() const { return this->accountIdsShrink_ != nullptr;};
    void deleteAccountIdsShrink() { this->accountIdsShrink_ = nullptr;};
    inline string getAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountIdsShrink_, "") };
    inline GenerateEvaluationReportShrinkRequest& setAccountIdsShrink(string accountIdsShrink) { DARABONBA_PTR_SET_VALUE(accountIdsShrink_, accountIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateEvaluationReportShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GenerateEvaluationReportShrinkRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


  protected:
    shared_ptr<int64_t> accountId_ {};
    shared_ptr<string> accountIdsShrink_ {};
    // RegionId
    shared_ptr<string> regionId_ {};
    shared_ptr<string> reportType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
