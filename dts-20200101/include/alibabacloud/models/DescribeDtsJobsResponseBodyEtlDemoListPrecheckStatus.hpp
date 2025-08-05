// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLISTPRECHECKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLISTPRECHECKSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatusDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus() = default ;
    DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus(const DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus(DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus &&) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus() = default ;
    DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& operator=(const DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& operator=(DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->errorMessage_ != nullptr && this->percent_ != nullptr && this->status_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatusDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatusDetail>) };
    inline vector<Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatusDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatusDetail>) };
    inline DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& setDetail(const vector<Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatusDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& setDetail(vector<Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatusDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The result of each precheck item.
    std::shared_ptr<vector<Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatusDetail>> detail_ = nullptr;
    // The error message returned if the precheck failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The precheck progress. Unit: percentage.
    std::shared_ptr<string> percent_ = nullptr;
    // The precheck state. Valid values:
    // 
    // - **NotStarted**: The precheck is not started. 
    // - **Suspending**: The precheck is paused. 
    // - **Checking**: The precheck is in progress. 
    // - **Failed**: The precheck failed. 
    // - **Finished**: The precheck is complete.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
