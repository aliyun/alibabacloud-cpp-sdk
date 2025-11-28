// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZCHAINDATARESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZCHAINDATARESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBizChainDataResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizChainDataResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(BlockHash, blockHash_);
      DARABONBA_PTR_TO_JSON(BlockNum, blockNum_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotDataDID, iotDataDID_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TxHash, txHash_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizChainDataResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockHash, blockHash_);
      DARABONBA_PTR_FROM_JSON(BlockNum, blockNum_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotDataDID, iotDataDID_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TxHash, txHash_);
    };
    ListBizChainDataResponseBodyDataPageData() = default ;
    ListBizChainDataResponseBodyDataPageData(const ListBizChainDataResponseBodyDataPageData &) = default ;
    ListBizChainDataResponseBodyDataPageData(ListBizChainDataResponseBodyDataPageData &&) = default ;
    ListBizChainDataResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizChainDataResponseBodyDataPageData() = default ;
    ListBizChainDataResponseBodyDataPageData& operator=(const ListBizChainDataResponseBodyDataPageData &) = default ;
    ListBizChainDataResponseBodyDataPageData& operator=(ListBizChainDataResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockHash_ == nullptr
        && return this->blockNum_ == nullptr && return this->deviceName_ == nullptr && return this->iotDataDID_ == nullptr && return this->memberName_ == nullptr && return this->productKey_ == nullptr
        && return this->timestamp_ == nullptr && return this->txHash_ == nullptr; };
    // blockHash Field Functions 
    bool hasBlockHash() const { return this->blockHash_ != nullptr;};
    void deleteBlockHash() { this->blockHash_ = nullptr;};
    inline string blockHash() const { DARABONBA_PTR_GET_DEFAULT(blockHash_, "") };
    inline ListBizChainDataResponseBodyDataPageData& setBlockHash(string blockHash) { DARABONBA_PTR_SET_VALUE(blockHash_, blockHash) };


    // blockNum Field Functions 
    bool hasBlockNum() const { return this->blockNum_ != nullptr;};
    void deleteBlockNum() { this->blockNum_ = nullptr;};
    inline string blockNum() const { DARABONBA_PTR_GET_DEFAULT(blockNum_, "") };
    inline ListBizChainDataResponseBodyDataPageData& setBlockNum(string blockNum) { DARABONBA_PTR_SET_VALUE(blockNum_, blockNum) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline ListBizChainDataResponseBodyDataPageData& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotDataDID Field Functions 
    bool hasIotDataDID() const { return this->iotDataDID_ != nullptr;};
    void deleteIotDataDID() { this->iotDataDID_ = nullptr;};
    inline string iotDataDID() const { DARABONBA_PTR_GET_DEFAULT(iotDataDID_, "") };
    inline ListBizChainDataResponseBodyDataPageData& setIotDataDID(string iotDataDID) { DARABONBA_PTR_SET_VALUE(iotDataDID_, iotDataDID) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline ListBizChainDataResponseBodyDataPageData& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string productKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline ListBizChainDataResponseBodyDataPageData& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListBizChainDataResponseBodyDataPageData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // txHash Field Functions 
    bool hasTxHash() const { return this->txHash_ != nullptr;};
    void deleteTxHash() { this->txHash_ = nullptr;};
    inline string txHash() const { DARABONBA_PTR_GET_DEFAULT(txHash_, "") };
    inline ListBizChainDataResponseBodyDataPageData& setTxHash(string txHash) { DARABONBA_PTR_SET_VALUE(txHash_, txHash) };


  protected:
    std::shared_ptr<string> blockHash_ = nullptr;
    std::shared_ptr<string> blockNum_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
    std::shared_ptr<string> iotDataDID_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> productKey_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> txHash_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
