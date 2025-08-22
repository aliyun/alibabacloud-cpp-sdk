// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNFULLDOMAINSBLOCKIPHISTORYRESPONSEBODYIPBLOCKINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNFULLDOMAINSBLOCKIPHISTORYRESPONSEBODYIPBLOCKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIP, blockIP_);
      DARABONBA_PTR_TO_JSON(BlockInterval, blockInterval_);
      DARABONBA_PTR_TO_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateType, updateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIP, blockIP_);
      DARABONBA_PTR_FROM_JSON(BlockInterval, blockInterval_);
      DARABONBA_PTR_FROM_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateType, updateType_);
    };
    DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo() = default ;
    DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo(const DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo &) = default ;
    DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo(DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo &&) = default ;
    DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo() = default ;
    DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& operator=(const DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo &) = default ;
    DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& operator=(DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockIP_ != nullptr
        && this->blockInterval_ != nullptr && this->deliverTime_ != nullptr && this->operationType_ != nullptr && this->status_ != nullptr && this->updateType_ != nullptr; };
    // blockIP Field Functions 
    bool hasBlockIP() const { return this->blockIP_ != nullptr;};
    void deleteBlockIP() { this->blockIP_ = nullptr;};
    inline string blockIP() const { DARABONBA_PTR_GET_DEFAULT(blockIP_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setBlockIP(string blockIP) { DARABONBA_PTR_SET_VALUE(blockIP_, blockIP) };


    // blockInterval Field Functions 
    bool hasBlockInterval() const { return this->blockInterval_ != nullptr;};
    void deleteBlockInterval() { this->blockInterval_ = nullptr;};
    inline string blockInterval() const { DARABONBA_PTR_GET_DEFAULT(blockInterval_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setBlockInterval(string blockInterval) { DARABONBA_PTR_SET_VALUE(blockInterval_, blockInterval) };


    // deliverTime Field Functions 
    bool hasDeliverTime() const { return this->deliverTime_ != nullptr;};
    void deleteDeliverTime() { this->deliverTime_ = nullptr;};
    inline string deliverTime() const { DARABONBA_PTR_GET_DEFAULT(deliverTime_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setDeliverTime(string deliverTime) { DARABONBA_PTR_SET_VALUE(deliverTime_, deliverTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateType Field Functions 
    bool hasUpdateType() const { return this->updateType_ != nullptr;};
    void deleteUpdateType() { this->updateType_ = nullptr;};
    inline string updateType() const { DARABONBA_PTR_GET_DEFAULT(updateType_, "") };
    inline DescribeDcdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setUpdateType(string updateType) { DARABONBA_PTR_SET_VALUE(updateType_, updateType) };


  protected:
    // The blocked IP address or CIDR block.
    std::shared_ptr<string> blockIP_ = nullptr;
    std::shared_ptr<string> blockInterval_ = nullptr;
    // The delivery time.
    std::shared_ptr<string> deliverTime_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    // The delivery status.
    // 
    // *   Success
    // *   Failed
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
