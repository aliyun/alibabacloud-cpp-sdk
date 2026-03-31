// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPATCHSTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPATCHSTATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInstancePatchStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePatchStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstancePatchStates, instancePatchStates_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePatchStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancePatchStates, instancePatchStates_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancePatchStatesResponseBody() = default ;
    ListInstancePatchStatesResponseBody(const ListInstancePatchStatesResponseBody &) = default ;
    ListInstancePatchStatesResponseBody(ListInstancePatchStatesResponseBody &&) = default ;
    ListInstancePatchStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePatchStatesResponseBody() = default ;
    ListInstancePatchStatesResponseBody& operator=(const ListInstancePatchStatesResponseBody &) = default ;
    ListInstancePatchStatesResponseBody& operator=(ListInstancePatchStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstancePatchStates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstancePatchStates& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(InstalledCount, installedCount_);
        DARABONBA_PTR_TO_JSON(InstalledOtherCount, installedOtherCount_);
        DARABONBA_PTR_TO_JSON(InstalledPendingRebootCount, installedPendingRebootCount_);
        DARABONBA_PTR_TO_JSON(InstalledRejectedCount, installedRejectedCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MissingCount, missingCount_);
        DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
        DARABONBA_PTR_TO_JSON(OperationStartTime, operationStartTime_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(OwnerInformation, ownerInformation_);
        DARABONBA_PTR_TO_JSON(PatchGroup, patchGroup_);
      };
      friend void from_json(const Darabonba::Json& j, InstancePatchStates& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(InstalledCount, installedCount_);
        DARABONBA_PTR_FROM_JSON(InstalledOtherCount, installedOtherCount_);
        DARABONBA_PTR_FROM_JSON(InstalledPendingRebootCount, installedPendingRebootCount_);
        DARABONBA_PTR_FROM_JSON(InstalledRejectedCount, installedRejectedCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MissingCount, missingCount_);
        DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
        DARABONBA_PTR_FROM_JSON(OperationStartTime, operationStartTime_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(OwnerInformation, ownerInformation_);
        DARABONBA_PTR_FROM_JSON(PatchGroup, patchGroup_);
      };
      InstancePatchStates() = default ;
      InstancePatchStates(const InstancePatchStates &) = default ;
      InstancePatchStates(InstancePatchStates &&) = default ;
      InstancePatchStates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstancePatchStates() = default ;
      InstancePatchStates& operator=(const InstancePatchStates &) = default ;
      InstancePatchStates& operator=(InstancePatchStates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->failedCount_ == nullptr && this->installedCount_ == nullptr && this->installedOtherCount_ == nullptr && this->installedPendingRebootCount_ == nullptr && this->installedRejectedCount_ == nullptr
        && this->instanceId_ == nullptr && this->missingCount_ == nullptr && this->operationEndTime_ == nullptr && this->operationStartTime_ == nullptr && this->operationType_ == nullptr
        && this->ownerInformation_ == nullptr && this->patchGroup_ == nullptr; };
      // baselineId Field Functions 
      bool hasBaselineId() const { return this->baselineId_ != nullptr;};
      void deleteBaselineId() { this->baselineId_ = nullptr;};
      inline string getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
      inline InstancePatchStates& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline string getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, "") };
      inline InstancePatchStates& setFailedCount(string failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // installedCount Field Functions 
      bool hasInstalledCount() const { return this->installedCount_ != nullptr;};
      void deleteInstalledCount() { this->installedCount_ = nullptr;};
      inline string getInstalledCount() const { DARABONBA_PTR_GET_DEFAULT(installedCount_, "") };
      inline InstancePatchStates& setInstalledCount(string installedCount) { DARABONBA_PTR_SET_VALUE(installedCount_, installedCount) };


      // installedOtherCount Field Functions 
      bool hasInstalledOtherCount() const { return this->installedOtherCount_ != nullptr;};
      void deleteInstalledOtherCount() { this->installedOtherCount_ = nullptr;};
      inline string getInstalledOtherCount() const { DARABONBA_PTR_GET_DEFAULT(installedOtherCount_, "") };
      inline InstancePatchStates& setInstalledOtherCount(string installedOtherCount) { DARABONBA_PTR_SET_VALUE(installedOtherCount_, installedOtherCount) };


      // installedPendingRebootCount Field Functions 
      bool hasInstalledPendingRebootCount() const { return this->installedPendingRebootCount_ != nullptr;};
      void deleteInstalledPendingRebootCount() { this->installedPendingRebootCount_ = nullptr;};
      inline string getInstalledPendingRebootCount() const { DARABONBA_PTR_GET_DEFAULT(installedPendingRebootCount_, "") };
      inline InstancePatchStates& setInstalledPendingRebootCount(string installedPendingRebootCount) { DARABONBA_PTR_SET_VALUE(installedPendingRebootCount_, installedPendingRebootCount) };


      // installedRejectedCount Field Functions 
      bool hasInstalledRejectedCount() const { return this->installedRejectedCount_ != nullptr;};
      void deleteInstalledRejectedCount() { this->installedRejectedCount_ = nullptr;};
      inline string getInstalledRejectedCount() const { DARABONBA_PTR_GET_DEFAULT(installedRejectedCount_, "") };
      inline InstancePatchStates& setInstalledRejectedCount(string installedRejectedCount) { DARABONBA_PTR_SET_VALUE(installedRejectedCount_, installedRejectedCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstancePatchStates& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // missingCount Field Functions 
      bool hasMissingCount() const { return this->missingCount_ != nullptr;};
      void deleteMissingCount() { this->missingCount_ = nullptr;};
      inline string getMissingCount() const { DARABONBA_PTR_GET_DEFAULT(missingCount_, "") };
      inline InstancePatchStates& setMissingCount(string missingCount) { DARABONBA_PTR_SET_VALUE(missingCount_, missingCount) };


      // operationEndTime Field Functions 
      bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
      void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
      inline string getOperationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
      inline InstancePatchStates& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


      // operationStartTime Field Functions 
      bool hasOperationStartTime() const { return this->operationStartTime_ != nullptr;};
      void deleteOperationStartTime() { this->operationStartTime_ = nullptr;};
      inline string getOperationStartTime() const { DARABONBA_PTR_GET_DEFAULT(operationStartTime_, "") };
      inline InstancePatchStates& setOperationStartTime(string operationStartTime) { DARABONBA_PTR_SET_VALUE(operationStartTime_, operationStartTime) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline InstancePatchStates& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // ownerInformation Field Functions 
      bool hasOwnerInformation() const { return this->ownerInformation_ != nullptr;};
      void deleteOwnerInformation() { this->ownerInformation_ = nullptr;};
      inline string getOwnerInformation() const { DARABONBA_PTR_GET_DEFAULT(ownerInformation_, "") };
      inline InstancePatchStates& setOwnerInformation(string ownerInformation) { DARABONBA_PTR_SET_VALUE(ownerInformation_, ownerInformation) };


      // patchGroup Field Functions 
      bool hasPatchGroup() const { return this->patchGroup_ != nullptr;};
      void deletePatchGroup() { this->patchGroup_ = nullptr;};
      inline string getPatchGroup() const { DARABONBA_PTR_GET_DEFAULT(patchGroup_, "") };
      inline InstancePatchStates& setPatchGroup(string patchGroup) { DARABONBA_PTR_SET_VALUE(patchGroup_, patchGroup) };


    protected:
      // The ID of the patch baseline.
      shared_ptr<string> baselineId_ {};
      // The number of patches that failed to be installed.
      shared_ptr<string> failedCount_ {};
      // The number of installed patches.
      shared_ptr<string> installedCount_ {};
      // The number of patches that do not meet the baseline.
      shared_ptr<string> installedOtherCount_ {};
      // The number of patches that have been installed but require a restart to take effect.
      shared_ptr<string> installedPendingRebootCount_ {};
      // The number of patches that are rejected by the user.
      shared_ptr<string> installedRejectedCount_ {};
      // The ID of the ECS instance.
      shared_ptr<string> instanceId_ {};
      // The number of patches that are not installed.
      shared_ptr<string> missingCount_ {};
      // The time when the operation ended.
      shared_ptr<string> operationEndTime_ {};
      // The time when the operation was initiated.
      shared_ptr<string> operationStartTime_ {};
      // The operation type.
      shared_ptr<string> operationType_ {};
      // The information about the user.
      shared_ptr<string> ownerInformation_ {};
      // The patch group.
      shared_ptr<string> patchGroup_ {};
    };

    virtual bool empty() const override { return this->instancePatchStates_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // instancePatchStates Field Functions 
    bool hasInstancePatchStates() const { return this->instancePatchStates_ != nullptr;};
    void deleteInstancePatchStates() { this->instancePatchStates_ = nullptr;};
    inline const vector<ListInstancePatchStatesResponseBody::InstancePatchStates> & getInstancePatchStates() const { DARABONBA_PTR_GET_CONST(instancePatchStates_, vector<ListInstancePatchStatesResponseBody::InstancePatchStates>) };
    inline vector<ListInstancePatchStatesResponseBody::InstancePatchStates> getInstancePatchStates() { DARABONBA_PTR_GET(instancePatchStates_, vector<ListInstancePatchStatesResponseBody::InstancePatchStates>) };
    inline ListInstancePatchStatesResponseBody& setInstancePatchStates(const vector<ListInstancePatchStatesResponseBody::InstancePatchStates> & instancePatchStates) { DARABONBA_PTR_SET_VALUE(instancePatchStates_, instancePatchStates) };
    inline ListInstancePatchStatesResponseBody& setInstancePatchStates(vector<ListInstancePatchStatesResponseBody::InstancePatchStates> && instancePatchStates) { DARABONBA_PTR_SET_RVALUE(instancePatchStates_, instancePatchStates) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstancePatchStatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstancePatchStatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancePatchStatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of patches of the instance.
    shared_ptr<vector<ListInstancePatchStatesResponseBody::InstancePatchStates>> instancePatchStates_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
