// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsResponseBodyMigrationJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsResponseBodyMigrationJobs& obj) { 
      DARABONBA_PTR_TO_JSON(MigrationJob, migrationJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsResponseBodyMigrationJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(MigrationJob, migrationJob_);
    };
    DescribeMigrationJobsResponseBodyMigrationJobs() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobs(const DescribeMigrationJobsResponseBodyMigrationJobs &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobs(DescribeMigrationJobsResponseBodyMigrationJobs &&) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsResponseBodyMigrationJobs() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobs& operator=(const DescribeMigrationJobsResponseBodyMigrationJobs &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobs& operator=(DescribeMigrationJobsResponseBodyMigrationJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->migrationJob_ != nullptr; };
    // migrationJob Field Functions 
    bool hasMigrationJob() const { return this->migrationJob_ != nullptr;};
    void deleteMigrationJob() { this->migrationJob_ = nullptr;};
    inline const vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob> & migrationJob() const { DARABONBA_PTR_GET_CONST(migrationJob_, vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob>) };
    inline vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob> migrationJob() { DARABONBA_PTR_GET(migrationJob_, vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob>) };
    inline DescribeMigrationJobsResponseBodyMigrationJobs& setMigrationJob(const vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob> & migrationJob) { DARABONBA_PTR_SET_VALUE(migrationJob_, migrationJob) };
    inline DescribeMigrationJobsResponseBodyMigrationJobs& setMigrationJob(vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob> && migrationJob) { DARABONBA_PTR_SET_RVALUE(migrationJob_, migrationJob) };


  protected:
    std::shared_ptr<vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob>> migrationJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
