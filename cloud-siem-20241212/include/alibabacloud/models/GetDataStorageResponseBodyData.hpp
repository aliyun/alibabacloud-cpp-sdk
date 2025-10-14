// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataStorageResponseBodyDataNormalizationLogStores.hpp>
#include <alibabacloud/models/GetDataStorageResponseBodyDataNormalizationLogViews.hpp>
#include <alibabacloud/models/GetDataStorageResponseBodyDataSasLogStores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataStorageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataStorageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ColdStorageUsedCapacity, coldStorageUsedCapacity_);
      DARABONBA_PTR_TO_JSON(DataStorageRegionId, dataStorageRegionId_);
      DARABONBA_PTR_TO_JSON(DataStorageRegionPermission, dataStorageRegionPermission_);
      DARABONBA_PTR_TO_JSON(DataStorageTotalCapacity, dataStorageTotalCapacity_);
      DARABONBA_PTR_TO_JSON(DataStorageUsedCapacity, dataStorageUsedCapacity_);
      DARABONBA_PTR_TO_JSON(DataStorageUsedCapacityDetail, dataStorageUsedCapacityDetail_);
      DARABONBA_PTR_TO_JSON(LogProject, logProject_);
      DARABONBA_PTR_TO_JSON(NormalizationLogStores, normalizationLogStores_);
      DARABONBA_PTR_TO_JSON(NormalizationLogViews, normalizationLogViews_);
      DARABONBA_PTR_TO_JSON(SasLogStores, sasLogStores_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataStorageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdStorageUsedCapacity, coldStorageUsedCapacity_);
      DARABONBA_PTR_FROM_JSON(DataStorageRegionId, dataStorageRegionId_);
      DARABONBA_PTR_FROM_JSON(DataStorageRegionPermission, dataStorageRegionPermission_);
      DARABONBA_PTR_FROM_JSON(DataStorageTotalCapacity, dataStorageTotalCapacity_);
      DARABONBA_PTR_FROM_JSON(DataStorageUsedCapacity, dataStorageUsedCapacity_);
      DARABONBA_PTR_FROM_JSON(DataStorageUsedCapacityDetail, dataStorageUsedCapacityDetail_);
      DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
      DARABONBA_PTR_FROM_JSON(NormalizationLogStores, normalizationLogStores_);
      DARABONBA_PTR_FROM_JSON(NormalizationLogViews, normalizationLogViews_);
      DARABONBA_PTR_FROM_JSON(SasLogStores, sasLogStores_);
    };
    GetDataStorageResponseBodyData() = default ;
    GetDataStorageResponseBodyData(const GetDataStorageResponseBodyData &) = default ;
    GetDataStorageResponseBodyData(GetDataStorageResponseBodyData &&) = default ;
    GetDataStorageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataStorageResponseBodyData() = default ;
    GetDataStorageResponseBodyData& operator=(const GetDataStorageResponseBodyData &) = default ;
    GetDataStorageResponseBodyData& operator=(GetDataStorageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldStorageUsedCapacity_ == nullptr
        && return this->dataStorageRegionId_ == nullptr && return this->dataStorageRegionPermission_ == nullptr && return this->dataStorageTotalCapacity_ == nullptr && return this->dataStorageUsedCapacity_ == nullptr && return this->dataStorageUsedCapacityDetail_ == nullptr
        && return this->logProject_ == nullptr && return this->normalizationLogStores_ == nullptr && return this->normalizationLogViews_ == nullptr && return this->sasLogStores_ == nullptr; };
    // coldStorageUsedCapacity Field Functions 
    bool hasColdStorageUsedCapacity() const { return this->coldStorageUsedCapacity_ != nullptr;};
    void deleteColdStorageUsedCapacity() { this->coldStorageUsedCapacity_ = nullptr;};
    inline double coldStorageUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(coldStorageUsedCapacity_, 0.0) };
    inline GetDataStorageResponseBodyData& setColdStorageUsedCapacity(double coldStorageUsedCapacity) { DARABONBA_PTR_SET_VALUE(coldStorageUsedCapacity_, coldStorageUsedCapacity) };


    // dataStorageRegionId Field Functions 
    bool hasDataStorageRegionId() const { return this->dataStorageRegionId_ != nullptr;};
    void deleteDataStorageRegionId() { this->dataStorageRegionId_ = nullptr;};
    inline string dataStorageRegionId() const { DARABONBA_PTR_GET_DEFAULT(dataStorageRegionId_, "") };
    inline GetDataStorageResponseBodyData& setDataStorageRegionId(string dataStorageRegionId) { DARABONBA_PTR_SET_VALUE(dataStorageRegionId_, dataStorageRegionId) };


    // dataStorageRegionPermission Field Functions 
    bool hasDataStorageRegionPermission() const { return this->dataStorageRegionPermission_ != nullptr;};
    void deleteDataStorageRegionPermission() { this->dataStorageRegionPermission_ = nullptr;};
    inline string dataStorageRegionPermission() const { DARABONBA_PTR_GET_DEFAULT(dataStorageRegionPermission_, "") };
    inline GetDataStorageResponseBodyData& setDataStorageRegionPermission(string dataStorageRegionPermission) { DARABONBA_PTR_SET_VALUE(dataStorageRegionPermission_, dataStorageRegionPermission) };


    // dataStorageTotalCapacity Field Functions 
    bool hasDataStorageTotalCapacity() const { return this->dataStorageTotalCapacity_ != nullptr;};
    void deleteDataStorageTotalCapacity() { this->dataStorageTotalCapacity_ = nullptr;};
    inline int64_t dataStorageTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(dataStorageTotalCapacity_, 0L) };
    inline GetDataStorageResponseBodyData& setDataStorageTotalCapacity(int64_t dataStorageTotalCapacity) { DARABONBA_PTR_SET_VALUE(dataStorageTotalCapacity_, dataStorageTotalCapacity) };


    // dataStorageUsedCapacity Field Functions 
    bool hasDataStorageUsedCapacity() const { return this->dataStorageUsedCapacity_ != nullptr;};
    void deleteDataStorageUsedCapacity() { this->dataStorageUsedCapacity_ = nullptr;};
    inline double dataStorageUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(dataStorageUsedCapacity_, 0.0) };
    inline GetDataStorageResponseBodyData& setDataStorageUsedCapacity(double dataStorageUsedCapacity) { DARABONBA_PTR_SET_VALUE(dataStorageUsedCapacity_, dataStorageUsedCapacity) };


    // dataStorageUsedCapacityDetail Field Functions 
    bool hasDataStorageUsedCapacityDetail() const { return this->dataStorageUsedCapacityDetail_ != nullptr;};
    void deleteDataStorageUsedCapacityDetail() { this->dataStorageUsedCapacityDetail_ = nullptr;};
    inline string dataStorageUsedCapacityDetail() const { DARABONBA_PTR_GET_DEFAULT(dataStorageUsedCapacityDetail_, "") };
    inline GetDataStorageResponseBodyData& setDataStorageUsedCapacityDetail(string dataStorageUsedCapacityDetail) { DARABONBA_PTR_SET_VALUE(dataStorageUsedCapacityDetail_, dataStorageUsedCapacityDetail) };


    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string logProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline GetDataStorageResponseBodyData& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // normalizationLogStores Field Functions 
    bool hasNormalizationLogStores() const { return this->normalizationLogStores_ != nullptr;};
    void deleteNormalizationLogStores() { this->normalizationLogStores_ = nullptr;};
    inline const vector<Models::GetDataStorageResponseBodyDataNormalizationLogStores> & normalizationLogStores() const { DARABONBA_PTR_GET_CONST(normalizationLogStores_, vector<Models::GetDataStorageResponseBodyDataNormalizationLogStores>) };
    inline vector<Models::GetDataStorageResponseBodyDataNormalizationLogStores> normalizationLogStores() { DARABONBA_PTR_GET(normalizationLogStores_, vector<Models::GetDataStorageResponseBodyDataNormalizationLogStores>) };
    inline GetDataStorageResponseBodyData& setNormalizationLogStores(const vector<Models::GetDataStorageResponseBodyDataNormalizationLogStores> & normalizationLogStores) { DARABONBA_PTR_SET_VALUE(normalizationLogStores_, normalizationLogStores) };
    inline GetDataStorageResponseBodyData& setNormalizationLogStores(vector<Models::GetDataStorageResponseBodyDataNormalizationLogStores> && normalizationLogStores) { DARABONBA_PTR_SET_RVALUE(normalizationLogStores_, normalizationLogStores) };


    // normalizationLogViews Field Functions 
    bool hasNormalizationLogViews() const { return this->normalizationLogViews_ != nullptr;};
    void deleteNormalizationLogViews() { this->normalizationLogViews_ = nullptr;};
    inline const vector<Models::GetDataStorageResponseBodyDataNormalizationLogViews> & normalizationLogViews() const { DARABONBA_PTR_GET_CONST(normalizationLogViews_, vector<Models::GetDataStorageResponseBodyDataNormalizationLogViews>) };
    inline vector<Models::GetDataStorageResponseBodyDataNormalizationLogViews> normalizationLogViews() { DARABONBA_PTR_GET(normalizationLogViews_, vector<Models::GetDataStorageResponseBodyDataNormalizationLogViews>) };
    inline GetDataStorageResponseBodyData& setNormalizationLogViews(const vector<Models::GetDataStorageResponseBodyDataNormalizationLogViews> & normalizationLogViews) { DARABONBA_PTR_SET_VALUE(normalizationLogViews_, normalizationLogViews) };
    inline GetDataStorageResponseBodyData& setNormalizationLogViews(vector<Models::GetDataStorageResponseBodyDataNormalizationLogViews> && normalizationLogViews) { DARABONBA_PTR_SET_RVALUE(normalizationLogViews_, normalizationLogViews) };


    // sasLogStores Field Functions 
    bool hasSasLogStores() const { return this->sasLogStores_ != nullptr;};
    void deleteSasLogStores() { this->sasLogStores_ = nullptr;};
    inline const vector<Models::GetDataStorageResponseBodyDataSasLogStores> & sasLogStores() const { DARABONBA_PTR_GET_CONST(sasLogStores_, vector<Models::GetDataStorageResponseBodyDataSasLogStores>) };
    inline vector<Models::GetDataStorageResponseBodyDataSasLogStores> sasLogStores() { DARABONBA_PTR_GET(sasLogStores_, vector<Models::GetDataStorageResponseBodyDataSasLogStores>) };
    inline GetDataStorageResponseBodyData& setSasLogStores(const vector<Models::GetDataStorageResponseBodyDataSasLogStores> & sasLogStores) { DARABONBA_PTR_SET_VALUE(sasLogStores_, sasLogStores) };
    inline GetDataStorageResponseBodyData& setSasLogStores(vector<Models::GetDataStorageResponseBodyDataSasLogStores> && sasLogStores) { DARABONBA_PTR_SET_RVALUE(sasLogStores_, sasLogStores) };


  protected:
    std::shared_ptr<double> coldStorageUsedCapacity_ = nullptr;
    std::shared_ptr<string> dataStorageRegionId_ = nullptr;
    std::shared_ptr<string> dataStorageRegionPermission_ = nullptr;
    std::shared_ptr<int64_t> dataStorageTotalCapacity_ = nullptr;
    std::shared_ptr<double> dataStorageUsedCapacity_ = nullptr;
    std::shared_ptr<string> dataStorageUsedCapacityDetail_ = nullptr;
    std::shared_ptr<string> logProject_ = nullptr;
    std::shared_ptr<vector<Models::GetDataStorageResponseBodyDataNormalizationLogStores>> normalizationLogStores_ = nullptr;
    std::shared_ptr<vector<Models::GetDataStorageResponseBodyDataNormalizationLogViews>> normalizationLogViews_ = nullptr;
    std::shared_ptr<vector<Models::GetDataStorageResponseBodyDataSasLogStores>> sasLogStores_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
