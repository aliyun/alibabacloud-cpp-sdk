// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabasesDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
    };
    DescribeDatabasesResponseBodyDatabases() = default ;
    DescribeDatabasesResponseBodyDatabases(const DescribeDatabasesResponseBodyDatabases &) = default ;
    DescribeDatabasesResponseBodyDatabases(DescribeDatabasesResponseBodyDatabases &&) = default ;
    DescribeDatabasesResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabases() = default ;
    DescribeDatabasesResponseBodyDatabases& operator=(const DescribeDatabasesResponseBodyDatabases &) = default ;
    DescribeDatabasesResponseBodyDatabases& operator=(DescribeDatabasesResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const vector<Models::DescribeDatabasesResponseBodyDatabasesDatabase> & database() const { DARABONBA_PTR_GET_CONST(database_, vector<Models::DescribeDatabasesResponseBodyDatabasesDatabase>) };
    inline vector<Models::DescribeDatabasesResponseBodyDatabasesDatabase> database() { DARABONBA_PTR_GET(database_, vector<Models::DescribeDatabasesResponseBodyDatabasesDatabase>) };
    inline DescribeDatabasesResponseBodyDatabases& setDatabase(const vector<Models::DescribeDatabasesResponseBodyDatabasesDatabase> & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline DescribeDatabasesResponseBodyDatabases& setDatabase(vector<Models::DescribeDatabasesResponseBodyDatabasesDatabase> && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


  protected:
    std::shared_ptr<vector<Models::DescribeDatabasesResponseBodyDatabasesDatabase>> database_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
