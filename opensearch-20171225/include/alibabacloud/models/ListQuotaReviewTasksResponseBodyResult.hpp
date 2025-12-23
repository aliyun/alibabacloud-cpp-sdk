// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAREVIEWTASKSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAREVIEWTASKSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListQuotaReviewTasksResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaReviewTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(appGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(appGroupName, appGroupName_);
      DARABONBA_PTR_TO_JSON(appGroupType, appGroupType_);
      DARABONBA_PTR_TO_JSON(approved, approved_);
      DARABONBA_PTR_TO_JSON(available, available_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(newComputeResource, newComputeResource_);
      DARABONBA_PTR_TO_JSON(newSocSize, newSocSize_);
      DARABONBA_PTR_TO_JSON(newSpec, newSpec_);
      DARABONBA_PTR_TO_JSON(oldComputeResource, oldComputeResource_);
      DARABONBA_PTR_TO_JSON(oldDocSize, oldDocSize_);
      DARABONBA_PTR_TO_JSON(oldSpec, oldSpec_);
      DARABONBA_PTR_TO_JSON(pending, pending_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaReviewTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(appGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(appGroupName, appGroupName_);
      DARABONBA_PTR_FROM_JSON(appGroupType, appGroupType_);
      DARABONBA_PTR_FROM_JSON(approved, approved_);
      DARABONBA_PTR_FROM_JSON(available, available_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(newComputeResource, newComputeResource_);
      DARABONBA_PTR_FROM_JSON(newSocSize, newSocSize_);
      DARABONBA_PTR_FROM_JSON(newSpec, newSpec_);
      DARABONBA_PTR_FROM_JSON(oldComputeResource, oldComputeResource_);
      DARABONBA_PTR_FROM_JSON(oldDocSize, oldDocSize_);
      DARABONBA_PTR_FROM_JSON(oldSpec, oldSpec_);
      DARABONBA_PTR_FROM_JSON(pending, pending_);
    };
    ListQuotaReviewTasksResponseBodyResult() = default ;
    ListQuotaReviewTasksResponseBodyResult(const ListQuotaReviewTasksResponseBodyResult &) = default ;
    ListQuotaReviewTasksResponseBodyResult(ListQuotaReviewTasksResponseBodyResult &&) = default ;
    ListQuotaReviewTasksResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaReviewTasksResponseBodyResult() = default ;
    ListQuotaReviewTasksResponseBodyResult& operator=(const ListQuotaReviewTasksResponseBodyResult &) = default ;
    ListQuotaReviewTasksResponseBodyResult& operator=(ListQuotaReviewTasksResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && return this->appGroupName_ == nullptr && return this->appGroupType_ == nullptr && return this->approved_ == nullptr && return this->available_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->memo_ == nullptr && return this->newComputeResource_ == nullptr && return this->newSocSize_ == nullptr
        && return this->newSpec_ == nullptr && return this->oldComputeResource_ == nullptr && return this->oldDocSize_ == nullptr && return this->oldSpec_ == nullptr && return this->pending_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int32_t appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0) };
    inline ListQuotaReviewTasksResponseBodyResult& setAppGroupId(int32_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appGroupName Field Functions 
    bool hasAppGroupName() const { return this->appGroupName_ != nullptr;};
    void deleteAppGroupName() { this->appGroupName_ = nullptr;};
    inline string appGroupName() const { DARABONBA_PTR_GET_DEFAULT(appGroupName_, "") };
    inline ListQuotaReviewTasksResponseBodyResult& setAppGroupName(string appGroupName) { DARABONBA_PTR_SET_VALUE(appGroupName_, appGroupName) };


    // appGroupType Field Functions 
    bool hasAppGroupType() const { return this->appGroupType_ != nullptr;};
    void deleteAppGroupType() { this->appGroupType_ = nullptr;};
    inline string appGroupType() const { DARABONBA_PTR_GET_DEFAULT(appGroupType_, "") };
    inline ListQuotaReviewTasksResponseBodyResult& setAppGroupType(string appGroupType) { DARABONBA_PTR_SET_VALUE(appGroupType_, appGroupType) };


    // approved Field Functions 
    bool hasApproved() const { return this->approved_ != nullptr;};
    void deleteApproved() { this->approved_ = nullptr;};
    inline bool approved() const { DARABONBA_PTR_GET_DEFAULT(approved_, false) };
    inline ListQuotaReviewTasksResponseBodyResult& setApproved(bool approved) { DARABONBA_PTR_SET_VALUE(approved_, approved) };


    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline bool available() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
    inline ListQuotaReviewTasksResponseBodyResult& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListQuotaReviewTasksResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListQuotaReviewTasksResponseBodyResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListQuotaReviewTasksResponseBodyResult& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ListQuotaReviewTasksResponseBodyResult& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // newComputeResource Field Functions 
    bool hasNewComputeResource() const { return this->newComputeResource_ != nullptr;};
    void deleteNewComputeResource() { this->newComputeResource_ = nullptr;};
    inline int32_t newComputeResource() const { DARABONBA_PTR_GET_DEFAULT(newComputeResource_, 0) };
    inline ListQuotaReviewTasksResponseBodyResult& setNewComputeResource(int32_t newComputeResource) { DARABONBA_PTR_SET_VALUE(newComputeResource_, newComputeResource) };


    // newSocSize Field Functions 
    bool hasNewSocSize() const { return this->newSocSize_ != nullptr;};
    void deleteNewSocSize() { this->newSocSize_ = nullptr;};
    inline int32_t newSocSize() const { DARABONBA_PTR_GET_DEFAULT(newSocSize_, 0) };
    inline ListQuotaReviewTasksResponseBodyResult& setNewSocSize(int32_t newSocSize) { DARABONBA_PTR_SET_VALUE(newSocSize_, newSocSize) };


    // newSpec Field Functions 
    bool hasNewSpec() const { return this->newSpec_ != nullptr;};
    void deleteNewSpec() { this->newSpec_ = nullptr;};
    inline string newSpec() const { DARABONBA_PTR_GET_DEFAULT(newSpec_, "") };
    inline ListQuotaReviewTasksResponseBodyResult& setNewSpec(string newSpec) { DARABONBA_PTR_SET_VALUE(newSpec_, newSpec) };


    // oldComputeResource Field Functions 
    bool hasOldComputeResource() const { return this->oldComputeResource_ != nullptr;};
    void deleteOldComputeResource() { this->oldComputeResource_ = nullptr;};
    inline int32_t oldComputeResource() const { DARABONBA_PTR_GET_DEFAULT(oldComputeResource_, 0) };
    inline ListQuotaReviewTasksResponseBodyResult& setOldComputeResource(int32_t oldComputeResource) { DARABONBA_PTR_SET_VALUE(oldComputeResource_, oldComputeResource) };


    // oldDocSize Field Functions 
    bool hasOldDocSize() const { return this->oldDocSize_ != nullptr;};
    void deleteOldDocSize() { this->oldDocSize_ = nullptr;};
    inline int32_t oldDocSize() const { DARABONBA_PTR_GET_DEFAULT(oldDocSize_, 0) };
    inline ListQuotaReviewTasksResponseBodyResult& setOldDocSize(int32_t oldDocSize) { DARABONBA_PTR_SET_VALUE(oldDocSize_, oldDocSize) };


    // oldSpec Field Functions 
    bool hasOldSpec() const { return this->oldSpec_ != nullptr;};
    void deleteOldSpec() { this->oldSpec_ = nullptr;};
    inline string oldSpec() const { DARABONBA_PTR_GET_DEFAULT(oldSpec_, "") };
    inline ListQuotaReviewTasksResponseBodyResult& setOldSpec(string oldSpec) { DARABONBA_PTR_SET_VALUE(oldSpec_, oldSpec) };


    // pending Field Functions 
    bool hasPending() const { return this->pending_ != nullptr;};
    void deletePending() { this->pending_ = nullptr;};
    inline bool pending() const { DARABONBA_PTR_GET_DEFAULT(pending_, false) };
    inline ListQuotaReviewTasksResponseBodyResult& setPending(bool pending) { DARABONBA_PTR_SET_VALUE(pending_, pending) };


  protected:
    // The application ID.
    std::shared_ptr<int32_t> appGroupId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appGroupName_ = nullptr;
    // The application type.
    std::shared_ptr<string> appGroupType_ = nullptr;
    // Indicates whether the ticket is approved.
    std::shared_ptr<bool> approved_ = nullptr;
    // Indicates whether the application is available.
    std::shared_ptr<bool> available_ = nullptr;
    // The time when the ticket was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the ticket was last updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ticket ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The remarks.
    std::shared_ptr<string> memo_ = nullptr;
    // The computing resource quota that is applied for.
    std::shared_ptr<int32_t> newComputeResource_ = nullptr;
    // The storage capacity quota that is applied for.
    std::shared_ptr<int32_t> newSocSize_ = nullptr;
    // The application specifications that are applied for.
    std::shared_ptr<string> newSpec_ = nullptr;
    // The original quota of computing resources.
    std::shared_ptr<int32_t> oldComputeResource_ = nullptr;
    // The original quota of storage capacity.
    std::shared_ptr<int32_t> oldDocSize_ = nullptr;
    // The original specifications of the application.
    std::shared_ptr<string> oldSpec_ = nullptr;
    // Indicates whether the ticket is pending.
    std::shared_ptr<bool> pending_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
