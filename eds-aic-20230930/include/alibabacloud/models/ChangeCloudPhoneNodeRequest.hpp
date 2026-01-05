// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ChangeCloudPhoneNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCloudPhoneNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfig_);
      DARABONBA_PTR_TO_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(ShareDataVolume, shareDataVolume_);
      DARABONBA_PTR_TO_JSON(SwapSize, swapSize_);
      DARABONBA_PTR_TO_JSON(UpBandwidthLimit, upBandwidthLimit_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCloudPhoneNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfig_);
      DARABONBA_PTR_FROM_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(ShareDataVolume, shareDataVolume_);
      DARABONBA_PTR_FROM_JSON(SwapSize, swapSize_);
      DARABONBA_PTR_FROM_JSON(UpBandwidthLimit, upBandwidthLimit_);
    };
    ChangeCloudPhoneNodeRequest() = default ;
    ChangeCloudPhoneNodeRequest(const ChangeCloudPhoneNodeRequest &) = default ;
    ChangeCloudPhoneNodeRequest(ChangeCloudPhoneNodeRequest &&) = default ;
    ChangeCloudPhoneNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCloudPhoneNodeRequest() = default ;
    ChangeCloudPhoneNodeRequest& operator=(const ChangeCloudPhoneNodeRequest &) = default ;
    ChangeCloudPhoneNodeRequest& operator=(ChangeCloudPhoneNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->displayConfig_ == nullptr && this->downBandwidthLimit_ == nullptr && this->instanceType_ == nullptr && this->nodeId_ == nullptr && this->phoneCount_ == nullptr
        && this->phoneDataVolume_ == nullptr && this->promotionId_ == nullptr && this->shareDataVolume_ == nullptr && this->swapSize_ == nullptr && this->upBandwidthLimit_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ChangeCloudPhoneNodeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // displayConfig Field Functions 
    bool hasDisplayConfig() const { return this->displayConfig_ != nullptr;};
    void deleteDisplayConfig() { this->displayConfig_ = nullptr;};
    inline string getDisplayConfig() const { DARABONBA_PTR_GET_DEFAULT(displayConfig_, "") };
    inline ChangeCloudPhoneNodeRequest& setDisplayConfig(string displayConfig) { DARABONBA_PTR_SET_VALUE(displayConfig_, displayConfig) };


    // downBandwidthLimit Field Functions 
    bool hasDownBandwidthLimit() const { return this->downBandwidthLimit_ != nullptr;};
    void deleteDownBandwidthLimit() { this->downBandwidthLimit_ = nullptr;};
    inline int32_t getDownBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(downBandwidthLimit_, 0) };
    inline ChangeCloudPhoneNodeRequest& setDownBandwidthLimit(int32_t downBandwidthLimit) { DARABONBA_PTR_SET_VALUE(downBandwidthLimit_, downBandwidthLimit) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ChangeCloudPhoneNodeRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ChangeCloudPhoneNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // phoneCount Field Functions 
    bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
    void deletePhoneCount() { this->phoneCount_ = nullptr;};
    inline int32_t getPhoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, 0) };
    inline ChangeCloudPhoneNodeRequest& setPhoneCount(int32_t phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


    // phoneDataVolume Field Functions 
    bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
    void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
    inline int32_t getPhoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
    inline ChangeCloudPhoneNodeRequest& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ChangeCloudPhoneNodeRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // shareDataVolume Field Functions 
    bool hasShareDataVolume() const { return this->shareDataVolume_ != nullptr;};
    void deleteShareDataVolume() { this->shareDataVolume_ = nullptr;};
    inline int32_t getShareDataVolume() const { DARABONBA_PTR_GET_DEFAULT(shareDataVolume_, 0) };
    inline ChangeCloudPhoneNodeRequest& setShareDataVolume(int32_t shareDataVolume) { DARABONBA_PTR_SET_VALUE(shareDataVolume_, shareDataVolume) };


    // swapSize Field Functions 
    bool hasSwapSize() const { return this->swapSize_ != nullptr;};
    void deleteSwapSize() { this->swapSize_ = nullptr;};
    inline int32_t getSwapSize() const { DARABONBA_PTR_GET_DEFAULT(swapSize_, 0) };
    inline ChangeCloudPhoneNodeRequest& setSwapSize(int32_t swapSize) { DARABONBA_PTR_SET_VALUE(swapSize_, swapSize) };


    // upBandwidthLimit Field Functions 
    bool hasUpBandwidthLimit() const { return this->upBandwidthLimit_ != nullptr;};
    void deleteUpBandwidthLimit() { this->upBandwidthLimit_ = nullptr;};
    inline int32_t getUpBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(upBandwidthLimit_, 0) };
    inline ChangeCloudPhoneNodeRequest& setUpBandwidthLimit(int32_t upBandwidthLimit) { DARABONBA_PTR_SET_VALUE(upBandwidthLimit_, upBandwidthLimit) };


  protected:
    shared_ptr<bool> autoPay_ {};
    shared_ptr<string> displayConfig_ {};
    shared_ptr<int32_t> downBandwidthLimit_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> nodeId_ {};
    shared_ptr<int32_t> phoneCount_ {};
    shared_ptr<int32_t> phoneDataVolume_ {};
    shared_ptr<string> promotionId_ {};
    shared_ptr<int32_t> shareDataVolume_ {};
    shared_ptr<int32_t> swapSize_ {};
    shared_ptr<int32_t> upBandwidthLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
