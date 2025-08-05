// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODYPRECHECKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODYPRECHECKSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobStatusResponseBodyPrecheckStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobStatusResponseBodyPrecheckStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobStatusResponseBodyPrecheckStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSynchronizationJobStatusResponseBodyPrecheckStatus() = default ;
    DescribeSynchronizationJobStatusResponseBodyPrecheckStatus(const DescribeSynchronizationJobStatusResponseBodyPrecheckStatus &) = default ;
    DescribeSynchronizationJobStatusResponseBodyPrecheckStatus(DescribeSynchronizationJobStatusResponseBodyPrecheckStatus &&) = default ;
    DescribeSynchronizationJobStatusResponseBodyPrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobStatusResponseBodyPrecheckStatus() = default ;
    DescribeSynchronizationJobStatusResponseBodyPrecheckStatus& operator=(const DescribeSynchronizationJobStatusResponseBodyPrecheckStatus &) = default ;
    DescribeSynchronizationJobStatusResponseBodyPrecheckStatus& operator=(DescribeSynchronizationJobStatusResponseBodyPrecheckStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->percent_ != nullptr && this->status_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail>) };
    inline vector<Models::DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail>) };
    inline DescribeSynchronizationJobStatusResponseBodyPrecheckStatus& setDetail(const vector<Models::DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeSynchronizationJobStatusResponseBodyPrecheckStatus& setDetail(vector<Models::DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeSynchronizationJobStatusResponseBodyPrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSynchronizationJobStatusResponseBodyPrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The result of each precheck item.
    std::shared_ptr<vector<Models::DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail>> detail_ = nullptr;
    // The precheck progress. Unit: %.
    std::shared_ptr<string> percent_ = nullptr;
    // The precheck result. Valid values:
    // 
    // *   **Success**: The task passed the precheck.
    // *   **Failed**: The task failed to pass the precheck.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
