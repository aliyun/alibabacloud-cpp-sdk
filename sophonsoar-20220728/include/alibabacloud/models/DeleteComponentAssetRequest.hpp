// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOMPONENTASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOMPONENTASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DeleteComponentAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteComponentAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteComponentAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DeleteComponentAssetRequest() = default ;
    DeleteComponentAssetRequest(const DeleteComponentAssetRequest &) = default ;
    DeleteComponentAssetRequest(DeleteComponentAssetRequest &&) = default ;
    DeleteComponentAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteComponentAssetRequest() = default ;
    DeleteComponentAssetRequest& operator=(const DeleteComponentAssetRequest &) = default ;
    DeleteComponentAssetRequest& operator=(DeleteComponentAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetId_ == nullptr
        && return this->lang_ == nullptr; };
    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline int64_t assetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, 0L) };
    inline DeleteComponentAssetRequest& setAssetId(int64_t assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteComponentAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the asset.
    // 
    // >  You can call the [DescribeComponentAssets](~~DescribeComponentAssets~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> assetId_ = nullptr;
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
