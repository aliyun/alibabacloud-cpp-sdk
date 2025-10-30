// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBINSTANCENETINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBINSTANCENETINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceNetInfo, DBInstanceNetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceNetInfo, DBInstanceNetInfo_);
    };
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos &&) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& operator=(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& operator=(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceNetInfo_ == nullptr; };
    // DBInstanceNetInfo Field Functions 
    bool hasDBInstanceNetInfo() const { return this->DBInstanceNetInfo_ != nullptr;};
    void deleteDBInstanceNetInfo() { this->DBInstanceNetInfo_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo> & DBInstanceNetInfo() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfo_, vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo>) };
    inline vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo> DBInstanceNetInfo() { DARABONBA_PTR_GET(DBInstanceNetInfo_, vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo>) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setDBInstanceNetInfo(const vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo> & DBInstanceNetInfo) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfo_, DBInstanceNetInfo) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setDBInstanceNetInfo(vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo> && DBInstanceNetInfo) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfo_, DBInstanceNetInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo>> DBInstanceNetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
