// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPBIGKEYSRESPONSEBODYDATABIGKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPBIGKEYSRESPONSEBODYDATABIGKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeTopBigKeysResponseBodyDataBigKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopBigKeysResponseBodyDataBigKey& obj) { 
      DARABONBA_PTR_TO_JSON(Db, db_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopBigKeysResponseBodyDataBigKey& obj) { 
      DARABONBA_PTR_FROM_JSON(Db, db_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeTopBigKeysResponseBodyDataBigKey() = default ;
    DescribeTopBigKeysResponseBodyDataBigKey(const DescribeTopBigKeysResponseBodyDataBigKey &) = default ;
    DescribeTopBigKeysResponseBodyDataBigKey(DescribeTopBigKeysResponseBodyDataBigKey &&) = default ;
    DescribeTopBigKeysResponseBodyDataBigKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopBigKeysResponseBodyDataBigKey() = default ;
    DescribeTopBigKeysResponseBodyDataBigKey& operator=(const DescribeTopBigKeysResponseBodyDataBigKey &) = default ;
    DescribeTopBigKeysResponseBodyDataBigKey& operator=(DescribeTopBigKeysResponseBodyDataBigKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->db_ != nullptr
        && this->key_ != nullptr && this->keyType_ != nullptr && this->nodeId_ != nullptr && this->size_ != nullptr; };
    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline int32_t db() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
    inline DescribeTopBigKeysResponseBodyDataBigKey& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeTopBigKeysResponseBodyDataBigKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline DescribeTopBigKeysResponseBodyDataBigKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeTopBigKeysResponseBodyDataBigKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeTopBigKeysResponseBodyDataBigKey& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The database in which the key is stored.
    std::shared_ptr<int32_t> db_ = nullptr;
    // The key.
    std::shared_ptr<string> key_ = nullptr;
    // The type of the key.
    std::shared_ptr<string> keyType_ = nullptr;
    // The ID of the data shard on the ApsaraDB for Redis instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The number of elements in the key.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
