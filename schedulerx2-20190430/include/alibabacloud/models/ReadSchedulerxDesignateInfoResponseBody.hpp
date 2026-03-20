// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxDesignateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxDesignateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxDesignateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadSchedulerxDesignateInfoResponseBody() = default ;
    ReadSchedulerxDesignateInfoResponseBody(const ReadSchedulerxDesignateInfoResponseBody &) = default ;
    ReadSchedulerxDesignateInfoResponseBody(ReadSchedulerxDesignateInfoResponseBody &&) = default ;
    ReadSchedulerxDesignateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxDesignateInfoResponseBody() = default ;
    ReadSchedulerxDesignateInfoResponseBody& operator=(const ReadSchedulerxDesignateInfoResponseBody &) = default ;
    ReadSchedulerxDesignateInfoResponseBody& operator=(ReadSchedulerxDesignateInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DesignateDetailVos, designateDetailVos_);
        DARABONBA_PTR_TO_JSON(DesignateType, designateType_);
        DARABONBA_PTR_TO_JSON(Transferable, transferable_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DesignateDetailVos, designateDetailVos_);
        DARABONBA_PTR_FROM_JSON(DesignateType, designateType_);
        DARABONBA_PTR_FROM_JSON(Transferable, transferable_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DesignateDetailVos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesignateDetailVos& obj) { 
          DARABONBA_PTR_TO_JSON(Busy, busy_);
          DARABONBA_PTR_TO_JSON(Checked, checked_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Metrics, metrics_);
          DARABONBA_PTR_TO_JSON(Offline, offline_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Starter, starter_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, DesignateDetailVos& obj) { 
          DARABONBA_PTR_FROM_JSON(Busy, busy_);
          DARABONBA_PTR_FROM_JSON(Checked, checked_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
          DARABONBA_PTR_FROM_JSON(Offline, offline_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Starter, starter_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        DesignateDetailVos() = default ;
        DesignateDetailVos(const DesignateDetailVos &) = default ;
        DesignateDetailVos(DesignateDetailVos &&) = default ;
        DesignateDetailVos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesignateDetailVos() = default ;
        DesignateDetailVos& operator=(const DesignateDetailVos &) = default ;
        DesignateDetailVos& operator=(DesignateDetailVos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Metrics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
            DARABONBA_PTR_TO_JSON(CpuLoad1, cpuLoad1_);
            DARABONBA_PTR_TO_JSON(CpuLoad5, cpuLoad5_);
            DARABONBA_PTR_TO_JSON(CpuProcessors, cpuProcessors_);
            DARABONBA_PTR_TO_JSON(DiskMax, diskMax_);
            DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
            DARABONBA_PTR_TO_JSON(DiskUsed, diskUsed_);
            DARABONBA_PTR_TO_JSON(ExecCount, execCount_);
            DARABONBA_PTR_TO_JSON(Heap1Usage, heap1Usage_);
            DARABONBA_PTR_TO_JSON(Heap1Used, heap1Used_);
            DARABONBA_PTR_TO_JSON(Heap5Usage, heap5Usage_);
            DARABONBA_PTR_TO_JSON(HeapMax, heapMax_);
            DARABONBA_PTR_TO_JSON(SharePoolAvailableSize, sharePoolAvailableSize_);
            DARABONBA_PTR_TO_JSON(SharePoolQueueSize, sharePoolQueueSize_);
          };
          friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
            DARABONBA_PTR_FROM_JSON(CpuLoad1, cpuLoad1_);
            DARABONBA_PTR_FROM_JSON(CpuLoad5, cpuLoad5_);
            DARABONBA_PTR_FROM_JSON(CpuProcessors, cpuProcessors_);
            DARABONBA_PTR_FROM_JSON(DiskMax, diskMax_);
            DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
            DARABONBA_PTR_FROM_JSON(DiskUsed, diskUsed_);
            DARABONBA_PTR_FROM_JSON(ExecCount, execCount_);
            DARABONBA_PTR_FROM_JSON(Heap1Usage, heap1Usage_);
            DARABONBA_PTR_FROM_JSON(Heap1Used, heap1Used_);
            DARABONBA_PTR_FROM_JSON(Heap5Usage, heap5Usage_);
            DARABONBA_PTR_FROM_JSON(HeapMax, heapMax_);
            DARABONBA_PTR_FROM_JSON(SharePoolAvailableSize, sharePoolAvailableSize_);
            DARABONBA_PTR_FROM_JSON(SharePoolQueueSize, sharePoolQueueSize_);
          };
          Metrics() = default ;
          Metrics(const Metrics &) = default ;
          Metrics(Metrics &&) = default ;
          Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Metrics() = default ;
          Metrics& operator=(const Metrics &) = default ;
          Metrics& operator=(Metrics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cpuLoad1_ == nullptr
        && this->cpuLoad5_ == nullptr && this->cpuProcessors_ == nullptr && this->diskMax_ == nullptr && this->diskUsage_ == nullptr && this->diskUsed_ == nullptr
        && this->execCount_ == nullptr && this->heap1Usage_ == nullptr && this->heap1Used_ == nullptr && this->heap5Usage_ == nullptr && this->heapMax_ == nullptr
        && this->sharePoolAvailableSize_ == nullptr && this->sharePoolQueueSize_ == nullptr; };
          // cpuLoad1 Field Functions 
          bool hasCpuLoad1() const { return this->cpuLoad1_ != nullptr;};
          void deleteCpuLoad1() { this->cpuLoad1_ = nullptr;};
          inline double getCpuLoad1() const { DARABONBA_PTR_GET_DEFAULT(cpuLoad1_, 0.0) };
          inline Metrics& setCpuLoad1(double cpuLoad1) { DARABONBA_PTR_SET_VALUE(cpuLoad1_, cpuLoad1) };


          // cpuLoad5 Field Functions 
          bool hasCpuLoad5() const { return this->cpuLoad5_ != nullptr;};
          void deleteCpuLoad5() { this->cpuLoad5_ = nullptr;};
          inline double getCpuLoad5() const { DARABONBA_PTR_GET_DEFAULT(cpuLoad5_, 0.0) };
          inline Metrics& setCpuLoad5(double cpuLoad5) { DARABONBA_PTR_SET_VALUE(cpuLoad5_, cpuLoad5) };


          // cpuProcessors Field Functions 
          bool hasCpuProcessors() const { return this->cpuProcessors_ != nullptr;};
          void deleteCpuProcessors() { this->cpuProcessors_ = nullptr;};
          inline int32_t getCpuProcessors() const { DARABONBA_PTR_GET_DEFAULT(cpuProcessors_, 0) };
          inline Metrics& setCpuProcessors(int32_t cpuProcessors) { DARABONBA_PTR_SET_VALUE(cpuProcessors_, cpuProcessors) };


          // diskMax Field Functions 
          bool hasDiskMax() const { return this->diskMax_ != nullptr;};
          void deleteDiskMax() { this->diskMax_ = nullptr;};
          inline int32_t getDiskMax() const { DARABONBA_PTR_GET_DEFAULT(diskMax_, 0) };
          inline Metrics& setDiskMax(int32_t diskMax) { DARABONBA_PTR_SET_VALUE(diskMax_, diskMax) };


          // diskUsage Field Functions 
          bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
          void deleteDiskUsage() { this->diskUsage_ = nullptr;};
          inline double getDiskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, 0.0) };
          inline Metrics& setDiskUsage(double diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


          // diskUsed Field Functions 
          bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
          void deleteDiskUsed() { this->diskUsed_ = nullptr;};
          inline int32_t getDiskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0) };
          inline Metrics& setDiskUsed(int32_t diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


          // execCount Field Functions 
          bool hasExecCount() const { return this->execCount_ != nullptr;};
          void deleteExecCount() { this->execCount_ = nullptr;};
          inline int64_t getExecCount() const { DARABONBA_PTR_GET_DEFAULT(execCount_, 0L) };
          inline Metrics& setExecCount(int64_t execCount) { DARABONBA_PTR_SET_VALUE(execCount_, execCount) };


          // heap1Usage Field Functions 
          bool hasHeap1Usage() const { return this->heap1Usage_ != nullptr;};
          void deleteHeap1Usage() { this->heap1Usage_ = nullptr;};
          inline double getHeap1Usage() const { DARABONBA_PTR_GET_DEFAULT(heap1Usage_, 0.0) };
          inline Metrics& setHeap1Usage(double heap1Usage) { DARABONBA_PTR_SET_VALUE(heap1Usage_, heap1Usage) };


          // heap1Used Field Functions 
          bool hasHeap1Used() const { return this->heap1Used_ != nullptr;};
          void deleteHeap1Used() { this->heap1Used_ = nullptr;};
          inline double getHeap1Used() const { DARABONBA_PTR_GET_DEFAULT(heap1Used_, 0.0) };
          inline Metrics& setHeap1Used(double heap1Used) { DARABONBA_PTR_SET_VALUE(heap1Used_, heap1Used) };


          // heap5Usage Field Functions 
          bool hasHeap5Usage() const { return this->heap5Usage_ != nullptr;};
          void deleteHeap5Usage() { this->heap5Usage_ = nullptr;};
          inline double getHeap5Usage() const { DARABONBA_PTR_GET_DEFAULT(heap5Usage_, 0.0) };
          inline Metrics& setHeap5Usage(double heap5Usage) { DARABONBA_PTR_SET_VALUE(heap5Usage_, heap5Usage) };


          // heapMax Field Functions 
          bool hasHeapMax() const { return this->heapMax_ != nullptr;};
          void deleteHeapMax() { this->heapMax_ = nullptr;};
          inline int32_t getHeapMax() const { DARABONBA_PTR_GET_DEFAULT(heapMax_, 0) };
          inline Metrics& setHeapMax(int32_t heapMax) { DARABONBA_PTR_SET_VALUE(heapMax_, heapMax) };


          // sharePoolAvailableSize Field Functions 
          bool hasSharePoolAvailableSize() const { return this->sharePoolAvailableSize_ != nullptr;};
          void deleteSharePoolAvailableSize() { this->sharePoolAvailableSize_ = nullptr;};
          inline int32_t getSharePoolAvailableSize() const { DARABONBA_PTR_GET_DEFAULT(sharePoolAvailableSize_, 0) };
          inline Metrics& setSharePoolAvailableSize(int32_t sharePoolAvailableSize) { DARABONBA_PTR_SET_VALUE(sharePoolAvailableSize_, sharePoolAvailableSize) };


          // sharePoolQueueSize Field Functions 
          bool hasSharePoolQueueSize() const { return this->sharePoolQueueSize_ != nullptr;};
          void deleteSharePoolQueueSize() { this->sharePoolQueueSize_ = nullptr;};
          inline int32_t getSharePoolQueueSize() const { DARABONBA_PTR_GET_DEFAULT(sharePoolQueueSize_, 0) };
          inline Metrics& setSharePoolQueueSize(int32_t sharePoolQueueSize) { DARABONBA_PTR_SET_VALUE(sharePoolQueueSize_, sharePoolQueueSize) };


        protected:
          // The most recent value of CPU workload.
          shared_ptr<double> cpuLoad1_ {};
          // The average of the latest five values of CPU workload.
          shared_ptr<double> cpuLoad5_ {};
          // The number of available CPU processors.
          shared_ptr<int32_t> cpuProcessors_ {};
          // The total disk capacity in MB.
          shared_ptr<int32_t> diskMax_ {};
          // The disk usage.
          shared_ptr<double> diskUsage_ {};
          // The used disk space in MB.
          shared_ptr<int32_t> diskUsed_ {};
          // The number of job executions.
          shared_ptr<int64_t> execCount_ {};
          // The most recent value of heap memory usage.
          shared_ptr<double> heap1Usage_ {};
          // The most recent value of used heap memory in MB.
          shared_ptr<double> heap1Used_ {};
          // The average of the latest five values of heap memory usage.
          shared_ptr<double> heap5Usage_ {};
          // The maximum heap memory in MB.
          shared_ptr<int32_t> heapMax_ {};
          // The number of available resources in the shared pool.
          shared_ptr<int32_t> sharePoolAvailableSize_ {};
          // The queue size in the shared pool.
          shared_ptr<int32_t> sharePoolQueueSize_ {};
        };

        virtual bool empty() const override { return this->busy_ == nullptr
        && this->checked_ == nullptr && this->key_ == nullptr && this->metrics_ == nullptr && this->offline_ == nullptr && this->size_ == nullptr
        && this->starter_ == nullptr && this->version_ == nullptr; };
        // busy Field Functions 
        bool hasBusy() const { return this->busy_ != nullptr;};
        void deleteBusy() { this->busy_ = nullptr;};
        inline string getBusy() const { DARABONBA_PTR_GET_DEFAULT(busy_, "") };
        inline DesignateDetailVos& setBusy(string busy) { DARABONBA_PTR_SET_VALUE(busy_, busy) };


        // checked Field Functions 
        bool hasChecked() const { return this->checked_ != nullptr;};
        void deleteChecked() { this->checked_ = nullptr;};
        inline bool getChecked() const { DARABONBA_PTR_GET_DEFAULT(checked_, false) };
        inline DesignateDetailVos& setChecked(bool checked) { DARABONBA_PTR_SET_VALUE(checked_, checked) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline DesignateDetailVos& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // metrics Field Functions 
        bool hasMetrics() const { return this->metrics_ != nullptr;};
        void deleteMetrics() { this->metrics_ = nullptr;};
        inline const DesignateDetailVos::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, DesignateDetailVos::Metrics) };
        inline DesignateDetailVos::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, DesignateDetailVos::Metrics) };
        inline DesignateDetailVos& setMetrics(const DesignateDetailVos::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
        inline DesignateDetailVos& setMetrics(DesignateDetailVos::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


        // offline Field Functions 
        bool hasOffline() const { return this->offline_ != nullptr;};
        void deleteOffline() { this->offline_ = nullptr;};
        inline bool getOffline() const { DARABONBA_PTR_GET_DEFAULT(offline_, false) };
        inline DesignateDetailVos& setOffline(bool offline) { DARABONBA_PTR_SET_VALUE(offline_, offline) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline DesignateDetailVos& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // starter Field Functions 
        bool hasStarter() const { return this->starter_ != nullptr;};
        void deleteStarter() { this->starter_ = nullptr;};
        inline string getStarter() const { DARABONBA_PTR_GET_DEFAULT(starter_, "") };
        inline DesignateDetailVos& setStarter(string starter) { DARABONBA_PTR_SET_VALUE(starter_, starter) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline DesignateDetailVos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The status of the workers. Valid values:
        // 
        // *   FREE: idle.
        // *   LOAD5_BUSY: The average of the latest five values of CPU workload is too high.
        // *   HEAP5_BUSY: The average of the latest five values of heap memory usage is too high.
        // *   DISK_BUSY: The disk usage is too high.
        shared_ptr<string> busy_ {};
        // Indicates whether the workers are specified.
        // 
        // *   true: The workers are specified.
        // *   false: The workers are not specified.
        shared_ptr<bool> checked_ {};
        // The information returned based on the value of the DesignateType parameter.
        // 
        // *   If you set the DesignateType parameter to 2, the tags of the workers are returned.
        // *   If you set the DesignateType parameter to 1, the IP addresses of the workers are returned.
        shared_ptr<string> key_ {};
        // The metric values.
        shared_ptr<DesignateDetailVos::Metrics> metrics_ {};
        // Indicates whether the workers are offline.
        shared_ptr<bool> offline_ {};
        // The number of workers.
        shared_ptr<int32_t> size_ {};
        // The startup method of the workers.
        shared_ptr<string> starter_ {};
        // The version of the workers.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->designateDetailVos_ == nullptr
        && this->designateType_ == nullptr && this->transferable_ == nullptr; };
      // designateDetailVos Field Functions 
      bool hasDesignateDetailVos() const { return this->designateDetailVos_ != nullptr;};
      void deleteDesignateDetailVos() { this->designateDetailVos_ = nullptr;};
      inline const vector<Data::DesignateDetailVos> & getDesignateDetailVos() const { DARABONBA_PTR_GET_CONST(designateDetailVos_, vector<Data::DesignateDetailVos>) };
      inline vector<Data::DesignateDetailVos> getDesignateDetailVos() { DARABONBA_PTR_GET(designateDetailVos_, vector<Data::DesignateDetailVos>) };
      inline Data& setDesignateDetailVos(const vector<Data::DesignateDetailVos> & designateDetailVos) { DARABONBA_PTR_SET_VALUE(designateDetailVos_, designateDetailVos) };
      inline Data& setDesignateDetailVos(vector<Data::DesignateDetailVos> && designateDetailVos) { DARABONBA_PTR_SET_RVALUE(designateDetailVos_, designateDetailVos) };


      // designateType Field Functions 
      bool hasDesignateType() const { return this->designateType_ != nullptr;};
      void deleteDesignateType() { this->designateType_ = nullptr;};
      inline int32_t getDesignateType() const { DARABONBA_PTR_GET_DEFAULT(designateType_, 0) };
      inline Data& setDesignateType(int32_t designateType) { DARABONBA_PTR_SET_VALUE(designateType_, designateType) };


      // transferable Field Functions 
      bool hasTransferable() const { return this->transferable_ != nullptr;};
      void deleteTransferable() { this->transferable_ = nullptr;};
      inline bool getTransferable() const { DARABONBA_PTR_GET_DEFAULT(transferable_, false) };
      inline Data& setTransferable(bool transferable) { DARABONBA_PTR_SET_VALUE(transferable_, transferable) };


    protected:
      // *
      shared_ptr<vector<Data::DesignateDetailVos>> designateDetailVos_ {};
      // The information type of the specified workers.
      // 
      // *   1: the IP address of the specified workers.
      // *   2: the tags of the specified workers.
      // 
      // >  The default value of the DesignateType parameter is 1.
      shared_ptr<int32_t> designateType_ {};
      // Indicates whether to enable failover for the workers. If you set this parameter to true, the job is scheduled to other workers when the specified workers go offline.
      // 
      // *   true: enables failover for the workers.
      // *   false: disables failover for the workers.
      // 
      // >  The default value of the Transferable parameter is false.
      shared_ptr<bool> transferable_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The authentication operation.
      shared_ptr<string> authAction_ {};
      // The principal name.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The principal account.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The principal type.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The permission denial type.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const ReadSchedulerxDesignateInfoResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, ReadSchedulerxDesignateInfoResponseBody::AccessDeniedDetail) };
    inline ReadSchedulerxDesignateInfoResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, ReadSchedulerxDesignateInfoResponseBody::AccessDeniedDetail) };
    inline ReadSchedulerxDesignateInfoResponseBody& setAccessDeniedDetail(const ReadSchedulerxDesignateInfoResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline ReadSchedulerxDesignateInfoResponseBody& setAccessDeniedDetail(ReadSchedulerxDesignateInfoResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ReadSchedulerxDesignateInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReadSchedulerxDesignateInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ReadSchedulerxDesignateInfoResponseBody::Data) };
    inline ReadSchedulerxDesignateInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ReadSchedulerxDesignateInfoResponseBody::Data) };
    inline ReadSchedulerxDesignateInfoResponseBody& setData(const ReadSchedulerxDesignateInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadSchedulerxDesignateInfoResponseBody& setData(ReadSchedulerxDesignateInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadSchedulerxDesignateInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadSchedulerxDesignateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadSchedulerxDesignateInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The access denial details.
    shared_ptr<ReadSchedulerxDesignateInfoResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> code_ {};
    // *
    shared_ptr<ReadSchedulerxDesignateInfoResponseBody::Data> data_ {};
    // The error message returned only if an error occurs.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
