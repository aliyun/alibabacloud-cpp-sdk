// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBUILDDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBUILDDESKTOPSREQUEST_HPP_
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
  class RebuildDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebuildDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterStatus, afterStatus_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RebuildDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterStatus, afterStatus_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RebuildDesktopsRequest() = default ;
    RebuildDesktopsRequest(const RebuildDesktopsRequest &) = default ;
    RebuildDesktopsRequest(RebuildDesktopsRequest &&) = default ;
    RebuildDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebuildDesktopsRequest() = default ;
    RebuildDesktopsRequest& operator=(const RebuildDesktopsRequest &) = default ;
    RebuildDesktopsRequest& operator=(RebuildDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterStatus_ == nullptr
        && this->desktopId_ == nullptr && this->imageId_ == nullptr && this->language_ == nullptr && this->operateType_ == nullptr && this->regionId_ == nullptr; };
    // afterStatus Field Functions 
    bool hasAfterStatus() const { return this->afterStatus_ != nullptr;};
    void deleteAfterStatus() { this->afterStatus_ = nullptr;};
    inline string getAfterStatus() const { DARABONBA_PTR_GET_DEFAULT(afterStatus_, "") };
    inline RebuildDesktopsRequest& setAfterStatus(string afterStatus) { DARABONBA_PTR_SET_VALUE(afterStatus_, afterStatus) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline RebuildDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline RebuildDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline RebuildDesktopsRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RebuildDesktopsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline RebuildDesktopsRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RebuildDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The target status of the cloud computer after the rebuild is complete.
    shared_ptr<string> afterStatus_ {};
    // The cloud computer ID. You can specify 1 to 20 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> desktopId_ {};
    // The ID of the new image to use after the change.
    shared_ptr<string> imageId_ {};
    // The operating system language. Currently, only system images are supported, and Linux computers only support English.
    shared_ptr<string> language_ {};
    // The operation type for the data cloud disk.
    // 
    // > Regardless of whether the cloud computer has a data cloud disk, no field value is passed in by default when you call this operation.
    // 
    // - If the cloud computer has no data cloud disk:  
    //         No data cloud disk operation is performed regardless of the field value passed in.
    // - If the cloud computer has a data cloud disk:
    //     1. When the operating system of the cloud computer is the same as that of the target image:
    //         - If the field value is `replace`, the data cloud disk of the cloud computer is replaced.
    //         - If no field value is passed in, the original data cloud disk of the cloud computer is retained.
    //     2. When the operating system of the cloud computer is different from that of the target image:
    //         - If the field value is `replace`, the data cloud disk of the cloud computer is replaced.
    //         - If no field value is passed in, the data cloud disk of the cloud computer is cleared.
    shared_ptr<string> operateType_ {};
    // The region ID. You can call [DescribeRegions](~~DescribeRegions~~) to query the list of regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
