// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAREVIEWTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAREVIEWTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListQuotaReviewTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaReviewTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaReviewTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListQuotaReviewTasksResponseBody() = default ;
    ListQuotaReviewTasksResponseBody(const ListQuotaReviewTasksResponseBody &) = default ;
    ListQuotaReviewTasksResponseBody(ListQuotaReviewTasksResponseBody &&) = default ;
    ListQuotaReviewTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaReviewTasksResponseBody() = default ;
    ListQuotaReviewTasksResponseBody& operator=(const ListQuotaReviewTasksResponseBody &) = default ;
    ListQuotaReviewTasksResponseBody& operator=(ListQuotaReviewTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->appGroupName_ == nullptr && this->appGroupType_ == nullptr && this->approved_ == nullptr && this->available_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->memo_ == nullptr && this->newComputeResource_ == nullptr && this->newSocSize_ == nullptr
        && this->newSpec_ == nullptr && this->oldComputeResource_ == nullptr && this->oldDocSize_ == nullptr && this->oldSpec_ == nullptr && this->pending_ == nullptr; };
      // appGroupId Field Functions 
      bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
      void deleteAppGroupId() { this->appGroupId_ = nullptr;};
      inline int32_t getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0) };
      inline Result& setAppGroupId(int32_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


      // appGroupName Field Functions 
      bool hasAppGroupName() const { return this->appGroupName_ != nullptr;};
      void deleteAppGroupName() { this->appGroupName_ = nullptr;};
      inline string getAppGroupName() const { DARABONBA_PTR_GET_DEFAULT(appGroupName_, "") };
      inline Result& setAppGroupName(string appGroupName) { DARABONBA_PTR_SET_VALUE(appGroupName_, appGroupName) };


      // appGroupType Field Functions 
      bool hasAppGroupType() const { return this->appGroupType_ != nullptr;};
      void deleteAppGroupType() { this->appGroupType_ = nullptr;};
      inline string getAppGroupType() const { DARABONBA_PTR_GET_DEFAULT(appGroupType_, "") };
      inline Result& setAppGroupType(string appGroupType) { DARABONBA_PTR_SET_VALUE(appGroupType_, appGroupType) };


      // approved Field Functions 
      bool hasApproved() const { return this->approved_ != nullptr;};
      void deleteApproved() { this->approved_ = nullptr;};
      inline bool getApproved() const { DARABONBA_PTR_GET_DEFAULT(approved_, false) };
      inline Result& setApproved(bool approved) { DARABONBA_PTR_SET_VALUE(approved_, approved) };


      // available Field Functions 
      bool hasAvailable() const { return this->available_ != nullptr;};
      void deleteAvailable() { this->available_ = nullptr;};
      inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
      inline Result& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Result& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // memo Field Functions 
      bool hasMemo() const { return this->memo_ != nullptr;};
      void deleteMemo() { this->memo_ = nullptr;};
      inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
      inline Result& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


      // newComputeResource Field Functions 
      bool hasNewComputeResource() const { return this->newComputeResource_ != nullptr;};
      void deleteNewComputeResource() { this->newComputeResource_ = nullptr;};
      inline int32_t getNewComputeResource() const { DARABONBA_PTR_GET_DEFAULT(newComputeResource_, 0) };
      inline Result& setNewComputeResource(int32_t newComputeResource) { DARABONBA_PTR_SET_VALUE(newComputeResource_, newComputeResource) };


      // newSocSize Field Functions 
      bool hasNewSocSize() const { return this->newSocSize_ != nullptr;};
      void deleteNewSocSize() { this->newSocSize_ = nullptr;};
      inline int32_t getNewSocSize() const { DARABONBA_PTR_GET_DEFAULT(newSocSize_, 0) };
      inline Result& setNewSocSize(int32_t newSocSize) { DARABONBA_PTR_SET_VALUE(newSocSize_, newSocSize) };


      // newSpec Field Functions 
      bool hasNewSpec() const { return this->newSpec_ != nullptr;};
      void deleteNewSpec() { this->newSpec_ = nullptr;};
      inline string getNewSpec() const { DARABONBA_PTR_GET_DEFAULT(newSpec_, "") };
      inline Result& setNewSpec(string newSpec) { DARABONBA_PTR_SET_VALUE(newSpec_, newSpec) };


      // oldComputeResource Field Functions 
      bool hasOldComputeResource() const { return this->oldComputeResource_ != nullptr;};
      void deleteOldComputeResource() { this->oldComputeResource_ = nullptr;};
      inline int32_t getOldComputeResource() const { DARABONBA_PTR_GET_DEFAULT(oldComputeResource_, 0) };
      inline Result& setOldComputeResource(int32_t oldComputeResource) { DARABONBA_PTR_SET_VALUE(oldComputeResource_, oldComputeResource) };


      // oldDocSize Field Functions 
      bool hasOldDocSize() const { return this->oldDocSize_ != nullptr;};
      void deleteOldDocSize() { this->oldDocSize_ = nullptr;};
      inline int32_t getOldDocSize() const { DARABONBA_PTR_GET_DEFAULT(oldDocSize_, 0) };
      inline Result& setOldDocSize(int32_t oldDocSize) { DARABONBA_PTR_SET_VALUE(oldDocSize_, oldDocSize) };


      // oldSpec Field Functions 
      bool hasOldSpec() const { return this->oldSpec_ != nullptr;};
      void deleteOldSpec() { this->oldSpec_ = nullptr;};
      inline string getOldSpec() const { DARABONBA_PTR_GET_DEFAULT(oldSpec_, "") };
      inline Result& setOldSpec(string oldSpec) { DARABONBA_PTR_SET_VALUE(oldSpec_, oldSpec) };


      // pending Field Functions 
      bool hasPending() const { return this->pending_ != nullptr;};
      void deletePending() { this->pending_ = nullptr;};
      inline bool getPending() const { DARABONBA_PTR_GET_DEFAULT(pending_, false) };
      inline Result& setPending(bool pending) { DARABONBA_PTR_SET_VALUE(pending_, pending) };


    protected:
      // The application ID.
      shared_ptr<int32_t> appGroupId_ {};
      // The application name.
      shared_ptr<string> appGroupName_ {};
      // The application type.
      shared_ptr<string> appGroupType_ {};
      // Indicates whether the ticket is approved.
      shared_ptr<bool> approved_ {};
      // Indicates whether the application is available.
      shared_ptr<bool> available_ {};
      // The time when the ticket was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the ticket was last updated.
      shared_ptr<string> gmtModified_ {};
      // The ticket ID.
      shared_ptr<int32_t> id_ {};
      // The remarks.
      shared_ptr<string> memo_ {};
      // The computing resource quota that is applied for.
      shared_ptr<int32_t> newComputeResource_ {};
      // The storage capacity quota that is applied for.
      shared_ptr<int32_t> newSocSize_ {};
      // The application specifications that are applied for.
      shared_ptr<string> newSpec_ {};
      // The original quota of computing resources.
      shared_ptr<int32_t> oldComputeResource_ {};
      // The original quota of storage capacity.
      shared_ptr<int32_t> oldDocSize_ {};
      // The original specifications of the application.
      shared_ptr<string> oldSpec_ {};
      // Indicates whether the ticket is pending.
      shared_ptr<bool> pending_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaReviewTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListQuotaReviewTasksResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListQuotaReviewTasksResponseBody::Result>) };
    inline vector<ListQuotaReviewTasksResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListQuotaReviewTasksResponseBody::Result>) };
    inline ListQuotaReviewTasksResponseBody& setResult(const vector<ListQuotaReviewTasksResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListQuotaReviewTasksResponseBody& setResult(vector<ListQuotaReviewTasksResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQuotaReviewTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the tickets. For more information, see [QuotaReviewTask](https://help.aliyun.com/document_detail/173609.html).
    shared_ptr<vector<ListQuotaReviewTasksResponseBody::Result>> result_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
