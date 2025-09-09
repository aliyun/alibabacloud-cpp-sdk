// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETSRESPONSEBODYBACKUPSETSBACKUPSETBACKUPDBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETSRESPONSEBODYBACKUPSETSBACKUPSETBACKUPDBS_HPP_
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
  class DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs& obj) { 
      DARABONBA_PTR_TO_JSON(backupDb, backupDb_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs& obj) { 
      DARABONBA_PTR_FROM_JSON(backupDb, backupDb_);
    };
    DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs() = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs(const DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs &) = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs(DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs &&) = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs() = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs& operator=(const DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs &) = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs& operator=(DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupDb_ != nullptr; };
    // backupDb Field Functions 
    bool hasBackupDb() const { return this->backupDb_ != nullptr;};
    void deleteBackupDb() { this->backupDb_ = nullptr;};
    inline const vector<string> & backupDb() const { DARABONBA_PTR_GET_CONST(backupDb_, vector<string>) };
    inline vector<string> backupDb() { DARABONBA_PTR_GET(backupDb_, vector<string>) };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs& setBackupDb(const vector<string> & backupDb) { DARABONBA_PTR_SET_VALUE(backupDb_, backupDb) };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs& setBackupDb(vector<string> && backupDb) { DARABONBA_PTR_SET_RVALUE(backupDb_, backupDb) };


  protected:
    std::shared_ptr<vector<string>> backupDb_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
