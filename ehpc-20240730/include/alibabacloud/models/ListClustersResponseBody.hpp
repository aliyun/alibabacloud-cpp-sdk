// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListClustersResponseBody() = default ;
    ListClustersResponseBody(const ListClustersResponseBody &) = default ;
    ListClustersResponseBody(ListClustersResponseBody &&) = default ;
    ListClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBody() = default ;
    ListClustersResponseBody& operator=(const ListClustersResponseBody &) = default ;
    ListClustersResponseBody& operator=(ListClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clusters& obj) { 
        DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
        DARABONBA_PTR_TO_JSON(Addons, addons_);
        DARABONBA_PTR_TO_JSON(ClusterCategory, clusterCategory_);
        DARABONBA_PTR_TO_JSON(ClusterCreateTime, clusterCreateTime_);
        DARABONBA_PTR_TO_JSON(ClusterCredentials, clusterCredentials_);
        DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
        DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
        DARABONBA_PTR_TO_JSON(ClusterModifyTime, clusterModifyTime_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
        DARABONBA_PTR_TO_JSON(ClusterUsedCoreTime, clusterUsedCoreTime_);
        DARABONBA_PTR_TO_JSON(ClusterVSwitchId, clusterVSwitchId_);
        DARABONBA_PTR_TO_JSON(ClusterVpcId, clusterVpcId_);
        DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(EhpcVersion, ehpcVersion_);
        DARABONBA_PTR_TO_JSON(Manager, manager_);
        DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
        DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Users, users_);
      };
      friend void from_json(const Darabonba::Json& j, Clusters& obj) { 
        DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
        DARABONBA_PTR_FROM_JSON(Addons, addons_);
        DARABONBA_PTR_FROM_JSON(ClusterCategory, clusterCategory_);
        DARABONBA_PTR_FROM_JSON(ClusterCreateTime, clusterCreateTime_);
        DARABONBA_PTR_FROM_JSON(ClusterCredentials, clusterCredentials_);
        DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
        DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
        DARABONBA_PTR_FROM_JSON(ClusterModifyTime, clusterModifyTime_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
        DARABONBA_PTR_FROM_JSON(ClusterUsedCoreTime, clusterUsedCoreTime_);
        DARABONBA_PTR_FROM_JSON(ClusterVSwitchId, clusterVSwitchId_);
        DARABONBA_PTR_FROM_JSON(ClusterVpcId, clusterVpcId_);
        DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(EhpcVersion, ehpcVersion_);
        DARABONBA_PTR_FROM_JSON(Manager, manager_);
        DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
        DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Users, users_);
      };
      Clusters() = default ;
      Clusters(const Clusters &) = default ;
      Clusters(Clusters &&) = default ;
      Clusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clusters() = default ;
      Clusters& operator=(const Clusters &) = default ;
      Clusters& operator=(Clusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Users : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Users& obj) { 
          DARABONBA_PTR_TO_JSON(NormalCounts, normalCounts_);
          DARABONBA_PTR_TO_JSON(SudoCounts, sudoCounts_);
        };
        friend void from_json(const Darabonba::Json& j, Users& obj) { 
          DARABONBA_PTR_FROM_JSON(NormalCounts, normalCounts_);
          DARABONBA_PTR_FROM_JSON(SudoCounts, sudoCounts_);
        };
        Users() = default ;
        Users(const Users &) = default ;
        Users(Users &&) = default ;
        Users(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Users() = default ;
        Users& operator=(const Users &) = default ;
        Users& operator=(Users &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->normalCounts_ == nullptr
        && this->sudoCounts_ == nullptr; };
        // normalCounts Field Functions 
        bool hasNormalCounts() const { return this->normalCounts_ != nullptr;};
        void deleteNormalCounts() { this->normalCounts_ = nullptr;};
        inline int32_t getNormalCounts() const { DARABONBA_PTR_GET_DEFAULT(normalCounts_, 0) };
        inline Users& setNormalCounts(int32_t normalCounts) { DARABONBA_PTR_SET_VALUE(normalCounts_, normalCounts) };


        // sudoCounts Field Functions 
        bool hasSudoCounts() const { return this->sudoCounts_ != nullptr;};
        void deleteSudoCounts() { this->sudoCounts_ = nullptr;};
        inline int32_t getSudoCounts() const { DARABONBA_PTR_GET_DEFAULT(sudoCounts_, 0) };
        inline Users& setSudoCounts(int32_t sudoCounts) { DARABONBA_PTR_SET_VALUE(sudoCounts_, sudoCounts) };


      protected:
        // The number of ordinary users.
        shared_ptr<int32_t> normalCounts_ {};
        // The number of administrators.
        shared_ptr<int32_t> sudoCounts_ {};
      };

      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(AbnormalCounts, abnormalCounts_);
          DARABONBA_PTR_TO_JSON(CreatingCounts, creatingCounts_);
          DARABONBA_PTR_TO_JSON(RunningCounts, runningCounts_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(AbnormalCounts, abnormalCounts_);
          DARABONBA_PTR_FROM_JSON(CreatingCounts, creatingCounts_);
          DARABONBA_PTR_FROM_JSON(RunningCounts, runningCounts_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->abnormalCounts_ == nullptr
        && this->creatingCounts_ == nullptr && this->runningCounts_ == nullptr; };
        // abnormalCounts Field Functions 
        bool hasAbnormalCounts() const { return this->abnormalCounts_ != nullptr;};
        void deleteAbnormalCounts() { this->abnormalCounts_ = nullptr;};
        inline int32_t getAbnormalCounts() const { DARABONBA_PTR_GET_DEFAULT(abnormalCounts_, 0) };
        inline Nodes& setAbnormalCounts(int32_t abnormalCounts) { DARABONBA_PTR_SET_VALUE(abnormalCounts_, abnormalCounts) };


        // creatingCounts Field Functions 
        bool hasCreatingCounts() const { return this->creatingCounts_ != nullptr;};
        void deleteCreatingCounts() { this->creatingCounts_ = nullptr;};
        inline int32_t getCreatingCounts() const { DARABONBA_PTR_GET_DEFAULT(creatingCounts_, 0) };
        inline Nodes& setCreatingCounts(int32_t creatingCounts) { DARABONBA_PTR_SET_VALUE(creatingCounts_, creatingCounts) };


        // runningCounts Field Functions 
        bool hasRunningCounts() const { return this->runningCounts_ != nullptr;};
        void deleteRunningCounts() { this->runningCounts_ = nullptr;};
        inline int32_t getRunningCounts() const { DARABONBA_PTR_GET_DEFAULT(runningCounts_, 0) };
        inline Nodes& setRunningCounts(int32_t runningCounts) { DARABONBA_PTR_SET_VALUE(runningCounts_, runningCounts) };


      protected:
        // The number of malfunctioning compute nodes.
        shared_ptr<int32_t> abnormalCounts_ {};
        // The number of compute nodes that are being created.
        shared_ptr<int32_t> creatingCounts_ {};
        // The number of running compute nodes.
        shared_ptr<int32_t> runningCounts_ {};
      };

      class Manager : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Manager& obj) { 
          DARABONBA_PTR_TO_JSON(DNS, DNS_);
          DARABONBA_PTR_TO_JSON(DirectoryService, directoryService_);
          DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
        };
        friend void from_json(const Darabonba::Json& j, Manager& obj) { 
          DARABONBA_PTR_FROM_JSON(DNS, DNS_);
          DARABONBA_PTR_FROM_JSON(DirectoryService, directoryService_);
          DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
        };
        Manager() = default ;
        Manager(const Manager &) = default ;
        Manager(Manager &&) = default ;
        Manager(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Manager() = default ;
        Manager& operator=(const Manager &) = default ;
        Manager& operator=(Manager &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Scheduler : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Scheduler& obj) { 
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, Scheduler& obj) { 
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          Scheduler() = default ;
          Scheduler(const Scheduler &) = default ;
          Scheduler(Scheduler &&) = default ;
          Scheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Scheduler() = default ;
          Scheduler& operator=(const Scheduler &) = default ;
          Scheduler& operator=(Scheduler &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->type_ == nullptr
        && this->version_ == nullptr; };
          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Scheduler& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline Scheduler& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The scheduler type.
          shared_ptr<string> type_ {};
          // The scheduler version.
          shared_ptr<string> version_ {};
        };

        class DirectoryService : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DirectoryService& obj) { 
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, DirectoryService& obj) { 
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          DirectoryService() = default ;
          DirectoryService(const DirectoryService &) = default ;
          DirectoryService(DirectoryService &&) = default ;
          DirectoryService(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DirectoryService() = default ;
          DirectoryService& operator=(const DirectoryService &) = default ;
          DirectoryService& operator=(DirectoryService &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->type_ == nullptr
        && this->version_ == nullptr; };
          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DirectoryService& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline DirectoryService& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The type of the domain account.
          shared_ptr<string> type_ {};
          // The version of the domain account service.
          shared_ptr<string> version_ {};
        };

        class DNS : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DNS& obj) { 
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, DNS& obj) { 
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          DNS() = default ;
          DNS(const DNS &) = default ;
          DNS(DNS &&) = default ;
          DNS(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DNS() = default ;
          DNS& operator=(const DNS &) = default ;
          DNS& operator=(DNS &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->type_ == nullptr
        && this->version_ == nullptr; };
          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DNS& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline DNS& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The resolution type.
          shared_ptr<string> type_ {};
          // The version of the domain name resolution service.
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->DNS_ == nullptr
        && this->directoryService_ == nullptr && this->scheduler_ == nullptr; };
        // DNS Field Functions 
        bool hasDNS() const { return this->DNS_ != nullptr;};
        void deleteDNS() { this->DNS_ = nullptr;};
        inline const Manager::DNS & getDNS() const { DARABONBA_PTR_GET_CONST(DNS_, Manager::DNS) };
        inline Manager::DNS getDNS() { DARABONBA_PTR_GET(DNS_, Manager::DNS) };
        inline Manager& setDNS(const Manager::DNS & dNS) { DARABONBA_PTR_SET_VALUE(DNS_, dNS) };
        inline Manager& setDNS(Manager::DNS && dNS) { DARABONBA_PTR_SET_RVALUE(DNS_, dNS) };


        // directoryService Field Functions 
        bool hasDirectoryService() const { return this->directoryService_ != nullptr;};
        void deleteDirectoryService() { this->directoryService_ = nullptr;};
        inline const Manager::DirectoryService & getDirectoryService() const { DARABONBA_PTR_GET_CONST(directoryService_, Manager::DirectoryService) };
        inline Manager::DirectoryService getDirectoryService() { DARABONBA_PTR_GET(directoryService_, Manager::DirectoryService) };
        inline Manager& setDirectoryService(const Manager::DirectoryService & directoryService) { DARABONBA_PTR_SET_VALUE(directoryService_, directoryService) };
        inline Manager& setDirectoryService(Manager::DirectoryService && directoryService) { DARABONBA_PTR_SET_RVALUE(directoryService_, directoryService) };


        // scheduler Field Functions 
        bool hasScheduler() const { return this->scheduler_ != nullptr;};
        void deleteScheduler() { this->scheduler_ = nullptr;};
        inline const Manager::Scheduler & getScheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, Manager::Scheduler) };
        inline Manager::Scheduler getScheduler() { DARABONBA_PTR_GET(scheduler_, Manager::Scheduler) };
        inline Manager& setScheduler(const Manager::Scheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
        inline Manager& setScheduler(Manager::Scheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


      protected:
        // The configurations of the domain name resolution service.
        shared_ptr<Manager::DNS> DNS_ {};
        // The configurations of the directory service.
        shared_ptr<Manager::DirectoryService> directoryService_ {};
        // The configurations of the scheduler service.
        shared_ptr<Manager::Scheduler> scheduler_ {};
      };

      class ClusterCustomConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterCustomConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(Args, args_);
          DARABONBA_PTR_TO_JSON(Script, script_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterCustomConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(Args, args_);
          DARABONBA_PTR_FROM_JSON(Script, script_);
        };
        ClusterCustomConfiguration() = default ;
        ClusterCustomConfiguration(const ClusterCustomConfiguration &) = default ;
        ClusterCustomConfiguration(ClusterCustomConfiguration &&) = default ;
        ClusterCustomConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterCustomConfiguration() = default ;
        ClusterCustomConfiguration& operator=(const ClusterCustomConfiguration &) = default ;
        ClusterCustomConfiguration& operator=(ClusterCustomConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->args_ == nullptr
        && this->script_ == nullptr; };
        // args Field Functions 
        bool hasArgs() const { return this->args_ != nullptr;};
        void deleteArgs() { this->args_ = nullptr;};
        inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
        inline ClusterCustomConfiguration& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
        inline ClusterCustomConfiguration& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


      protected:
        // The parameters of the post-processing script.
        shared_ptr<string> args_ {};
        // The link to the post-processing script.
        shared_ptr<string> script_ {};
      };

      class Addons : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Addons& obj) { 
          DARABONBA_PTR_TO_JSON(AddonId, addonId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ResourcesSpec, resourcesSpec_);
          DARABONBA_PTR_TO_JSON(ServicesSpec, servicesSpec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Addons& obj) { 
          DARABONBA_PTR_FROM_JSON(AddonId, addonId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ResourcesSpec, resourcesSpec_);
          DARABONBA_PTR_FROM_JSON(ServicesSpec, servicesSpec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Addons() = default ;
        Addons(const Addons &) = default ;
        Addons(Addons &&) = default ;
        Addons(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Addons() = default ;
        Addons& operator=(const Addons &) = default ;
        Addons& operator=(Addons &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServicesSpec : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServicesSpec& obj) { 
            DARABONBA_PTR_TO_JSON(ServiceAccessType, serviceAccessType_);
            DARABONBA_PTR_TO_JSON(ServiceAccessUrl, serviceAccessUrl_);
            DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          };
          friend void from_json(const Darabonba::Json& j, ServicesSpec& obj) { 
            DARABONBA_PTR_FROM_JSON(ServiceAccessType, serviceAccessType_);
            DARABONBA_PTR_FROM_JSON(ServiceAccessUrl, serviceAccessUrl_);
            DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          };
          ServicesSpec() = default ;
          ServicesSpec(const ServicesSpec &) = default ;
          ServicesSpec(ServicesSpec &&) = default ;
          ServicesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServicesSpec() = default ;
          ServicesSpec& operator=(const ServicesSpec &) = default ;
          ServicesSpec& operator=(ServicesSpec &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->serviceAccessType_ == nullptr
        && this->serviceAccessUrl_ == nullptr && this->serviceName_ == nullptr; };
          // serviceAccessType Field Functions 
          bool hasServiceAccessType() const { return this->serviceAccessType_ != nullptr;};
          void deleteServiceAccessType() { this->serviceAccessType_ = nullptr;};
          inline string getServiceAccessType() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessType_, "") };
          inline ServicesSpec& setServiceAccessType(string serviceAccessType) { DARABONBA_PTR_SET_VALUE(serviceAccessType_, serviceAccessType) };


          // serviceAccessUrl Field Functions 
          bool hasServiceAccessUrl() const { return this->serviceAccessUrl_ != nullptr;};
          void deleteServiceAccessUrl() { this->serviceAccessUrl_ = nullptr;};
          inline string getServiceAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessUrl_, "") };
          inline ServicesSpec& setServiceAccessUrl(string serviceAccessUrl) { DARABONBA_PTR_SET_VALUE(serviceAccessUrl_, serviceAccessUrl) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline ServicesSpec& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        protected:
          // The service access type.
          shared_ptr<string> serviceAccessType_ {};
          // The service access URL.
          shared_ptr<string> serviceAccessUrl_ {};
          // The service name.
          // 
          // This parameter is required.
          shared_ptr<string> serviceName_ {};
        };

        class ResourcesSpec : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourcesSpec& obj) { 
            DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
            DARABONBA_PTR_TO_JSON(EipInstanceId, eipInstanceId_);
          };
          friend void from_json(const Darabonba::Json& j, ResourcesSpec& obj) { 
            DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
            DARABONBA_PTR_FROM_JSON(EipInstanceId, eipInstanceId_);
          };
          ResourcesSpec() = default ;
          ResourcesSpec(const ResourcesSpec &) = default ;
          ResourcesSpec(ResourcesSpec &&) = default ;
          ResourcesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourcesSpec() = default ;
          ResourcesSpec& operator=(const ResourcesSpec &) = default ;
          ResourcesSpec& operator=(ResourcesSpec &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && this->eipInstanceId_ == nullptr; };
          // ecsInstanceId Field Functions 
          bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
          void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
          inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
          inline ResourcesSpec& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


          // eipInstanceId Field Functions 
          bool hasEipInstanceId() const { return this->eipInstanceId_ != nullptr;};
          void deleteEipInstanceId() { this->eipInstanceId_ = nullptr;};
          inline string getEipInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eipInstanceId_, "") };
          inline ResourcesSpec& setEipInstanceId(string eipInstanceId) { DARABONBA_PTR_SET_VALUE(eipInstanceId_, eipInstanceId) };


        protected:
          // The instance ID.
          shared_ptr<string> ecsInstanceId_ {};
          // The Elastic IP Address (EIP) ID.
          shared_ptr<string> eipInstanceId_ {};
        };

        virtual bool empty() const override { return this->addonId_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr && this->name_ == nullptr && this->resourcesSpec_ == nullptr && this->servicesSpec_ == nullptr
        && this->status_ == nullptr && this->version_ == nullptr; };
        // addonId Field Functions 
        bool hasAddonId() const { return this->addonId_ != nullptr;};
        void deleteAddonId() { this->addonId_ = nullptr;};
        inline string getAddonId() const { DARABONBA_PTR_GET_DEFAULT(addonId_, "") };
        inline Addons& setAddonId(string addonId) { DARABONBA_PTR_SET_VALUE(addonId_, addonId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Addons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Addons& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // resourcesSpec Field Functions 
        bool hasResourcesSpec() const { return this->resourcesSpec_ != nullptr;};
        void deleteResourcesSpec() { this->resourcesSpec_ = nullptr;};
        inline const Addons::ResourcesSpec & getResourcesSpec() const { DARABONBA_PTR_GET_CONST(resourcesSpec_, Addons::ResourcesSpec) };
        inline Addons::ResourcesSpec getResourcesSpec() { DARABONBA_PTR_GET(resourcesSpec_, Addons::ResourcesSpec) };
        inline Addons& setResourcesSpec(const Addons::ResourcesSpec & resourcesSpec) { DARABONBA_PTR_SET_VALUE(resourcesSpec_, resourcesSpec) };
        inline Addons& setResourcesSpec(Addons::ResourcesSpec && resourcesSpec) { DARABONBA_PTR_SET_RVALUE(resourcesSpec_, resourcesSpec) };


        // servicesSpec Field Functions 
        bool hasServicesSpec() const { return this->servicesSpec_ != nullptr;};
        void deleteServicesSpec() { this->servicesSpec_ = nullptr;};
        inline const vector<Addons::ServicesSpec> & getServicesSpec() const { DARABONBA_PTR_GET_CONST(servicesSpec_, vector<Addons::ServicesSpec>) };
        inline vector<Addons::ServicesSpec> getServicesSpec() { DARABONBA_PTR_GET(servicesSpec_, vector<Addons::ServicesSpec>) };
        inline Addons& setServicesSpec(const vector<Addons::ServicesSpec> & servicesSpec) { DARABONBA_PTR_SET_VALUE(servicesSpec_, servicesSpec) };
        inline Addons& setServicesSpec(vector<Addons::ServicesSpec> && servicesSpec) { DARABONBA_PTR_SET_RVALUE(servicesSpec_, servicesSpec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Addons& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Addons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The addon ID.
        shared_ptr<string> addonId_ {};
        // The addon description.
        shared_ptr<string> description_ {};
        // The addon label.
        shared_ptr<string> label_ {};
        // The addon name.
        // 
        // This parameter is required.
        shared_ptr<string> name_ {};
        // The resource configurations of the addon.
        shared_ptr<Addons::ResourcesSpec> resourcesSpec_ {};
        // The information about the addon services.
        shared_ptr<vector<Addons::ServicesSpec>> servicesSpec_ {};
        // The addon state.
        shared_ptr<string> status_ {};
        // The addon version.
        // 
        // This parameter is required.
        shared_ptr<string> version_ {};
      };

      class AdditionalPackages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdditionalPackages& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, AdditionalPackages& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        AdditionalPackages() = default ;
        AdditionalPackages(const AdditionalPackages &) = default ;
        AdditionalPackages(AdditionalPackages &&) = default ;
        AdditionalPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdditionalPackages() = default ;
        AdditionalPackages& operator=(const AdditionalPackages &) = default ;
        AdditionalPackages& operator=(AdditionalPackages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->version_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AdditionalPackages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline AdditionalPackages& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The software name.
        shared_ptr<string> name_ {};
        // The software version.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->additionalPackages_ == nullptr
        && this->addons_ == nullptr && this->clusterCategory_ == nullptr && this->clusterCreateTime_ == nullptr && this->clusterCredentials_ == nullptr && this->clusterCustomConfiguration_ == nullptr
        && this->clusterDescription_ == nullptr && this->clusterId_ == nullptr && this->clusterMode_ == nullptr && this->clusterModifyTime_ == nullptr && this->clusterName_ == nullptr
        && this->clusterStatus_ == nullptr && this->clusterUsedCoreTime_ == nullptr && this->clusterVSwitchId_ == nullptr && this->clusterVpcId_ == nullptr && this->deletionProtection_ == nullptr
        && this->ehpcVersion_ == nullptr && this->manager_ == nullptr && this->maxCoreCount_ == nullptr && this->maxCount_ == nullptr && this->nodes_ == nullptr
        && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr && this->users_ == nullptr; };
      // additionalPackages Field Functions 
      bool hasAdditionalPackages() const { return this->additionalPackages_ != nullptr;};
      void deleteAdditionalPackages() { this->additionalPackages_ = nullptr;};
      inline const vector<Clusters::AdditionalPackages> & getAdditionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, vector<Clusters::AdditionalPackages>) };
      inline vector<Clusters::AdditionalPackages> getAdditionalPackages() { DARABONBA_PTR_GET(additionalPackages_, vector<Clusters::AdditionalPackages>) };
      inline Clusters& setAdditionalPackages(const vector<Clusters::AdditionalPackages> & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
      inline Clusters& setAdditionalPackages(vector<Clusters::AdditionalPackages> && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


      // addons Field Functions 
      bool hasAddons() const { return this->addons_ != nullptr;};
      void deleteAddons() { this->addons_ = nullptr;};
      inline const vector<Clusters::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<Clusters::Addons>) };
      inline vector<Clusters::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<Clusters::Addons>) };
      inline Clusters& setAddons(const vector<Clusters::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
      inline Clusters& setAddons(vector<Clusters::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


      // clusterCategory Field Functions 
      bool hasClusterCategory() const { return this->clusterCategory_ != nullptr;};
      void deleteClusterCategory() { this->clusterCategory_ = nullptr;};
      inline string getClusterCategory() const { DARABONBA_PTR_GET_DEFAULT(clusterCategory_, "") };
      inline Clusters& setClusterCategory(string clusterCategory) { DARABONBA_PTR_SET_VALUE(clusterCategory_, clusterCategory) };


      // clusterCreateTime Field Functions 
      bool hasClusterCreateTime() const { return this->clusterCreateTime_ != nullptr;};
      void deleteClusterCreateTime() { this->clusterCreateTime_ = nullptr;};
      inline string getClusterCreateTime() const { DARABONBA_PTR_GET_DEFAULT(clusterCreateTime_, "") };
      inline Clusters& setClusterCreateTime(string clusterCreateTime) { DARABONBA_PTR_SET_VALUE(clusterCreateTime_, clusterCreateTime) };


      // clusterCredentials Field Functions 
      bool hasClusterCredentials() const { return this->clusterCredentials_ != nullptr;};
      void deleteClusterCredentials() { this->clusterCredentials_ = nullptr;};
      inline const vector<string> & getClusterCredentials() const { DARABONBA_PTR_GET_CONST(clusterCredentials_, vector<string>) };
      inline vector<string> getClusterCredentials() { DARABONBA_PTR_GET(clusterCredentials_, vector<string>) };
      inline Clusters& setClusterCredentials(const vector<string> & clusterCredentials) { DARABONBA_PTR_SET_VALUE(clusterCredentials_, clusterCredentials) };
      inline Clusters& setClusterCredentials(vector<string> && clusterCredentials) { DARABONBA_PTR_SET_RVALUE(clusterCredentials_, clusterCredentials) };


      // clusterCustomConfiguration Field Functions 
      bool hasClusterCustomConfiguration() const { return this->clusterCustomConfiguration_ != nullptr;};
      void deleteClusterCustomConfiguration() { this->clusterCustomConfiguration_ = nullptr;};
      inline const Clusters::ClusterCustomConfiguration & getClusterCustomConfiguration() const { DARABONBA_PTR_GET_CONST(clusterCustomConfiguration_, Clusters::ClusterCustomConfiguration) };
      inline Clusters::ClusterCustomConfiguration getClusterCustomConfiguration() { DARABONBA_PTR_GET(clusterCustomConfiguration_, Clusters::ClusterCustomConfiguration) };
      inline Clusters& setClusterCustomConfiguration(const Clusters::ClusterCustomConfiguration & clusterCustomConfiguration) { DARABONBA_PTR_SET_VALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };
      inline Clusters& setClusterCustomConfiguration(Clusters::ClusterCustomConfiguration && clusterCustomConfiguration) { DARABONBA_PTR_SET_RVALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };


      // clusterDescription Field Functions 
      bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
      void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
      inline string getClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
      inline Clusters& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Clusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterMode Field Functions 
      bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
      void deleteClusterMode() { this->clusterMode_ = nullptr;};
      inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
      inline Clusters& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


      // clusterModifyTime Field Functions 
      bool hasClusterModifyTime() const { return this->clusterModifyTime_ != nullptr;};
      void deleteClusterModifyTime() { this->clusterModifyTime_ = nullptr;};
      inline string getClusterModifyTime() const { DARABONBA_PTR_GET_DEFAULT(clusterModifyTime_, "") };
      inline Clusters& setClusterModifyTime(string clusterModifyTime) { DARABONBA_PTR_SET_VALUE(clusterModifyTime_, clusterModifyTime) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Clusters& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterStatus Field Functions 
      bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
      void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
      inline string getClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
      inline Clusters& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


      // clusterUsedCoreTime Field Functions 
      bool hasClusterUsedCoreTime() const { return this->clusterUsedCoreTime_ != nullptr;};
      void deleteClusterUsedCoreTime() { this->clusterUsedCoreTime_ = nullptr;};
      inline float getClusterUsedCoreTime() const { DARABONBA_PTR_GET_DEFAULT(clusterUsedCoreTime_, 0.0) };
      inline Clusters& setClusterUsedCoreTime(float clusterUsedCoreTime) { DARABONBA_PTR_SET_VALUE(clusterUsedCoreTime_, clusterUsedCoreTime) };


      // clusterVSwitchId Field Functions 
      bool hasClusterVSwitchId() const { return this->clusterVSwitchId_ != nullptr;};
      void deleteClusterVSwitchId() { this->clusterVSwitchId_ = nullptr;};
      inline string getClusterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(clusterVSwitchId_, "") };
      inline Clusters& setClusterVSwitchId(string clusterVSwitchId) { DARABONBA_PTR_SET_VALUE(clusterVSwitchId_, clusterVSwitchId) };


      // clusterVpcId Field Functions 
      bool hasClusterVpcId() const { return this->clusterVpcId_ != nullptr;};
      void deleteClusterVpcId() { this->clusterVpcId_ = nullptr;};
      inline string getClusterVpcId() const { DARABONBA_PTR_GET_DEFAULT(clusterVpcId_, "") };
      inline Clusters& setClusterVpcId(string clusterVpcId) { DARABONBA_PTR_SET_VALUE(clusterVpcId_, clusterVpcId) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline Clusters& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // ehpcVersion Field Functions 
      bool hasEhpcVersion() const { return this->ehpcVersion_ != nullptr;};
      void deleteEhpcVersion() { this->ehpcVersion_ = nullptr;};
      inline string getEhpcVersion() const { DARABONBA_PTR_GET_DEFAULT(ehpcVersion_, "") };
      inline Clusters& setEhpcVersion(string ehpcVersion) { DARABONBA_PTR_SET_VALUE(ehpcVersion_, ehpcVersion) };


      // manager Field Functions 
      bool hasManager() const { return this->manager_ != nullptr;};
      void deleteManager() { this->manager_ = nullptr;};
      inline const Clusters::Manager & getManager() const { DARABONBA_PTR_GET_CONST(manager_, Clusters::Manager) };
      inline Clusters::Manager getManager() { DARABONBA_PTR_GET(manager_, Clusters::Manager) };
      inline Clusters& setManager(const Clusters::Manager & manager) { DARABONBA_PTR_SET_VALUE(manager_, manager) };
      inline Clusters& setManager(Clusters::Manager && manager) { DARABONBA_PTR_SET_RVALUE(manager_, manager) };


      // maxCoreCount Field Functions 
      bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
      void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
      inline int64_t getMaxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0L) };
      inline Clusters& setMaxCoreCount(int64_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


      // maxCount Field Functions 
      bool hasMaxCount() const { return this->maxCount_ != nullptr;};
      void deleteMaxCount() { this->maxCount_ = nullptr;};
      inline int64_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0L) };
      inline Clusters& setMaxCount(int64_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const Clusters::Nodes & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, Clusters::Nodes) };
      inline Clusters::Nodes getNodes() { DARABONBA_PTR_GET(nodes_, Clusters::Nodes) };
      inline Clusters& setNodes(const Clusters::Nodes & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Clusters& setNodes(Clusters::Nodes && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Clusters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Clusters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const Clusters::Users & getUsers() const { DARABONBA_PTR_GET_CONST(users_, Clusters::Users) };
      inline Clusters::Users getUsers() { DARABONBA_PTR_GET(users_, Clusters::Users) };
      inline Clusters& setUsers(const Clusters::Users & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline Clusters& setUsers(Clusters::Users && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      // The information about installed software in the cluster.
      shared_ptr<vector<Clusters::AdditionalPackages>> additionalPackages_ {};
      // The information about the addons in the cluster.
      shared_ptr<vector<Clusters::Addons>> addons_ {};
      // The cluster type. Valid values:
      // 
      // *   Standard
      // *   Serverless
      shared_ptr<string> clusterCategory_ {};
      // The time when the cluster was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
      shared_ptr<string> clusterCreateTime_ {};
      // The logon credential type of the cluster. Valid values:
      // 
      // *   password: requires passwords for logons.
      // *   keypair: requires key pairs for logons.
      shared_ptr<vector<string>> clusterCredentials_ {};
      // The post-processing script used by the cluster.
      shared_ptr<Clusters::ClusterCustomConfiguration> clusterCustomConfiguration_ {};
      // The cluster description.
      shared_ptr<string> clusterDescription_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The deployment type of the cluster. Valid values:
      // 
      // *   Integrated: public cloud
      // *   Hybrid: hybrid cloud
      // *   Custom: a custom cluster
      shared_ptr<string> clusterMode_ {};
      // The time when the cluster was modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
      shared_ptr<string> clusterModifyTime_ {};
      // The cluster name.
      shared_ptr<string> clusterName_ {};
      // The cluster state. Valid values:
      // 
      // *   uninit: The cluster is being installed.
      // *   creating: The cluster is being created.
      // *   initing: The cluster is being initialized.
      // *   running: The cluster is running.
      // *   Releasing: The cluster is being released.
      // *   stopping: The cluster is being stopped.
      // *   stopped: The cluster is stopped.
      // *   exception: The cluster has run into an exception.
      // *   pending: The cluster is waiting to be configured.
      shared_ptr<string> clusterStatus_ {};
      // The vCPU-hour usage of the cluster.
      shared_ptr<float> clusterUsedCoreTime_ {};
      // The ID of the vSwitch used by the cluster.
      shared_ptr<string> clusterVSwitchId_ {};
      // The ID of the virtual private cloud (VPC) used by the cluster.
      shared_ptr<string> clusterVpcId_ {};
      // Indicates whether deletion protection is enabled for the cluster. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> deletionProtection_ {};
      // The Elastic High Performance Computing (E-HPC) version.
      shared_ptr<string> ehpcVersion_ {};
      // The configurations of the cluster management node.
      shared_ptr<Clusters::Manager> manager_ {};
      // The maximum total number of vCPUs used by the compute nodes that can be managed by the cluster.
      shared_ptr<int64_t> maxCoreCount_ {};
      // The maximum number of compute nodes that can be managed by the cluster.
      shared_ptr<int64_t> maxCount_ {};
      // The node statistics of the cluster.
      shared_ptr<Clusters::Nodes> nodes_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the security group used by the cluster.
      shared_ptr<string> securityGroupId_ {};
      // The user attribute information of the cluster.
      shared_ptr<Clusters::Users> users_ {};
    };

    virtual bool empty() const override { return this->clusters_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<ListClustersResponseBody::Clusters> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<ListClustersResponseBody::Clusters>) };
    inline vector<ListClustersResponseBody::Clusters> getClusters() { DARABONBA_PTR_GET(clusters_, vector<ListClustersResponseBody::Clusters>) };
    inline ListClustersResponseBody& setClusters(const vector<ListClustersResponseBody::Clusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline ListClustersResponseBody& setClusters(vector<ListClustersResponseBody::Clusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListClustersResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of clusters.
    shared_ptr<vector<ListClustersResponseBody::Clusters>> clusters_ {};
    // The page number of the returned page.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
