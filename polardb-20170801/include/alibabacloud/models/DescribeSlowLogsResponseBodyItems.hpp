// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogsResponseBodyItemsSQLSlowLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSlowLogsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(SQLSlowLog, SQLSlowLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(SQLSlowLog, SQLSlowLog_);
    };
    DescribeSlowLogsResponseBodyItems() = default ;
    DescribeSlowLogsResponseBodyItems(const DescribeSlowLogsResponseBodyItems &) = default ;
    DescribeSlowLogsResponseBodyItems(DescribeSlowLogsResponseBodyItems &&) = default ;
    DescribeSlowLogsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogsResponseBodyItems() = default ;
    DescribeSlowLogsResponseBodyItems& operator=(const DescribeSlowLogsResponseBodyItems &) = default ;
    DescribeSlowLogsResponseBodyItems& operator=(DescribeSlowLogsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SQLSlowLog_ != nullptr; };
    // SQLSlowLog Field Functions 
    bool hasSQLSlowLog() const { return this->SQLSlowLog_ != nullptr;};
    void deleteSQLSlowLog() { this->SQLSlowLog_ = nullptr;};
    inline const vector<Models::DescribeSlowLogsResponseBodyItemsSQLSlowLog> & SQLSlowLog() const { DARABONBA_PTR_GET_CONST(SQLSlowLog_, vector<Models::DescribeSlowLogsResponseBodyItemsSQLSlowLog>) };
    inline vector<Models::DescribeSlowLogsResponseBodyItemsSQLSlowLog> SQLSlowLog() { DARABONBA_PTR_GET(SQLSlowLog_, vector<Models::DescribeSlowLogsResponseBodyItemsSQLSlowLog>) };
    inline DescribeSlowLogsResponseBodyItems& setSQLSlowLog(const vector<Models::DescribeSlowLogsResponseBodyItemsSQLSlowLog> & SQLSlowLog) { DARABONBA_PTR_SET_VALUE(SQLSlowLog_, SQLSlowLog) };
    inline DescribeSlowLogsResponseBodyItems& setSQLSlowLog(vector<Models::DescribeSlowLogsResponseBodyItemsSQLSlowLog> && SQLSlowLog) { DARABONBA_PTR_SET_RVALUE(SQLSlowLog_, SQLSlowLog) };


  protected:
    std::shared_ptr<vector<Models::DescribeSlowLogsResponseBodyItemsSQLSlowLog>> SQLSlowLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
