// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VODPACKAGINGASSET_HPP_
#define ALIBABACLOUD_MODELS_VODPACKAGINGASSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VodPackagingAssetInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class VodPackagingAsset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VodPackagingAsset& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(ContentId, contentId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, VodPackagingAsset& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    VodPackagingAsset() = default ;
    VodPackagingAsset(const VodPackagingAsset &) = default ;
    VodPackagingAsset(VodPackagingAsset &&) = default ;
    VodPackagingAsset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VodPackagingAsset() = default ;
    VodPackagingAsset& operator=(const VodPackagingAsset &) = default ;
    VodPackagingAsset& operator=(VodPackagingAsset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetName_ == nullptr
        && return this->contentId_ == nullptr && return this->createTime_ == nullptr && return this->groupName_ == nullptr && return this->input_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline VodPackagingAsset& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline string contentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
    inline VodPackagingAsset& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline VodPackagingAsset& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline VodPackagingAsset& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const VodPackagingAssetInput & input() const { DARABONBA_PTR_GET_CONST(input_, VodPackagingAssetInput) };
    inline VodPackagingAssetInput input() { DARABONBA_PTR_GET(input_, VodPackagingAssetInput) };
    inline VodPackagingAsset& setInput(const VodPackagingAssetInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline VodPackagingAsset& setInput(VodPackagingAssetInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    std::shared_ptr<string> assetName_ = nullptr;
    std::shared_ptr<string> contentId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<VodPackagingAssetInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
