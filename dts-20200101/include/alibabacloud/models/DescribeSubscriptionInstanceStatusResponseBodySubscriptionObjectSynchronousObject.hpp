// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSUBSCRIPTIONOBJECTSYNCHRONOUSOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSUBSCRIPTIONOBJECTSYNCHRONOUSOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(TableList, tableList_);
      DARABONBA_PTR_TO_JSON(WholeDatabase, wholeDatabase_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(TableList, tableList_);
      DARABONBA_PTR_FROM_JSON(WholeDatabase, wholeDatabase_);
    };
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject(DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject &&) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject& operator=(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject& operator=(DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject &&) = default ;
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
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList & tableList() const { DARABONBA_PTR_GET_CONST(tableList_, Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList) };
    inline Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList tableList() { DARABONBA_PTR_GET(tableList_, Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject& setTableList(const Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject& setTableList(Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


    // wholeDatabase Field Functions 
    bool hasWholeDatabase() const { return this->wholeDatabase_ != nullptr;};
    void deleteWholeDatabase() { this->wholeDatabase_ = nullptr;};
    inline string wholeDatabase() const { DARABONBA_PTR_GET_DEFAULT(wholeDatabase_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject& setWholeDatabase(string wholeDatabase) { DARABONBA_PTR_SET_VALUE(wholeDatabase_, wholeDatabase) };


  protected:
    // The name of the database to which the object belongs.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The table name.
    std::shared_ptr<Models::DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList> tableList_ = nullptr;
    // Indicates whether the data of an entire database is tracked. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> wholeDatabase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
