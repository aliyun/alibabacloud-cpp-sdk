// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHCONTAINERASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHCONTAINERASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class RefreshContainerAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshContainerAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshContainerAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
    };
    RefreshContainerAssetsRequest() = default ;
    RefreshContainerAssetsRequest(const RefreshContainerAssetsRequest &) = default ;
    RefreshContainerAssetsRequest(RefreshContainerAssetsRequest &&) = default ;
    RefreshContainerAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshContainerAssetsRequest() = default ;
    RefreshContainerAssetsRequest& operator=(const RefreshContainerAssetsRequest &) = default ;
    RefreshContainerAssetsRequest& operator=(RefreshContainerAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetType_ != nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline RefreshContainerAssetsRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


  protected:
    // The type of the container asset whose statistics you want to refresh. Valid values:
    // 
    // *   **IMAGE**
    // *   **CONTAINER**
    // 
    // This parameter is required.
    std::shared_ptr<string> assetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
