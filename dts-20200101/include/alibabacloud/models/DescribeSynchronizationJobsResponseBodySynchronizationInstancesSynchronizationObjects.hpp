// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCESSYNCHRONIZATIONOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCESSYNCHRONIZATIONOBJECTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& obj) { 
      DARABONBA_PTR_TO_JSON(NewSchemaName, newSchemaName_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableExcludes, tableExcludes_);
      DARABONBA_PTR_TO_JSON(TableIncludes, tableIncludes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(NewSchemaName, newSchemaName_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableExcludes, tableExcludes_);
      DARABONBA_PTR_FROM_JSON(TableIncludes, tableIncludes_);
    };
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects(const DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects(DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects &&) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& operator=(const DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& operator=(DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newSchemaName_ == nullptr
        && return this->schemaName_ == nullptr && return this->tableExcludes_ == nullptr && return this->tableIncludes_ == nullptr; };
    // newSchemaName Field Functions 
    bool hasNewSchemaName() const { return this->newSchemaName_ != nullptr;};
    void deleteNewSchemaName() { this->newSchemaName_ = nullptr;};
    inline string newSchemaName() const { DARABONBA_PTR_GET_DEFAULT(newSchemaName_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& setNewSchemaName(string newSchemaName) { DARABONBA_PTR_SET_VALUE(newSchemaName_, newSchemaName) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableExcludes Field Functions 
    bool hasTableExcludes() const { return this->tableExcludes_ != nullptr;};
    void deleteTableExcludes() { this->tableExcludes_ = nullptr;};
    inline const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes> & tableExcludes() const { DARABONBA_PTR_GET_CONST(tableExcludes_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes>) };
    inline vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes> tableExcludes() { DARABONBA_PTR_GET(tableExcludes_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes>) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& setTableExcludes(const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes> & tableExcludes) { DARABONBA_PTR_SET_VALUE(tableExcludes_, tableExcludes) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& setTableExcludes(vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes> && tableExcludes) { DARABONBA_PTR_SET_RVALUE(tableExcludes_, tableExcludes) };


    // tableIncludes Field Functions 
    bool hasTableIncludes() const { return this->tableIncludes_ != nullptr;};
    void deleteTableIncludes() { this->tableIncludes_ = nullptr;};
    inline const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes> & tableIncludes() const { DARABONBA_PTR_GET_CONST(tableIncludes_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes>) };
    inline vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes> tableIncludes() { DARABONBA_PTR_GET(tableIncludes_, vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes>) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& setTableIncludes(const vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes> & tableIncludes) { DARABONBA_PTR_SET_VALUE(tableIncludes_, tableIncludes) };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects& setTableIncludes(vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes> && tableIncludes) { DARABONBA_PTR_SET_RVALUE(tableIncludes_, tableIncludes) };


  protected:
    // The database name that is used in the destination instance.
    std::shared_ptr<string> newSchemaName_ = nullptr;
    // The name of the synchronized database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The source tables that are excluded from the data synchronization task.
    std::shared_ptr<vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes>> tableExcludes_ = nullptr;
    // The tables that are synchronized by the task.
    std::shared_ptr<vector<Models::DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes>> tableIncludes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
