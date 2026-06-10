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
    shared_ptr<string> afterStatus_ {};
    // The IDs of the cloud computers to rebuild. You can specify 1 to 20 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> desktopId_ {};
    // The ID of the new image.
    shared_ptr<string> imageId_ {};
    // The operating system language. This parameter applies only to system images. For Linux cloud computers, only English is supported.
    shared_ptr<string> language_ {};
    // Specifies how to handle the data disk.
    // 
    // > This parameter is optional.
    // 
    // - If a cloud computer does not have a data disk, this parameter is ignored.<br>
    // 
    // - If a cloud computer has a data disk:
    // 
    //   1. If the new image has the same operating system as the original one:
    // 
    //      - If you set this parameter to `replace`, the data disk is replaced.
    // 
    //      - If you do not specify this parameter, the data disk is retained.
    // 
    //   2. If the new image has a different operating system:
    // 
    //      - If you set this parameter to `replace`, the data disk is replaced.
    // 
    //      - If you do not specify this parameter, the data disk is erased.
    shared_ptr<string> operateType_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to find the regions where Elastic Desktop Service is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
