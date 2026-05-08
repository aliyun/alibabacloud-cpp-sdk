// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class PoolsInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PoolsInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
        DARABONBA_PTR_TO_JSON(PoolName, poolName_);
        DARABONBA_PTR_TO_JSON(PoolUsers, poolUsers_);
        DARABONBA_PTR_TO_JSON(QueryType, queryType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, PoolsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
        DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
        DARABONBA_PTR_FROM_JSON(PoolUsers, poolUsers_);
        DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      PoolsInfo() = default ;
      PoolsInfo(const PoolsInfo &) = default ;
      PoolsInfo(PoolsInfo &&) = default ;
      PoolsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PoolsInfo() = default ;
      PoolsInfo& operator=(const PoolsInfo &) = default ;
      PoolsInfo& operator=(PoolsInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->nodeNum_ == nullptr && this->poolName_ == nullptr && this->poolUsers_ == nullptr && this->queryType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PoolsInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // nodeNum Field Functions 
      bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
      void deleteNodeNum() { this->nodeNum_ = nullptr;};
      inline int32_t getNodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
      inline PoolsInfo& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


      // poolName Field Functions 
      bool hasPoolName() const { return this->poolName_ != nullptr;};
      void deletePoolName() { this->poolName_ = nullptr;};
      inline string getPoolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
      inline PoolsInfo& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


      // poolUsers Field Functions 
      bool hasPoolUsers() const { return this->poolUsers_ != nullptr;};
      void deletePoolUsers() { this->poolUsers_ = nullptr;};
      inline string getPoolUsers() const { DARABONBA_PTR_GET_DEFAULT(poolUsers_, "") };
      inline PoolsInfo& setPoolUsers(string poolUsers) { DARABONBA_PTR_SET_VALUE(poolUsers_, poolUsers) };


      // queryType Field Functions 
      bool hasQueryType() const { return this->queryType_ != nullptr;};
      void deleteQueryType() { this->queryType_ = nullptr;};
      inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
      inline PoolsInfo& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline PoolsInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the resource group was created.
      shared_ptr<string> createTime_ {};
      // The number of nodes.
      // 
      // >  Each node consumes 16 cores and 64 GB memory.
      shared_ptr<int32_t> nodeNum_ {};
      // The name of the resource group.
      shared_ptr<string> poolName_ {};
      // The database accounts that are associated with the resource group.
      shared_ptr<string> poolUsers_ {};
      // The mode in which SQL statements are executed.
      // 
      // *   **batch**
      // *   **interactive**
      // 
      // >  For more information, see [Query execution modes](https://help.aliyun.com/document_detail/189502.html).
      shared_ptr<string> queryType_ {};
      // The time when the resource group was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->poolsInfo_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBResourcePoolResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // poolsInfo Field Functions 
    bool hasPoolsInfo() const { return this->poolsInfo_ != nullptr;};
    void deletePoolsInfo() { this->poolsInfo_ = nullptr;};
    inline const vector<DescribeDBResourcePoolResponseBody::PoolsInfo> & getPoolsInfo() const { DARABONBA_PTR_GET_CONST(poolsInfo_, vector<DescribeDBResourcePoolResponseBody::PoolsInfo>) };
    inline vector<DescribeDBResourcePoolResponseBody::PoolsInfo> getPoolsInfo() { DARABONBA_PTR_GET(poolsInfo_, vector<DescribeDBResourcePoolResponseBody::PoolsInfo>) };
    inline DescribeDBResourcePoolResponseBody& setPoolsInfo(const vector<DescribeDBResourcePoolResponseBody::PoolsInfo> & poolsInfo) { DARABONBA_PTR_SET_VALUE(poolsInfo_, poolsInfo) };
    inline DescribeDBResourcePoolResponseBody& setPoolsInfo(vector<DescribeDBResourcePoolResponseBody::PoolsInfo> && poolsInfo) { DARABONBA_PTR_SET_RVALUE(poolsInfo_, poolsInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBResourcePoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
    shared_ptr<string> DBClusterId_ {};
    // Details of the resource group.
    shared_ptr<vector<DescribeDBResourcePoolResponseBody::PoolsInfo>> poolsInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
