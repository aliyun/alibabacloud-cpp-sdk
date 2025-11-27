// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODYDBINSTANCENETINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODYDBINSTANCENETINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceNetInfo, DBInstanceNetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceNetInfo, DBInstanceNetInfo_);
    };
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos(const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos(DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos &&) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos& operator=(const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos& operator=(DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceNetInfo_ == nullptr; };
    // DBInstanceNetInfo Field Functions 
    bool hasDBInstanceNetInfo() const { return this->DBInstanceNetInfo_ != nullptr;};
    void deleteDBInstanceNetInfo() { this->DBInstanceNetInfo_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo> & DBInstanceNetInfo() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfo_, vector<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo>) };
    inline vector<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo> DBInstanceNetInfo() { DARABONBA_PTR_GET(DBInstanceNetInfo_, vector<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo>) };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos& setDBInstanceNetInfo(const vector<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo> & DBInstanceNetInfo) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfo_, DBInstanceNetInfo) };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos& setDBInstanceNetInfo(vector<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo> && DBInstanceNetInfo) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfo_, DBInstanceNetInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo>> DBInstanceNetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
