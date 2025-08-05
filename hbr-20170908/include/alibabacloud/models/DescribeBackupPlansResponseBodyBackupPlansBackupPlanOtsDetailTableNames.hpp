// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANOTSDETAILTABLENAMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANOTSDETAILTABLENAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames& obj) { 
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames& obj) { 
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames(DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableName_ != nullptr; };
    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline const vector<string> & tableName() const { DARABONBA_PTR_GET_CONST(tableName_, vector<string>) };
    inline vector<string> tableName() { DARABONBA_PTR_GET(tableName_, vector<string>) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames& setTableName(const vector<string> & tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames& setTableName(vector<string> && tableName) { DARABONBA_PTR_SET_RVALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<vector<string>> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
