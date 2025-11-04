// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVODPACKAGINGASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetVodPackagingAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
    };
    GetVodPackagingAssetRequest() = default ;
    GetVodPackagingAssetRequest(const GetVodPackagingAssetRequest &) = default ;
    GetVodPackagingAssetRequest(GetVodPackagingAssetRequest &&) = default ;
    GetVodPackagingAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodPackagingAssetRequest() = default ;
    GetVodPackagingAssetRequest& operator=(const GetVodPackagingAssetRequest &) = default ;
    GetVodPackagingAssetRequest& operator=(GetVodPackagingAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetName_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline GetVodPackagingAssetRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


  protected:
    // The name of the VOD packaging asset.
    std::shared_ptr<string> assetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
