// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddonMeta.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCollectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCollectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(collectors, collectors_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCollectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(collectors, collectors_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListIntegrationPolicyCollectorsResponseBody() = default ;
    ListIntegrationPolicyCollectorsResponseBody(const ListIntegrationPolicyCollectorsResponseBody &) = default ;
    ListIntegrationPolicyCollectorsResponseBody(ListIntegrationPolicyCollectorsResponseBody &&) = default ;
    ListIntegrationPolicyCollectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCollectorsResponseBody() = default ;
    ListIntegrationPolicyCollectorsResponseBody& operator=(const ListIntegrationPolicyCollectorsResponseBody &) = default ;
    ListIntegrationPolicyCollectorsResponseBody& operator=(ListIntegrationPolicyCollectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Collectors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Collectors& obj) { 
        DARABONBA_PTR_TO_JSON(addonMeta, addonMeta_);
        DARABONBA_PTR_TO_JSON(collectorName, collectorName_);
        DARABONBA_PTR_TO_JSON(collectorType, collectorType_);
        DARABONBA_PTR_TO_JSON(conditions, conditions_);
        DARABONBA_PTR_TO_JSON(managed, managed_);
        DARABONBA_PTR_TO_JSON(releaseName, releaseName_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(workloads, workloads_);
      };
      friend void from_json(const Darabonba::Json& j, Collectors& obj) { 
        DARABONBA_PTR_FROM_JSON(addonMeta, addonMeta_);
        DARABONBA_PTR_FROM_JSON(collectorName, collectorName_);
        DARABONBA_PTR_FROM_JSON(collectorType, collectorType_);
        DARABONBA_PTR_FROM_JSON(conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(managed, managed_);
        DARABONBA_PTR_FROM_JSON(releaseName, releaseName_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(workloads, workloads_);
      };
      Collectors() = default ;
      Collectors(const Collectors &) = default ;
      Collectors(Collectors &&) = default ;
      Collectors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Collectors() = default ;
      Collectors& operator=(const Collectors &) = default ;
      Collectors& operator=(Collectors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Workloads : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Workloads& obj) { 
          DARABONBA_PTR_TO_JSON(hostIp, hostIp_);
          DARABONBA_PTR_TO_JSON(ip, ip_);
          DARABONBA_PTR_TO_JSON(managed, managed_);
          DARABONBA_PTR_TO_JSON(managedInfo, managedInfo_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
          DARABONBA_PTR_TO_JSON(ownerReferenceKind, ownerReferenceKind_);
          DARABONBA_PTR_TO_JSON(ownerReferenceName, ownerReferenceName_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Workloads& obj) { 
          DARABONBA_PTR_FROM_JSON(hostIp, hostIp_);
          DARABONBA_PTR_FROM_JSON(ip, ip_);
          DARABONBA_PTR_FROM_JSON(managed, managed_);
          DARABONBA_PTR_FROM_JSON(managedInfo, managedInfo_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(ownerReferenceKind, ownerReferenceKind_);
          DARABONBA_PTR_FROM_JSON(ownerReferenceName, ownerReferenceName_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Workloads() = default ;
        Workloads(const Workloads &) = default ;
        Workloads(Workloads &&) = default ;
        Workloads(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Workloads() = default ;
        Workloads& operator=(const Workloads &) = default ;
        Workloads& operator=(Workloads &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ManagedInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ManagedInfo& obj) { 
            DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
          };
          friend void from_json(const Darabonba::Json& j, ManagedInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
          };
          ManagedInfo() = default ;
          ManagedInfo(const ManagedInfo &) = default ;
          ManagedInfo(ManagedInfo &&) = default ;
          ManagedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ManagedInfo() = default ;
          ManagedInfo& operator=(const ManagedInfo &) = default ;
          ManagedInfo& operator=(ManagedInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->vswitchId_ == nullptr; };
          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline ManagedInfo& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          // vswitchId Field Functions 
          bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
          void deleteVswitchId() { this->vswitchId_ = nullptr;};
          inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
          inline ManagedInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        protected:
          shared_ptr<string> securityGroupId_ {};
          shared_ptr<string> vswitchId_ {};
        };

        virtual bool empty() const override { return this->hostIp_ == nullptr
        && this->ip_ == nullptr && this->managed_ == nullptr && this->managedInfo_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->namespace_ == nullptr && this->ownerReferenceKind_ == nullptr && this->ownerReferenceName_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->version_ == nullptr; };
        // hostIp Field Functions 
        bool hasHostIp() const { return this->hostIp_ != nullptr;};
        void deleteHostIp() { this->hostIp_ = nullptr;};
        inline string getHostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
        inline Workloads& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Workloads& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // managed Field Functions 
        bool hasManaged() const { return this->managed_ != nullptr;};
        void deleteManaged() { this->managed_ = nullptr;};
        inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
        inline Workloads& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


        // managedInfo Field Functions 
        bool hasManagedInfo() const { return this->managedInfo_ != nullptr;};
        void deleteManagedInfo() { this->managedInfo_ = nullptr;};
        inline const Workloads::ManagedInfo & getManagedInfo() const { DARABONBA_PTR_GET_CONST(managedInfo_, Workloads::ManagedInfo) };
        inline Workloads::ManagedInfo getManagedInfo() { DARABONBA_PTR_GET(managedInfo_, Workloads::ManagedInfo) };
        inline Workloads& setManagedInfo(const Workloads::ManagedInfo & managedInfo) { DARABONBA_PTR_SET_VALUE(managedInfo_, managedInfo) };
        inline Workloads& setManagedInfo(Workloads::ManagedInfo && managedInfo) { DARABONBA_PTR_SET_RVALUE(managedInfo_, managedInfo) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Workloads& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Workloads& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Workloads& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // ownerReferenceKind Field Functions 
        bool hasOwnerReferenceKind() const { return this->ownerReferenceKind_ != nullptr;};
        void deleteOwnerReferenceKind() { this->ownerReferenceKind_ = nullptr;};
        inline string getOwnerReferenceKind() const { DARABONBA_PTR_GET_DEFAULT(ownerReferenceKind_, "") };
        inline Workloads& setOwnerReferenceKind(string ownerReferenceKind) { DARABONBA_PTR_SET_VALUE(ownerReferenceKind_, ownerReferenceKind) };


        // ownerReferenceName Field Functions 
        bool hasOwnerReferenceName() const { return this->ownerReferenceName_ != nullptr;};
        void deleteOwnerReferenceName() { this->ownerReferenceName_ = nullptr;};
        inline string getOwnerReferenceName() const { DARABONBA_PTR_GET_DEFAULT(ownerReferenceName_, "") };
        inline Workloads& setOwnerReferenceName(string ownerReferenceName) { DARABONBA_PTR_SET_VALUE(ownerReferenceName_, ownerReferenceName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Workloads& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Workloads& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Workloads& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> hostIp_ {};
        shared_ptr<string> ip_ {};
        shared_ptr<bool> managed_ {};
        shared_ptr<Workloads::ManagedInfo> managedInfo_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> namespace_ {};
        shared_ptr<string> ownerReferenceKind_ {};
        shared_ptr<string> ownerReferenceName_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> version_ {};
      };

      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(firstTransitionTime, firstTransitionTime_);
          DARABONBA_PTR_TO_JSON(lastTransitionTime, lastTransitionTime_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(reason, reason_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(firstTransitionTime, firstTransitionTime_);
          DARABONBA_PTR_FROM_JSON(lastTransitionTime, lastTransitionTime_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(reason, reason_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->firstTransitionTime_ == nullptr
        && this->lastTransitionTime_ == nullptr && this->message_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // firstTransitionTime Field Functions 
        bool hasFirstTransitionTime() const { return this->firstTransitionTime_ != nullptr;};
        void deleteFirstTransitionTime() { this->firstTransitionTime_ = nullptr;};
        inline string getFirstTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(firstTransitionTime_, "") };
        inline Conditions& setFirstTransitionTime(string firstTransitionTime) { DARABONBA_PTR_SET_VALUE(firstTransitionTime_, firstTransitionTime) };


        // lastTransitionTime Field Functions 
        bool hasLastTransitionTime() const { return this->lastTransitionTime_ != nullptr;};
        void deleteLastTransitionTime() { this->lastTransitionTime_ = nullptr;};
        inline string getLastTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(lastTransitionTime_, "") };
        inline Conditions& setLastTransitionTime(string lastTransitionTime) { DARABONBA_PTR_SET_VALUE(lastTransitionTime_, lastTransitionTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Conditions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Conditions& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Conditions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Conditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> firstTransitionTime_ {};
        shared_ptr<string> lastTransitionTime_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> reason_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->addonMeta_ == nullptr
        && this->collectorName_ == nullptr && this->collectorType_ == nullptr && this->conditions_ == nullptr && this->managed_ == nullptr && this->releaseName_ == nullptr
        && this->state_ == nullptr && this->version_ == nullptr && this->workloads_ == nullptr; };
      // addonMeta Field Functions 
      bool hasAddonMeta() const { return this->addonMeta_ != nullptr;};
      void deleteAddonMeta() { this->addonMeta_ = nullptr;};
      inline const AddonMeta & getAddonMeta() const { DARABONBA_PTR_GET_CONST(addonMeta_, AddonMeta) };
      inline AddonMeta getAddonMeta() { DARABONBA_PTR_GET(addonMeta_, AddonMeta) };
      inline Collectors& setAddonMeta(const AddonMeta & addonMeta) { DARABONBA_PTR_SET_VALUE(addonMeta_, addonMeta) };
      inline Collectors& setAddonMeta(AddonMeta && addonMeta) { DARABONBA_PTR_SET_RVALUE(addonMeta_, addonMeta) };


      // collectorName Field Functions 
      bool hasCollectorName() const { return this->collectorName_ != nullptr;};
      void deleteCollectorName() { this->collectorName_ = nullptr;};
      inline string getCollectorName() const { DARABONBA_PTR_GET_DEFAULT(collectorName_, "") };
      inline Collectors& setCollectorName(string collectorName) { DARABONBA_PTR_SET_VALUE(collectorName_, collectorName) };


      // collectorType Field Functions 
      bool hasCollectorType() const { return this->collectorType_ != nullptr;};
      void deleteCollectorType() { this->collectorType_ = nullptr;};
      inline string getCollectorType() const { DARABONBA_PTR_GET_DEFAULT(collectorType_, "") };
      inline Collectors& setCollectorType(string collectorType) { DARABONBA_PTR_SET_VALUE(collectorType_, collectorType) };


      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Collectors::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Collectors::Conditions>) };
      inline vector<Collectors::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Collectors::Conditions>) };
      inline Collectors& setConditions(const vector<Collectors::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Collectors& setConditions(vector<Collectors::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // managed Field Functions 
      bool hasManaged() const { return this->managed_ != nullptr;};
      void deleteManaged() { this->managed_ = nullptr;};
      inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
      inline Collectors& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


      // releaseName Field Functions 
      bool hasReleaseName() const { return this->releaseName_ != nullptr;};
      void deleteReleaseName() { this->releaseName_ = nullptr;};
      inline string getReleaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
      inline Collectors& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Collectors& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Collectors& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workloads Field Functions 
      bool hasWorkloads() const { return this->workloads_ != nullptr;};
      void deleteWorkloads() { this->workloads_ = nullptr;};
      inline const vector<Collectors::Workloads> & getWorkloads() const { DARABONBA_PTR_GET_CONST(workloads_, vector<Collectors::Workloads>) };
      inline vector<Collectors::Workloads> getWorkloads() { DARABONBA_PTR_GET(workloads_, vector<Collectors::Workloads>) };
      inline Collectors& setWorkloads(const vector<Collectors::Workloads> & workloads) { DARABONBA_PTR_SET_VALUE(workloads_, workloads) };
      inline Collectors& setWorkloads(vector<Collectors::Workloads> && workloads) { DARABONBA_PTR_SET_RVALUE(workloads_, workloads) };


    protected:
      shared_ptr<AddonMeta> addonMeta_ {};
      shared_ptr<string> collectorName_ {};
      shared_ptr<string> collectorType_ {};
      shared_ptr<vector<Collectors::Conditions>> conditions_ {};
      shared_ptr<bool> managed_ {};
      shared_ptr<string> releaseName_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> version_ {};
      shared_ptr<vector<Collectors::Workloads>> workloads_ {};
    };

    virtual bool empty() const override { return this->collectors_ == nullptr
        && this->requestId_ == nullptr; };
    // collectors Field Functions 
    bool hasCollectors() const { return this->collectors_ != nullptr;};
    void deleteCollectors() { this->collectors_ = nullptr;};
    inline const vector<ListIntegrationPolicyCollectorsResponseBody::Collectors> & getCollectors() const { DARABONBA_PTR_GET_CONST(collectors_, vector<ListIntegrationPolicyCollectorsResponseBody::Collectors>) };
    inline vector<ListIntegrationPolicyCollectorsResponseBody::Collectors> getCollectors() { DARABONBA_PTR_GET(collectors_, vector<ListIntegrationPolicyCollectorsResponseBody::Collectors>) };
    inline ListIntegrationPolicyCollectorsResponseBody& setCollectors(const vector<ListIntegrationPolicyCollectorsResponseBody::Collectors> & collectors) { DARABONBA_PTR_SET_VALUE(collectors_, collectors) };
    inline ListIntegrationPolicyCollectorsResponseBody& setCollectors(vector<ListIntegrationPolicyCollectorsResponseBody::Collectors> && collectors) { DARABONBA_PTR_SET_RVALUE(collectors_, collectors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyCollectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListIntegrationPolicyCollectorsResponseBody::Collectors>> collectors_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
