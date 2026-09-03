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
      DARABONBA_PTR_TO_JSON(LastRetryTime, lastRetryTime_);
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
      DARABONBA_PTR_FROM_JSON(LastRetryTime, lastRetryTime_);
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
    virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->desktopGroupIds_ == nullptr && this->desktopId_ == nullptr && this->imageId_ == nullptr && this->lastRetryTime_ == nullptr && this->payType_ == nullptr
        && this->regionId_ == nullptr && this->resetScope_ == nullptr && this->resetType_ == nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline ResetDesktopsRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupIds Field Functions 
    bool hasDesktopGroupIds() const { return this->desktopGroupIds_ != nullptr;};
    void deleteDesktopGroupIds() { this->desktopGroupIds_ = nullptr;};
    inline const vector<string> & getDesktopGroupIds() const { DARABONBA_PTR_GET_CONST(desktopGroupIds_, vector<string>) };
    inline vector<string> getDesktopGroupIds() { DARABONBA_PTR_GET(desktopGroupIds_, vector<string>) };
    inline ResetDesktopsRequest& setDesktopGroupIds(const vector<string> & desktopGroupIds) { DARABONBA_PTR_SET_VALUE(desktopGroupIds_, desktopGroupIds) };
    inline ResetDesktopsRequest& setDesktopGroupIds(vector<string> && desktopGroupIds) { DARABONBA_PTR_SET_RVALUE(desktopGroupIds_, desktopGroupIds) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline ResetDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline ResetDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ResetDesktopsRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // lastRetryTime Field Functions 
    bool hasLastRetryTime() const { return this->lastRetryTime_ != nullptr;};
    void deleteLastRetryTime() { this->lastRetryTime_ = nullptr;};
    inline int64_t getLastRetryTime() const { DARABONBA_PTR_GET_DEFAULT(lastRetryTime_, 0L) };
    inline ResetDesktopsRequest& setLastRetryTime(int64_t lastRetryTime) { DARABONBA_PTR_SET_VALUE(lastRetryTime_, lastRetryTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ResetDesktopsRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetScope Field Functions 
    bool hasResetScope() const { return this->resetScope_ != nullptr;};
    void deleteResetScope() { this->resetScope_ = nullptr;};
    inline string getResetScope() const { DARABONBA_PTR_GET_DEFAULT(resetScope_, "") };
    inline ResetDesktopsRequest& setResetScope(string resetScope) { DARABONBA_PTR_SET_VALUE(resetScope_, resetScope) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline ResetDesktopsRequest& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


  protected:
    // The shared cloud computer ID.
    // 
    // - If DesktopId is specified, DesktopGroupId is ignored.
    // - If DesktopId is empty, the system retrieves the DesktopId of all cloud computers within the shared cloud computer based on DesktopGroupId.
    shared_ptr<string> desktopGroupId_ {};
    // The shared cloud computer IDs.
    shared_ptr<vector<string>> desktopGroupIds_ {};
    // The cloud computer IDs. You can specify 1 to 100 IDs.
    shared_ptr<vector<string>> desktopId_ {};
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The timestamp of the last retry. Unit: milliseconds.
    shared_ptr<int64_t> lastRetryTime_ {};
    // The billing method.
    // > This parameter takes effect only for resetting shared cloud computers. If this parameter is left empty, all cloud computers of all billing methods within the shared cloud computer are reset.
    shared_ptr<string> payType_ {};
    // The region ID. Call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The reset scope. You can configure this parameter to specify whether to reset the image or the cloud computer.
    shared_ptr<string> resetScope_ {};
    // The reset type, which determines whether to reset and the scope of cloud disks to reset.
    // 
    // This parameter is required.
    shared_ptr<string> resetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
