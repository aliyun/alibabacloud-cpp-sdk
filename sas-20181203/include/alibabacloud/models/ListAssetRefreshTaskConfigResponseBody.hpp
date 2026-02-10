// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETREFRESHTASKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETREFRESHTASKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetRefreshTaskConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetRefreshTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetRefreshConfig, assetRefreshConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetRefreshTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetRefreshConfig, assetRefreshConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAssetRefreshTaskConfigResponseBody() = default ;
    ListAssetRefreshTaskConfigResponseBody(const ListAssetRefreshTaskConfigResponseBody &) = default ;
    ListAssetRefreshTaskConfigResponseBody(ListAssetRefreshTaskConfigResponseBody &&) = default ;
    ListAssetRefreshTaskConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetRefreshTaskConfigResponseBody() = default ;
    ListAssetRefreshTaskConfigResponseBody& operator=(const ListAssetRefreshTaskConfigResponseBody &) = default ;
    ListAssetRefreshTaskConfigResponseBody& operator=(ListAssetRefreshTaskConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetRefreshConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetRefreshConfig& obj) { 
        DARABONBA_PTR_TO_JSON(RefreshConfigType, refreshConfigType_);
        DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, AssetRefreshConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(RefreshConfigType, refreshConfigType_);
        DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      AssetRefreshConfig() = default ;
      AssetRefreshConfig(const AssetRefreshConfig &) = default ;
      AssetRefreshConfig(AssetRefreshConfig &&) = default ;
      AssetRefreshConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetRefreshConfig() = default ;
      AssetRefreshConfig& operator=(const AssetRefreshConfig &) = default ;
      AssetRefreshConfig& operator=(AssetRefreshConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->refreshConfigType_ == nullptr
        && this->schedulePeriod_ == nullptr && this->status_ == nullptr && this->vendor_ == nullptr; };
      // refreshConfigType Field Functions 
      bool hasRefreshConfigType() const { return this->refreshConfigType_ != nullptr;};
      void deleteRefreshConfigType() { this->refreshConfigType_ = nullptr;};
      inline int32_t getRefreshConfigType() const { DARABONBA_PTR_GET_DEFAULT(refreshConfigType_, 0) };
      inline AssetRefreshConfig& setRefreshConfigType(int32_t refreshConfigType) { DARABONBA_PTR_SET_VALUE(refreshConfigType_, refreshConfigType) };


      // schedulePeriod Field Functions 
      bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
      void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
      inline int32_t getSchedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, 0) };
      inline AssetRefreshConfig& setSchedulePeriod(int32_t schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline AssetRefreshConfig& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline AssetRefreshConfig& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The type of the configuration. Valid values:
      // 
      // *   **0**: server synchronization task
      // *   **1**: cloud service synchronization task
      // *   **2**: scheduled AccessKey pair verification task
      shared_ptr<int32_t> refreshConfigType_ {};
      // The synchronization cycle. Valid values:
      // 
      // *   **60**: 60 minutes
      // *   **180**: 3 hours
      // *   **360**: 6 hours
      // *   **720**: 12 hours
      // *   **1440**: 1 day
      // *   **10080**: 7 days
      shared_ptr<int32_t> schedulePeriod_ {};
      // The status of the configuration. Valid values:
      // 
      // *   **1**: enabled
      // *   **0**: disabled
      shared_ptr<int32_t> status_ {};
      // The service provider of the cloud asset. Valid values:
      // 
      // *   **3**: Tencent Cloud
      // *   **4**: Huawei Cloud
      // *   **7**: Amazon Web Services (AWS) Cloud
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->assetRefreshConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // assetRefreshConfig Field Functions 
    bool hasAssetRefreshConfig() const { return this->assetRefreshConfig_ != nullptr;};
    void deleteAssetRefreshConfig() { this->assetRefreshConfig_ = nullptr;};
    inline const vector<ListAssetRefreshTaskConfigResponseBody::AssetRefreshConfig> & getAssetRefreshConfig() const { DARABONBA_PTR_GET_CONST(assetRefreshConfig_, vector<ListAssetRefreshTaskConfigResponseBody::AssetRefreshConfig>) };
    inline vector<ListAssetRefreshTaskConfigResponseBody::AssetRefreshConfig> getAssetRefreshConfig() { DARABONBA_PTR_GET(assetRefreshConfig_, vector<ListAssetRefreshTaskConfigResponseBody::AssetRefreshConfig>) };
    inline ListAssetRefreshTaskConfigResponseBody& setAssetRefreshConfig(const vector<ListAssetRefreshTaskConfigResponseBody::AssetRefreshConfig> & assetRefreshConfig) { DARABONBA_PTR_SET_VALUE(assetRefreshConfig_, assetRefreshConfig) };
    inline ListAssetRefreshTaskConfigResponseBody& setAssetRefreshConfig(vector<ListAssetRefreshTaskConfigResponseBody::AssetRefreshConfig> && assetRefreshConfig) { DARABONBA_PTR_SET_RVALUE(assetRefreshConfig_, assetRefreshConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetRefreshTaskConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The asset synchronization configuration.
    shared_ptr<vector<ListAssetRefreshTaskConfigResponseBody::AssetRefreshConfig>> assetRefreshConfig_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
