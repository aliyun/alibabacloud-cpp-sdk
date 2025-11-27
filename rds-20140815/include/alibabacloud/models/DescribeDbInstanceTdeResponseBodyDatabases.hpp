// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceTDEResponseBodyDatabasesDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceTDEResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTDEResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTDEResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
    };
    DescribeDBInstanceTDEResponseBodyDatabases() = default ;
    DescribeDBInstanceTDEResponseBodyDatabases(const DescribeDBInstanceTDEResponseBodyDatabases &) = default ;
    DescribeDBInstanceTDEResponseBodyDatabases(DescribeDBInstanceTDEResponseBodyDatabases &&) = default ;
    DescribeDBInstanceTDEResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTDEResponseBodyDatabases() = default ;
    DescribeDBInstanceTDEResponseBodyDatabases& operator=(const DescribeDBInstanceTDEResponseBodyDatabases &) = default ;
    DescribeDBInstanceTDEResponseBodyDatabases& operator=(DescribeDBInstanceTDEResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceTDEResponseBodyDatabasesDatabase> & database() const { DARABONBA_PTR_GET_CONST(database_, vector<Models::DescribeDBInstanceTDEResponseBodyDatabasesDatabase>) };
    inline vector<Models::DescribeDBInstanceTDEResponseBodyDatabasesDatabase> database() { DARABONBA_PTR_GET(database_, vector<Models::DescribeDBInstanceTDEResponseBodyDatabasesDatabase>) };
    inline DescribeDBInstanceTDEResponseBodyDatabases& setDatabase(const vector<Models::DescribeDBInstanceTDEResponseBodyDatabasesDatabase> & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline DescribeDBInstanceTDEResponseBodyDatabases& setDatabase(vector<Models::DescribeDBInstanceTDEResponseBodyDatabasesDatabase> && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceTDEResponseBodyDatabasesDatabase>> database_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
