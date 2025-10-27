// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETREFRESHTASKCONFIGRESPONSEBODYASSETREFRESHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETREFRESHTASKCONFIGRESPONSEBODYASSETREFRESHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshConfigType, refreshConfigType_);
      DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshConfigType, refreshConfigType_);
      DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig() = default ;
    ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig(const ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig &) = default ;
    ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig(ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig &&) = default ;
    ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig() = default ;
    ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig& operator=(const ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig &) = default ;
    ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig& operator=(ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refreshConfigType_ == nullptr
        && return this->schedulePeriod_ == nullptr && return this->status_ == nullptr && return this->vendor_ == nullptr; };
    // refreshConfigType Field Functions 
    bool hasRefreshConfigType() const { return this->refreshConfigType_ != nullptr;};
    void deleteRefreshConfigType() { this->refreshConfigType_ = nullptr;};
    inline int32_t refreshConfigType() const { DARABONBA_PTR_GET_DEFAULT(refreshConfigType_, 0) };
    inline ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig& setRefreshConfigType(int32_t refreshConfigType) { DARABONBA_PTR_SET_VALUE(refreshConfigType_, refreshConfigType) };


    // schedulePeriod Field Functions 
    bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
    void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
    inline int32_t schedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, 0) };
    inline ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig& setSchedulePeriod(int32_t schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The type of the configuration. Valid values:
    // 
    // *   **0**: server synchronization task
    // *   **1**: cloud service synchronization task
    // *   **2**: scheduled AccessKey pair verification task
    std::shared_ptr<int32_t> refreshConfigType_ = nullptr;
    // The synchronization cycle. Valid values:
    // 
    // *   **60**: 60 minutes
    // *   **180**: 3 hours
    // *   **360**: 6 hours
    // *   **720**: 12 hours
    // *   **1440**: 1 day
    // *   **10080**: 7 days
    std::shared_ptr<int32_t> schedulePeriod_ = nullptr;
    // The status of the configuration. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The service provider of the cloud asset. Valid values:
    // 
    // *   **3**: Tencent Cloud
    // *   **4**: Huawei Cloud
    // *   **7**: Amazon Web Services (AWS) Cloud
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
