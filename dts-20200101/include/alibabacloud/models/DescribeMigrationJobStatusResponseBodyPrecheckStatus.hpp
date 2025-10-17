// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODYPRECHECKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODYPRECHECKSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobStatusResponseBodyPrecheckStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobStatusResponseBodyPrecheckStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobStatusResponseBodyPrecheckStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMigrationJobStatusResponseBodyPrecheckStatus() = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatus(const DescribeMigrationJobStatusResponseBodyPrecheckStatus &) = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatus(DescribeMigrationJobStatusResponseBodyPrecheckStatus &&) = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobStatusResponseBodyPrecheckStatus() = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatus& operator=(const DescribeMigrationJobStatusResponseBodyPrecheckStatus &) = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatus& operator=(DescribeMigrationJobStatusResponseBodyPrecheckStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->percent_ == nullptr && return this->status_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail) };
    inline Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail detail() { DARABONBA_PTR_GET(detail_, Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail) };
    inline DescribeMigrationJobStatusResponseBodyPrecheckStatus& setDetail(const Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeMigrationJobStatusResponseBodyPrecheckStatus& setDetail(Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeMigrationJobStatusResponseBodyPrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrationJobStatusResponseBodyPrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The result of each precheck item.
    std::shared_ptr<Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail> detail_ = nullptr;
    // The precheck progress. Unit: %.
    std::shared_ptr<string> percent_ = nullptr;
    // The precheck status. Valid values:
    // 
    // *   **NotStarted**
    // *   **Suspending**:
    // *   **Checking**
    // *   **Failed**
    // *   **Finished**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
