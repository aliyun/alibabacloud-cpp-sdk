// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBPRECHECK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBPRECHECK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck& obj) { 
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck& obj) { 
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck &&) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck& operator=(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck& operator=(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->percent_ != nullptr
        && this->status_ != nullptr; };
    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
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
