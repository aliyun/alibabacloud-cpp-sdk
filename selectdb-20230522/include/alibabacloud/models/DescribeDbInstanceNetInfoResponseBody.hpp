// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos.hpp>
#include <alibabacloud/models/DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClustersNetInfos, DBClustersNetInfos_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClustersNetInfos, DBClustersNetInfos_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceNetInfoResponseBody() = default ;
    DescribeDBInstanceNetInfoResponseBody(const DescribeDBInstanceNetInfoResponseBody &) = default ;
    DescribeDBInstanceNetInfoResponseBody(DescribeDBInstanceNetInfoResponseBody &&) = default ;
    DescribeDBInstanceNetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoResponseBody() = default ;
    DescribeDBInstanceNetInfoResponseBody& operator=(const DescribeDBInstanceNetInfoResponseBody &) = default ;
    DescribeDBInstanceNetInfoResponseBody& operator=(DescribeDBInstanceNetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClustersNetInfos_ == nullptr
        && return this->DBInstanceNetInfos_ == nullptr && return this->requestId_ == nullptr; };
    // DBClustersNetInfos Field Functions 
    bool hasDBClustersNetInfos() const { return this->DBClustersNetInfos_ != nullptr;};
    void deleteDBClustersNetInfos() { this->DBClustersNetInfos_ = nullptr;};
    inline const vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos> & DBClustersNetInfos() const { DARABONBA_PTR_GET_CONST(DBClustersNetInfos_, vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos>) };
    inline vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos> DBClustersNetInfos() { DARABONBA_PTR_GET(DBClustersNetInfos_, vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos>) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBClustersNetInfos(const vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos> & DBClustersNetInfos) { DARABONBA_PTR_SET_VALUE(DBClustersNetInfos_, DBClustersNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBClustersNetInfos(vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos> && DBClustersNetInfos) { DARABONBA_PTR_SET_RVALUE(DBClustersNetInfos_, DBClustersNetInfos) };


    // DBInstanceNetInfos Field Functions 
    bool hasDBInstanceNetInfos() const { return this->DBInstanceNetInfos_ != nullptr;};
    void deleteDBInstanceNetInfos() { this->DBInstanceNetInfos_ = nullptr;};
    inline const vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos> & DBInstanceNetInfos() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfos_, vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos>) };
    inline vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos> DBInstanceNetInfos() { DARABONBA_PTR_GET(DBInstanceNetInfos_, vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos>) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBInstanceNetInfos(const vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos> & DBInstanceNetInfos) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfos_, DBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBInstanceNetInfos(vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos> && DBInstanceNetInfos) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfos_, DBInstanceNetInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network information about the backend (BE) clusters.
    std::shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos>> DBClustersNetInfos_ = nullptr;
    // The network information about the instance.
    std::shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos>> DBInstanceNetInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
