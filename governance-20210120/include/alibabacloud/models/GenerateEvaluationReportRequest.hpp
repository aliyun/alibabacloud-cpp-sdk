// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEEVALUATIONREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEEVALUATIONREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GenerateEvaluationReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateEvaluationReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateEvaluationReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
    };
    GenerateEvaluationReportRequest() = default ;
    GenerateEvaluationReportRequest(const GenerateEvaluationReportRequest &) = default ;
    GenerateEvaluationReportRequest(GenerateEvaluationReportRequest &&) = default ;
    GenerateEvaluationReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateEvaluationReportRequest() = default ;
    GenerateEvaluationReportRequest& operator=(const GenerateEvaluationReportRequest &) = default ;
    GenerateEvaluationReportRequest& operator=(GenerateEvaluationReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountIds_ == nullptr && this->regionId_ == nullptr && this->reportType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GenerateEvaluationReportRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
    inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
    inline GenerateEvaluationReportRequest& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GenerateEvaluationReportRequest& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateEvaluationReportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GenerateEvaluationReportRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


  protected:
    shared_ptr<int64_t> accountId_ {};
    shared_ptr<vector<int64_t>> accountIds_ {};
    // RegionId
    shared_ptr<string> regionId_ {};
    shared_ptr<string> reportType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
