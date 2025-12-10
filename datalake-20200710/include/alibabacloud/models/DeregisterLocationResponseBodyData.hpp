// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEREGISTERLOCATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DEREGISTERLOCATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StorageCollectTaskOperationResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DeregisterLocationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeregisterLocationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(StorageCollectTaskOperationResultList, storageCollectTaskOperationResultList_);
    };
    friend void from_json(const Darabonba::Json& j, DeregisterLocationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(StorageCollectTaskOperationResultList, storageCollectTaskOperationResultList_);
    };
    DeregisterLocationResponseBodyData() = default ;
    DeregisterLocationResponseBodyData(const DeregisterLocationResponseBodyData &) = default ;
    DeregisterLocationResponseBodyData(DeregisterLocationResponseBodyData &&) = default ;
    DeregisterLocationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeregisterLocationResponseBodyData() = default ;
    DeregisterLocationResponseBodyData& operator=(const DeregisterLocationResponseBodyData &) = default ;
    DeregisterLocationResponseBodyData& operator=(DeregisterLocationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->locationId_ == nullptr
        && return this->storageCollectTaskOperationResultList_ == nullptr; };
    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline DeregisterLocationResponseBodyData& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // storageCollectTaskOperationResultList Field Functions 
    bool hasStorageCollectTaskOperationResultList() const { return this->storageCollectTaskOperationResultList_ != nullptr;};
    void deleteStorageCollectTaskOperationResultList() { this->storageCollectTaskOperationResultList_ = nullptr;};
    inline const vector<Models::StorageCollectTaskOperationResult> & storageCollectTaskOperationResultList() const { DARABONBA_PTR_GET_CONST(storageCollectTaskOperationResultList_, vector<Models::StorageCollectTaskOperationResult>) };
    inline vector<Models::StorageCollectTaskOperationResult> storageCollectTaskOperationResultList() { DARABONBA_PTR_GET(storageCollectTaskOperationResultList_, vector<Models::StorageCollectTaskOperationResult>) };
    inline DeregisterLocationResponseBodyData& setStorageCollectTaskOperationResultList(const vector<Models::StorageCollectTaskOperationResult> & storageCollectTaskOperationResultList) { DARABONBA_PTR_SET_VALUE(storageCollectTaskOperationResultList_, storageCollectTaskOperationResultList) };
    inline DeregisterLocationResponseBodyData& setStorageCollectTaskOperationResultList(vector<Models::StorageCollectTaskOperationResult> && storageCollectTaskOperationResultList) { DARABONBA_PTR_SET_RVALUE(storageCollectTaskOperationResultList_, storageCollectTaskOperationResultList) };


  protected:
    // Location ID
    std::shared_ptr<string> locationId_ = nullptr;
    // The list of the collection tasks that are disabled.
    std::shared_ptr<vector<Models::StorageCollectTaskOperationResult>> storageCollectTaskOperationResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
