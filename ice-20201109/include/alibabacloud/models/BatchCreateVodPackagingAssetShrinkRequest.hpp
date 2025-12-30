// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchCreateVodPackagingAssetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateVodPackagingAssetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assetsShrink_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateVodPackagingAssetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assetsShrink_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    BatchCreateVodPackagingAssetShrinkRequest() = default ;
    BatchCreateVodPackagingAssetShrinkRequest(const BatchCreateVodPackagingAssetShrinkRequest &) = default ;
    BatchCreateVodPackagingAssetShrinkRequest(BatchCreateVodPackagingAssetShrinkRequest &&) = default ;
    BatchCreateVodPackagingAssetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateVodPackagingAssetShrinkRequest() = default ;
    BatchCreateVodPackagingAssetShrinkRequest& operator=(const BatchCreateVodPackagingAssetShrinkRequest &) = default ;
    BatchCreateVodPackagingAssetShrinkRequest& operator=(BatchCreateVodPackagingAssetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsShrink_ == nullptr
        && this->groupName_ == nullptr; };
    // assetsShrink Field Functions 
    bool hasAssetsShrink() const { return this->assetsShrink_ != nullptr;};
    void deleteAssetsShrink() { this->assetsShrink_ = nullptr;};
    inline string getAssetsShrink() const { DARABONBA_PTR_GET_DEFAULT(assetsShrink_, "") };
    inline BatchCreateVodPackagingAssetShrinkRequest& setAssetsShrink(string assetsShrink) { DARABONBA_PTR_SET_VALUE(assetsShrink_, assetsShrink) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline BatchCreateVodPackagingAssetShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The assets that you want to ingest.
    shared_ptr<string> assetsShrink_ {};
    // The name of the packaging group.
    shared_ptr<string> groupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
