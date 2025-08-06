// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTATIPRESPONSEBODYQUOTADATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTATIPRESPONSEBODYQUOTADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetQuotaTipResponseBodyQuotaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaTipResponseBodyQuotaData& obj) { 
      DARABONBA_PTR_TO_JSON(GroupLeft, groupLeft_);
      DARABONBA_PTR_TO_JSON(GroupUsed, groupUsed_);
      DARABONBA_PTR_TO_JSON(IsPartitionBuy, isPartitionBuy_);
      DARABONBA_PTR_TO_JSON(PartitionLeft, partitionLeft_);
      DARABONBA_PTR_TO_JSON(PartitionNumOfBuy, partitionNumOfBuy_);
      DARABONBA_PTR_TO_JSON(PartitionQuota, partitionQuota_);
      DARABONBA_PTR_TO_JSON(PartitionUsed, partitionUsed_);
      DARABONBA_PTR_TO_JSON(TopicLeft, topicLeft_);
      DARABONBA_PTR_TO_JSON(TopicNumOfBuy, topicNumOfBuy_);
      DARABONBA_PTR_TO_JSON(TopicQuota, topicQuota_);
      DARABONBA_PTR_TO_JSON(TopicUsed, topicUsed_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaTipResponseBodyQuotaData& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupLeft, groupLeft_);
      DARABONBA_PTR_FROM_JSON(GroupUsed, groupUsed_);
      DARABONBA_PTR_FROM_JSON(IsPartitionBuy, isPartitionBuy_);
      DARABONBA_PTR_FROM_JSON(PartitionLeft, partitionLeft_);
      DARABONBA_PTR_FROM_JSON(PartitionNumOfBuy, partitionNumOfBuy_);
      DARABONBA_PTR_FROM_JSON(PartitionQuota, partitionQuota_);
      DARABONBA_PTR_FROM_JSON(PartitionUsed, partitionUsed_);
      DARABONBA_PTR_FROM_JSON(TopicLeft, topicLeft_);
      DARABONBA_PTR_FROM_JSON(TopicNumOfBuy, topicNumOfBuy_);
      DARABONBA_PTR_FROM_JSON(TopicQuota, topicQuota_);
      DARABONBA_PTR_FROM_JSON(TopicUsed, topicUsed_);
    };
    GetQuotaTipResponseBodyQuotaData() = default ;
    GetQuotaTipResponseBodyQuotaData(const GetQuotaTipResponseBodyQuotaData &) = default ;
    GetQuotaTipResponseBodyQuotaData(GetQuotaTipResponseBodyQuotaData &&) = default ;
    GetQuotaTipResponseBodyQuotaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaTipResponseBodyQuotaData() = default ;
    GetQuotaTipResponseBodyQuotaData& operator=(const GetQuotaTipResponseBodyQuotaData &) = default ;
    GetQuotaTipResponseBodyQuotaData& operator=(GetQuotaTipResponseBodyQuotaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupLeft_ != nullptr
        && this->groupUsed_ != nullptr && this->isPartitionBuy_ != nullptr && this->partitionLeft_ != nullptr && this->partitionNumOfBuy_ != nullptr && this->partitionQuota_ != nullptr
        && this->partitionUsed_ != nullptr && this->topicLeft_ != nullptr && this->topicNumOfBuy_ != nullptr && this->topicQuota_ != nullptr && this->topicUsed_ != nullptr; };
    // groupLeft Field Functions 
    bool hasGroupLeft() const { return this->groupLeft_ != nullptr;};
    void deleteGroupLeft() { this->groupLeft_ = nullptr;};
    inline int32_t groupLeft() const { DARABONBA_PTR_GET_DEFAULT(groupLeft_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setGroupLeft(int32_t groupLeft) { DARABONBA_PTR_SET_VALUE(groupLeft_, groupLeft) };


    // groupUsed Field Functions 
    bool hasGroupUsed() const { return this->groupUsed_ != nullptr;};
    void deleteGroupUsed() { this->groupUsed_ = nullptr;};
    inline int32_t groupUsed() const { DARABONBA_PTR_GET_DEFAULT(groupUsed_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setGroupUsed(int32_t groupUsed) { DARABONBA_PTR_SET_VALUE(groupUsed_, groupUsed) };


    // isPartitionBuy Field Functions 
    bool hasIsPartitionBuy() const { return this->isPartitionBuy_ != nullptr;};
    void deleteIsPartitionBuy() { this->isPartitionBuy_ = nullptr;};
    inline int32_t isPartitionBuy() const { DARABONBA_PTR_GET_DEFAULT(isPartitionBuy_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setIsPartitionBuy(int32_t isPartitionBuy) { DARABONBA_PTR_SET_VALUE(isPartitionBuy_, isPartitionBuy) };


    // partitionLeft Field Functions 
    bool hasPartitionLeft() const { return this->partitionLeft_ != nullptr;};
    void deletePartitionLeft() { this->partitionLeft_ = nullptr;};
    inline int32_t partitionLeft() const { DARABONBA_PTR_GET_DEFAULT(partitionLeft_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setPartitionLeft(int32_t partitionLeft) { DARABONBA_PTR_SET_VALUE(partitionLeft_, partitionLeft) };


    // partitionNumOfBuy Field Functions 
    bool hasPartitionNumOfBuy() const { return this->partitionNumOfBuy_ != nullptr;};
    void deletePartitionNumOfBuy() { this->partitionNumOfBuy_ = nullptr;};
    inline int32_t partitionNumOfBuy() const { DARABONBA_PTR_GET_DEFAULT(partitionNumOfBuy_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setPartitionNumOfBuy(int32_t partitionNumOfBuy) { DARABONBA_PTR_SET_VALUE(partitionNumOfBuy_, partitionNumOfBuy) };


    // partitionQuota Field Functions 
    bool hasPartitionQuota() const { return this->partitionQuota_ != nullptr;};
    void deletePartitionQuota() { this->partitionQuota_ = nullptr;};
    inline int32_t partitionQuota() const { DARABONBA_PTR_GET_DEFAULT(partitionQuota_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setPartitionQuota(int32_t partitionQuota) { DARABONBA_PTR_SET_VALUE(partitionQuota_, partitionQuota) };


    // partitionUsed Field Functions 
    bool hasPartitionUsed() const { return this->partitionUsed_ != nullptr;};
    void deletePartitionUsed() { this->partitionUsed_ = nullptr;};
    inline int32_t partitionUsed() const { DARABONBA_PTR_GET_DEFAULT(partitionUsed_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setPartitionUsed(int32_t partitionUsed) { DARABONBA_PTR_SET_VALUE(partitionUsed_, partitionUsed) };


    // topicLeft Field Functions 
    bool hasTopicLeft() const { return this->topicLeft_ != nullptr;};
    void deleteTopicLeft() { this->topicLeft_ = nullptr;};
    inline int32_t topicLeft() const { DARABONBA_PTR_GET_DEFAULT(topicLeft_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setTopicLeft(int32_t topicLeft) { DARABONBA_PTR_SET_VALUE(topicLeft_, topicLeft) };


    // topicNumOfBuy Field Functions 
    bool hasTopicNumOfBuy() const { return this->topicNumOfBuy_ != nullptr;};
    void deleteTopicNumOfBuy() { this->topicNumOfBuy_ = nullptr;};
    inline int32_t topicNumOfBuy() const { DARABONBA_PTR_GET_DEFAULT(topicNumOfBuy_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setTopicNumOfBuy(int32_t topicNumOfBuy) { DARABONBA_PTR_SET_VALUE(topicNumOfBuy_, topicNumOfBuy) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t topicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


    // topicUsed Field Functions 
    bool hasTopicUsed() const { return this->topicUsed_ != nullptr;};
    void deleteTopicUsed() { this->topicUsed_ = nullptr;};
    inline int32_t topicUsed() const { DARABONBA_PTR_GET_DEFAULT(topicUsed_, 0) };
    inline GetQuotaTipResponseBodyQuotaData& setTopicUsed(int32_t topicUsed) { DARABONBA_PTR_SET_VALUE(topicUsed_, topicUsed) };


  protected:
    // The number of available groups.
    std::shared_ptr<int32_t> groupLeft_ = nullptr;
    // The number of used groups.
    std::shared_ptr<int32_t> groupUsed_ = nullptr;
    // The method that you use to purchase partitions. Valid values:
    // 
    // *   0: indicates that the instance is purchased based on topics.
    // *   1: indicates that the instance is purchased based on partitions.
    std::shared_ptr<int32_t> isPartitionBuy_ = nullptr;
    // The number of available partitions.
    std::shared_ptr<int32_t> partitionLeft_ = nullptr;
    // The number of purchased partitions.
    std::shared_ptr<int32_t> partitionNumOfBuy_ = nullptr;
    // The quota of partitions.
    std::shared_ptr<int32_t> partitionQuota_ = nullptr;
    // The number of used partitions.
    std::shared_ptr<int32_t> partitionUsed_ = nullptr;
    // The number of available topics.
    std::shared_ptr<int32_t> topicLeft_ = nullptr;
    // The number of purchased topics.
    std::shared_ptr<int32_t> topicNumOfBuy_ = nullptr;
    // The quota of topics.
    std::shared_ptr<int32_t> topicQuota_ = nullptr;
    // The number of used topics.
    std::shared_ptr<int32_t> topicUsed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
