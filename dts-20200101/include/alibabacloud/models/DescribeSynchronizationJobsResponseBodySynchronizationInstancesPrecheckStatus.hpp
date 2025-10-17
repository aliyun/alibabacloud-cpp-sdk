// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCESPRECHECKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCESPRECHECKSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus(const DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus(DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus &&) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus& operator=(const DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus& operator=(DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->percent_ == nullptr && return this->status_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail>) };
    inline vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail>) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus& setDetail(const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus& setDetail(vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The result of each precheck item.
    std::shared_ptr<vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail>> detail_ = nullptr;
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
