// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSHARDNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSHARDNUMBERRESPONSEBODY_HPP_
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
  class DescribeDBClusterShardNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterShardNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableShardNumberList, availableShardNumberList_);
      DARABONBA_PTR_TO_JSON(AvailableShardNumbers, availableShardNumbers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShardNumber, shardNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterShardNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableShardNumberList, availableShardNumberList_);
      DARABONBA_PTR_FROM_JSON(AvailableShardNumbers, availableShardNumbers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShardNumber, shardNumber_);
    };
    DescribeDBClusterShardNumberResponseBody() = default ;
    DescribeDBClusterShardNumberResponseBody(const DescribeDBClusterShardNumberResponseBody &) = default ;
    DescribeDBClusterShardNumberResponseBody(DescribeDBClusterShardNumberResponseBody &&) = default ;
    DescribeDBClusterShardNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterShardNumberResponseBody() = default ;
    DescribeDBClusterShardNumberResponseBody& operator=(const DescribeDBClusterShardNumberResponseBody &) = default ;
    DescribeDBClusterShardNumberResponseBody& operator=(DescribeDBClusterShardNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableShardNumberList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableShardNumberList& obj) { 
        DARABONBA_PTR_TO_JSON(ShardNumber, shardNumber_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableShardNumberList& obj) { 
        DARABONBA_PTR_FROM_JSON(ShardNumber, shardNumber_);
      };
      AvailableShardNumberList() = default ;
      AvailableShardNumberList(const AvailableShardNumberList &) = default ;
      AvailableShardNumberList(AvailableShardNumberList &&) = default ;
      AvailableShardNumberList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableShardNumberList() = default ;
      AvailableShardNumberList& operator=(const AvailableShardNumberList &) = default ;
      AvailableShardNumberList& operator=(AvailableShardNumberList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->shardNumber_ == nullptr; };
      // shardNumber Field Functions 
      bool hasShardNumber() const { return this->shardNumber_ != nullptr;};
      void deleteShardNumber() { this->shardNumber_ = nullptr;};
      inline int32_t getShardNumber() const { DARABONBA_PTR_GET_DEFAULT(shardNumber_, 0) };
      inline AvailableShardNumberList& setShardNumber(int32_t shardNumber) { DARABONBA_PTR_SET_VALUE(shardNumber_, shardNumber) };


    protected:
      // The number of shards.
      shared_ptr<int32_t> shardNumber_ {};
    };

    virtual bool empty() const override { return this->availableShardNumberList_ == nullptr
        && this->availableShardNumbers_ == nullptr && this->requestId_ == nullptr && this->shardNumber_ == nullptr; };
    // availableShardNumberList Field Functions 
    bool hasAvailableShardNumberList() const { return this->availableShardNumberList_ != nullptr;};
    void deleteAvailableShardNumberList() { this->availableShardNumberList_ = nullptr;};
    inline const vector<DescribeDBClusterShardNumberResponseBody::AvailableShardNumberList> & getAvailableShardNumberList() const { DARABONBA_PTR_GET_CONST(availableShardNumberList_, vector<DescribeDBClusterShardNumberResponseBody::AvailableShardNumberList>) };
    inline vector<DescribeDBClusterShardNumberResponseBody::AvailableShardNumberList> getAvailableShardNumberList() { DARABONBA_PTR_GET(availableShardNumberList_, vector<DescribeDBClusterShardNumberResponseBody::AvailableShardNumberList>) };
    inline DescribeDBClusterShardNumberResponseBody& setAvailableShardNumberList(const vector<DescribeDBClusterShardNumberResponseBody::AvailableShardNumberList> & availableShardNumberList) { DARABONBA_PTR_SET_VALUE(availableShardNumberList_, availableShardNumberList) };
    inline DescribeDBClusterShardNumberResponseBody& setAvailableShardNumberList(vector<DescribeDBClusterShardNumberResponseBody::AvailableShardNumberList> && availableShardNumberList) { DARABONBA_PTR_SET_RVALUE(availableShardNumberList_, availableShardNumberList) };


    // availableShardNumbers Field Functions 
    bool hasAvailableShardNumbers() const { return this->availableShardNumbers_ != nullptr;};
    void deleteAvailableShardNumbers() { this->availableShardNumbers_ = nullptr;};
    inline const vector<int32_t> & getAvailableShardNumbers() const { DARABONBA_PTR_GET_CONST(availableShardNumbers_, vector<int32_t>) };
    inline vector<int32_t> getAvailableShardNumbers() { DARABONBA_PTR_GET(availableShardNumbers_, vector<int32_t>) };
    inline DescribeDBClusterShardNumberResponseBody& setAvailableShardNumbers(const vector<int32_t> & availableShardNumbers) { DARABONBA_PTR_SET_VALUE(availableShardNumbers_, availableShardNumbers) };
    inline DescribeDBClusterShardNumberResponseBody& setAvailableShardNumbers(vector<int32_t> && availableShardNumbers) { DARABONBA_PTR_SET_RVALUE(availableShardNumbers_, availableShardNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterShardNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shardNumber Field Functions 
    bool hasShardNumber() const { return this->shardNumber_ != nullptr;};
    void deleteShardNumber() { this->shardNumber_ = nullptr;};
    inline int32_t getShardNumber() const { DARABONBA_PTR_GET_DEFAULT(shardNumber_, 0) };
    inline DescribeDBClusterShardNumberResponseBody& setShardNumber(int32_t shardNumber) { DARABONBA_PTR_SET_VALUE(shardNumber_, shardNumber) };


  protected:
    // The supported numbers of shards, including the number of current shards and the number of desired shards.
    shared_ptr<vector<DescribeDBClusterShardNumberResponseBody::AvailableShardNumberList>> availableShardNumberList_ {};
    // The number of desired shards, excluding the number of current shards.
    shared_ptr<vector<int32_t>> availableShardNumbers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of shards that you want to change during the data migration.
    shared_ptr<int32_t> shardNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
