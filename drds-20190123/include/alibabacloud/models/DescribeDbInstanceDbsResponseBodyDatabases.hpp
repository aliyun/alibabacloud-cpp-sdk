// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDBSRESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDBSRESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDbInstanceDbsResponseBodyDatabasesDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDbInstanceDbsResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbInstanceDbsResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbInstanceDbsResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
    };
    DescribeDbInstanceDbsResponseBodyDatabases() = default ;
    DescribeDbInstanceDbsResponseBodyDatabases(const DescribeDbInstanceDbsResponseBodyDatabases &) = default ;
    DescribeDbInstanceDbsResponseBodyDatabases(DescribeDbInstanceDbsResponseBodyDatabases &&) = default ;
    DescribeDbInstanceDbsResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbInstanceDbsResponseBodyDatabases() = default ;
    DescribeDbInstanceDbsResponseBodyDatabases& operator=(const DescribeDbInstanceDbsResponseBodyDatabases &) = default ;
    DescribeDbInstanceDbsResponseBodyDatabases& operator=(DescribeDbInstanceDbsResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const vector<Models::DescribeDbInstanceDbsResponseBodyDatabasesDatabase> & database() const { DARABONBA_PTR_GET_CONST(database_, vector<Models::DescribeDbInstanceDbsResponseBodyDatabasesDatabase>) };
    inline vector<Models::DescribeDbInstanceDbsResponseBodyDatabasesDatabase> database() { DARABONBA_PTR_GET(database_, vector<Models::DescribeDbInstanceDbsResponseBodyDatabasesDatabase>) };
    inline DescribeDbInstanceDbsResponseBodyDatabases& setDatabase(const vector<Models::DescribeDbInstanceDbsResponseBodyDatabasesDatabase> & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline DescribeDbInstanceDbsResponseBodyDatabases& setDatabase(vector<Models::DescribeDbInstanceDbsResponseBodyDatabasesDatabase> && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


  protected:
    std::shared_ptr<vector<Models::DescribeDbInstanceDbsResponseBodyDatabasesDatabase>> database_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
