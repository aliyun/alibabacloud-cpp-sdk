// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSHARDNUMBERRESPONSEBODYAVAILABLESHARDNUMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSHARDNUMBERRESPONSEBODYAVAILABLESHARDNUMBERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList& obj) { 
      DARABONBA_PTR_TO_JSON(ShardNumber, shardNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList& obj) { 
      DARABONBA_PTR_FROM_JSON(ShardNumber, shardNumber_);
    };
    DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList() = default ;
    DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList(const DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList &) = default ;
    DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList(DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList &&) = default ;
    DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList() = default ;
    DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList& operator=(const DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList &) = default ;
    DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList& operator=(DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shardNumber_ != nullptr; };
    // shardNumber Field Functions 
    bool hasShardNumber() const { return this->shardNumber_ != nullptr;};
    void deleteShardNumber() { this->shardNumber_ = nullptr;};
    inline int32_t shardNumber() const { DARABONBA_PTR_GET_DEFAULT(shardNumber_, 0) };
    inline DescribeDBClusterShardNumberResponseBodyAvailableShardNumberList& setShardNumber(int32_t shardNumber) { DARABONBA_PTR_SET_VALUE(shardNumber_, shardNumber) };


  protected:
    // The number of shards.
    std::shared_ptr<int32_t> shardNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
