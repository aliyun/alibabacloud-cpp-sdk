// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETRESPONSEBODYASSET_HPP_
#define ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETRESPONSEBODYASSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVodPackagingAssetResponseBodyAssetEgressEndpoints.hpp>
#include <alibabacloud/models/GetVodPackagingAssetResponseBodyAssetInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetVodPackagingAssetResponseBodyAsset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodPackagingAssetResponseBodyAsset& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(ContentId, contentId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EgressEndpoints, egressEndpoints_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodPackagingAssetResponseBodyAsset& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EgressEndpoints, egressEndpoints_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    GetVodPackagingAssetResponseBodyAsset() = default ;
    GetVodPackagingAssetResponseBodyAsset(const GetVodPackagingAssetResponseBodyAsset &) = default ;
    GetVodPackagingAssetResponseBodyAsset(GetVodPackagingAssetResponseBodyAsset &&) = default ;
    GetVodPackagingAssetResponseBodyAsset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodPackagingAssetResponseBodyAsset() = default ;
    GetVodPackagingAssetResponseBodyAsset& operator=(const GetVodPackagingAssetResponseBodyAsset &) = default ;
    GetVodPackagingAssetResponseBodyAsset& operator=(GetVodPackagingAssetResponseBodyAsset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetName_ != nullptr
        && this->contentId_ != nullptr && this->createTime_ != nullptr && this->egressEndpoints_ != nullptr && this->groupName_ != nullptr && this->input_ != nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline GetVodPackagingAssetResponseBodyAsset& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline string contentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
    inline GetVodPackagingAssetResponseBodyAsset& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVodPackagingAssetResponseBodyAsset& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // egressEndpoints Field Functions 
    bool hasEgressEndpoints() const { return this->egressEndpoints_ != nullptr;};
    void deleteEgressEndpoints() { this->egressEndpoints_ = nullptr;};
    inline const vector<Models::GetVodPackagingAssetResponseBodyAssetEgressEndpoints> & egressEndpoints() const { DARABONBA_PTR_GET_CONST(egressEndpoints_, vector<Models::GetVodPackagingAssetResponseBodyAssetEgressEndpoints>) };
    inline vector<Models::GetVodPackagingAssetResponseBodyAssetEgressEndpoints> egressEndpoints() { DARABONBA_PTR_GET(egressEndpoints_, vector<Models::GetVodPackagingAssetResponseBodyAssetEgressEndpoints>) };
    inline GetVodPackagingAssetResponseBodyAsset& setEgressEndpoints(const vector<Models::GetVodPackagingAssetResponseBodyAssetEgressEndpoints> & egressEndpoints) { DARABONBA_PTR_SET_VALUE(egressEndpoints_, egressEndpoints) };
    inline GetVodPackagingAssetResponseBodyAsset& setEgressEndpoints(vector<Models::GetVodPackagingAssetResponseBodyAssetEgressEndpoints> && egressEndpoints) { DARABONBA_PTR_SET_RVALUE(egressEndpoints_, egressEndpoints) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetVodPackagingAssetResponseBodyAsset& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetVodPackagingAssetResponseBodyAssetInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetVodPackagingAssetResponseBodyAssetInput) };
    inline Models::GetVodPackagingAssetResponseBodyAssetInput input() { DARABONBA_PTR_GET(input_, Models::GetVodPackagingAssetResponseBodyAssetInput) };
    inline GetVodPackagingAssetResponseBodyAsset& setInput(const Models::GetVodPackagingAssetResponseBodyAssetInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetVodPackagingAssetResponseBodyAsset& setInput(Models::GetVodPackagingAssetResponseBodyAssetInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The name of the asset.
    std::shared_ptr<string> assetName_ = nullptr;
    // The content ID in the DRM system. The maximum length is 256 characters. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> contentId_ = nullptr;
    // The time when the asset was created. It follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The egress endpoints, each corresponding to a packaging configuration.
    std::shared_ptr<vector<Models::GetVodPackagingAssetResponseBodyAssetEgressEndpoints>> egressEndpoints_ = nullptr;
    // The name of the packaging group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The asset input configurations.
    std::shared_ptr<Models::GetVodPackagingAssetResponseBodyAssetInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
