// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBMIGRATIONOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBMIGRATIONOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject& obj) { 
      DARABONBA_PTR_TO_JSON(SynchronousObject, synchronousObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject& obj) { 
      DARABONBA_PTR_FROM_JSON(SynchronousObject, synchronousObject_);
    };
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject &&) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject& operator=(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject& operator=(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->synchronousObject_ != nullptr; };
    // synchronousObject Field Functions 
    bool hasSynchronousObject() const { return this->synchronousObject_ != nullptr;};
    void deleteSynchronousObject() { this->synchronousObject_ = nullptr;};
    inline const vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject> & synchronousObject() const { DARABONBA_PTR_GET_CONST(synchronousObject_, vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject>) };
    inline vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject> synchronousObject() { DARABONBA_PTR_GET(synchronousObject_, vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject>) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject& setSynchronousObject(const vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject> & synchronousObject) { DARABONBA_PTR_SET_VALUE(synchronousObject_, synchronousObject) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject& setSynchronousObject(vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject> && synchronousObject) { DARABONBA_PTR_SET_RVALUE(synchronousObject_, synchronousObject) };


  protected:
    std::shared_ptr<vector<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject>> synchronousObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
