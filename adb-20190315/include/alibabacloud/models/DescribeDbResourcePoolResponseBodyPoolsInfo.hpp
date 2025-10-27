// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEPOOLRESPONSEBODYPOOLSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEPOOLRESPONSEBODYPOOLSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBResourcePoolResponseBodyPoolsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourcePoolResponseBodyPoolsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
      DARABONBA_PTR_TO_JSON(PoolUsers, poolUsers_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourcePoolResponseBodyPoolsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(PoolUsers, poolUsers_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeDBResourcePoolResponseBodyPoolsInfo() = default ;
    DescribeDBResourcePoolResponseBodyPoolsInfo(const DescribeDBResourcePoolResponseBodyPoolsInfo &) = default ;
    DescribeDBResourcePoolResponseBodyPoolsInfo(DescribeDBResourcePoolResponseBodyPoolsInfo &&) = default ;
    DescribeDBResourcePoolResponseBodyPoolsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourcePoolResponseBodyPoolsInfo() = default ;
    DescribeDBResourcePoolResponseBodyPoolsInfo& operator=(const DescribeDBResourcePoolResponseBodyPoolsInfo &) = default ;
    DescribeDBResourcePoolResponseBodyPoolsInfo& operator=(DescribeDBResourcePoolResponseBodyPoolsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->nodeNum_ == nullptr && return this->poolName_ == nullptr && return this->poolUsers_ == nullptr && return this->queryType_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBResourcePoolResponseBodyPoolsInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline int32_t nodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
    inline DescribeDBResourcePoolResponseBodyPoolsInfo& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string poolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline DescribeDBResourcePoolResponseBodyPoolsInfo& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


    // poolUsers Field Functions 
    bool hasPoolUsers() const { return this->poolUsers_ != nullptr;};
    void deletePoolUsers() { this->poolUsers_ = nullptr;};
    inline string poolUsers() const { DARABONBA_PTR_GET_DEFAULT(poolUsers_, "") };
    inline DescribeDBResourcePoolResponseBodyPoolsInfo& setPoolUsers(string poolUsers) { DARABONBA_PTR_SET_VALUE(poolUsers_, poolUsers) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeDBResourcePoolResponseBodyPoolsInfo& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDBResourcePoolResponseBodyPoolsInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the resource group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The number of nodes.
    // 
    // >  Each node consumes 16 cores and 64 GB memory.
    std::shared_ptr<int32_t> nodeNum_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> poolName_ = nullptr;
    // The database accounts that are associated with the resource group.
    std::shared_ptr<string> poolUsers_ = nullptr;
    // The mode in which SQL statements are executed.
    // 
    // *   **batch**
    // *   **interactive**
    // 
    // >  For more information, see [Query execution modes](https://help.aliyun.com/document_detail/189502.html).
    std::shared_ptr<string> queryType_ = nullptr;
    // The time when the resource group was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
