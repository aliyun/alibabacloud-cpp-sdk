// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODYSYNCHRONIZATIONOBJECTSTABLEEXCLUDES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODYSYNCHRONIZATIONOBJECTSTABLEEXCLUDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes& obj) { 
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes& obj) { 
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes() = default ;
    DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes(const DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes &) = default ;
    DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes(DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes &&) = default ;
    DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes() = default ;
    DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes& operator=(const DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes &) = default ;
    DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes& operator=(DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tableName_ == nullptr; };
    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The name of the excluded table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
