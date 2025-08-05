// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANOTSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANOTSDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail(DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableNames_ != nullptr; };
    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames) };
    inline Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames tableNames() { DARABONBA_PTR_GET(tableNames_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail& setTableNames(const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail& setTableNames(Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


  protected:
    // The names of the tables in the Tablestore instance.
    std::shared_ptr<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames> tableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
