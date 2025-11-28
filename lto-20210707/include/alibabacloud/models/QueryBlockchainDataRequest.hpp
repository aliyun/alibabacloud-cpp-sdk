// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBLOCKCHAINDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBLOCKCHAINDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class QueryBlockchainDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBlockchainDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(ContractName, contractName_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(IotDataDID, iotDataDID_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBlockchainDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(ContractName, contractName_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(IotDataDID, iotDataDID_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    QueryBlockchainDataRequest() = default ;
    QueryBlockchainDataRequest(const QueryBlockchainDataRequest &) = default ;
    QueryBlockchainDataRequest(QueryBlockchainDataRequest &&) = default ;
    QueryBlockchainDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBlockchainDataRequest() = default ;
    QueryBlockchainDataRequest& operator=(const QueryBlockchainDataRequest &) = default ;
    QueryBlockchainDataRequest& operator=(QueryBlockchainDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainId_ == nullptr
        && return this->contractName_ == nullptr && return this->invokeType_ == nullptr && return this->iotDataDID_ == nullptr && return this->regionId_ == nullptr && return this->transactionId_ == nullptr; };
    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline QueryBlockchainDataRequest& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // contractName Field Functions 
    bool hasContractName() const { return this->contractName_ != nullptr;};
    void deleteContractName() { this->contractName_ = nullptr;};
    inline string contractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
    inline QueryBlockchainDataRequest& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline QueryBlockchainDataRequest& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // iotDataDID Field Functions 
    bool hasIotDataDID() const { return this->iotDataDID_ != nullptr;};
    void deleteIotDataDID() { this->iotDataDID_ = nullptr;};
    inline string iotDataDID() const { DARABONBA_PTR_GET_DEFAULT(iotDataDID_, "") };
    inline QueryBlockchainDataRequest& setIotDataDID(string iotDataDID) { DARABONBA_PTR_SET_VALUE(iotDataDID_, iotDataDID) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryBlockchainDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline QueryBlockchainDataRequest& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizChainId_ = nullptr;
    std::shared_ptr<string> contractName_ = nullptr;
    std::shared_ptr<string> invokeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> iotDataDID_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
