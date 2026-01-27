// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICAGROUPDRILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICAGROUPDRILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeReplicaGroupDrillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicaGroupDrillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Drills, drills_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicaGroupDrillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Drills, drills_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeReplicaGroupDrillsResponseBody() = default ;
    DescribeReplicaGroupDrillsResponseBody(const DescribeReplicaGroupDrillsResponseBody &) = default ;
    DescribeReplicaGroupDrillsResponseBody(DescribeReplicaGroupDrillsResponseBody &&) = default ;
    DescribeReplicaGroupDrillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicaGroupDrillsResponseBody() = default ;
    DescribeReplicaGroupDrillsResponseBody& operator=(const DescribeReplicaGroupDrillsResponseBody &) = default ;
    DescribeReplicaGroupDrillsResponseBody& operator=(DescribeReplicaGroupDrillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Drills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Drills& obj) { 
        DARABONBA_PTR_TO_JSON(DrillId, drillId_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(PairsInfo, pairsInfo_);
        DARABONBA_PTR_TO_JSON(RecoverPoint, recoverPoint_);
        DARABONBA_PTR_TO_JSON(StartAt, startAt_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      };
      friend void from_json(const Darabonba::Json& j, Drills& obj) { 
        DARABONBA_PTR_FROM_JSON(DrillId, drillId_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(PairsInfo, pairsInfo_);
        DARABONBA_PTR_FROM_JSON(RecoverPoint, recoverPoint_);
        DARABONBA_PTR_FROM_JSON(StartAt, startAt_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      };
      Drills() = default ;
      Drills(const Drills &) = default ;
      Drills(Drills &&) = default ;
      Drills(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Drills() = default ;
      Drills& operator=(const Drills &) = default ;
      Drills& operator=(Drills &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PairsInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PairsInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DrillDiskId, drillDiskId_);
          DARABONBA_PTR_TO_JSON(DrillDiskStatus, drillDiskStatus_);
          DARABONBA_PTR_TO_JSON(PairId, pairId_);
        };
        friend void from_json(const Darabonba::Json& j, PairsInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DrillDiskId, drillDiskId_);
          DARABONBA_PTR_FROM_JSON(DrillDiskStatus, drillDiskStatus_);
          DARABONBA_PTR_FROM_JSON(PairId, pairId_);
        };
        PairsInfo() = default ;
        PairsInfo(const PairsInfo &) = default ;
        PairsInfo(PairsInfo &&) = default ;
        PairsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PairsInfo() = default ;
        PairsInfo& operator=(const PairsInfo &) = default ;
        PairsInfo& operator=(PairsInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->drillDiskId_ == nullptr
        && this->drillDiskStatus_ == nullptr && this->pairId_ == nullptr; };
        // drillDiskId Field Functions 
        bool hasDrillDiskId() const { return this->drillDiskId_ != nullptr;};
        void deleteDrillDiskId() { this->drillDiskId_ = nullptr;};
        inline string getDrillDiskId() const { DARABONBA_PTR_GET_DEFAULT(drillDiskId_, "") };
        inline PairsInfo& setDrillDiskId(string drillDiskId) { DARABONBA_PTR_SET_VALUE(drillDiskId_, drillDiskId) };


        // drillDiskStatus Field Functions 
        bool hasDrillDiskStatus() const { return this->drillDiskStatus_ != nullptr;};
        void deleteDrillDiskStatus() { this->drillDiskStatus_ = nullptr;};
        inline string getDrillDiskStatus() const { DARABONBA_PTR_GET_DEFAULT(drillDiskStatus_, "") };
        inline PairsInfo& setDrillDiskStatus(string drillDiskStatus) { DARABONBA_PTR_SET_VALUE(drillDiskStatus_, drillDiskStatus) };


        // pairId Field Functions 
        bool hasPairId() const { return this->pairId_ != nullptr;};
        void deletePairId() { this->pairId_ = nullptr;};
        inline string getPairId() const { DARABONBA_PTR_GET_DEFAULT(pairId_, "") };
        inline PairsInfo& setPairId(string pairId) { DARABONBA_PTR_SET_VALUE(pairId_, pairId) };


      protected:
        // The ID of the drill disk.
        shared_ptr<string> drillDiskId_ {};
        // The status of the drill disk. Valid values:
        // 
        // *   created
        // *   deleted
        // *   creating
        // *   deleting
        // 
        // >  This parameter can also display error code details if your drill disk fails to be created or deleted.
        shared_ptr<string> drillDiskStatus_ {};
        // The ID of the replication pair.
        shared_ptr<string> pairId_ {};
      };

      virtual bool empty() const override { return this->drillId_ == nullptr
        && this->groupId_ == nullptr && this->pairsInfo_ == nullptr && this->recoverPoint_ == nullptr && this->startAt_ == nullptr && this->status_ == nullptr
        && this->statusMessage_ == nullptr; };
      // drillId Field Functions 
      bool hasDrillId() const { return this->drillId_ != nullptr;};
      void deleteDrillId() { this->drillId_ = nullptr;};
      inline string getDrillId() const { DARABONBA_PTR_GET_DEFAULT(drillId_, "") };
      inline Drills& setDrillId(string drillId) { DARABONBA_PTR_SET_VALUE(drillId_, drillId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Drills& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // pairsInfo Field Functions 
      bool hasPairsInfo() const { return this->pairsInfo_ != nullptr;};
      void deletePairsInfo() { this->pairsInfo_ = nullptr;};
      inline const vector<Drills::PairsInfo> & getPairsInfo() const { DARABONBA_PTR_GET_CONST(pairsInfo_, vector<Drills::PairsInfo>) };
      inline vector<Drills::PairsInfo> getPairsInfo() { DARABONBA_PTR_GET(pairsInfo_, vector<Drills::PairsInfo>) };
      inline Drills& setPairsInfo(const vector<Drills::PairsInfo> & pairsInfo) { DARABONBA_PTR_SET_VALUE(pairsInfo_, pairsInfo) };
      inline Drills& setPairsInfo(vector<Drills::PairsInfo> && pairsInfo) { DARABONBA_PTR_SET_RVALUE(pairsInfo_, pairsInfo) };


      // recoverPoint Field Functions 
      bool hasRecoverPoint() const { return this->recoverPoint_ != nullptr;};
      void deleteRecoverPoint() { this->recoverPoint_ = nullptr;};
      inline int64_t getRecoverPoint() const { DARABONBA_PTR_GET_DEFAULT(recoverPoint_, 0L) };
      inline Drills& setRecoverPoint(int64_t recoverPoint) { DARABONBA_PTR_SET_VALUE(recoverPoint_, recoverPoint) };


      // startAt Field Functions 
      bool hasStartAt() const { return this->startAt_ != nullptr;};
      void deleteStartAt() { this->startAt_ = nullptr;};
      inline int64_t getStartAt() const { DARABONBA_PTR_GET_DEFAULT(startAt_, 0L) };
      inline Drills& setStartAt(int64_t startAt) { DARABONBA_PTR_SET_VALUE(startAt_, startAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Drills& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline Drills& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    protected:
      // The ID of the drill.
      shared_ptr<string> drillId_ {};
      // The ID of the replication pair-consistent group.
      shared_ptr<string> groupId_ {};
      // The information of replication pairs.
      shared_ptr<vector<Drills::PairsInfo>> pairsInfo_ {};
      // The recovery point of the drill. The value of this parameter is a timestamp. Unit: seconds.
      shared_ptr<int64_t> recoverPoint_ {};
      // The beginning time of the drill. The value of this parameter is a timestamp. Unit: seconds.
      shared_ptr<int64_t> startAt_ {};
      // The status of the drill. Valid values:
      // 
      // *   execute_failed
      // *   executed
      // *   executing
      // *   clear_failed
      // *   clearing
      shared_ptr<string> status_ {};
      // The error message that appears if the drill fails to be executed.
      shared_ptr<string> statusMessage_ {};
    };

    virtual bool empty() const override { return this->drills_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // drills Field Functions 
    bool hasDrills() const { return this->drills_ != nullptr;};
    void deleteDrills() { this->drills_ = nullptr;};
    inline const vector<DescribeReplicaGroupDrillsResponseBody::Drills> & getDrills() const { DARABONBA_PTR_GET_CONST(drills_, vector<DescribeReplicaGroupDrillsResponseBody::Drills>) };
    inline vector<DescribeReplicaGroupDrillsResponseBody::Drills> getDrills() { DARABONBA_PTR_GET(drills_, vector<DescribeReplicaGroupDrillsResponseBody::Drills>) };
    inline DescribeReplicaGroupDrillsResponseBody& setDrills(const vector<DescribeReplicaGroupDrillsResponseBody::Drills> & drills) { DARABONBA_PTR_SET_VALUE(drills_, drills) };
    inline DescribeReplicaGroupDrillsResponseBody& setDrills(vector<DescribeReplicaGroupDrillsResponseBody::Drills> && drills) { DARABONBA_PTR_SET_RVALUE(drills_, drills) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeReplicaGroupDrillsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeReplicaGroupDrillsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeReplicaGroupDrillsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReplicaGroupDrillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeReplicaGroupDrillsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information of disaster recovery drills that were performed on the replication pair-consistent group.
    shared_ptr<vector<DescribeReplicaGroupDrillsResponseBody::Drills>> drills_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
