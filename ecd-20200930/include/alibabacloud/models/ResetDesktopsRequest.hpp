// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ResetDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetScope, resetScope_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetScope, resetScope_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
    };
    ResetDesktopsRequest() = default ;
    ResetDesktopsRequest(const ResetDesktopsRequest &) = default ;
    ResetDesktopsRequest(ResetDesktopsRequest &&) = default ;
    ResetDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDesktopsRequest() = default ;
    ResetDesktopsRequest& operator=(const ResetDesktopsRequest &) = default ;
    ResetDesktopsRequest& operator=(ResetDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopGroupId_ != nullptr
        && this->desktopGroupIds_ != nullptr && this->desktopId_ != nullptr && this->imageId_ != nullptr && this->payType_ != nullptr && this->regionId_ != nullptr
        && this->resetScope_ != nullptr && this->resetType_ != nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline ResetDesktopsRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupIds Field Functions 
    bool hasDesktopGroupIds() const { return this->desktopGroupIds_ != nullptr;};
    void deleteDesktopGroupIds() { this->desktopGroupIds_ = nullptr;};
    inline const vector<string> & desktopGroupIds() const { DARABONBA_PTR_GET_CONST(desktopGroupIds_, vector<string>) };
    inline vector<string> desktopGroupIds() { DARABONBA_PTR_GET(desktopGroupIds_, vector<string>) };
    inline ResetDesktopsRequest& setDesktopGroupIds(const vector<string> & desktopGroupIds) { DARABONBA_PTR_SET_VALUE(desktopGroupIds_, desktopGroupIds) };
    inline ResetDesktopsRequest& setDesktopGroupIds(vector<string> && desktopGroupIds) { DARABONBA_PTR_SET_RVALUE(desktopGroupIds_, desktopGroupIds) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline ResetDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline ResetDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ResetDesktopsRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ResetDesktopsRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetScope Field Functions 
    bool hasResetScope() const { return this->resetScope_ != nullptr;};
    void deleteResetScope() { this->resetScope_ = nullptr;};
    inline string resetScope() const { DARABONBA_PTR_GET_DEFAULT(resetScope_, "") };
    inline ResetDesktopsRequest& setResetScope(string resetScope) { DARABONBA_PTR_SET_VALUE(resetScope_, resetScope) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline ResetDesktopsRequest& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


  protected:
    // The ID of the cloud computer share.
    // 
    // *   If you specify `DesktopId`, ignore `DesktopGroupId`.
    // *   If you leave `DesktopId` empty, the system obtains the IDs of all cloud computers within the share specified by `DesktopGroupId`.``
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The IDs of the cloud computer shares.
    std::shared_ptr<vector<string>> desktopGroupIds_ = nullptr;
    // The IDs of the cloud computers. You can specify the IDs of 1 to 100 cloud computers.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The billing method of the cloud computer share.
    // 
    // >  This parameter takes effect when you reset a cloud computer share. If you leave this parameter empty, all cloud computers in that share are reset.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    std::shared_ptr<string> payType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/436773.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The reset scope. You can configure this parameter to reset the image or cloud computer.
    // 
    // Valid values:
    // 
    // *   ALL (default): resets the image and cloud computer.
    // *   IMAGE: resets only the image.
    std::shared_ptr<string> resetScope_ = nullptr;
    // The disk reset type.
    // 
    // Valid values:
    // 
    // *   0: does not reset disks.
    // *   1: resets only the system disk.
    // *   2: resets only the user disk.
    // *   3: resets the system disk and the user disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> resetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
