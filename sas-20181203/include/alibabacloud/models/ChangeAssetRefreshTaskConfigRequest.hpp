// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEASSETREFRESHTASKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEASSETREFRESHTASKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeAssetRefreshTaskConfigRequestAssetRefreshConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeAssetRefreshTaskConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAssetRefreshTaskConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetRefreshConfigs, assetRefreshConfigs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAssetRefreshTaskConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetRefreshConfigs, assetRefreshConfigs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ChangeAssetRefreshTaskConfigRequest() = default ;
    ChangeAssetRefreshTaskConfigRequest(const ChangeAssetRefreshTaskConfigRequest &) = default ;
    ChangeAssetRefreshTaskConfigRequest(ChangeAssetRefreshTaskConfigRequest &&) = default ;
    ChangeAssetRefreshTaskConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAssetRefreshTaskConfigRequest() = default ;
    ChangeAssetRefreshTaskConfigRequest& operator=(const ChangeAssetRefreshTaskConfigRequest &) = default ;
    ChangeAssetRefreshTaskConfigRequest& operator=(ChangeAssetRefreshTaskConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetRefreshConfigs_ == nullptr
        && return this->regionId_ == nullptr; };
    // assetRefreshConfigs Field Functions 
    bool hasAssetRefreshConfigs() const { return this->assetRefreshConfigs_ != nullptr;};
    void deleteAssetRefreshConfigs() { this->assetRefreshConfigs_ = nullptr;};
    inline const vector<ChangeAssetRefreshTaskConfigRequestAssetRefreshConfigs> & assetRefreshConfigs() const { DARABONBA_PTR_GET_CONST(assetRefreshConfigs_, vector<ChangeAssetRefreshTaskConfigRequestAssetRefreshConfigs>) };
    inline vector<ChangeAssetRefreshTaskConfigRequestAssetRefreshConfigs> assetRefreshConfigs() { DARABONBA_PTR_GET(assetRefreshConfigs_, vector<ChangeAssetRefreshTaskConfigRequestAssetRefreshConfigs>) };
    inline ChangeAssetRefreshTaskConfigRequest& setAssetRefreshConfigs(const vector<ChangeAssetRefreshTaskConfigRequestAssetRefreshConfigs> & assetRefreshConfigs) { DARABONBA_PTR_SET_VALUE(assetRefreshConfigs_, assetRefreshConfigs) };
    inline ChangeAssetRefreshTaskConfigRequest& setAssetRefreshConfigs(vector<ChangeAssetRefreshTaskConfigRequestAssetRefreshConfigs> && assetRefreshConfigs) { DARABONBA_PTR_SET_RVALUE(assetRefreshConfigs_, assetRefreshConfigs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChangeAssetRefreshTaskConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The asset synchronization configuration.
    std::shared_ptr<vector<ChangeAssetRefreshTaskConfigRequestAssetRefreshConfigs>> assetRefreshConfigs_ = nullptr;
    // The region in which your Security Center service resides.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
