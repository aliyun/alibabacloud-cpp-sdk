// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATAHOTKEYSHOTKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATAHOTKEYSHOTKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotBigKeysResponseBodyDataHotKeysHotKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBodyDataHotKeysHotKey& obj) { 
      DARABONBA_PTR_TO_JSON(Db, db_);
      DARABONBA_PTR_TO_JSON(Hot, hot_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(Lfu, lfu_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBodyDataHotKeysHotKey& obj) { 
      DARABONBA_PTR_FROM_JSON(Db, db_);
      DARABONBA_PTR_FROM_JSON(Hot, hot_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(Lfu, lfu_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeHotBigKeysResponseBodyDataHotKeysHotKey() = default ;
    DescribeHotBigKeysResponseBodyDataHotKeysHotKey(const DescribeHotBigKeysResponseBodyDataHotKeysHotKey &) = default ;
    DescribeHotBigKeysResponseBodyDataHotKeysHotKey(DescribeHotBigKeysResponseBodyDataHotKeysHotKey &&) = default ;
    DescribeHotBigKeysResponseBodyDataHotKeysHotKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBodyDataHotKeysHotKey() = default ;
    DescribeHotBigKeysResponseBodyDataHotKeysHotKey& operator=(const DescribeHotBigKeysResponseBodyDataHotKeysHotKey &) = default ;
    DescribeHotBigKeysResponseBodyDataHotKeysHotKey& operator=(DescribeHotBigKeysResponseBodyDataHotKeysHotKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->db_ == nullptr
        && return this->hot_ == nullptr && return this->key_ == nullptr && return this->keyType_ == nullptr && return this->lfu_ == nullptr && return this->nodeId_ == nullptr
        && return this->size_ == nullptr; };
    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline int32_t db() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
    inline DescribeHotBigKeysResponseBodyDataHotKeysHotKey& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // hot Field Functions 
    bool hasHot() const { return this->hot_ != nullptr;};
    void deleteHot() { this->hot_ = nullptr;};
    inline string hot() const { DARABONBA_PTR_GET_DEFAULT(hot_, "") };
    inline DescribeHotBigKeysResponseBodyDataHotKeysHotKey& setHot(string hot) { DARABONBA_PTR_SET_VALUE(hot_, hot) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeHotBigKeysResponseBodyDataHotKeysHotKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline DescribeHotBigKeysResponseBodyDataHotKeysHotKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // lfu Field Functions 
    bool hasLfu() const { return this->lfu_ != nullptr;};
    void deleteLfu() { this->lfu_ = nullptr;};
    inline int32_t lfu() const { DARABONBA_PTR_GET_DEFAULT(lfu_, 0) };
    inline DescribeHotBigKeysResponseBodyDataHotKeysHotKey& setLfu(int32_t lfu) { DARABONBA_PTR_SET_VALUE(lfu_, lfu) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeHotBigKeysResponseBodyDataHotKeysHotKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeHotBigKeysResponseBodyDataHotKeysHotKey& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The database in which the key is stored.
    std::shared_ptr<int32_t> db_ = nullptr;
    // The frequency at which the key is accessed, which indicates the queries per second (QPS) of the key.
    std::shared_ptr<string> hot_ = nullptr;
    // The key.
    std::shared_ptr<string> key_ = nullptr;
    // The type of the key.
    std::shared_ptr<string> keyType_ = nullptr;
    // The statistical value that is calculated based on the least frequently used (LFU) caching algorithm.
    std::shared_ptr<int32_t> lfu_ = nullptr;
    // The ID of the data shard on the ApsaraDB for Redis instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
