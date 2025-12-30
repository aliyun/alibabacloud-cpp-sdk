// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVODPACKAGINGASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVODPACKAGINGASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteVodPackagingAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
    };
    DeleteVodPackagingAssetRequest() = default ;
    DeleteVodPackagingAssetRequest(const DeleteVodPackagingAssetRequest &) = default ;
    DeleteVodPackagingAssetRequest(DeleteVodPackagingAssetRequest &&) = default ;
    DeleteVodPackagingAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVodPackagingAssetRequest() = default ;
    DeleteVodPackagingAssetRequest& operator=(const DeleteVodPackagingAssetRequest &) = default ;
    DeleteVodPackagingAssetRequest& operator=(DeleteVodPackagingAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetName_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline DeleteVodPackagingAssetRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


  protected:
    // The name of the VOD packaging asset.
    shared_ptr<string> assetName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
