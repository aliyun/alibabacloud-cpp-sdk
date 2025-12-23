// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATALARGEKEYSLARGEKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATALARGEKEYSLARGEKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& obj) { 
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(Db, db_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(Db, db_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey() = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey(const DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey &) = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey(DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey &&) = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey() = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& operator=(const DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey &) = default ;
    DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& operator=(DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSize_ == nullptr
        && return this->db_ == nullptr && return this->key_ == nullptr && return this->keyType_ == nullptr && return this->nodeId_ == nullptr; };
    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline string dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, "") };
    inline DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& setDataSize(string dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline string db() const { DARABONBA_PTR_GET_DEFAULT(db_, "") };
    inline DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& setDb(string db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeHotBigKeysResponseBodyDataLargeKeysLargeKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    std::shared_ptr<string> dataSize_ = nullptr;
    std::shared_ptr<string> db_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> keyType_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
