// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPANDDATAVOLUMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPANDDATAVOLUMEREQUEST_HPP_
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
  class ExpandDataVolumeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExpandDataVolumeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(ShareDataVolume, shareDataVolume_);
    };
    friend void from_json(const Darabonba::Json& j, ExpandDataVolumeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(ShareDataVolume, shareDataVolume_);
    };
    ExpandDataVolumeRequest() = default ;
    ExpandDataVolumeRequest(const ExpandDataVolumeRequest &) = default ;
    ExpandDataVolumeRequest(ExpandDataVolumeRequest &&) = default ;
    ExpandDataVolumeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExpandDataVolumeRequest() = default ;
    ExpandDataVolumeRequest& operator=(const ExpandDataVolumeRequest &) = default ;
    ExpandDataVolumeRequest& operator=(ExpandDataVolumeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->bizRegionId_ == nullptr && return this->nodeIds_ == nullptr && return this->phoneDataVolume_ == nullptr && return this->promotionId_ == nullptr && return this->shareDataVolume_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ExpandDataVolumeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ExpandDataVolumeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline ExpandDataVolumeRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline ExpandDataVolumeRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // phoneDataVolume Field Functions 
    bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
    void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
    inline int32_t phoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
    inline ExpandDataVolumeRequest& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ExpandDataVolumeRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // shareDataVolume Field Functions 
    bool hasShareDataVolume() const { return this->shareDataVolume_ != nullptr;};
    void deleteShareDataVolume() { this->shareDataVolume_ = nullptr;};
    inline int32_t shareDataVolume() const { DARABONBA_PTR_GET_DEFAULT(shareDataVolume_, 0) };
    inline ExpandDataVolumeRequest& setShareDataVolume(int32_t shareDataVolume) { DARABONBA_PTR_SET_VALUE(shareDataVolume_, shareDataVolume) };


  protected:
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<string> bizRegionId_ = nullptr;
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    std::shared_ptr<int32_t> phoneDataVolume_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
    std::shared_ptr<int32_t> shareDataVolume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
