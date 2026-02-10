// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMultiUserInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiUserInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DaInstance, daInstance_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaleInstanceList, saleInstanceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiUserInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DaInstance, daInstance_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaleInstanceList, saleInstanceList_);
    };
    ListMultiUserInstancesResponseBody() = default ;
    ListMultiUserInstancesResponseBody(const ListMultiUserInstancesResponseBody &) = default ;
    ListMultiUserInstancesResponseBody(ListMultiUserInstancesResponseBody &&) = default ;
    ListMultiUserInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiUserInstancesResponseBody() = default ;
    ListMultiUserInstancesResponseBody& operator=(const ListMultiUserInstancesResponseBody &) = default ;
    ListMultiUserInstancesResponseBody& operator=(ListMultiUserInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SaleInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SaleInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
        DARABONBA_PTR_TO_JSON(CspmCapacity, cspmCapacity_);
        DARABONBA_PTR_TO_JSON(HoneypotCapacity, honeypotCapacity_);
        DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstancePurchaseType, instancePurchaseType_);
        DARABONBA_PTR_TO_JSON(RaspCapacity, raspCapacity_);
        DARABONBA_PTR_TO_JSON(SdkCapacity, sdkCapacity_);
        DARABONBA_PTR_TO_JSON(SlsCapacity, slsCapacity_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
        DARABONBA_PTR_TO_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionSummary, versionSummary_);
        DARABONBA_PTR_TO_JSON(WebLockCapacity, webLockCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, SaleInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
        DARABONBA_PTR_FROM_JSON(CspmCapacity, cspmCapacity_);
        DARABONBA_PTR_FROM_JSON(HoneypotCapacity, honeypotCapacity_);
        DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstancePurchaseType, instancePurchaseType_);
        DARABONBA_PTR_FROM_JSON(RaspCapacity, raspCapacity_);
        DARABONBA_PTR_FROM_JSON(SdkCapacity, sdkCapacity_);
        DARABONBA_PTR_FROM_JSON(SlsCapacity, slsCapacity_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
        DARABONBA_PTR_FROM_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionSummary, versionSummary_);
        DARABONBA_PTR_FROM_JSON(WebLockCapacity, webLockCapacity_);
      };
      SaleInstanceList() = default ;
      SaleInstanceList(const SaleInstanceList &) = default ;
      SaleInstanceList(SaleInstanceList &&) = default ;
      SaleInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SaleInstanceList() = default ;
      SaleInstanceList& operator=(const SaleInstanceList &) = default ;
      SaleInstanceList& operator=(SaleInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WebLockCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WebLockCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, WebLockCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        WebLockCapacity() = default ;
        WebLockCapacity(const WebLockCapacity &) = default ;
        WebLockCapacity(WebLockCapacity &&) = default ;
        WebLockCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WebLockCapacity() = default ;
        WebLockCapacity& operator=(const WebLockCapacity &) = default ;
        WebLockCapacity& operator=(WebLockCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline WebLockCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline WebLockCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Number of web tamper-proof authorizations allocated.
        shared_ptr<int64_t> count_ {};
        // Number of web tamper-proof authorizations used.
        shared_ptr<int64_t> used_ {};
      };

      class VersionSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionSummary& obj) { 
          DARABONBA_PTR_TO_JSON(AuthBindType, authBindType_);
          DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
          DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, VersionSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthBindType, authBindType_);
          DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
          DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        VersionSummary() = default ;
        VersionSummary(const VersionSummary &) = default ;
        VersionSummary(VersionSummary &&) = default ;
        VersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionSummary() = default ;
        VersionSummary& operator=(const VersionSummary &) = default ;
        VersionSummary& operator=(VersionSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EcsCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EcsCount& obj) { 
            DARABONBA_PTR_TO_JSON(Assigned, assigned_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Used, used_);
          };
          friend void from_json(const Darabonba::Json& j, EcsCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Used, used_);
          };
          EcsCount() = default ;
          EcsCount(const EcsCount &) = default ;
          EcsCount(EcsCount &&) = default ;
          EcsCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EcsCount() = default ;
          EcsCount& operator=(const EcsCount &) = default ;
          EcsCount& operator=(EcsCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
          // assigned Field Functions 
          bool hasAssigned() const { return this->assigned_ != nullptr;};
          void deleteAssigned() { this->assigned_ = nullptr;};
          inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
          inline EcsCount& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline EcsCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // used Field Functions 
          bool hasUsed() const { return this->used_ != nullptr;};
          void deleteUsed() { this->used_ = nullptr;};
          inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
          inline EcsCount& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        protected:
          // 已分配已购授权台数。
          shared_ptr<int64_t> assigned_ {};
          // Number of ECS authorizations allocated.
          shared_ptr<int64_t> count_ {};
          // Number of ECS authorizations used.
          shared_ptr<int64_t> used_ {};
        };

        class CoreCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CoreCount& obj) { 
            DARABONBA_PTR_TO_JSON(Assigned, assigned_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Used, used_);
          };
          friend void from_json(const Darabonba::Json& j, CoreCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Used, used_);
          };
          CoreCount() = default ;
          CoreCount(const CoreCount &) = default ;
          CoreCount(CoreCount &&) = default ;
          CoreCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CoreCount() = default ;
          CoreCount& operator=(const CoreCount &) = default ;
          CoreCount& operator=(CoreCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
          // assigned Field Functions 
          bool hasAssigned() const { return this->assigned_ != nullptr;};
          void deleteAssigned() { this->assigned_ = nullptr;};
          inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
          inline CoreCount& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline CoreCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // used Field Functions 
          bool hasUsed() const { return this->used_ != nullptr;};
          void deleteUsed() { this->used_ = nullptr;};
          inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
          inline CoreCount& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        protected:
          // Assigned number of cores.
          shared_ptr<int64_t> assigned_ {};
          // Allocated number of cores.
          shared_ptr<int64_t> count_ {};
          // Number of cores used.
          shared_ptr<int64_t> used_ {};
        };

        virtual bool empty() const override { return this->authBindType_ == nullptr
        && this->coreCount_ == nullptr && this->ecsCount_ == nullptr && this->version_ == nullptr; };
        // authBindType Field Functions 
        bool hasAuthBindType() const { return this->authBindType_ != nullptr;};
        void deleteAuthBindType() { this->authBindType_ = nullptr;};
        inline string getAuthBindType() const { DARABONBA_PTR_GET_DEFAULT(authBindType_, "") };
        inline VersionSummary& setAuthBindType(string authBindType) { DARABONBA_PTR_SET_VALUE(authBindType_, authBindType) };


        // coreCount Field Functions 
        bool hasCoreCount() const { return this->coreCount_ != nullptr;};
        void deleteCoreCount() { this->coreCount_ = nullptr;};
        inline const VersionSummary::CoreCount & getCoreCount() const { DARABONBA_PTR_GET_CONST(coreCount_, VersionSummary::CoreCount) };
        inline VersionSummary::CoreCount getCoreCount() { DARABONBA_PTR_GET(coreCount_, VersionSummary::CoreCount) };
        inline VersionSummary& setCoreCount(const VersionSummary::CoreCount & coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };
        inline VersionSummary& setCoreCount(VersionSummary::CoreCount && coreCount) { DARABONBA_PTR_SET_RVALUE(coreCount_, coreCount) };


        // ecsCount Field Functions 
        bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
        void deleteEcsCount() { this->ecsCount_ = nullptr;};
        inline const VersionSummary::EcsCount & getEcsCount() const { DARABONBA_PTR_GET_CONST(ecsCount_, VersionSummary::EcsCount) };
        inline VersionSummary::EcsCount getEcsCount() { DARABONBA_PTR_GET(ecsCount_, VersionSummary::EcsCount) };
        inline VersionSummary& setEcsCount(const VersionSummary::EcsCount & ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };
        inline VersionSummary& setEcsCount(VersionSummary::EcsCount && ecsCount) { DARABONBA_PTR_SET_RVALUE(ecsCount_, ecsCount) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline VersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // Authorization type consumed during binding, with values:
        // - **ASSET**：Consumes the number of authorized instances
        // - **CORE**：Consumes the number of authorized cores
        // - **ASSET_AND_CORE**：Consumes both the number of authorized instances and cores.
        shared_ptr<string> authBindType_ {};
        // Usage of core authorization for the member account.
        shared_ptr<VersionSummary::CoreCount> coreCount_ {};
        // Usage details of ECS authorizations for the member account.
        shared_ptr<VersionSummary::EcsCount> ecsCount_ {};
        // Version of the Cloud Security Center for the member account. Values:  
        // - **1**: Free Edition 
        // - **3**: Enterprise Edition
        // - **5**: Advanced Edition
        // - **6**: Anti-Virus Edition    
        // - **7**: Flagship Edition   
        // - **8**: Multiple Versions   
        // - **10**: Value-Added Services Only
        shared_ptr<int32_t> version_ {};
      };

      class ThreatAnalysisFlow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ThreatAnalysisFlow& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, ThreatAnalysisFlow& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        ThreatAnalysisFlow() = default ;
        ThreatAnalysisFlow(const ThreatAnalysisFlow &) = default ;
        ThreatAnalysisFlow(ThreatAnalysisFlow &&) = default ;
        ThreatAnalysisFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ThreatAnalysisFlow() = default ;
        ThreatAnalysisFlow& operator=(const ThreatAnalysisFlow &) = default ;
        ThreatAnalysisFlow& operator=(ThreatAnalysisFlow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ThreatAnalysisFlow& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline ThreatAnalysisFlow& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated threat analysis and response log ingestion traffic. Unit: GB/day.
        shared_ptr<int64_t> count_ {};
        // Used threat analysis and response log ingestion traffic. Unit: GB/day.
        shared_ptr<int64_t> used_ {};
      };

      class ThreatAnalysisCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ThreatAnalysisCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, ThreatAnalysisCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        ThreatAnalysisCapacity() = default ;
        ThreatAnalysisCapacity(const ThreatAnalysisCapacity &) = default ;
        ThreatAnalysisCapacity(ThreatAnalysisCapacity &&) = default ;
        ThreatAnalysisCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ThreatAnalysisCapacity() = default ;
        ThreatAnalysisCapacity& operator=(const ThreatAnalysisCapacity &) = default ;
        ThreatAnalysisCapacity& operator=(ThreatAnalysisCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ThreatAnalysisCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline ThreatAnalysisCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated threat analysis capacity. Unit: GB.
        shared_ptr<int64_t> count_ {};
        // Used threat analysis capacity. Unit: GB.
        shared_ptr<int64_t> used_ {};
      };

      class SlsCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, SlsCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        SlsCapacity() = default ;
        SlsCapacity(const SlsCapacity &) = default ;
        SlsCapacity(SlsCapacity &&) = default ;
        SlsCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsCapacity() = default ;
        SlsCapacity& operator=(const SlsCapacity &) = default ;
        SlsCapacity& operator=(SlsCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline SlsCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline SlsCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated log storage capacity, in GB.
        shared_ptr<int64_t> count_ {};
        // Used log storage capacity, in GB.
        shared_ptr<int64_t> used_ {};
      };

      class SdkCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SdkCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, SdkCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        SdkCapacity() = default ;
        SdkCapacity(const SdkCapacity &) = default ;
        SdkCapacity(SdkCapacity &&) = default ;
        SdkCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SdkCapacity() = default ;
        SdkCapacity& operator=(const SdkCapacity &) = default ;
        SdkCapacity& operator=(SdkCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline SdkCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline SdkCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Number of malicious file detection SDK authorizations allocated.
        shared_ptr<int64_t> count_ {};
        // Number of malicious file detection SDK authorizations used.
        shared_ptr<int64_t> used_ {};
      };

      class RaspCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RaspCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, RaspCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        RaspCapacity() = default ;
        RaspCapacity(const RaspCapacity &) = default ;
        RaspCapacity(RaspCapacity &&) = default ;
        RaspCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RaspCapacity() = default ;
        RaspCapacity& operator=(const RaspCapacity &) = default ;
        RaspCapacity& operator=(RaspCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline RaspCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline RaspCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated RASP capacity. Unit: per month.
        shared_ptr<int64_t> count_ {};
        // Used RASP capacity. Unit: per month.
        shared_ptr<int64_t> used_ {};
      };

      class ImageScanCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageScanCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, ImageScanCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        ImageScanCapacity() = default ;
        ImageScanCapacity(const ImageScanCapacity &) = default ;
        ImageScanCapacity(ImageScanCapacity &&) = default ;
        ImageScanCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageScanCapacity() = default ;
        ImageScanCapacity& operator=(const ImageScanCapacity &) = default ;
        ImageScanCapacity& operator=(ImageScanCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ImageScanCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline ImageScanCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated image scanning authorizations.
        shared_ptr<int64_t> count_ {};
        // Used image scanning authorizations.
        shared_ptr<int64_t> used_ {};
      };

      class HoneypotCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HoneypotCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, HoneypotCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        HoneypotCapacity() = default ;
        HoneypotCapacity(const HoneypotCapacity &) = default ;
        HoneypotCapacity(HoneypotCapacity &&) = default ;
        HoneypotCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HoneypotCapacity() = default ;
        HoneypotCapacity& operator=(const HoneypotCapacity &) = default ;
        HoneypotCapacity& operator=(HoneypotCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline HoneypotCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline HoneypotCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Number of honeypot authorizations allocated.
        shared_ptr<int64_t> count_ {};
        // Number of honeypot authorizations used.
        shared_ptr<int64_t> used_ {};
      };

      class CspmCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CspmCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, CspmCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        CspmCapacity() = default ;
        CspmCapacity(const CspmCapacity &) = default ;
        CspmCapacity(CspmCapacity &&) = default ;
        CspmCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CspmCapacity() = default ;
        CspmCapacity& operator=(const CspmCapacity &) = default ;
        CspmCapacity& operator=(CspmCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline CspmCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline CspmCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated CSPM scan count. Unit: per month.
        shared_ptr<int64_t> count_ {};
        // Used CSPM scan count. Unit: per month.
        shared_ptr<int64_t> used_ {};
      };

      class AntiRansomwareCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AntiRansomwareCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, AntiRansomwareCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        AntiRansomwareCapacity() = default ;
        AntiRansomwareCapacity(const AntiRansomwareCapacity &) = default ;
        AntiRansomwareCapacity(AntiRansomwareCapacity &&) = default ;
        AntiRansomwareCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AntiRansomwareCapacity() = default ;
        AntiRansomwareCapacity& operator=(const AntiRansomwareCapacity &) = default ;
        AntiRansomwareCapacity& operator=(AntiRansomwareCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->used_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline AntiRansomwareCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline AntiRansomwareCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated anti-ransomware capacity, in GB.
        shared_ptr<int64_t> count_ {};
        // Used anti-ransomware capacity, in GB.
        shared_ptr<int64_t> used_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->antiRansomwareCapacity_ == nullptr && this->cspmCapacity_ == nullptr && this->honeypotCapacity_ == nullptr && this->imageScanCapacity_ == nullptr && this->instanceId_ == nullptr
        && this->instancePurchaseType_ == nullptr && this->raspCapacity_ == nullptr && this->sdkCapacity_ == nullptr && this->slsCapacity_ == nullptr && this->status_ == nullptr
        && this->threatAnalysisCapacity_ == nullptr && this->threatAnalysisFlow_ == nullptr && this->userType_ == nullptr && this->version_ == nullptr && this->versionSummary_ == nullptr
        && this->webLockCapacity_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline SaleInstanceList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // antiRansomwareCapacity Field Functions 
      bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
      void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
      inline const SaleInstanceList::AntiRansomwareCapacity & getAntiRansomwareCapacity() const { DARABONBA_PTR_GET_CONST(antiRansomwareCapacity_, SaleInstanceList::AntiRansomwareCapacity) };
      inline SaleInstanceList::AntiRansomwareCapacity getAntiRansomwareCapacity() { DARABONBA_PTR_GET(antiRansomwareCapacity_, SaleInstanceList::AntiRansomwareCapacity) };
      inline SaleInstanceList& setAntiRansomwareCapacity(const SaleInstanceList::AntiRansomwareCapacity & antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };
      inline SaleInstanceList& setAntiRansomwareCapacity(SaleInstanceList::AntiRansomwareCapacity && antiRansomwareCapacity) { DARABONBA_PTR_SET_RVALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


      // cspmCapacity Field Functions 
      bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
      void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
      inline const SaleInstanceList::CspmCapacity & getCspmCapacity() const { DARABONBA_PTR_GET_CONST(cspmCapacity_, SaleInstanceList::CspmCapacity) };
      inline SaleInstanceList::CspmCapacity getCspmCapacity() { DARABONBA_PTR_GET(cspmCapacity_, SaleInstanceList::CspmCapacity) };
      inline SaleInstanceList& setCspmCapacity(const SaleInstanceList::CspmCapacity & cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };
      inline SaleInstanceList& setCspmCapacity(SaleInstanceList::CspmCapacity && cspmCapacity) { DARABONBA_PTR_SET_RVALUE(cspmCapacity_, cspmCapacity) };


      // honeypotCapacity Field Functions 
      bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
      void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
      inline const SaleInstanceList::HoneypotCapacity & getHoneypotCapacity() const { DARABONBA_PTR_GET_CONST(honeypotCapacity_, SaleInstanceList::HoneypotCapacity) };
      inline SaleInstanceList::HoneypotCapacity getHoneypotCapacity() { DARABONBA_PTR_GET(honeypotCapacity_, SaleInstanceList::HoneypotCapacity) };
      inline SaleInstanceList& setHoneypotCapacity(const SaleInstanceList::HoneypotCapacity & honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };
      inline SaleInstanceList& setHoneypotCapacity(SaleInstanceList::HoneypotCapacity && honeypotCapacity) { DARABONBA_PTR_SET_RVALUE(honeypotCapacity_, honeypotCapacity) };


      // imageScanCapacity Field Functions 
      bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
      void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
      inline const SaleInstanceList::ImageScanCapacity & getImageScanCapacity() const { DARABONBA_PTR_GET_CONST(imageScanCapacity_, SaleInstanceList::ImageScanCapacity) };
      inline SaleInstanceList::ImageScanCapacity getImageScanCapacity() { DARABONBA_PTR_GET(imageScanCapacity_, SaleInstanceList::ImageScanCapacity) };
      inline SaleInstanceList& setImageScanCapacity(const SaleInstanceList::ImageScanCapacity & imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };
      inline SaleInstanceList& setImageScanCapacity(SaleInstanceList::ImageScanCapacity && imageScanCapacity) { DARABONBA_PTR_SET_RVALUE(imageScanCapacity_, imageScanCapacity) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SaleInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instancePurchaseType Field Functions 
      bool hasInstancePurchaseType() const { return this->instancePurchaseType_ != nullptr;};
      void deleteInstancePurchaseType() { this->instancePurchaseType_ = nullptr;};
      inline int32_t getInstancePurchaseType() const { DARABONBA_PTR_GET_DEFAULT(instancePurchaseType_, 0) };
      inline SaleInstanceList& setInstancePurchaseType(int32_t instancePurchaseType) { DARABONBA_PTR_SET_VALUE(instancePurchaseType_, instancePurchaseType) };


      // raspCapacity Field Functions 
      bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
      void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
      inline const SaleInstanceList::RaspCapacity & getRaspCapacity() const { DARABONBA_PTR_GET_CONST(raspCapacity_, SaleInstanceList::RaspCapacity) };
      inline SaleInstanceList::RaspCapacity getRaspCapacity() { DARABONBA_PTR_GET(raspCapacity_, SaleInstanceList::RaspCapacity) };
      inline SaleInstanceList& setRaspCapacity(const SaleInstanceList::RaspCapacity & raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };
      inline SaleInstanceList& setRaspCapacity(SaleInstanceList::RaspCapacity && raspCapacity) { DARABONBA_PTR_SET_RVALUE(raspCapacity_, raspCapacity) };


      // sdkCapacity Field Functions 
      bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
      void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
      inline const SaleInstanceList::SdkCapacity & getSdkCapacity() const { DARABONBA_PTR_GET_CONST(sdkCapacity_, SaleInstanceList::SdkCapacity) };
      inline SaleInstanceList::SdkCapacity getSdkCapacity() { DARABONBA_PTR_GET(sdkCapacity_, SaleInstanceList::SdkCapacity) };
      inline SaleInstanceList& setSdkCapacity(const SaleInstanceList::SdkCapacity & sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };
      inline SaleInstanceList& setSdkCapacity(SaleInstanceList::SdkCapacity && sdkCapacity) { DARABONBA_PTR_SET_RVALUE(sdkCapacity_, sdkCapacity) };


      // slsCapacity Field Functions 
      bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
      void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
      inline const SaleInstanceList::SlsCapacity & getSlsCapacity() const { DARABONBA_PTR_GET_CONST(slsCapacity_, SaleInstanceList::SlsCapacity) };
      inline SaleInstanceList::SlsCapacity getSlsCapacity() { DARABONBA_PTR_GET(slsCapacity_, SaleInstanceList::SlsCapacity) };
      inline SaleInstanceList& setSlsCapacity(const SaleInstanceList::SlsCapacity & slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };
      inline SaleInstanceList& setSlsCapacity(SaleInstanceList::SlsCapacity && slsCapacity) { DARABONBA_PTR_SET_RVALUE(slsCapacity_, slsCapacity) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline SaleInstanceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threatAnalysisCapacity Field Functions 
      bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
      void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
      inline const SaleInstanceList::ThreatAnalysisCapacity & getThreatAnalysisCapacity() const { DARABONBA_PTR_GET_CONST(threatAnalysisCapacity_, SaleInstanceList::ThreatAnalysisCapacity) };
      inline SaleInstanceList::ThreatAnalysisCapacity getThreatAnalysisCapacity() { DARABONBA_PTR_GET(threatAnalysisCapacity_, SaleInstanceList::ThreatAnalysisCapacity) };
      inline SaleInstanceList& setThreatAnalysisCapacity(const SaleInstanceList::ThreatAnalysisCapacity & threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };
      inline SaleInstanceList& setThreatAnalysisCapacity(SaleInstanceList::ThreatAnalysisCapacity && threatAnalysisCapacity) { DARABONBA_PTR_SET_RVALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


      // threatAnalysisFlow Field Functions 
      bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
      void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
      inline const SaleInstanceList::ThreatAnalysisFlow & getThreatAnalysisFlow() const { DARABONBA_PTR_GET_CONST(threatAnalysisFlow_, SaleInstanceList::ThreatAnalysisFlow) };
      inline SaleInstanceList::ThreatAnalysisFlow getThreatAnalysisFlow() { DARABONBA_PTR_GET(threatAnalysisFlow_, SaleInstanceList::ThreatAnalysisFlow) };
      inline SaleInstanceList& setThreatAnalysisFlow(const SaleInstanceList::ThreatAnalysisFlow & threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };
      inline SaleInstanceList& setThreatAnalysisFlow(SaleInstanceList::ThreatAnalysisFlow && threatAnalysisFlow) { DARABONBA_PTR_SET_RVALUE(threatAnalysisFlow_, threatAnalysisFlow) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
      inline SaleInstanceList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline SaleInstanceList& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionSummary Field Functions 
      bool hasVersionSummary() const { return this->versionSummary_ != nullptr;};
      void deleteVersionSummary() { this->versionSummary_ = nullptr;};
      inline const vector<SaleInstanceList::VersionSummary> & getVersionSummary() const { DARABONBA_PTR_GET_CONST(versionSummary_, vector<SaleInstanceList::VersionSummary>) };
      inline vector<SaleInstanceList::VersionSummary> getVersionSummary() { DARABONBA_PTR_GET(versionSummary_, vector<SaleInstanceList::VersionSummary>) };
      inline SaleInstanceList& setVersionSummary(const vector<SaleInstanceList::VersionSummary> & versionSummary) { DARABONBA_PTR_SET_VALUE(versionSummary_, versionSummary) };
      inline SaleInstanceList& setVersionSummary(vector<SaleInstanceList::VersionSummary> && versionSummary) { DARABONBA_PTR_SET_RVALUE(versionSummary_, versionSummary) };


      // webLockCapacity Field Functions 
      bool hasWebLockCapacity() const { return this->webLockCapacity_ != nullptr;};
      void deleteWebLockCapacity() { this->webLockCapacity_ = nullptr;};
      inline const SaleInstanceList::WebLockCapacity & getWebLockCapacity() const { DARABONBA_PTR_GET_CONST(webLockCapacity_, SaleInstanceList::WebLockCapacity) };
      inline SaleInstanceList::WebLockCapacity getWebLockCapacity() { DARABONBA_PTR_GET(webLockCapacity_, SaleInstanceList::WebLockCapacity) };
      inline SaleInstanceList& setWebLockCapacity(const SaleInstanceList::WebLockCapacity & webLockCapacity) { DARABONBA_PTR_SET_VALUE(webLockCapacity_, webLockCapacity) };
      inline SaleInstanceList& setWebLockCapacity(SaleInstanceList::WebLockCapacity && webLockCapacity) { DARABONBA_PTR_SET_RVALUE(webLockCapacity_, webLockCapacity) };


    protected:
      // UID of the member account.
      shared_ptr<int64_t> aliUid_ {};
      // Anti-ransomware capacity usage of the member account.
      shared_ptr<SaleInstanceList::AntiRansomwareCapacity> antiRansomwareCapacity_ {};
      // Member account CSPM (Cloud Security Posture Management) scan usage.
      shared_ptr<SaleInstanceList::CspmCapacity> cspmCapacity_ {};
      // Usage details of honeypot authorizations for the member account.
      shared_ptr<SaleInstanceList::HoneypotCapacity> honeypotCapacity_ {};
      // Member account image scanning authorization usage.
      shared_ptr<SaleInstanceList::ImageScanCapacity> imageScanCapacity_ {};
      // Cloud Security Center instance ID purchased by the member account.
      shared_ptr<string> instanceId_ {};
      // Instance purchase type. Values: 
      // - **0**: Self-purchased.
      // - **1**: Allocated.
      shared_ptr<int32_t> instancePurchaseType_ {};
      // Member account RASP (Runtime Application Self-Protection) usage.
      shared_ptr<SaleInstanceList::RaspCapacity> raspCapacity_ {};
      // Usage details of malicious file detection SDK authorizations for the member account.
      shared_ptr<SaleInstanceList::SdkCapacity> sdkCapacity_ {};
      // Log storage capacity usage of the member account.
      shared_ptr<SaleInstanceList::SlsCapacity> slsCapacity_ {};
      // Status of the member account instance. Values: 
      // - **1**: Active.
      // - **2**: Inactive.
      shared_ptr<int32_t> status_ {};
      // Member account threat analysis capacity usage.
      shared_ptr<SaleInstanceList::ThreatAnalysisCapacity> threatAnalysisCapacity_ {};
      // Member account threat analysis and response log ingestion traffic usage.
      shared_ptr<SaleInstanceList::ThreatAnalysisFlow> threatAnalysisFlow_ {};
      // User type. Values:
      // * **Administrator User**：1
      // * **Regular User**：2
      shared_ptr<int32_t> userType_ {};
      // Version of the Cloud Security Center for the member account. Values:  
      // - **1**: Free Edition 
      // - **3**: Enterprise Edition
      // - **5**: Advanced Edition
      // - **6**: Anti-Virus Edition    
      // - **7**: Flagship Edition   
      // - **8**: Multiple Versions   
      // - **10**: Only Purchased Value-Added Services
      shared_ptr<int32_t> version_ {};
      // Authorization usage statistics for the member account.
      shared_ptr<vector<SaleInstanceList::VersionSummary>> versionSummary_ {};
      // Member account web lock (anti-tampering) authorization usage.
      shared_ptr<SaleInstanceList::WebLockCapacity> webLockCapacity_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline PageInfo& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The current page number in a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // The number of items to return in each batch query.
      shared_ptr<int32_t> maxResults_ {};
      // The NextToken value returned when using the NextToken method.
      shared_ptr<string> nextToken_ {};
      // The maximum number of items to return per page in a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of items.
      shared_ptr<int32_t> totalCount_ {};
    };

    class DaInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DaInstance& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
        DARABONBA_PTR_TO_JSON(CspmCapacity, cspmCapacity_);
        DARABONBA_PTR_TO_JSON(HoneypotCapacity, honeypotCapacity_);
        DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstancePurchaseType, instancePurchaseType_);
        DARABONBA_PTR_TO_JSON(RaspCapacity, raspCapacity_);
        DARABONBA_PTR_TO_JSON(SdkCapacity, sdkCapacity_);
        DARABONBA_PTR_TO_JSON(SlsCapacity, slsCapacity_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
        DARABONBA_PTR_TO_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionSummary, versionSummary_);
        DARABONBA_PTR_TO_JSON(WebLockCapacity, webLockCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, DaInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
        DARABONBA_PTR_FROM_JSON(CspmCapacity, cspmCapacity_);
        DARABONBA_PTR_FROM_JSON(HoneypotCapacity, honeypotCapacity_);
        DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstancePurchaseType, instancePurchaseType_);
        DARABONBA_PTR_FROM_JSON(RaspCapacity, raspCapacity_);
        DARABONBA_PTR_FROM_JSON(SdkCapacity, sdkCapacity_);
        DARABONBA_PTR_FROM_JSON(SlsCapacity, slsCapacity_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
        DARABONBA_PTR_FROM_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionSummary, versionSummary_);
        DARABONBA_PTR_FROM_JSON(WebLockCapacity, webLockCapacity_);
      };
      DaInstance() = default ;
      DaInstance(const DaInstance &) = default ;
      DaInstance(DaInstance &&) = default ;
      DaInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DaInstance() = default ;
      DaInstance& operator=(const DaInstance &) = default ;
      DaInstance& operator=(DaInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WebLockCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WebLockCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, WebLockCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        WebLockCapacity() = default ;
        WebLockCapacity(const WebLockCapacity &) = default ;
        WebLockCapacity(WebLockCapacity &&) = default ;
        WebLockCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WebLockCapacity() = default ;
        WebLockCapacity& operator=(const WebLockCapacity &) = default ;
        WebLockCapacity& operator=(WebLockCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline WebLockCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline WebLockCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline WebLockCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Assigned web lock (anti-tampering) authorization count.
        shared_ptr<int64_t> assigned_ {};
        // Purchased web lock (anti-tampering) authorization count.
        shared_ptr<int64_t> count_ {};
        // Used web lock (anti-tampering) authorization count.
        shared_ptr<int64_t> used_ {};
      };

      class VersionSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionSummary& obj) { 
          DARABONBA_PTR_TO_JSON(AuthBindType, authBindType_);
          DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
          DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, VersionSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthBindType, authBindType_);
          DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
          DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        VersionSummary() = default ;
        VersionSummary(const VersionSummary &) = default ;
        VersionSummary(VersionSummary &&) = default ;
        VersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionSummary() = default ;
        VersionSummary& operator=(const VersionSummary &) = default ;
        VersionSummary& operator=(VersionSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EcsCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EcsCount& obj) { 
            DARABONBA_PTR_TO_JSON(Assigned, assigned_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Used, used_);
          };
          friend void from_json(const Darabonba::Json& j, EcsCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Used, used_);
          };
          EcsCount() = default ;
          EcsCount(const EcsCount &) = default ;
          EcsCount(EcsCount &&) = default ;
          EcsCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EcsCount() = default ;
          EcsCount& operator=(const EcsCount &) = default ;
          EcsCount& operator=(EcsCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
          // assigned Field Functions 
          bool hasAssigned() const { return this->assigned_ != nullptr;};
          void deleteAssigned() { this->assigned_ = nullptr;};
          inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
          inline EcsCount& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline EcsCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // used Field Functions 
          bool hasUsed() const { return this->used_ != nullptr;};
          void deleteUsed() { this->used_ = nullptr;};
          inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
          inline EcsCount& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        protected:
          // Assigned number of purchased ECS instance licenses.
          shared_ptr<int64_t> assigned_ {};
          // Purchased number of ECS instance licenses.
          shared_ptr<int64_t> count_ {};
          // Used number of purchased ECS instance licenses.
          shared_ptr<int64_t> used_ {};
        };

        class CoreCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CoreCount& obj) { 
            DARABONBA_PTR_TO_JSON(Assigned, assigned_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Used, used_);
          };
          friend void from_json(const Darabonba::Json& j, CoreCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Used, used_);
          };
          CoreCount() = default ;
          CoreCount(const CoreCount &) = default ;
          CoreCount(CoreCount &&) = default ;
          CoreCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CoreCount() = default ;
          CoreCount& operator=(const CoreCount &) = default ;
          CoreCount& operator=(CoreCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
          // assigned Field Functions 
          bool hasAssigned() const { return this->assigned_ != nullptr;};
          void deleteAssigned() { this->assigned_ = nullptr;};
          inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
          inline CoreCount& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline CoreCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // used Field Functions 
          bool hasUsed() const { return this->used_ != nullptr;};
          void deleteUsed() { this->used_ = nullptr;};
          inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
          inline CoreCount& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        protected:
          // Assigned number of core licenses.
          shared_ptr<int64_t> assigned_ {};
          // Purchased number of core licenses.
          shared_ptr<int64_t> count_ {};
          // Used number of core licenses.
          shared_ptr<int64_t> used_ {};
        };

        virtual bool empty() const override { return this->authBindType_ == nullptr
        && this->coreCount_ == nullptr && this->ecsCount_ == nullptr && this->version_ == nullptr; };
        // authBindType Field Functions 
        bool hasAuthBindType() const { return this->authBindType_ != nullptr;};
        void deleteAuthBindType() { this->authBindType_ = nullptr;};
        inline string getAuthBindType() const { DARABONBA_PTR_GET_DEFAULT(authBindType_, "") };
        inline VersionSummary& setAuthBindType(string authBindType) { DARABONBA_PTR_SET_VALUE(authBindType_, authBindType) };


        // coreCount Field Functions 
        bool hasCoreCount() const { return this->coreCount_ != nullptr;};
        void deleteCoreCount() { this->coreCount_ = nullptr;};
        inline const VersionSummary::CoreCount & getCoreCount() const { DARABONBA_PTR_GET_CONST(coreCount_, VersionSummary::CoreCount) };
        inline VersionSummary::CoreCount getCoreCount() { DARABONBA_PTR_GET(coreCount_, VersionSummary::CoreCount) };
        inline VersionSummary& setCoreCount(const VersionSummary::CoreCount & coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };
        inline VersionSummary& setCoreCount(VersionSummary::CoreCount && coreCount) { DARABONBA_PTR_SET_RVALUE(coreCount_, coreCount) };


        // ecsCount Field Functions 
        bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
        void deleteEcsCount() { this->ecsCount_ = nullptr;};
        inline const VersionSummary::EcsCount & getEcsCount() const { DARABONBA_PTR_GET_CONST(ecsCount_, VersionSummary::EcsCount) };
        inline VersionSummary::EcsCount getEcsCount() { DARABONBA_PTR_GET(ecsCount_, VersionSummary::EcsCount) };
        inline VersionSummary& setEcsCount(const VersionSummary::EcsCount & ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };
        inline VersionSummary& setEcsCount(VersionSummary::EcsCount && ecsCount) { DARABONBA_PTR_SET_RVALUE(ecsCount_, ecsCount) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline VersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The type of authorization consumed during binding. Values: 
        // - ASSET: consumes the number of authorized instances
        // - CORE: consumes the number of authorized cores
        // - ASSET_AND_CORE: consumes both the number of authorized instances and cores
        shared_ptr<string> authBindType_ {};
        // Usage and allocation details of the core licenses for the administrator account.
        shared_ptr<VersionSummary::CoreCount> coreCount_ {};
        // Usage and allocation details of the ECS instance licenses for the administrator account.
        shared_ptr<VersionSummary::EcsCount> ecsCount_ {};
        // Purchased version of Cloud Security Center. Values:  
        // - **1**: Free Edition 
        // - **3**: Enterprise Edition
        // - **5**: Advanced Edition
        // - **6**: Antivirus Edition    
        // - **7**: Flagship Edition   
        // - **8**: Multiple Editions   
        // - **10**: Only Value-Added Services Purchased
        shared_ptr<int32_t> version_ {};
      };

      class ThreatAnalysisFlow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ThreatAnalysisFlow& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, ThreatAnalysisFlow& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        ThreatAnalysisFlow() = default ;
        ThreatAnalysisFlow(const ThreatAnalysisFlow &) = default ;
        ThreatAnalysisFlow(ThreatAnalysisFlow &&) = default ;
        ThreatAnalysisFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ThreatAnalysisFlow() = default ;
        ThreatAnalysisFlow& operator=(const ThreatAnalysisFlow &) = default ;
        ThreatAnalysisFlow& operator=(ThreatAnalysisFlow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline ThreatAnalysisFlow& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ThreatAnalysisFlow& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline ThreatAnalysisFlow& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Assigned threat analysis and response log inbound traffic. Unit: GB/day.
        shared_ptr<int64_t> assigned_ {};
        // Purchased threat analysis and response log inbound traffic. Unit: GB/day.
        shared_ptr<int64_t> count_ {};
        // Used threat analysis and response log inbound traffic. Unit: GB/day.
        shared_ptr<int64_t> used_ {};
      };

      class ThreatAnalysisCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ThreatAnalysisCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, ThreatAnalysisCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        ThreatAnalysisCapacity() = default ;
        ThreatAnalysisCapacity(const ThreatAnalysisCapacity &) = default ;
        ThreatAnalysisCapacity(ThreatAnalysisCapacity &&) = default ;
        ThreatAnalysisCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ThreatAnalysisCapacity() = default ;
        ThreatAnalysisCapacity& operator=(const ThreatAnalysisCapacity &) = default ;
        ThreatAnalysisCapacity& operator=(ThreatAnalysisCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline ThreatAnalysisCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ThreatAnalysisCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline ThreatAnalysisCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Assigned threat analysis capacity. Unit: GB.
        shared_ptr<int64_t> assigned_ {};
        // Purchased threat analysis capacity. Unit: GB.
        shared_ptr<int64_t> count_ {};
        // Used threat analysis capacity. Unit: GB.
        shared_ptr<int64_t> used_ {};
      };

      class SlsCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, SlsCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        SlsCapacity() = default ;
        SlsCapacity(const SlsCapacity &) = default ;
        SlsCapacity(SlsCapacity &&) = default ;
        SlsCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsCapacity() = default ;
        SlsCapacity& operator=(const SlsCapacity &) = default ;
        SlsCapacity& operator=(SlsCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline SlsCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline SlsCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline SlsCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated log storage capacity, in GB.
        shared_ptr<int64_t> assigned_ {};
        // Administrator account log storage capacity, in GB.
        shared_ptr<int64_t> count_ {};
        // Used log storage capacity, in GB.
        shared_ptr<int64_t> used_ {};
      };

      class SdkCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SdkCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, SdkCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        SdkCapacity() = default ;
        SdkCapacity(const SdkCapacity &) = default ;
        SdkCapacity(SdkCapacity &&) = default ;
        SdkCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SdkCapacity() = default ;
        SdkCapacity& operator=(const SdkCapacity &) = default ;
        SdkCapacity& operator=(SdkCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline SdkCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline SdkCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline SdkCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Assigned number of malicious file detection SDK licenses.
        shared_ptr<int64_t> assigned_ {};
        // Purchased number of malicious file detection SDK licenses.
        shared_ptr<int64_t> count_ {};
        // Used number of malicious file detection SDK licenses.
        shared_ptr<int64_t> used_ {};
      };

      class RaspCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RaspCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, RaspCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        RaspCapacity() = default ;
        RaspCapacity(const RaspCapacity &) = default ;
        RaspCapacity(RaspCapacity &&) = default ;
        RaspCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RaspCapacity() = default ;
        RaspCapacity& operator=(const RaspCapacity &) = default ;
        RaspCapacity& operator=(RaspCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline RaspCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline RaspCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline RaspCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated RASP capacity. Unit: per month.
        shared_ptr<int64_t> assigned_ {};
        // Purchased RASP capacity. Unit: per month.
        shared_ptr<int64_t> count_ {};
        // Used RASP capacity. Unit: per month.
        shared_ptr<int64_t> used_ {};
      };

      class ImageScanCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageScanCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, ImageScanCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        ImageScanCapacity() = default ;
        ImageScanCapacity(const ImageScanCapacity &) = default ;
        ImageScanCapacity(ImageScanCapacity &&) = default ;
        ImageScanCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageScanCapacity() = default ;
        ImageScanCapacity& operator=(const ImageScanCapacity &) = default ;
        ImageScanCapacity& operator=(ImageScanCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline ImageScanCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline ImageScanCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline ImageScanCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Assigned image scan authorization count.
        shared_ptr<int64_t> assigned_ {};
        // Purchased image scan authorization count.
        shared_ptr<int64_t> count_ {};
        // Used purchased image scan authorization count.
        shared_ptr<int64_t> used_ {};
      };

      class HoneypotCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HoneypotCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, HoneypotCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        HoneypotCapacity() = default ;
        HoneypotCapacity(const HoneypotCapacity &) = default ;
        HoneypotCapacity(HoneypotCapacity &&) = default ;
        HoneypotCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HoneypotCapacity() = default ;
        HoneypotCapacity& operator=(const HoneypotCapacity &) = default ;
        HoneypotCapacity& operator=(HoneypotCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline HoneypotCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline HoneypotCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline HoneypotCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Assigned number of honeypot licenses.
        shared_ptr<int64_t> assigned_ {};
        // Purchased honeypot authorization count.
        shared_ptr<int64_t> count_ {};
        // Used honeypot authorization count.
        shared_ptr<int64_t> used_ {};
      };

      class CspmCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CspmCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, CspmCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        CspmCapacity() = default ;
        CspmCapacity(const CspmCapacity &) = default ;
        CspmCapacity(CspmCapacity &&) = default ;
        CspmCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CspmCapacity() = default ;
        CspmCapacity& operator=(const CspmCapacity &) = default ;
        CspmCapacity& operator=(CspmCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline CspmCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline CspmCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline CspmCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated CSPM scan count. Unit: per month.
        shared_ptr<int64_t> assigned_ {};
        // Purchased CSPM scan count. Unit: per month.
        shared_ptr<int64_t> count_ {};
        // Used CSPM scan count. Unit: per month.
        shared_ptr<int64_t> used_ {};
      };

      class AntiRansomwareCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AntiRansomwareCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(Assigned, assigned_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, AntiRansomwareCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        AntiRansomwareCapacity() = default ;
        AntiRansomwareCapacity(const AntiRansomwareCapacity &) = default ;
        AntiRansomwareCapacity(AntiRansomwareCapacity &&) = default ;
        AntiRansomwareCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AntiRansomwareCapacity() = default ;
        AntiRansomwareCapacity& operator=(const AntiRansomwareCapacity &) = default ;
        AntiRansomwareCapacity& operator=(AntiRansomwareCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assigned_ == nullptr
        && this->count_ == nullptr && this->used_ == nullptr; };
        // assigned Field Functions 
        bool hasAssigned() const { return this->assigned_ != nullptr;};
        void deleteAssigned() { this->assigned_ = nullptr;};
        inline int64_t getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, 0L) };
        inline AntiRansomwareCapacity& setAssigned(int64_t assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline AntiRansomwareCapacity& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline AntiRansomwareCapacity& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // Allocated anti-ransomware capacity, in GB.
        shared_ptr<int64_t> assigned_ {};
        // Administrator account anti-ransomware capacity, in GB.
        shared_ptr<int64_t> count_ {};
        // Used anti-ransomware capacity, in GB.
        shared_ptr<int64_t> used_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->antiRansomwareCapacity_ == nullptr && this->cspmCapacity_ == nullptr && this->honeypotCapacity_ == nullptr && this->imageScanCapacity_ == nullptr && this->instanceId_ == nullptr
        && this->instancePurchaseType_ == nullptr && this->raspCapacity_ == nullptr && this->sdkCapacity_ == nullptr && this->slsCapacity_ == nullptr && this->status_ == nullptr
        && this->threatAnalysisCapacity_ == nullptr && this->threatAnalysisFlow_ == nullptr && this->userType_ == nullptr && this->version_ == nullptr && this->versionSummary_ == nullptr
        && this->webLockCapacity_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline DaInstance& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // antiRansomwareCapacity Field Functions 
      bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
      void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
      inline const DaInstance::AntiRansomwareCapacity & getAntiRansomwareCapacity() const { DARABONBA_PTR_GET_CONST(antiRansomwareCapacity_, DaInstance::AntiRansomwareCapacity) };
      inline DaInstance::AntiRansomwareCapacity getAntiRansomwareCapacity() { DARABONBA_PTR_GET(antiRansomwareCapacity_, DaInstance::AntiRansomwareCapacity) };
      inline DaInstance& setAntiRansomwareCapacity(const DaInstance::AntiRansomwareCapacity & antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };
      inline DaInstance& setAntiRansomwareCapacity(DaInstance::AntiRansomwareCapacity && antiRansomwareCapacity) { DARABONBA_PTR_SET_RVALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


      // cspmCapacity Field Functions 
      bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
      void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
      inline const DaInstance::CspmCapacity & getCspmCapacity() const { DARABONBA_PTR_GET_CONST(cspmCapacity_, DaInstance::CspmCapacity) };
      inline DaInstance::CspmCapacity getCspmCapacity() { DARABONBA_PTR_GET(cspmCapacity_, DaInstance::CspmCapacity) };
      inline DaInstance& setCspmCapacity(const DaInstance::CspmCapacity & cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };
      inline DaInstance& setCspmCapacity(DaInstance::CspmCapacity && cspmCapacity) { DARABONBA_PTR_SET_RVALUE(cspmCapacity_, cspmCapacity) };


      // honeypotCapacity Field Functions 
      bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
      void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
      inline const DaInstance::HoneypotCapacity & getHoneypotCapacity() const { DARABONBA_PTR_GET_CONST(honeypotCapacity_, DaInstance::HoneypotCapacity) };
      inline DaInstance::HoneypotCapacity getHoneypotCapacity() { DARABONBA_PTR_GET(honeypotCapacity_, DaInstance::HoneypotCapacity) };
      inline DaInstance& setHoneypotCapacity(const DaInstance::HoneypotCapacity & honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };
      inline DaInstance& setHoneypotCapacity(DaInstance::HoneypotCapacity && honeypotCapacity) { DARABONBA_PTR_SET_RVALUE(honeypotCapacity_, honeypotCapacity) };


      // imageScanCapacity Field Functions 
      bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
      void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
      inline const DaInstance::ImageScanCapacity & getImageScanCapacity() const { DARABONBA_PTR_GET_CONST(imageScanCapacity_, DaInstance::ImageScanCapacity) };
      inline DaInstance::ImageScanCapacity getImageScanCapacity() { DARABONBA_PTR_GET(imageScanCapacity_, DaInstance::ImageScanCapacity) };
      inline DaInstance& setImageScanCapacity(const DaInstance::ImageScanCapacity & imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };
      inline DaInstance& setImageScanCapacity(DaInstance::ImageScanCapacity && imageScanCapacity) { DARABONBA_PTR_SET_RVALUE(imageScanCapacity_, imageScanCapacity) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DaInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instancePurchaseType Field Functions 
      bool hasInstancePurchaseType() const { return this->instancePurchaseType_ != nullptr;};
      void deleteInstancePurchaseType() { this->instancePurchaseType_ = nullptr;};
      inline int32_t getInstancePurchaseType() const { DARABONBA_PTR_GET_DEFAULT(instancePurchaseType_, 0) };
      inline DaInstance& setInstancePurchaseType(int32_t instancePurchaseType) { DARABONBA_PTR_SET_VALUE(instancePurchaseType_, instancePurchaseType) };


      // raspCapacity Field Functions 
      bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
      void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
      inline const DaInstance::RaspCapacity & getRaspCapacity() const { DARABONBA_PTR_GET_CONST(raspCapacity_, DaInstance::RaspCapacity) };
      inline DaInstance::RaspCapacity getRaspCapacity() { DARABONBA_PTR_GET(raspCapacity_, DaInstance::RaspCapacity) };
      inline DaInstance& setRaspCapacity(const DaInstance::RaspCapacity & raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };
      inline DaInstance& setRaspCapacity(DaInstance::RaspCapacity && raspCapacity) { DARABONBA_PTR_SET_RVALUE(raspCapacity_, raspCapacity) };


      // sdkCapacity Field Functions 
      bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
      void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
      inline const DaInstance::SdkCapacity & getSdkCapacity() const { DARABONBA_PTR_GET_CONST(sdkCapacity_, DaInstance::SdkCapacity) };
      inline DaInstance::SdkCapacity getSdkCapacity() { DARABONBA_PTR_GET(sdkCapacity_, DaInstance::SdkCapacity) };
      inline DaInstance& setSdkCapacity(const DaInstance::SdkCapacity & sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };
      inline DaInstance& setSdkCapacity(DaInstance::SdkCapacity && sdkCapacity) { DARABONBA_PTR_SET_RVALUE(sdkCapacity_, sdkCapacity) };


      // slsCapacity Field Functions 
      bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
      void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
      inline const DaInstance::SlsCapacity & getSlsCapacity() const { DARABONBA_PTR_GET_CONST(slsCapacity_, DaInstance::SlsCapacity) };
      inline DaInstance::SlsCapacity getSlsCapacity() { DARABONBA_PTR_GET(slsCapacity_, DaInstance::SlsCapacity) };
      inline DaInstance& setSlsCapacity(const DaInstance::SlsCapacity & slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };
      inline DaInstance& setSlsCapacity(DaInstance::SlsCapacity && slsCapacity) { DARABONBA_PTR_SET_RVALUE(slsCapacity_, slsCapacity) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline DaInstance& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threatAnalysisCapacity Field Functions 
      bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
      void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
      inline const DaInstance::ThreatAnalysisCapacity & getThreatAnalysisCapacity() const { DARABONBA_PTR_GET_CONST(threatAnalysisCapacity_, DaInstance::ThreatAnalysisCapacity) };
      inline DaInstance::ThreatAnalysisCapacity getThreatAnalysisCapacity() { DARABONBA_PTR_GET(threatAnalysisCapacity_, DaInstance::ThreatAnalysisCapacity) };
      inline DaInstance& setThreatAnalysisCapacity(const DaInstance::ThreatAnalysisCapacity & threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };
      inline DaInstance& setThreatAnalysisCapacity(DaInstance::ThreatAnalysisCapacity && threatAnalysisCapacity) { DARABONBA_PTR_SET_RVALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


      // threatAnalysisFlow Field Functions 
      bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
      void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
      inline const DaInstance::ThreatAnalysisFlow & getThreatAnalysisFlow() const { DARABONBA_PTR_GET_CONST(threatAnalysisFlow_, DaInstance::ThreatAnalysisFlow) };
      inline DaInstance::ThreatAnalysisFlow getThreatAnalysisFlow() { DARABONBA_PTR_GET(threatAnalysisFlow_, DaInstance::ThreatAnalysisFlow) };
      inline DaInstance& setThreatAnalysisFlow(const DaInstance::ThreatAnalysisFlow & threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };
      inline DaInstance& setThreatAnalysisFlow(DaInstance::ThreatAnalysisFlow && threatAnalysisFlow) { DARABONBA_PTR_SET_RVALUE(threatAnalysisFlow_, threatAnalysisFlow) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
      inline DaInstance& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline DaInstance& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionSummary Field Functions 
      bool hasVersionSummary() const { return this->versionSummary_ != nullptr;};
      void deleteVersionSummary() { this->versionSummary_ = nullptr;};
      inline const vector<DaInstance::VersionSummary> & getVersionSummary() const { DARABONBA_PTR_GET_CONST(versionSummary_, vector<DaInstance::VersionSummary>) };
      inline vector<DaInstance::VersionSummary> getVersionSummary() { DARABONBA_PTR_GET(versionSummary_, vector<DaInstance::VersionSummary>) };
      inline DaInstance& setVersionSummary(const vector<DaInstance::VersionSummary> & versionSummary) { DARABONBA_PTR_SET_VALUE(versionSummary_, versionSummary) };
      inline DaInstance& setVersionSummary(vector<DaInstance::VersionSummary> && versionSummary) { DARABONBA_PTR_SET_RVALUE(versionSummary_, versionSummary) };


      // webLockCapacity Field Functions 
      bool hasWebLockCapacity() const { return this->webLockCapacity_ != nullptr;};
      void deleteWebLockCapacity() { this->webLockCapacity_ = nullptr;};
      inline const DaInstance::WebLockCapacity & getWebLockCapacity() const { DARABONBA_PTR_GET_CONST(webLockCapacity_, DaInstance::WebLockCapacity) };
      inline DaInstance::WebLockCapacity getWebLockCapacity() { DARABONBA_PTR_GET(webLockCapacity_, DaInstance::WebLockCapacity) };
      inline DaInstance& setWebLockCapacity(const DaInstance::WebLockCapacity & webLockCapacity) { DARABONBA_PTR_SET_VALUE(webLockCapacity_, webLockCapacity) };
      inline DaInstance& setWebLockCapacity(DaInstance::WebLockCapacity && webLockCapacity) { DARABONBA_PTR_SET_RVALUE(webLockCapacity_, webLockCapacity) };


    protected:
      // AliUid of the administrator account.
      shared_ptr<int64_t> aliUid_ {};
      // Usage and allocation of administrator account anti-ransomware capacity.
      shared_ptr<DaInstance::AntiRansomwareCapacity> antiRansomwareCapacity_ {};
      // Usage and allocation of administrator account CSPM (Cloud Security Posture Management) scan count.
      shared_ptr<DaInstance::CspmCapacity> cspmCapacity_ {};
      // Usage and allocation of honeypot authorization count for the administrator account.
      shared_ptr<DaInstance::HoneypotCapacity> honeypotCapacity_ {};
      // Usage and allocation of image scan authorization count for the administrator account.
      shared_ptr<DaInstance::ImageScanCapacity> imageScanCapacity_ {};
      // Cloud Security Center instance ID purchased by the administrator account.
      shared_ptr<string> instanceId_ {};
      // Instance purchase type. Values:
      // - **0**：Self-purchased.
      // - **1**：Allocated.
      shared_ptr<int32_t> instancePurchaseType_ {};
      // Usage and allocation of administrator account RASP (Runtime Application Self-Protection) capacity.
      shared_ptr<DaInstance::RaspCapacity> raspCapacity_ {};
      // Usage and allocation details of the malicious file detection SDK licenses for the administrator account.
      shared_ptr<DaInstance::SdkCapacity> sdkCapacity_ {};
      // Usage and allocation of administrator account log storage capacity.
      shared_ptr<DaInstance::SlsCapacity> slsCapacity_ {};
      // Administrator account instance status. Values: 
      // - **1**: Active.
      // - **2**: Inactive.
      shared_ptr<int32_t> status_ {};
      // Usage and allocation of administrator account threat analysis capacity.
      shared_ptr<DaInstance::ThreatAnalysisCapacity> threatAnalysisCapacity_ {};
      // Usage and allocation of threat analysis and response log inbound traffic for the administrator account.
      shared_ptr<DaInstance::ThreatAnalysisFlow> threatAnalysisFlow_ {};
      // User type. Values: 
      // * **Administrator User**: 1
      // * **Regular User**: 2
      shared_ptr<int32_t> userType_ {};
      // Purchased version of Cloud Security Center. Values:  
      // - **1**：Free Edition 
      // - **3**：Enterprise Edition
      // - **5**：Advanced Edition
      // - **6**：Anti-Virus Edition    
      // - **7**：Flagship Edition   
      // - **8**：Multiple Editions   
      // - **10**：Value-Added Services Only
      shared_ptr<int32_t> version_ {};
      // Authorization usage statistics for the administrator account.
      shared_ptr<vector<DaInstance::VersionSummary>> versionSummary_ {};
      // Usage and allocation of web lock (anti-tampering) authorization count for the administrator account.
      shared_ptr<DaInstance::WebLockCapacity> webLockCapacity_ {};
    };

    virtual bool empty() const override { return this->daInstance_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->saleInstanceList_ == nullptr; };
    // daInstance Field Functions 
    bool hasDaInstance() const { return this->daInstance_ != nullptr;};
    void deleteDaInstance() { this->daInstance_ = nullptr;};
    inline const ListMultiUserInstancesResponseBody::DaInstance & getDaInstance() const { DARABONBA_PTR_GET_CONST(daInstance_, ListMultiUserInstancesResponseBody::DaInstance) };
    inline ListMultiUserInstancesResponseBody::DaInstance getDaInstance() { DARABONBA_PTR_GET(daInstance_, ListMultiUserInstancesResponseBody::DaInstance) };
    inline ListMultiUserInstancesResponseBody& setDaInstance(const ListMultiUserInstancesResponseBody::DaInstance & daInstance) { DARABONBA_PTR_SET_VALUE(daInstance_, daInstance) };
    inline ListMultiUserInstancesResponseBody& setDaInstance(ListMultiUserInstancesResponseBody::DaInstance && daInstance) { DARABONBA_PTR_SET_RVALUE(daInstance_, daInstance) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListMultiUserInstancesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListMultiUserInstancesResponseBody::PageInfo) };
    inline ListMultiUserInstancesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListMultiUserInstancesResponseBody::PageInfo) };
    inline ListMultiUserInstancesResponseBody& setPageInfo(const ListMultiUserInstancesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListMultiUserInstancesResponseBody& setPageInfo(ListMultiUserInstancesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiUserInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleInstanceList Field Functions 
    bool hasSaleInstanceList() const { return this->saleInstanceList_ != nullptr;};
    void deleteSaleInstanceList() { this->saleInstanceList_ = nullptr;};
    inline const vector<ListMultiUserInstancesResponseBody::SaleInstanceList> & getSaleInstanceList() const { DARABONBA_PTR_GET_CONST(saleInstanceList_, vector<ListMultiUserInstancesResponseBody::SaleInstanceList>) };
    inline vector<ListMultiUserInstancesResponseBody::SaleInstanceList> getSaleInstanceList() { DARABONBA_PTR_GET(saleInstanceList_, vector<ListMultiUserInstancesResponseBody::SaleInstanceList>) };
    inline ListMultiUserInstancesResponseBody& setSaleInstanceList(const vector<ListMultiUserInstancesResponseBody::SaleInstanceList> & saleInstanceList) { DARABONBA_PTR_SET_VALUE(saleInstanceList_, saleInstanceList) };
    inline ListMultiUserInstancesResponseBody& setSaleInstanceList(vector<ListMultiUserInstancesResponseBody::SaleInstanceList> && saleInstanceList) { DARABONBA_PTR_SET_RVALUE(saleInstanceList_, saleInstanceList) };


  protected:
    // Details of the administrator account.
    shared_ptr<ListMultiUserInstancesResponseBody::DaInstance> daInstance_ {};
    // Pagination information.
    shared_ptr<ListMultiUserInstancesResponseBody::PageInfo> pageInfo_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // Details of member accounts.
    shared_ptr<vector<ListMultiUserInstancesResponseBody::SaleInstanceList>> saleInstanceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
