// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNFULLDOMAINSBLOCKIPHISTORYRESPONSEBODYIPBLOCKINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNFULLDOMAINSBLOCKIPHISTORYRESPONSEBODYIPBLOCKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIP, blockIP_);
      DARABONBA_PTR_TO_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIP, blockIP_);
      DARABONBA_PTR_FROM_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo() = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo(const DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo &) = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo(DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo &&) = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo() = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& operator=(const DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo &) = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& operator=(DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockIP_ == nullptr
        && return this->deliverTime_ == nullptr && return this->status_ == nullptr; };
    // blockIP Field Functions 
    bool hasBlockIP() const { return this->blockIP_ != nullptr;};
    void deleteBlockIP() { this->blockIP_ = nullptr;};
    inline string blockIP() const { DARABONBA_PTR_GET_DEFAULT(blockIP_, "") };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setBlockIP(string blockIP) { DARABONBA_PTR_SET_VALUE(blockIP_, blockIP) };


    // deliverTime Field Functions 
    bool hasDeliverTime() const { return this->deliverTime_ != nullptr;};
    void deleteDeliverTime() { this->deliverTime_ = nullptr;};
    inline string deliverTime() const { DARABONBA_PTR_GET_DEFAULT(deliverTime_, "") };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setDeliverTime(string deliverTime) { DARABONBA_PTR_SET_VALUE(deliverTime_, deliverTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The blocked IP address or CIDR block.
    std::shared_ptr<string> blockIP_ = nullptr;
    // The delivery time.
    std::shared_ptr<string> deliverTime_ = nullptr;
    // The delivery status.
    // 
    // *   Success
    // *   Failed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
