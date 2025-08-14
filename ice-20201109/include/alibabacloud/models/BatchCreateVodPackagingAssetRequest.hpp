// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateVodPackagingAssetRequestAssets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchCreateVodPackagingAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateVodPackagingAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    BatchCreateVodPackagingAssetRequest() = default ;
    BatchCreateVodPackagingAssetRequest(const BatchCreateVodPackagingAssetRequest &) = default ;
    BatchCreateVodPackagingAssetRequest(BatchCreateVodPackagingAssetRequest &&) = default ;
    BatchCreateVodPackagingAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateVodPackagingAssetRequest() = default ;
    BatchCreateVodPackagingAssetRequest& operator=(const BatchCreateVodPackagingAssetRequest &) = default ;
    BatchCreateVodPackagingAssetRequest& operator=(BatchCreateVodPackagingAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assets_ != nullptr
        && this->groupName_ != nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<BatchCreateVodPackagingAssetRequestAssets> & assets() const { DARABONBA_PTR_GET_CONST(assets_, vector<BatchCreateVodPackagingAssetRequestAssets>) };
    inline vector<BatchCreateVodPackagingAssetRequestAssets> assets() { DARABONBA_PTR_GET(assets_, vector<BatchCreateVodPackagingAssetRequestAssets>) };
    inline BatchCreateVodPackagingAssetRequest& setAssets(const vector<BatchCreateVodPackagingAssetRequestAssets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline BatchCreateVodPackagingAssetRequest& setAssets(vector<BatchCreateVodPackagingAssetRequestAssets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline BatchCreateVodPackagingAssetRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The assets that you want to ingest.
    std::shared_ptr<vector<BatchCreateVodPackagingAssetRequestAssets>> assets_ = nullptr;
    // The name of the packaging group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
