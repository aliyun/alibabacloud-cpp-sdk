// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWREBINDPHONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLOWREBINDPHONEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class FlowRebindPhoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRebindPhoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelCode, channelCode_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(FlowCode, flowCode_);
      DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(WabaId, wabaId_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRebindPhoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelCode, channelCode_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(FlowCode, flowCode_);
      DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(WabaId, wabaId_);
    };
    FlowRebindPhoneRequest() = default ;
    FlowRebindPhoneRequest(const FlowRebindPhoneRequest &) = default ;
    FlowRebindPhoneRequest(FlowRebindPhoneRequest &&) = default ;
    FlowRebindPhoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRebindPhoneRequest() = default ;
    FlowRebindPhoneRequest& operator=(const FlowRebindPhoneRequest &) = default ;
    FlowRebindPhoneRequest& operator=(FlowRebindPhoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelCode_ == nullptr
        && this->channelType_ == nullptr && this->flowCode_ == nullptr && this->flowVersion_ == nullptr && this->ownerId_ == nullptr && this->phoneNumbers_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->wabaId_ == nullptr; };
    // channelCode Field Functions 
    bool hasChannelCode() const { return this->channelCode_ != nullptr;};
    void deleteChannelCode() { this->channelCode_ = nullptr;};
    inline string getChannelCode() const { DARABONBA_PTR_GET_DEFAULT(channelCode_, "") };
    inline FlowRebindPhoneRequest& setChannelCode(string channelCode) { DARABONBA_PTR_SET_VALUE(channelCode_, channelCode) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline FlowRebindPhoneRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // flowCode Field Functions 
    bool hasFlowCode() const { return this->flowCode_ != nullptr;};
    void deleteFlowCode() { this->flowCode_ = nullptr;};
    inline string getFlowCode() const { DARABONBA_PTR_GET_DEFAULT(flowCode_, "") };
    inline FlowRebindPhoneRequest& setFlowCode(string flowCode) { DARABONBA_PTR_SET_VALUE(flowCode_, flowCode) };


    // flowVersion Field Functions 
    bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
    void deleteFlowVersion() { this->flowVersion_ = nullptr;};
    inline string getFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, "") };
    inline FlowRebindPhoneRequest& setFlowVersion(string flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline FlowRebindPhoneRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline const vector<string> & getPhoneNumbers() const { DARABONBA_PTR_GET_CONST(phoneNumbers_, vector<string>) };
    inline vector<string> getPhoneNumbers() { DARABONBA_PTR_GET(phoneNumbers_, vector<string>) };
    inline FlowRebindPhoneRequest& setPhoneNumbers(const vector<string> & phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };
    inline FlowRebindPhoneRequest& setPhoneNumbers(vector<string> && phoneNumbers) { DARABONBA_PTR_SET_RVALUE(phoneNumbers_, phoneNumbers) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline FlowRebindPhoneRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline FlowRebindPhoneRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // wabaId Field Functions 
    bool hasWabaId() const { return this->wabaId_ != nullptr;};
    void deleteWabaId() { this->wabaId_ = nullptr;};
    inline string getWabaId() const { DARABONBA_PTR_GET_DEFAULT(wabaId_, "") };
    inline FlowRebindPhoneRequest& setWabaId(string wabaId) { DARABONBA_PTR_SET_VALUE(wabaId_, wabaId) };


  protected:
    // Message channel code
    // 
    // This parameter is required.
    shared_ptr<string> channelCode_ {};
    // Message channel type
    // 
    // This parameter is required.
    shared_ptr<string> channelType_ {};
    // Flow code.
    // 
    // This parameter is required.
    shared_ptr<string> flowCode_ {};
    // Flow version
    shared_ptr<string> flowVersion_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Phone numbers or PageIds under the channel instance, etc.
    shared_ptr<vector<string>> phoneNumbers_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // WABA account ID, or PageId for other channel types, etc.
    // 
    // This parameter is required.
    shared_ptr<string> wabaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
