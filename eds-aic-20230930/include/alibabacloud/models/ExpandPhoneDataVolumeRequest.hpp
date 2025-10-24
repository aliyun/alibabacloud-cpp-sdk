// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPANDPHONEDATAVOLUMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPANDPHONEDATAVOLUMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ExpandPhoneDataVolumeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExpandPhoneDataVolumeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, ExpandPhoneDataVolumeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    ExpandPhoneDataVolumeRequest() = default ;
    ExpandPhoneDataVolumeRequest(const ExpandPhoneDataVolumeRequest &) = default ;
    ExpandPhoneDataVolumeRequest(ExpandPhoneDataVolumeRequest &&) = default ;
    ExpandPhoneDataVolumeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExpandPhoneDataVolumeRequest() = default ;
    ExpandPhoneDataVolumeRequest& operator=(const ExpandPhoneDataVolumeRequest &) = default ;
    ExpandPhoneDataVolumeRequest& operator=(ExpandPhoneDataVolumeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->bizRegionId_ == nullptr && return this->instanceIds_ == nullptr && return this->phoneDataVolume_ == nullptr && return this->promotionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ExpandPhoneDataVolumeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ExpandPhoneDataVolumeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ExpandPhoneDataVolumeRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ExpandPhoneDataVolumeRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // phoneDataVolume Field Functions 
    bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
    void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
    inline int32_t phoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
    inline ExpandPhoneDataVolumeRequest& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ExpandPhoneDataVolumeRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<string> bizRegionId_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<int32_t> phoneDataVolume_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
