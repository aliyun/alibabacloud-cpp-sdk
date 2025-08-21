// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADREGIONSDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRELOADREGIONSDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PreloadRegionSDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadRegionSDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIdsShrink_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_TO_JSON(RedundantNum, redundantNum_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadRegionSDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_FROM_JSON(RedundantNum, redundantNum_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    PreloadRegionSDGShrinkRequest() = default ;
    PreloadRegionSDGShrinkRequest(const PreloadRegionSDGShrinkRequest &) = default ;
    PreloadRegionSDGShrinkRequest(PreloadRegionSDGShrinkRequest &&) = default ;
    PreloadRegionSDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadRegionSDGShrinkRequest() = default ;
    PreloadRegionSDGShrinkRequest& operator=(const PreloadRegionSDGShrinkRequest &) = default ;
    PreloadRegionSDGShrinkRequest& operator=(PreloadRegionSDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationRegionIdsShrink_ != nullptr
        && this->diskType_ != nullptr && this->namespacesShrink_ != nullptr && this->redundantNum_ != nullptr && this->SDGId_ != nullptr; };
    // destinationRegionIdsShrink Field Functions 
    bool hasDestinationRegionIdsShrink() const { return this->destinationRegionIdsShrink_ != nullptr;};
    void deleteDestinationRegionIdsShrink() { this->destinationRegionIdsShrink_ = nullptr;};
    inline string destinationRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionIdsShrink_, "") };
    inline PreloadRegionSDGShrinkRequest& setDestinationRegionIdsShrink(string destinationRegionIdsShrink) { DARABONBA_PTR_SET_VALUE(destinationRegionIdsShrink_, destinationRegionIdsShrink) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline PreloadRegionSDGShrinkRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // namespacesShrink Field Functions 
    bool hasNamespacesShrink() const { return this->namespacesShrink_ != nullptr;};
    void deleteNamespacesShrink() { this->namespacesShrink_ = nullptr;};
    inline string namespacesShrink() const { DARABONBA_PTR_GET_DEFAULT(namespacesShrink_, "") };
    inline PreloadRegionSDGShrinkRequest& setNamespacesShrink(string namespacesShrink) { DARABONBA_PTR_SET_VALUE(namespacesShrink_, namespacesShrink) };


    // redundantNum Field Functions 
    bool hasRedundantNum() const { return this->redundantNum_ != nullptr;};
    void deleteRedundantNum() { this->redundantNum_ = nullptr;};
    inline int32_t redundantNum() const { DARABONBA_PTR_GET_DEFAULT(redundantNum_, 0) };
    inline PreloadRegionSDGShrinkRequest& setRedundantNum(int32_t redundantNum) { DARABONBA_PTR_SET_VALUE(redundantNum_, redundantNum) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline PreloadRegionSDGShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The IDs of the destination nodes.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationRegionIdsShrink_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    // An array that consists of queried namespaces.
    std::shared_ptr<string> namespacesShrink_ = nullptr;
    // The number of redundant replicas to support rapid deployment.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> redundantNum_ = nullptr;
    // The ID of the SDG for which data is preloaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> SDGId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
