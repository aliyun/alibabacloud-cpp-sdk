// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemAssetsResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemAssetsResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(AssetInfo, assetInfo_);
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemAssetsResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(AssetInfo, assetInfo_);
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    DescribeCloudSiemAssetsResponseBodyDataResponseData() = default ;
    DescribeCloudSiemAssetsResponseBodyDataResponseData(const DescribeCloudSiemAssetsResponseBodyDataResponseData &) = default ;
    DescribeCloudSiemAssetsResponseBodyDataResponseData(DescribeCloudSiemAssetsResponseBodyDataResponseData &&) = default ;
    DescribeCloudSiemAssetsResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemAssetsResponseBodyDataResponseData() = default ;
    DescribeCloudSiemAssetsResponseBodyDataResponseData& operator=(const DescribeCloudSiemAssetsResponseBodyDataResponseData &) = default ;
    DescribeCloudSiemAssetsResponseBodyDataResponseData& operator=(DescribeCloudSiemAssetsResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertUuid_ != nullptr
        && this->aliuid_ != nullptr && this->assetId_ != nullptr && this->assetInfo_ != nullptr && this->assetName_ != nullptr && this->assetType_ != nullptr
        && this->cloudCode_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->incidentUuid_ != nullptr
        && this->subUserId_ != nullptr; };
    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string alertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string assetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // assetInfo Field Functions 
    bool hasAssetInfo() const { return this->assetInfo_ != nullptr;};
    void deleteAssetInfo() { this->assetInfo_ = nullptr;};
    inline const vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo> & assetInfo() const { DARABONBA_PTR_GET_CONST(assetInfo_, vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo>) };
    inline vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo> assetInfo() { DARABONBA_PTR_GET(assetInfo_, vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo>) };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setAssetInfo(const vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo> & assetInfo) { DARABONBA_PTR_SET_VALUE(assetInfo_, assetInfo) };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setAssetInfo(vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo> && assetInfo) { DARABONBA_PTR_SET_RVALUE(assetInfo_, assetInfo) };


    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline DescribeCloudSiemAssetsResponseBodyDataResponseData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The UUID of the alert associated with the event.
    std::shared_ptr<string> alertUuid_ = nullptr;
    // The ID of the Alibaba Cloud account in SIEM.
    std::shared_ptr<int64_t> aliuid_ = nullptr;
    // The logical ID of the asset.
    std::shared_ptr<string> assetId_ = nullptr;
    // The display information of the asset is in the JSON format.
    std::shared_ptr<vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo>> assetInfo_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> assetName_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   ip
    // *   domain
    // *   url
    // *   process
    // *   file
    // *   host
    std::shared_ptr<string> assetType_ = nullptr;
    // The cloud code of the entity. Valid values:
    // 
    // *   aliyun: Alibaba Cloud
    // *   qcloud: Tencent Cloud
    // *   hcloud: Huawei Cloud
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The time when the asset was synchronized.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the asset was last updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the asset.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The ID of the associated account to which the asset belongs.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
