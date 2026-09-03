// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class ListSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTimeEnd, completeTimeEnd_);
      DARABONBA_PTR_TO_JSON(CompleteTimeStart, completeTimeStart_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(ProtectedResourceId, protectedResourceId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTimeEnd, completeTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CompleteTimeStart, completeTimeStart_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(ProtectedResourceId, protectedResourceId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    ListSnapshotsRequest() = default ;
    ListSnapshotsRequest(const ListSnapshotsRequest &) = default ;
    ListSnapshotsRequest(ListSnapshotsRequest &&) = default ;
    ListSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsRequest() = default ;
    ListSnapshotsRequest& operator=(const ListSnapshotsRequest &) = default ;
    ListSnapshotsRequest& operator=(ListSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTimeEnd_ == nullptr
        && this->completeTimeStart_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->planId_ == nullptr && this->protectedResourceId_ == nullptr
        && this->skip_ == nullptr && this->sourceType_ == nullptr && this->vaultId_ == nullptr; };
    // completeTimeEnd Field Functions 
    bool hasCompleteTimeEnd() const { return this->completeTimeEnd_ != nullptr;};
    void deleteCompleteTimeEnd() { this->completeTimeEnd_ = nullptr;};
    inline int64_t getCompleteTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(completeTimeEnd_, 0L) };
    inline ListSnapshotsRequest& setCompleteTimeEnd(int64_t completeTimeEnd) { DARABONBA_PTR_SET_VALUE(completeTimeEnd_, completeTimeEnd) };


    // completeTimeStart Field Functions 
    bool hasCompleteTimeStart() const { return this->completeTimeStart_ != nullptr;};
    void deleteCompleteTimeStart() { this->completeTimeStart_ = nullptr;};
    inline int64_t getCompleteTimeStart() const { DARABONBA_PTR_GET_DEFAULT(completeTimeStart_, 0L) };
    inline ListSnapshotsRequest& setCompleteTimeStart(int64_t completeTimeStart) { DARABONBA_PTR_SET_VALUE(completeTimeStart_, completeTimeStart) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSnapshotsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSnapshotsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ListSnapshotsRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // protectedResourceId Field Functions 
    bool hasProtectedResourceId() const { return this->protectedResourceId_ != nullptr;};
    void deleteProtectedResourceId() { this->protectedResourceId_ = nullptr;};
    inline string getProtectedResourceId() const { DARABONBA_PTR_GET_DEFAULT(protectedResourceId_, "") };
    inline ListSnapshotsRequest& setProtectedResourceId(string protectedResourceId) { DARABONBA_PTR_SET_VALUE(protectedResourceId_, protectedResourceId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListSnapshotsRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListSnapshotsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline ListSnapshotsRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The end completion time. A UNIX timestamp, in seconds. Only backup points with a completion time earlier than this value are returned.
    shared_ptr<int64_t> completeTimeEnd_ {};
    // The start completion time. A UNIX timestamp, in seconds. Only backup points with a completion time greater than or equal to this value are returned.
    shared_ptr<int64_t> completeTimeStart_ {};
    // The maximum number of results to return in a paged query. Default value: 10. The value must be greater than 1.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. You do not need to specify this parameter for the first request. For subsequent pages, pass in the **NextToken** value returned from the previous request. An empty **NextToken** indicates that no more pages are available. This parameter cannot be used together with **Skip**.
    shared_ptr<string> nextToken_ {};
    // The backup plan ID. This is an optional filter condition. If specified, only backup points under the specified backup plan are returned.
    shared_ptr<string> planId_ {};
    // The ID of the protected resource. The protected resource must exist, and its data source type must match the **SourceType** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> protectedResourceId_ {};
    // The number of entries to skip. The value must be a non-negative integer and a multiple of **MaxResults**. This parameter cannot be used together with **NextToken**.
    shared_ptr<int32_t> skip_ {};
    // The data source type. The value must match the data source type of the protected resource (ProtectedResourceId). The supported data source types are listed in the valid values.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // The vault ID. This is an optional filter condition. If specified, only backup points in the specified vault are returned.
    shared_ptr<string> vaultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
