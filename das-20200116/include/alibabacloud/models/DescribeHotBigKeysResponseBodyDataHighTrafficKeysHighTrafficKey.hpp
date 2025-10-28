// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATAHIGHTRAFFICKEYSHIGHTRAFFICKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATAHIGHTRAFFICKEYSHIGHTRAFFICKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& obj) { 
      DARABONBA_PTR_TO_JSON(Db, db_);
      DARABONBA_PTR_TO_JSON(Hot, hot_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(inBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(outBytes, outBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& obj) { 
      DARABONBA_PTR_FROM_JSON(Db, db_);
      DARABONBA_PTR_FROM_JSON(Hot, hot_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(inBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(outBytes, outBytes_);
    };
    DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey() = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey(const DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey &) = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey(DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey &&) = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey() = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& operator=(const DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey &) = default ;
    DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& operator=(DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->db_ == nullptr
        && return this->hot_ == nullptr && return this->key_ == nullptr && return this->keyType_ == nullptr && return this->nodeId_ == nullptr && return this->size_ == nullptr
        && return this->inBytes_ == nullptr && return this->outBytes_ == nullptr; };
    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline int32_t db() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // hot Field Functions 
    bool hasHot() const { return this->hot_ != nullptr;};
    void deleteHot() { this->hot_ = nullptr;};
    inline string hot() const { DARABONBA_PTR_GET_DEFAULT(hot_, "") };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& setHot(string hot) { DARABONBA_PTR_SET_VALUE(hot_, hot) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeHotBigKeysResponseBodyDataHighTrafficKeysHighTrafficKey& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


  protected:
    std::shared_ptr<int32_t> db_ = nullptr;
    std::shared_ptr<string> hot_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> keyType_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    std::shared_ptr<int64_t> outBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
