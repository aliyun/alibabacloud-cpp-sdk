// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERLOCATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REGISTERLOCATIONRESPONSEBODYDATA_HPP_
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
  class RegisterLocationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterLocationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(StorageCollectTaskOperationResultList, storageCollectTaskOperationResultList_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterLocationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(StorageCollectTaskOperationResultList, storageCollectTaskOperationResultList_);
    };
    RegisterLocationResponseBodyData() = default ;
    RegisterLocationResponseBodyData(const RegisterLocationResponseBodyData &) = default ;
    RegisterLocationResponseBodyData(RegisterLocationResponseBodyData &&) = default ;
    RegisterLocationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterLocationResponseBodyData() = default ;
    RegisterLocationResponseBodyData& operator=(const RegisterLocationResponseBodyData &) = default ;
    RegisterLocationResponseBodyData& operator=(RegisterLocationResponseBodyData &&) = default ;
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
    inline RegisterLocationResponseBodyData& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // storageCollectTaskOperationResultList Field Functions 
    bool hasStorageCollectTaskOperationResultList() const { return this->storageCollectTaskOperationResultList_ != nullptr;};
    void deleteStorageCollectTaskOperationResultList() { this->storageCollectTaskOperationResultList_ = nullptr;};
    inline const vector<Models::StorageCollectTaskOperationResult> & storageCollectTaskOperationResultList() const { DARABONBA_PTR_GET_CONST(storageCollectTaskOperationResultList_, vector<Models::StorageCollectTaskOperationResult>) };
    inline vector<Models::StorageCollectTaskOperationResult> storageCollectTaskOperationResultList() { DARABONBA_PTR_GET(storageCollectTaskOperationResultList_, vector<Models::StorageCollectTaskOperationResult>) };
    inline RegisterLocationResponseBodyData& setStorageCollectTaskOperationResultList(const vector<Models::StorageCollectTaskOperationResult> & storageCollectTaskOperationResultList) { DARABONBA_PTR_SET_VALUE(storageCollectTaskOperationResultList_, storageCollectTaskOperationResultList) };
    inline RegisterLocationResponseBodyData& setStorageCollectTaskOperationResultList(vector<Models::StorageCollectTaskOperationResult> && storageCollectTaskOperationResultList) { DARABONBA_PTR_SET_RVALUE(storageCollectTaskOperationResultList_, storageCollectTaskOperationResultList) };


  protected:
    // Location ID
    std::shared_ptr<string> locationId_ = nullptr;
    // The list of collection tasks that are enabled.
    std::shared_ptr<vector<Models::StorageCollectTaskOperationResult>> storageCollectTaskOperationResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
