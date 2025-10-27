// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBResourcePoolResponseBodyPoolsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBResourcePoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourcePoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PoolsInfo, poolsInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourcePoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PoolsInfo, poolsInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBResourcePoolResponseBody() = default ;
    DescribeDBResourcePoolResponseBody(const DescribeDBResourcePoolResponseBody &) = default ;
    DescribeDBResourcePoolResponseBody(DescribeDBResourcePoolResponseBody &&) = default ;
    DescribeDBResourcePoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourcePoolResponseBody() = default ;
    DescribeDBResourcePoolResponseBody& operator=(const DescribeDBResourcePoolResponseBody &) = default ;
    DescribeDBResourcePoolResponseBody& operator=(DescribeDBResourcePoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->poolsInfo_ == nullptr && return this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBResourcePoolResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // poolsInfo Field Functions 
    bool hasPoolsInfo() const { return this->poolsInfo_ != nullptr;};
    void deletePoolsInfo() { this->poolsInfo_ = nullptr;};
    inline const vector<DescribeDBResourcePoolResponseBodyPoolsInfo> & poolsInfo() const { DARABONBA_PTR_GET_CONST(poolsInfo_, vector<DescribeDBResourcePoolResponseBodyPoolsInfo>) };
    inline vector<DescribeDBResourcePoolResponseBodyPoolsInfo> poolsInfo() { DARABONBA_PTR_GET(poolsInfo_, vector<DescribeDBResourcePoolResponseBodyPoolsInfo>) };
    inline DescribeDBResourcePoolResponseBody& setPoolsInfo(const vector<DescribeDBResourcePoolResponseBodyPoolsInfo> & poolsInfo) { DARABONBA_PTR_SET_VALUE(poolsInfo_, poolsInfo) };
    inline DescribeDBResourcePoolResponseBody& setPoolsInfo(vector<DescribeDBResourcePoolResponseBodyPoolsInfo> && poolsInfo) { DARABONBA_PTR_SET_RVALUE(poolsInfo_, poolsInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBResourcePoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Details of the resource group.
    std::shared_ptr<vector<DescribeDBResourcePoolResponseBodyPoolsInfo>> poolsInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
