// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBMIGRATIONOBJECTSYNCHRONOUSOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBMIGRATIONOBJECTSYNCHRONOUSOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(TableList, tableList_);
      DARABONBA_PTR_TO_JSON(WholeDatabase, wholeDatabase_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(TableList, tableList_);
      DARABONBA_PTR_FROM_JSON(WholeDatabase, wholeDatabase_);
    };
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject &&) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject& operator=(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject& operator=(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->tableList_ == nullptr && return this->wholeDatabase_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList & tableList() const { DARABONBA_PTR_GET_CONST(tableList_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList tableList() { DARABONBA_PTR_GET(tableList_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject& setTableList(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject& setTableList(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


    // wholeDatabase Field Functions 
    bool hasWholeDatabase() const { return this->wholeDatabase_ != nullptr;};
    void deleteWholeDatabase() { this->wholeDatabase_ = nullptr;};
    inline string wholeDatabase() const { DARABONBA_PTR_GET_DEFAULT(wholeDatabase_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject& setWholeDatabase(string wholeDatabase) { DARABONBA_PTR_SET_VALUE(wholeDatabase_, wholeDatabase) };


  protected:
    // The name of the database to which the migration object in the source instance belongs.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The names of the migrated tables.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList> tableList_ = nullptr;
    // Indicates whether an entire database is migrated. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> wholeDatabase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
