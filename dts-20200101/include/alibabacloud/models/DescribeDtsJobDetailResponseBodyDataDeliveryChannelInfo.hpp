// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYDATADELIVERYCHANNELINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYDATADELIVERYCHANNELINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(PublicDproxyUrl, publicDproxyUrl_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(VpcDproxyUrl, vpcDproxyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(PublicDproxyUrl, publicDproxyUrl_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(VpcDproxyUrl, vpcDproxyUrl_);
    };
    DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo() = default ;
    DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo(const DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo &) = default ;
    DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo(DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo &&) = default ;
    DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo() = default ;
    DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& operator=(const DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo &) = default ;
    DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& operator=(DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->partitionNum_ == nullptr
        && return this->publicDproxyUrl_ == nullptr && return this->region_ == nullptr && return this->topic_ == nullptr && return this->vpcDproxyUrl_ == nullptr; };
    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // publicDproxyUrl Field Functions 
    bool hasPublicDproxyUrl() const { return this->publicDproxyUrl_ != nullptr;};
    void deletePublicDproxyUrl() { this->publicDproxyUrl_ = nullptr;};
    inline string publicDproxyUrl() const { DARABONBA_PTR_GET_DEFAULT(publicDproxyUrl_, "") };
    inline DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& setPublicDproxyUrl(string publicDproxyUrl) { DARABONBA_PTR_SET_VALUE(publicDproxyUrl_, publicDproxyUrl) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // vpcDproxyUrl Field Functions 
    bool hasVpcDproxyUrl() const { return this->vpcDproxyUrl_ != nullptr;};
    void deleteVpcDproxyUrl() { this->vpcDproxyUrl_ = nullptr;};
    inline string vpcDproxyUrl() const { DARABONBA_PTR_GET_DEFAULT(vpcDproxyUrl_, "") };
    inline DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo& setVpcDproxyUrl(string vpcDproxyUrl) { DARABONBA_PTR_SET_VALUE(vpcDproxyUrl_, vpcDproxyUrl) };


  protected:
    // The number of partitions of the destination topic.
    std::shared_ptr<int32_t> partitionNum_ = nullptr;
    // The public endpoint of the data shipping channel.
    std::shared_ptr<string> publicDproxyUrl_ = nullptr;
    // The region in which the data shipping channel resides.
    std::shared_ptr<string> region_ = nullptr;
    // The destination topic of the data shipping instance.
    std::shared_ptr<string> topic_ = nullptr;
    // The VPC endpoint of the data shipping channel.
    std::shared_ptr<string> vpcDproxyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
