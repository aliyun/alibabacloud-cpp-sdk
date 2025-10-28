// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODYDATALISTCACHEANALYSISJOBBIGKEYSKEYINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODYDATALISTCACHEANALYSISJOBBIGKEYSKEYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Bytes, bytes_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Db, db_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(ExpirationTimeMillis, expirationTimeMillis_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Db, db_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(ExpirationTimeMillis, expirationTimeMillis_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo() = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo(const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo &) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo(DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo &&) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo() = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& operator=(const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo &) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& operator=(DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bytes_ == nullptr
        && return this->count_ == nullptr && return this->db_ == nullptr && return this->encoding_ == nullptr && return this->expirationTimeMillis_ == nullptr && return this->key_ == nullptr
        && return this->nodeId_ == nullptr && return this->type_ == nullptr; };
    // bytes Field Functions 
    bool hasBytes() const { return this->bytes_ != nullptr;};
    void deleteBytes() { this->bytes_ = nullptr;};
    inline int64_t bytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline int32_t db() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // expirationTimeMillis Field Functions 
    bool hasExpirationTimeMillis() const { return this->expirationTimeMillis_ != nullptr;};
    void deleteExpirationTimeMillis() { this->expirationTimeMillis_ = nullptr;};
    inline int64_t expirationTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(expirationTimeMillis_, 0L) };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& setExpirationTimeMillis(int64_t expirationTimeMillis) { DARABONBA_PTR_SET_VALUE(expirationTimeMillis_, expirationTimeMillis) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of bytes that are occupied by the key.
    std::shared_ptr<int64_t> bytes_ = nullptr;
    // The number of elements in the key.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The name of the database.
    std::shared_ptr<int32_t> db_ = nullptr;
    // The data type of the key.
    std::shared_ptr<string> encoding_ = nullptr;
    // The expiration period of the key. Unit: milliseconds. A value of 0 indicates that the key does not expire.
    std::shared_ptr<int64_t> expirationTimeMillis_ = nullptr;
    // The name of the key.
    std::shared_ptr<string> key_ = nullptr;
    // The ID of the data node on the instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The data type of the instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
