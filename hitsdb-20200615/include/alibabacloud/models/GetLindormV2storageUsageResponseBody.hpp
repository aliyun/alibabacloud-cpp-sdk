// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2STORAGEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2STORAGEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2StorageUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2StorageUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(CapacityByDiskCategory, capacityByDiskCategory_);
      DARABONBA_ANY_TO_JSON(InstanceStorageZoneMap, instanceStorageZoneMap_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageByDiskCategory, usageByDiskCategory_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2StorageUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(CapacityByDiskCategory, capacityByDiskCategory_);
      DARABONBA_ANY_FROM_JSON(InstanceStorageZoneMap, instanceStorageZoneMap_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageByDiskCategory, usageByDiskCategory_);
    };
    GetLindormV2StorageUsageResponseBody() = default ;
    GetLindormV2StorageUsageResponseBody(const GetLindormV2StorageUsageResponseBody &) = default ;
    GetLindormV2StorageUsageResponseBody(GetLindormV2StorageUsageResponseBody &&) = default ;
    GetLindormV2StorageUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2StorageUsageResponseBody() = default ;
    GetLindormV2StorageUsageResponseBody& operator=(const GetLindormV2StorageUsageResponseBody &) = default ;
    GetLindormV2StorageUsageResponseBody& operator=(GetLindormV2StorageUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->capacityByDiskCategory_ != nullptr && this->instanceStorageZoneMap_ != nullptr && this->requestId_ != nullptr && this->usageByDiskCategory_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormV2StorageUsageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // capacityByDiskCategory Field Functions 
    bool hasCapacityByDiskCategory() const { return this->capacityByDiskCategory_ != nullptr;};
    void deleteCapacityByDiskCategory() { this->capacityByDiskCategory_ = nullptr;};
    inline const vector<Darabonba::Json> & capacityByDiskCategory() const { DARABONBA_PTR_GET_CONST(capacityByDiskCategory_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> capacityByDiskCategory() { DARABONBA_PTR_GET(capacityByDiskCategory_, vector<Darabonba::Json>) };
    inline GetLindormV2StorageUsageResponseBody& setCapacityByDiskCategory(const vector<Darabonba::Json> & capacityByDiskCategory) { DARABONBA_PTR_SET_VALUE(capacityByDiskCategory_, capacityByDiskCategory) };
    inline GetLindormV2StorageUsageResponseBody& setCapacityByDiskCategory(vector<Darabonba::Json> && capacityByDiskCategory) { DARABONBA_PTR_SET_RVALUE(capacityByDiskCategory_, capacityByDiskCategory) };


    // instanceStorageZoneMap Field Functions 
    bool hasInstanceStorageZoneMap() const { return this->instanceStorageZoneMap_ != nullptr;};
    void deleteInstanceStorageZoneMap() { this->instanceStorageZoneMap_ = nullptr;};
    inline     const Darabonba::Json & instanceStorageZoneMap() const { DARABONBA_GET(instanceStorageZoneMap_) };
    Darabonba::Json & instanceStorageZoneMap() { DARABONBA_GET(instanceStorageZoneMap_) };
    inline GetLindormV2StorageUsageResponseBody& setInstanceStorageZoneMap(const Darabonba::Json & instanceStorageZoneMap) { DARABONBA_SET_VALUE(instanceStorageZoneMap_, instanceStorageZoneMap) };
    inline GetLindormV2StorageUsageResponseBody& setInstanceStorageZoneMap(Darabonba::Json & instanceStorageZoneMap) { DARABONBA_SET_RVALUE(instanceStorageZoneMap_, instanceStorageZoneMap) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormV2StorageUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageByDiskCategory Field Functions 
    bool hasUsageByDiskCategory() const { return this->usageByDiskCategory_ != nullptr;};
    void deleteUsageByDiskCategory() { this->usageByDiskCategory_ = nullptr;};
    inline const vector<Darabonba::Json> & usageByDiskCategory() const { DARABONBA_PTR_GET_CONST(usageByDiskCategory_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> usageByDiskCategory() { DARABONBA_PTR_GET(usageByDiskCategory_, vector<Darabonba::Json>) };
    inline GetLindormV2StorageUsageResponseBody& setUsageByDiskCategory(const vector<Darabonba::Json> & usageByDiskCategory) { DARABONBA_PTR_SET_VALUE(usageByDiskCategory_, usageByDiskCategory) };
    inline GetLindormV2StorageUsageResponseBody& setUsageByDiskCategory(vector<Darabonba::Json> && usageByDiskCategory) { DARABONBA_PTR_SET_RVALUE(usageByDiskCategory_, usageByDiskCategory) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> capacityByDiskCategory_ = nullptr;
    Darabonba::Json instanceStorageZoneMap_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> usageByDiskCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
