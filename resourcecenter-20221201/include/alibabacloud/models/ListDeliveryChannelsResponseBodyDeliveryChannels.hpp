// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELIVERYCHANNELSRESPONSEBODYDELIVERYCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_LISTDELIVERYCHANNELSRESPONSEBODYDELIVERYCHANNELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListDeliveryChannelsResponseBodyDeliveryChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeliveryChannelsResponseBodyDeliveryChannels& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeliveryChannelsResponseBodyDeliveryChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
    };
    ListDeliveryChannelsResponseBodyDeliveryChannels() = default ;
    ListDeliveryChannelsResponseBodyDeliveryChannels(const ListDeliveryChannelsResponseBodyDeliveryChannels &) = default ;
    ListDeliveryChannelsResponseBodyDeliveryChannels(ListDeliveryChannelsResponseBodyDeliveryChannels &&) = default ;
    ListDeliveryChannelsResponseBodyDeliveryChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeliveryChannelsResponseBodyDeliveryChannels() = default ;
    ListDeliveryChannelsResponseBodyDeliveryChannels& operator=(const ListDeliveryChannelsResponseBodyDeliveryChannels &) = default ;
    ListDeliveryChannelsResponseBodyDeliveryChannels& operator=(ListDeliveryChannelsResponseBodyDeliveryChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->deliveryChannelDescription_ == nullptr && return this->deliveryChannelId_ == nullptr && return this->deliveryChannelName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDeliveryChannelsResponseBodyDeliveryChannels& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deliveryChannelDescription Field Functions 
    bool hasDeliveryChannelDescription() const { return this->deliveryChannelDescription_ != nullptr;};
    void deleteDeliveryChannelDescription() { this->deliveryChannelDescription_ = nullptr;};
    inline string deliveryChannelDescription() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelDescription_, "") };
    inline ListDeliveryChannelsResponseBodyDeliveryChannels& setDeliveryChannelDescription(string deliveryChannelDescription) { DARABONBA_PTR_SET_VALUE(deliveryChannelDescription_, deliveryChannelDescription) };


    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string deliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline ListDeliveryChannelsResponseBodyDeliveryChannels& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string deliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline ListDeliveryChannelsResponseBodyDeliveryChannels& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


  protected:
    // The time when the delivery channel was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the delivery channel.
    std::shared_ptr<string> deliveryChannelDescription_ = nullptr;
    // The ID of the delivery channel.
    std::shared_ptr<string> deliveryChannelId_ = nullptr;
    // The name of the delivery channel.
    std::shared_ptr<string> deliveryChannelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
