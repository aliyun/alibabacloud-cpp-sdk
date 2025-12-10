// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTEREDLOCATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTEREDLOCATIONRESPONSEBODYDATA_HPP_
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
  class UpdateRegisteredLocationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegisteredLocationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(StorageCollectTaskOperationResultList, storageCollectTaskOperationResultList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegisteredLocationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(StorageCollectTaskOperationResultList, storageCollectTaskOperationResultList_);
    };
    UpdateRegisteredLocationResponseBodyData() = default ;
    UpdateRegisteredLocationResponseBodyData(const UpdateRegisteredLocationResponseBodyData &) = default ;
    UpdateRegisteredLocationResponseBodyData(UpdateRegisteredLocationResponseBodyData &&) = default ;
    UpdateRegisteredLocationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegisteredLocationResponseBodyData() = default ;
    UpdateRegisteredLocationResponseBodyData& operator=(const UpdateRegisteredLocationResponseBodyData &) = default ;
    UpdateRegisteredLocationResponseBodyData& operator=(UpdateRegisteredLocationResponseBodyData &&) = default ;
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
    inline UpdateRegisteredLocationResponseBodyData& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // storageCollectTaskOperationResultList Field Functions 
    bool hasStorageCollectTaskOperationResultList() const { return this->storageCollectTaskOperationResultList_ != nullptr;};
    void deleteStorageCollectTaskOperationResultList() { this->storageCollectTaskOperationResultList_ = nullptr;};
    inline const vector<Models::StorageCollectTaskOperationResult> & storageCollectTaskOperationResultList() const { DARABONBA_PTR_GET_CONST(storageCollectTaskOperationResultList_, vector<Models::StorageCollectTaskOperationResult>) };
    inline vector<Models::StorageCollectTaskOperationResult> storageCollectTaskOperationResultList() { DARABONBA_PTR_GET(storageCollectTaskOperationResultList_, vector<Models::StorageCollectTaskOperationResult>) };
    inline UpdateRegisteredLocationResponseBodyData& setStorageCollectTaskOperationResultList(const vector<Models::StorageCollectTaskOperationResult> & storageCollectTaskOperationResultList) { DARABONBA_PTR_SET_VALUE(storageCollectTaskOperationResultList_, storageCollectTaskOperationResultList) };
    inline UpdateRegisteredLocationResponseBodyData& setStorageCollectTaskOperationResultList(vector<Models::StorageCollectTaskOperationResult> && storageCollectTaskOperationResultList) { DARABONBA_PTR_SET_RVALUE(storageCollectTaskOperationResultList_, storageCollectTaskOperationResultList) };


  protected:
    // Location ID
    std::shared_ptr<string> locationId_ = nullptr;
    // The list of collection tasks that are updated.
    std::shared_ptr<vector<Models::StorageCollectTaskOperationResult>> storageCollectTaskOperationResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
