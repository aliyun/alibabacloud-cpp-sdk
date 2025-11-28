// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBLOCKCHAINMETADATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBLOCKCHAINMETADATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class QueryBlockchainMetadataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBlockchainMetadataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BlockHash, blockHash_);
      DARABONBA_PTR_TO_JSON(BlockNumber, blockNumber_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TxHash, txHash_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBlockchainMetadataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockHash, blockHash_);
      DARABONBA_PTR_FROM_JSON(BlockNumber, blockNumber_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TxHash, txHash_);
    };
    QueryBlockchainMetadataResponseBodyData() = default ;
    QueryBlockchainMetadataResponseBodyData(const QueryBlockchainMetadataResponseBodyData &) = default ;
    QueryBlockchainMetadataResponseBodyData(QueryBlockchainMetadataResponseBodyData &&) = default ;
    QueryBlockchainMetadataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBlockchainMetadataResponseBodyData() = default ;
    QueryBlockchainMetadataResponseBodyData& operator=(const QueryBlockchainMetadataResponseBodyData &) = default ;
    QueryBlockchainMetadataResponseBodyData& operator=(QueryBlockchainMetadataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockHash_ == nullptr
        && return this->blockNumber_ == nullptr && return this->iotId_ == nullptr && return this->memberName_ == nullptr && return this->productKey_ == nullptr && return this->timestamp_ == nullptr
        && return this->txHash_ == nullptr; };
    // blockHash Field Functions 
    bool hasBlockHash() const { return this->blockHash_ != nullptr;};
    void deleteBlockHash() { this->blockHash_ = nullptr;};
    inline string blockHash() const { DARABONBA_PTR_GET_DEFAULT(blockHash_, "") };
    inline QueryBlockchainMetadataResponseBodyData& setBlockHash(string blockHash) { DARABONBA_PTR_SET_VALUE(blockHash_, blockHash) };


    // blockNumber Field Functions 
    bool hasBlockNumber() const { return this->blockNumber_ != nullptr;};
    void deleteBlockNumber() { this->blockNumber_ = nullptr;};
    inline string blockNumber() const { DARABONBA_PTR_GET_DEFAULT(blockNumber_, "") };
    inline QueryBlockchainMetadataResponseBodyData& setBlockNumber(string blockNumber) { DARABONBA_PTR_SET_VALUE(blockNumber_, blockNumber) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string iotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryBlockchainMetadataResponseBodyData& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline QueryBlockchainMetadataResponseBodyData& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string productKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryBlockchainMetadataResponseBodyData& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline QueryBlockchainMetadataResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // txHash Field Functions 
    bool hasTxHash() const { return this->txHash_ != nullptr;};
    void deleteTxHash() { this->txHash_ = nullptr;};
    inline string txHash() const { DARABONBA_PTR_GET_DEFAULT(txHash_, "") };
    inline QueryBlockchainMetadataResponseBodyData& setTxHash(string txHash) { DARABONBA_PTR_SET_VALUE(txHash_, txHash) };


  protected:
    std::shared_ptr<string> blockHash_ = nullptr;
    std::shared_ptr<string> blockNumber_ = nullptr;
    std::shared_ptr<string> iotId_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> productKey_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> txHash_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
