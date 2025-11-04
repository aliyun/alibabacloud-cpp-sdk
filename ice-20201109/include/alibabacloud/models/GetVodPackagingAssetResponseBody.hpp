// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVodPackagingAssetResponseBodyAsset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetVodPackagingAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodPackagingAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Asset, asset_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodPackagingAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Asset, asset_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVodPackagingAssetResponseBody() = default ;
    GetVodPackagingAssetResponseBody(const GetVodPackagingAssetResponseBody &) = default ;
    GetVodPackagingAssetResponseBody(GetVodPackagingAssetResponseBody &&) = default ;
    GetVodPackagingAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodPackagingAssetResponseBody() = default ;
    GetVodPackagingAssetResponseBody& operator=(const GetVodPackagingAssetResponseBody &) = default ;
    GetVodPackagingAssetResponseBody& operator=(GetVodPackagingAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asset_ == nullptr
        && return this->requestId_ == nullptr; };
    // asset Field Functions 
    bool hasAsset() const { return this->asset_ != nullptr;};
    void deleteAsset() { this->asset_ = nullptr;};
    inline const GetVodPackagingAssetResponseBodyAsset & asset() const { DARABONBA_PTR_GET_CONST(asset_, GetVodPackagingAssetResponseBodyAsset) };
    inline GetVodPackagingAssetResponseBodyAsset asset() { DARABONBA_PTR_GET(asset_, GetVodPackagingAssetResponseBodyAsset) };
    inline GetVodPackagingAssetResponseBody& setAsset(const GetVodPackagingAssetResponseBodyAsset & asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };
    inline GetVodPackagingAssetResponseBody& setAsset(GetVodPackagingAssetResponseBodyAsset && asset) { DARABONBA_PTR_SET_RVALUE(asset_, asset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVodPackagingAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the asset.
    std::shared_ptr<GetVodPackagingAssetResponseBodyAsset> asset_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
