// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListDedicatedClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDedicatedClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedClusterStatusList, dedicatedClusterStatusList_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDedicatedClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedClusterStatusList, dedicatedClusterStatusList_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListDedicatedClusterResponseBody() = default ;
    ListDedicatedClusterResponseBody(const ListDedicatedClusterResponseBody &) = default ;
    ListDedicatedClusterResponseBody(ListDedicatedClusterResponseBody &&) = default ;
    ListDedicatedClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDedicatedClusterResponseBody() = default ;
    ListDedicatedClusterResponseBody& operator=(const ListDedicatedClusterResponseBody &) = default ;
    ListDedicatedClusterResponseBody& operator=(ListDedicatedClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DedicatedClusterStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedClusterStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedClusterStatus, dedicatedClusterStatus_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedClusterStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedClusterStatus, dedicatedClusterStatus_);
      };
      DedicatedClusterStatusList() = default ;
      DedicatedClusterStatusList(const DedicatedClusterStatusList &) = default ;
      DedicatedClusterStatusList(DedicatedClusterStatusList &&) = default ;
      DedicatedClusterStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedClusterStatusList() = default ;
      DedicatedClusterStatusList& operator=(const DedicatedClusterStatusList &) = default ;
      DedicatedClusterStatusList& operator=(DedicatedClusterStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DedicatedClusterStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedClusterStatus& obj) { 
          DARABONBA_PTR_TO_JSON(CpuUtilization, cpuUtilization_);
          DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
          DARABONBA_PTR_TO_JSON(DedicatedClusterName, dedicatedClusterName_);
          DARABONBA_PTR_TO_JSON(DiskUtilization, diskUtilization_);
          DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_TO_JSON(Du, du_);
          DARABONBA_PTR_TO_JSON(DuUtilization, duUtilization_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
          DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_TO_JSON(OversoldDu, oversoldDu_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TotalCpuCore, totalCpuCore_);
          DARABONBA_PTR_TO_JSON(TotalDiskGBSize, totalDiskGBSize_);
          DARABONBA_PTR_TO_JSON(TotalMemGBSize, totalMemGBSize_);
          DARABONBA_PTR_TO_JSON(UsedCpuCore, usedCpuCore_);
          DARABONBA_PTR_TO_JSON(UsedDiskGBSize, usedDiskGBSize_);
          DARABONBA_PTR_TO_JSON(UsedDu, usedDu_);
          DARABONBA_PTR_TO_JSON(UsedMemGBSize, usedMemGBSize_);
        };
        friend void from_json(const Darabonba::Json& j, DedicatedClusterStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuUtilization, cpuUtilization_);
          DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
          DARABONBA_PTR_FROM_JSON(DedicatedClusterName, dedicatedClusterName_);
          DARABONBA_PTR_FROM_JSON(DiskUtilization, diskUtilization_);
          DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_FROM_JSON(Du, du_);
          DARABONBA_PTR_FROM_JSON(DuUtilization, duUtilization_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
          DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_FROM_JSON(OversoldDu, oversoldDu_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TotalCpuCore, totalCpuCore_);
          DARABONBA_PTR_FROM_JSON(TotalDiskGBSize, totalDiskGBSize_);
          DARABONBA_PTR_FROM_JSON(TotalMemGBSize, totalMemGBSize_);
          DARABONBA_PTR_FROM_JSON(UsedCpuCore, usedCpuCore_);
          DARABONBA_PTR_FROM_JSON(UsedDiskGBSize, usedDiskGBSize_);
          DARABONBA_PTR_FROM_JSON(UsedDu, usedDu_);
          DARABONBA_PTR_FROM_JSON(UsedMemGBSize, usedMemGBSize_);
        };
        DedicatedClusterStatus() = default ;
        DedicatedClusterStatus(const DedicatedClusterStatus &) = default ;
        DedicatedClusterStatus(DedicatedClusterStatus &&) = default ;
        DedicatedClusterStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedClusterStatus() = default ;
        DedicatedClusterStatus& operator=(const DedicatedClusterStatus &) = default ;
        DedicatedClusterStatus& operator=(DedicatedClusterStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuUtilization_ == nullptr
        && this->dedicatedClusterId_ == nullptr && this->dedicatedClusterName_ == nullptr && this->diskUtilization_ == nullptr && this->dtsInstanceID_ == nullptr && this->du_ == nullptr
        && this->duUtilization_ == nullptr && this->gmtCreated_ == nullptr && this->memUtilization_ == nullptr && this->nodeCount_ == nullptr && this->oversoldDu_ == nullptr
        && this->regionId_ == nullptr && this->state_ == nullptr && this->totalCpuCore_ == nullptr && this->totalDiskGBSize_ == nullptr && this->totalMemGBSize_ == nullptr
        && this->usedCpuCore_ == nullptr && this->usedDiskGBSize_ == nullptr && this->usedDu_ == nullptr && this->usedMemGBSize_ == nullptr; };
        // cpuUtilization Field Functions 
        bool hasCpuUtilization() const { return this->cpuUtilization_ != nullptr;};
        void deleteCpuUtilization() { this->cpuUtilization_ = nullptr;};
        inline int64_t getCpuUtilization() const { DARABONBA_PTR_GET_DEFAULT(cpuUtilization_, 0L) };
        inline DedicatedClusterStatus& setCpuUtilization(int64_t cpuUtilization) { DARABONBA_PTR_SET_VALUE(cpuUtilization_, cpuUtilization) };


        // dedicatedClusterId Field Functions 
        bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
        void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
        inline string getDedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
        inline DedicatedClusterStatus& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


        // dedicatedClusterName Field Functions 
        bool hasDedicatedClusterName() const { return this->dedicatedClusterName_ != nullptr;};
        void deleteDedicatedClusterName() { this->dedicatedClusterName_ = nullptr;};
        inline string getDedicatedClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterName_, "") };
        inline DedicatedClusterStatus& setDedicatedClusterName(string dedicatedClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedClusterName_, dedicatedClusterName) };


        // diskUtilization Field Functions 
        bool hasDiskUtilization() const { return this->diskUtilization_ != nullptr;};
        void deleteDiskUtilization() { this->diskUtilization_ = nullptr;};
        inline int64_t getDiskUtilization() const { DARABONBA_PTR_GET_DEFAULT(diskUtilization_, 0L) };
        inline DedicatedClusterStatus& setDiskUtilization(int64_t diskUtilization) { DARABONBA_PTR_SET_VALUE(diskUtilization_, diskUtilization) };


        // dtsInstanceID Field Functions 
        bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
        void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
        inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
        inline DedicatedClusterStatus& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


        // du Field Functions 
        bool hasDu() const { return this->du_ != nullptr;};
        void deleteDu() { this->du_ = nullptr;};
        inline int64_t getDu() const { DARABONBA_PTR_GET_DEFAULT(du_, 0L) };
        inline DedicatedClusterStatus& setDu(int64_t du) { DARABONBA_PTR_SET_VALUE(du_, du) };


        // duUtilization Field Functions 
        bool hasDuUtilization() const { return this->duUtilization_ != nullptr;};
        void deleteDuUtilization() { this->duUtilization_ = nullptr;};
        inline int64_t getDuUtilization() const { DARABONBA_PTR_GET_DEFAULT(duUtilization_, 0L) };
        inline DedicatedClusterStatus& setDuUtilization(int64_t duUtilization) { DARABONBA_PTR_SET_VALUE(duUtilization_, duUtilization) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
        inline DedicatedClusterStatus& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // memUtilization Field Functions 
        bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
        void deleteMemUtilization() { this->memUtilization_ = nullptr;};
        inline int64_t getMemUtilization() const { DARABONBA_PTR_GET_DEFAULT(memUtilization_, 0L) };
        inline DedicatedClusterStatus& setMemUtilization(int64_t memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };


        // nodeCount Field Functions 
        bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
        void deleteNodeCount() { this->nodeCount_ = nullptr;};
        inline int64_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
        inline DedicatedClusterStatus& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


        // oversoldDu Field Functions 
        bool hasOversoldDu() const { return this->oversoldDu_ != nullptr;};
        void deleteOversoldDu() { this->oversoldDu_ = nullptr;};
        inline int64_t getOversoldDu() const { DARABONBA_PTR_GET_DEFAULT(oversoldDu_, 0L) };
        inline DedicatedClusterStatus& setOversoldDu(int64_t oversoldDu) { DARABONBA_PTR_SET_VALUE(oversoldDu_, oversoldDu) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DedicatedClusterStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline DedicatedClusterStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // totalCpuCore Field Functions 
        bool hasTotalCpuCore() const { return this->totalCpuCore_ != nullptr;};
        void deleteTotalCpuCore() { this->totalCpuCore_ = nullptr;};
        inline int64_t getTotalCpuCore() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCore_, 0L) };
        inline DedicatedClusterStatus& setTotalCpuCore(int64_t totalCpuCore) { DARABONBA_PTR_SET_VALUE(totalCpuCore_, totalCpuCore) };


        // totalDiskGBSize Field Functions 
        bool hasTotalDiskGBSize() const { return this->totalDiskGBSize_ != nullptr;};
        void deleteTotalDiskGBSize() { this->totalDiskGBSize_ = nullptr;};
        inline int64_t getTotalDiskGBSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskGBSize_, 0L) };
        inline DedicatedClusterStatus& setTotalDiskGBSize(int64_t totalDiskGBSize) { DARABONBA_PTR_SET_VALUE(totalDiskGBSize_, totalDiskGBSize) };


        // totalMemGBSize Field Functions 
        bool hasTotalMemGBSize() const { return this->totalMemGBSize_ != nullptr;};
        void deleteTotalMemGBSize() { this->totalMemGBSize_ = nullptr;};
        inline int64_t getTotalMemGBSize() const { DARABONBA_PTR_GET_DEFAULT(totalMemGBSize_, 0L) };
        inline DedicatedClusterStatus& setTotalMemGBSize(int64_t totalMemGBSize) { DARABONBA_PTR_SET_VALUE(totalMemGBSize_, totalMemGBSize) };


        // usedCpuCore Field Functions 
        bool hasUsedCpuCore() const { return this->usedCpuCore_ != nullptr;};
        void deleteUsedCpuCore() { this->usedCpuCore_ = nullptr;};
        inline int64_t getUsedCpuCore() const { DARABONBA_PTR_GET_DEFAULT(usedCpuCore_, 0L) };
        inline DedicatedClusterStatus& setUsedCpuCore(int64_t usedCpuCore) { DARABONBA_PTR_SET_VALUE(usedCpuCore_, usedCpuCore) };


        // usedDiskGBSize Field Functions 
        bool hasUsedDiskGBSize() const { return this->usedDiskGBSize_ != nullptr;};
        void deleteUsedDiskGBSize() { this->usedDiskGBSize_ = nullptr;};
        inline int64_t getUsedDiskGBSize() const { DARABONBA_PTR_GET_DEFAULT(usedDiskGBSize_, 0L) };
        inline DedicatedClusterStatus& setUsedDiskGBSize(int64_t usedDiskGBSize) { DARABONBA_PTR_SET_VALUE(usedDiskGBSize_, usedDiskGBSize) };


        // usedDu Field Functions 
        bool hasUsedDu() const { return this->usedDu_ != nullptr;};
        void deleteUsedDu() { this->usedDu_ = nullptr;};
        inline int64_t getUsedDu() const { DARABONBA_PTR_GET_DEFAULT(usedDu_, 0L) };
        inline DedicatedClusterStatus& setUsedDu(int64_t usedDu) { DARABONBA_PTR_SET_VALUE(usedDu_, usedDu) };


        // usedMemGBSize Field Functions 
        bool hasUsedMemGBSize() const { return this->usedMemGBSize_ != nullptr;};
        void deleteUsedMemGBSize() { this->usedMemGBSize_ = nullptr;};
        inline int64_t getUsedMemGBSize() const { DARABONBA_PTR_GET_DEFAULT(usedMemGBSize_, 0L) };
        inline DedicatedClusterStatus& setUsedMemGBSize(int64_t usedMemGBSize) { DARABONBA_PTR_SET_VALUE(usedMemGBSize_, usedMemGBSize) };


      protected:
        // The CPU utilization, in percentage.
        shared_ptr<int64_t> cpuUtilization_ {};
        // The ID of the cluster.
        shared_ptr<string> dedicatedClusterId_ {};
        // The name of the cluster.
        shared_ptr<string> dedicatedClusterName_ {};
        // The disk usage.
        shared_ptr<int64_t> diskUtilization_ {};
        // The ID of the DTS instance.
        shared_ptr<string> dtsInstanceID_ {};
        // The number of DTS units (DUs).
        shared_ptr<int64_t> du_ {};
        // The DU usage, in percentage.
        shared_ptr<int64_t> duUtilization_ {};
        // The time when the cluster was created.
        shared_ptr<int64_t> gmtCreated_ {};
        // The memory usage.
        shared_ptr<int64_t> memUtilization_ {};
        // The number of nodes in the cluster.
        shared_ptr<int64_t> nodeCount_ {};
        // The number of over-provisioned DUs.
        shared_ptr<int64_t> oversoldDu_ {};
        // The ID of the region in which the DTS instance resides.
        shared_ptr<string> regionId_ {};
        // The status of the cluster. Valid values:
        // 
        // *   **init**: The cluster is being initialized.
        // *   **schedule**: The cluster is pending scheduling.
        // *   **running**: The cluster is running.
        // *   **upgrade**: The cluster is being upgraded.
        // *   **downgrade**: The cluster is being downgraded.
        // *   **locked**: The cluster is locked.
        // *   **releasing**: The cluster is being released.
        // *   **released**: The cluster is released.
        shared_ptr<string> state_ {};
        // The total number of CPU cores.
        shared_ptr<int64_t> totalCpuCore_ {};
        // The total disk capacity. Unit: GB.
        shared_ptr<int64_t> totalDiskGBSize_ {};
        // The total memory capacity. Unit: GB.
        shared_ptr<int64_t> totalMemGBSize_ {};
        // The number of used CPU cores.
        shared_ptr<int64_t> usedCpuCore_ {};
        // The used disk capacity. Unit: GB.
        shared_ptr<int64_t> usedDiskGBSize_ {};
        // The number of used DUs.
        shared_ptr<int64_t> usedDu_ {};
        // The used memory capacity. Unit: GB.
        shared_ptr<int64_t> usedMemGBSize_ {};
      };

      virtual bool empty() const override { return this->dedicatedClusterStatus_ == nullptr; };
      // dedicatedClusterStatus Field Functions 
      bool hasDedicatedClusterStatus() const { return this->dedicatedClusterStatus_ != nullptr;};
      void deleteDedicatedClusterStatus() { this->dedicatedClusterStatus_ = nullptr;};
      inline const vector<DedicatedClusterStatusList::DedicatedClusterStatus> & getDedicatedClusterStatus() const { DARABONBA_PTR_GET_CONST(dedicatedClusterStatus_, vector<DedicatedClusterStatusList::DedicatedClusterStatus>) };
      inline vector<DedicatedClusterStatusList::DedicatedClusterStatus> getDedicatedClusterStatus() { DARABONBA_PTR_GET(dedicatedClusterStatus_, vector<DedicatedClusterStatusList::DedicatedClusterStatus>) };
      inline DedicatedClusterStatusList& setDedicatedClusterStatus(const vector<DedicatedClusterStatusList::DedicatedClusterStatus> & dedicatedClusterStatus) { DARABONBA_PTR_SET_VALUE(dedicatedClusterStatus_, dedicatedClusterStatus) };
      inline DedicatedClusterStatusList& setDedicatedClusterStatus(vector<DedicatedClusterStatusList::DedicatedClusterStatus> && dedicatedClusterStatus) { DARABONBA_PTR_SET_RVALUE(dedicatedClusterStatus_, dedicatedClusterStatus) };


    protected:
      shared_ptr<vector<DedicatedClusterStatusList::DedicatedClusterStatus>> dedicatedClusterStatus_ {};
    };

    virtual bool empty() const override { return this->dedicatedClusterStatusList_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalRecordCount_ == nullptr; };
    // dedicatedClusterStatusList Field Functions 
    bool hasDedicatedClusterStatusList() const { return this->dedicatedClusterStatusList_ != nullptr;};
    void deleteDedicatedClusterStatusList() { this->dedicatedClusterStatusList_ = nullptr;};
    inline const ListDedicatedClusterResponseBody::DedicatedClusterStatusList & getDedicatedClusterStatusList() const { DARABONBA_PTR_GET_CONST(dedicatedClusterStatusList_, ListDedicatedClusterResponseBody::DedicatedClusterStatusList) };
    inline ListDedicatedClusterResponseBody::DedicatedClusterStatusList getDedicatedClusterStatusList() { DARABONBA_PTR_GET(dedicatedClusterStatusList_, ListDedicatedClusterResponseBody::DedicatedClusterStatusList) };
    inline ListDedicatedClusterResponseBody& setDedicatedClusterStatusList(const ListDedicatedClusterResponseBody::DedicatedClusterStatusList & dedicatedClusterStatusList) { DARABONBA_PTR_SET_VALUE(dedicatedClusterStatusList_, dedicatedClusterStatusList) };
    inline ListDedicatedClusterResponseBody& setDedicatedClusterStatusList(ListDedicatedClusterResponseBody::DedicatedClusterStatusList && dedicatedClusterStatusList) { DARABONBA_PTR_SET_RVALUE(dedicatedClusterStatusList_, dedicatedClusterStatusList) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListDedicatedClusterResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListDedicatedClusterResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListDedicatedClusterResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDedicatedClusterResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListDedicatedClusterResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDedicatedClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListDedicatedClusterResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListDedicatedClusterResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The statuses of all clusters.
    shared_ptr<ListDedicatedClusterResponseBody::DedicatedClusterStatusList> dedicatedClusterStatusList_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The page number of the returned page. The value must be an integer that is greater than 0. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
    // The total number of clusters that meet the query condition.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
