// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNARCHIVEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_UNARCHIVEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UnarchiveDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnarchiveDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ApiCallTimes, apiCallTimes_);
      DARABONBA_PTR_TO_JSON(Cost, cost_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(UnarchiveTaskStatus, unarchiveTaskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UnarchiveDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiCallTimes, apiCallTimes_);
      DARABONBA_PTR_FROM_JSON(Cost, cost_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(UnarchiveTaskStatus, unarchiveTaskStatus_);
    };
    UnarchiveDetail() = default ;
    UnarchiveDetail(const UnarchiveDetail &) = default ;
    UnarchiveDetail(UnarchiveDetail &&) = default ;
    UnarchiveDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnarchiveDetail() = default ;
    UnarchiveDetail& operator=(const UnarchiveDetail &) = default ;
    UnarchiveDetail& operator=(UnarchiveDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiCallTimes_ == nullptr
        && return this->cost_ == nullptr && return this->storageSize_ == nullptr && return this->storageType_ == nullptr && return this->unarchiveTaskStatus_ == nullptr; };
    // apiCallTimes Field Functions 
    bool hasApiCallTimes() const { return this->apiCallTimes_ != nullptr;};
    void deleteApiCallTimes() { this->apiCallTimes_ = nullptr;};
    inline int64_t apiCallTimes() const { DARABONBA_PTR_GET_DEFAULT(apiCallTimes_, 0L) };
    inline UnarchiveDetail& setApiCallTimes(int64_t apiCallTimes) { DARABONBA_PTR_SET_VALUE(apiCallTimes_, apiCallTimes) };


    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline UnarchiveDetail& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline UnarchiveDetail& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline UnarchiveDetail& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // unarchiveTaskStatus Field Functions 
    bool hasUnarchiveTaskStatus() const { return this->unarchiveTaskStatus_ != nullptr;};
    void deleteUnarchiveTaskStatus() { this->unarchiveTaskStatus_ = nullptr;};
    inline string unarchiveTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(unarchiveTaskStatus_, "") };
    inline UnarchiveDetail& setUnarchiveTaskStatus(string unarchiveTaskStatus) { DARABONBA_PTR_SET_VALUE(unarchiveTaskStatus_, unarchiveTaskStatus) };


  protected:
    std::shared_ptr<int64_t> apiCallTimes_ = nullptr;
    std::shared_ptr<int64_t> cost_ = nullptr;
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<string> unarchiveTaskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
