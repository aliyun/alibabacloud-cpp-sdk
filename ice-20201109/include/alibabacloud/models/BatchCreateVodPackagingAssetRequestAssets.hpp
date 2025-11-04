// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETREQUESTASSETS_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETREQUESTASSETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchCreateVodPackagingAssetRequestAssetsInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchCreateVodPackagingAssetRequestAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateVodPackagingAssetRequestAssets& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(ContentId, contentId_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateVodPackagingAssetRequestAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    BatchCreateVodPackagingAssetRequestAssets() = default ;
    BatchCreateVodPackagingAssetRequestAssets(const BatchCreateVodPackagingAssetRequestAssets &) = default ;
    BatchCreateVodPackagingAssetRequestAssets(BatchCreateVodPackagingAssetRequestAssets &&) = default ;
    BatchCreateVodPackagingAssetRequestAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateVodPackagingAssetRequestAssets() = default ;
    BatchCreateVodPackagingAssetRequestAssets& operator=(const BatchCreateVodPackagingAssetRequestAssets &) = default ;
    BatchCreateVodPackagingAssetRequestAssets& operator=(BatchCreateVodPackagingAssetRequestAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetName_ == nullptr
        && return this->contentId_ == nullptr && return this->input_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline BatchCreateVodPackagingAssetRequestAssets& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline string contentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
    inline BatchCreateVodPackagingAssetRequestAssets& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::BatchCreateVodPackagingAssetRequestAssetsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::BatchCreateVodPackagingAssetRequestAssetsInput) };
    inline Models::BatchCreateVodPackagingAssetRequestAssetsInput input() { DARABONBA_PTR_GET(input_, Models::BatchCreateVodPackagingAssetRequestAssetsInput) };
    inline BatchCreateVodPackagingAssetRequestAssets& setInput(const Models::BatchCreateVodPackagingAssetRequestAssetsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline BatchCreateVodPackagingAssetRequestAssets& setInput(Models::BatchCreateVodPackagingAssetRequestAssetsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The name of the asset. The name must be unique and can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> assetName_ = nullptr;
    // The content ID in the digital rights management (DRM) system. The maximum length is 256 characters. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> contentId_ = nullptr;
    // The asset input configurations.
    std::shared_ptr<Models::BatchCreateVodPackagingAssetRequestAssetsInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
