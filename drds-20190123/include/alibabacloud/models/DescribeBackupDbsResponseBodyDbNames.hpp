// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPDBSRESPONSEBODYDBNAMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPDBSRESPONSEBODYDBNAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupDbsResponseBodyDbNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupDbsResponseBodyDbNames& obj) { 
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupDbsResponseBodyDbNames& obj) { 
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
    };
    DescribeBackupDbsResponseBodyDbNames() = default ;
    DescribeBackupDbsResponseBodyDbNames(const DescribeBackupDbsResponseBodyDbNames &) = default ;
    DescribeBackupDbsResponseBodyDbNames(DescribeBackupDbsResponseBodyDbNames &&) = default ;
    DescribeBackupDbsResponseBodyDbNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupDbsResponseBodyDbNames() = default ;
    DescribeBackupDbsResponseBodyDbNames& operator=(const DescribeBackupDbsResponseBodyDbNames &) = default ;
    DescribeBackupDbsResponseBodyDbNames& operator=(DescribeBackupDbsResponseBodyDbNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline const vector<string> & dbName() const { DARABONBA_PTR_GET_CONST(dbName_, vector<string>) };
    inline vector<string> dbName() { DARABONBA_PTR_GET(dbName_, vector<string>) };
    inline DescribeBackupDbsResponseBodyDbNames& setDbName(const vector<string> & dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };
    inline DescribeBackupDbsResponseBodyDbNames& setDbName(vector<string> && dbName) { DARABONBA_PTR_SET_RVALUE(dbName_, dbName) };


  protected:
    std::shared_ptr<vector<string>> dbName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
