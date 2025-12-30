// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeTemplate.hpp>
#include <vector>
#include <alibabacloud/models/QueueTemplate.hpp>
#include <alibabacloud/models/SharedStorageTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_TO_JSON(ClusterCredentials, clusterCredentials_);
      DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(IsEnterpriseSecurityGroup, isEnterpriseSecurityGroup_);
      DARABONBA_PTR_TO_JSON(Manager, manager_);
      DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(Queues, queues_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStorages_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_FROM_JSON(ClusterCredentials, clusterCredentials_);
      DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(IsEnterpriseSecurityGroup, isEnterpriseSecurityGroup_);
      DARABONBA_PTR_FROM_JSON(Manager, manager_);
      DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(Queues, queues_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStorages_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateClusterRequest() = default ;
    CreateClusterRequest(const CreateClusterRequest &) = default ;
    CreateClusterRequest(CreateClusterRequest &&) = default ;
    CreateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequest() = default ;
    CreateClusterRequest& operator=(const CreateClusterRequest &) = default ;
    CreateClusterRequest& operator=(CreateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class Manager : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Manager& obj) { 
        DARABONBA_PTR_TO_JSON(DNS, DNS_);
        DARABONBA_PTR_TO_JSON(DirectoryService, directoryService_);
        DARABONBA_PTR_TO_JSON(ManagerNode, managerNode_);
        DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      };
      friend void from_json(const Darabonba::Json& j, Manager& obj) { 
        DARABONBA_PTR_FROM_JSON(DNS, DNS_);
        DARABONBA_PTR_FROM_JSON(DirectoryService, directoryService_);
        DARABONBA_PTR_FROM_JSON(ManagerNode, managerNode_);
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
        // The scheduler type. Valid values:
        // 
        // *   SLURM
        // *   PBS
        // *   OPENGRIDSCHEDULER
        // *   LSF_PLUGIN
        // *   PBS_PLUGIN
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
        // 
        // Valid values:
        // 
        // *   NIS
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
        // The domain name resolution type.
        // 
        // Valid values:
        // 
        // *   NIS
        shared_ptr<string> type_ {};
        // The version of the domain name resolution service.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->DNS_ == nullptr
        && this->directoryService_ == nullptr && this->managerNode_ == nullptr && this->scheduler_ == nullptr; };
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


      // managerNode Field Functions 
      bool hasManagerNode() const { return this->managerNode_ != nullptr;};
      void deleteManagerNode() { this->managerNode_ = nullptr;};
      inline const NodeTemplate & getManagerNode() const { DARABONBA_PTR_GET_CONST(managerNode_, NodeTemplate) };
      inline NodeTemplate getManagerNode() { DARABONBA_PTR_GET(managerNode_, NodeTemplate) };
      inline Manager& setManagerNode(const NodeTemplate & managerNode) { DARABONBA_PTR_SET_VALUE(managerNode_, managerNode) };
      inline Manager& setManagerNode(NodeTemplate && managerNode) { DARABONBA_PTR_SET_RVALUE(managerNode_, managerNode) };


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
      // The configurations of the domain account service.
      shared_ptr<Manager::DirectoryService> directoryService_ {};
      // The hardware configurations of the management node.
      shared_ptr<NodeTemplate> managerNode_ {};
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
      // The runtime parameters of the script after the cluster is created.
      shared_ptr<string> args_ {};
      // The URL that is used to download the post-processing script.
      shared_ptr<string> script_ {};
    };

    class ClusterCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_TO_JSON(Password, password_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
      };
      ClusterCredentials() = default ;
      ClusterCredentials(const ClusterCredentials &) = default ;
      ClusterCredentials(ClusterCredentials &&) = default ;
      ClusterCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterCredentials() = default ;
      ClusterCredentials& operator=(const ClusterCredentials &) = default ;
      ClusterCredentials& operator=(ClusterCredentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyPairName_ == nullptr
        && this->password_ == nullptr; };
      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline ClusterCredentials& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline ClusterCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    protected:
      // The name of the key pair. The name must be 2 to 128 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain digits, letters, colons (:), underscores (_), and hyphens (-).
      // 
      // >  For more information, see [Create a key pair](https://help.aliyun.com/document_detail/51793.html).
      shared_ptr<string> keyPairName_ {};
      // The password for the root user to log on to the node. The password must be 8 to 20 characters in length, and must contain at least 3 of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported: `() ~ ! @ # $ % ^ & * - = + { } [ ] : ; \\" < > , . ? /`
      // 
      // >  We recommend that you use HTTPS to call the API operation to prevent password leakage.
      shared_ptr<string> password_ {};
    };

    class Addons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addons& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourcesSpec, resourcesSpec_);
        DARABONBA_PTR_TO_JSON(ServicesSpec, servicesSpec_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Addons& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourcesSpec, resourcesSpec_);
        DARABONBA_PTR_FROM_JSON(ServicesSpec, servicesSpec_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->resourcesSpec_ == nullptr && this->servicesSpec_ == nullptr && this->version_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourcesSpec Field Functions 
      bool hasResourcesSpec() const { return this->resourcesSpec_ != nullptr;};
      void deleteResourcesSpec() { this->resourcesSpec_ = nullptr;};
      inline string getResourcesSpec() const { DARABONBA_PTR_GET_DEFAULT(resourcesSpec_, "") };
      inline Addons& setResourcesSpec(string resourcesSpec) { DARABONBA_PTR_SET_VALUE(resourcesSpec_, resourcesSpec) };


      // servicesSpec Field Functions 
      bool hasServicesSpec() const { return this->servicesSpec_ != nullptr;};
      void deleteServicesSpec() { this->servicesSpec_ = nullptr;};
      inline string getServicesSpec() const { DARABONBA_PTR_GET_DEFAULT(servicesSpec_, "") };
      inline Addons& setServicesSpec(string servicesSpec) { DARABONBA_PTR_SET_VALUE(servicesSpec_, servicesSpec) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Addons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The addon name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The resource configurations of the addon.
      shared_ptr<string> resourcesSpec_ {};
      // The service configurations of the addon.
      shared_ptr<string> servicesSpec_ {};
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
      // The name of the software that you want to install in the cluster.
      shared_ptr<string> name_ {};
      // The version of the software that you want to install in the cluster.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->additionalPackages_ == nullptr
        && this->addons_ == nullptr && this->clientVersion_ == nullptr && this->clusterCategory_ == nullptr && this->clusterCredentials_ == nullptr && this->clusterCustomConfiguration_ == nullptr
        && this->clusterDescription_ == nullptr && this->clusterMode_ == nullptr && this->clusterName_ == nullptr && this->clusterVSwitchId_ == nullptr && this->clusterVpcId_ == nullptr
        && this->deletionProtection_ == nullptr && this->isEnterpriseSecurityGroup_ == nullptr && this->manager_ == nullptr && this->maxCoreCount_ == nullptr && this->maxCount_ == nullptr
        && this->queues_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr && this->sharedStorages_ == nullptr && this->tags_ == nullptr; };
    // additionalPackages Field Functions 
    bool hasAdditionalPackages() const { return this->additionalPackages_ != nullptr;};
    void deleteAdditionalPackages() { this->additionalPackages_ = nullptr;};
    inline const vector<CreateClusterRequest::AdditionalPackages> & getAdditionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, vector<CreateClusterRequest::AdditionalPackages>) };
    inline vector<CreateClusterRequest::AdditionalPackages> getAdditionalPackages() { DARABONBA_PTR_GET(additionalPackages_, vector<CreateClusterRequest::AdditionalPackages>) };
    inline CreateClusterRequest& setAdditionalPackages(const vector<CreateClusterRequest::AdditionalPackages> & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
    inline CreateClusterRequest& setAdditionalPackages(vector<CreateClusterRequest::AdditionalPackages> && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<CreateClusterRequest::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<CreateClusterRequest::Addons>) };
    inline vector<CreateClusterRequest::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<CreateClusterRequest::Addons>) };
    inline CreateClusterRequest& setAddons(const vector<CreateClusterRequest::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline CreateClusterRequest& setAddons(vector<CreateClusterRequest::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline CreateClusterRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterCategory Field Functions 
    bool hasClusterCategory() const { return this->clusterCategory_ != nullptr;};
    void deleteClusterCategory() { this->clusterCategory_ = nullptr;};
    inline string getClusterCategory() const { DARABONBA_PTR_GET_DEFAULT(clusterCategory_, "") };
    inline CreateClusterRequest& setClusterCategory(string clusterCategory) { DARABONBA_PTR_SET_VALUE(clusterCategory_, clusterCategory) };


    // clusterCredentials Field Functions 
    bool hasClusterCredentials() const { return this->clusterCredentials_ != nullptr;};
    void deleteClusterCredentials() { this->clusterCredentials_ = nullptr;};
    inline const CreateClusterRequest::ClusterCredentials & getClusterCredentials() const { DARABONBA_PTR_GET_CONST(clusterCredentials_, CreateClusterRequest::ClusterCredentials) };
    inline CreateClusterRequest::ClusterCredentials getClusterCredentials() { DARABONBA_PTR_GET(clusterCredentials_, CreateClusterRequest::ClusterCredentials) };
    inline CreateClusterRequest& setClusterCredentials(const CreateClusterRequest::ClusterCredentials & clusterCredentials) { DARABONBA_PTR_SET_VALUE(clusterCredentials_, clusterCredentials) };
    inline CreateClusterRequest& setClusterCredentials(CreateClusterRequest::ClusterCredentials && clusterCredentials) { DARABONBA_PTR_SET_RVALUE(clusterCredentials_, clusterCredentials) };


    // clusterCustomConfiguration Field Functions 
    bool hasClusterCustomConfiguration() const { return this->clusterCustomConfiguration_ != nullptr;};
    void deleteClusterCustomConfiguration() { this->clusterCustomConfiguration_ = nullptr;};
    inline const CreateClusterRequest::ClusterCustomConfiguration & getClusterCustomConfiguration() const { DARABONBA_PTR_GET_CONST(clusterCustomConfiguration_, CreateClusterRequest::ClusterCustomConfiguration) };
    inline CreateClusterRequest::ClusterCustomConfiguration getClusterCustomConfiguration() { DARABONBA_PTR_GET(clusterCustomConfiguration_, CreateClusterRequest::ClusterCustomConfiguration) };
    inline CreateClusterRequest& setClusterCustomConfiguration(const CreateClusterRequest::ClusterCustomConfiguration & clusterCustomConfiguration) { DARABONBA_PTR_SET_VALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };
    inline CreateClusterRequest& setClusterCustomConfiguration(CreateClusterRequest::ClusterCustomConfiguration && clusterCustomConfiguration) { DARABONBA_PTR_SET_RVALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };


    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string getClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline CreateClusterRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline CreateClusterRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterVSwitchId Field Functions 
    bool hasClusterVSwitchId() const { return this->clusterVSwitchId_ != nullptr;};
    void deleteClusterVSwitchId() { this->clusterVSwitchId_ = nullptr;};
    inline string getClusterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(clusterVSwitchId_, "") };
    inline CreateClusterRequest& setClusterVSwitchId(string clusterVSwitchId) { DARABONBA_PTR_SET_VALUE(clusterVSwitchId_, clusterVSwitchId) };


    // clusterVpcId Field Functions 
    bool hasClusterVpcId() const { return this->clusterVpcId_ != nullptr;};
    void deleteClusterVpcId() { this->clusterVpcId_ = nullptr;};
    inline string getClusterVpcId() const { DARABONBA_PTR_GET_DEFAULT(clusterVpcId_, "") };
    inline CreateClusterRequest& setClusterVpcId(string clusterVpcId) { DARABONBA_PTR_SET_VALUE(clusterVpcId_, clusterVpcId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // isEnterpriseSecurityGroup Field Functions 
    bool hasIsEnterpriseSecurityGroup() const { return this->isEnterpriseSecurityGroup_ != nullptr;};
    void deleteIsEnterpriseSecurityGroup() { this->isEnterpriseSecurityGroup_ = nullptr;};
    inline bool getIsEnterpriseSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(isEnterpriseSecurityGroup_, false) };
    inline CreateClusterRequest& setIsEnterpriseSecurityGroup(bool isEnterpriseSecurityGroup) { DARABONBA_PTR_SET_VALUE(isEnterpriseSecurityGroup_, isEnterpriseSecurityGroup) };


    // manager Field Functions 
    bool hasManager() const { return this->manager_ != nullptr;};
    void deleteManager() { this->manager_ = nullptr;};
    inline const CreateClusterRequest::Manager & getManager() const { DARABONBA_PTR_GET_CONST(manager_, CreateClusterRequest::Manager) };
    inline CreateClusterRequest::Manager getManager() { DARABONBA_PTR_GET(manager_, CreateClusterRequest::Manager) };
    inline CreateClusterRequest& setManager(const CreateClusterRequest::Manager & manager) { DARABONBA_PTR_SET_VALUE(manager_, manager) };
    inline CreateClusterRequest& setManager(CreateClusterRequest::Manager && manager) { DARABONBA_PTR_SET_RVALUE(manager_, manager) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline int32_t getMaxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0) };
    inline CreateClusterRequest& setMaxCoreCount(int32_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline CreateClusterRequest& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<QueueTemplate> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<QueueTemplate>) };
    inline vector<QueueTemplate> getQueues() { DARABONBA_PTR_GET(queues_, vector<QueueTemplate>) };
    inline CreateClusterRequest& setQueues(const vector<QueueTemplate> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline CreateClusterRequest& setQueues(vector<QueueTemplate> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateClusterRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // sharedStorages Field Functions 
    bool hasSharedStorages() const { return this->sharedStorages_ != nullptr;};
    void deleteSharedStorages() { this->sharedStorages_ = nullptr;};
    inline const vector<SharedStorageTemplate> & getSharedStorages() const { DARABONBA_PTR_GET_CONST(sharedStorages_, vector<SharedStorageTemplate>) };
    inline vector<SharedStorageTemplate> getSharedStorages() { DARABONBA_PTR_GET(sharedStorages_, vector<SharedStorageTemplate>) };
    inline CreateClusterRequest& setSharedStorages(const vector<SharedStorageTemplate> & sharedStorages) { DARABONBA_PTR_SET_VALUE(sharedStorages_, sharedStorages) };
    inline CreateClusterRequest& setSharedStorages(vector<SharedStorageTemplate> && sharedStorages) { DARABONBA_PTR_SET_RVALUE(sharedStorages_, sharedStorages) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateClusterRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateClusterRequest::Tags>) };
    inline vector<CreateClusterRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateClusterRequest::Tags>) };
    inline CreateClusterRequest& setTags(const vector<CreateClusterRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateClusterRequest& setTags(vector<CreateClusterRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The list of software that you want to install in the cluster. Valid values of N: 0 to 10.
    shared_ptr<vector<CreateClusterRequest::AdditionalPackages>> additionalPackages_ {};
    // The configurations of the custom addons in the cluster. Only one addon is supported.
    shared_ptr<vector<CreateClusterRequest::Addons>> addons_ {};
    // The client version. By default, the latest version is used.
    shared_ptr<string> clientVersion_ {};
    // The cluster type. Valid values:
    // 
    // *   Standard
    // *   Serverless
    shared_ptr<string> clusterCategory_ {};
    // The access credentials of the cluster.
    shared_ptr<CreateClusterRequest::ClusterCredentials> clusterCredentials_ {};
    // The post-processing script of the cluster.
    shared_ptr<CreateClusterRequest::ClusterCustomConfiguration> clusterCustomConfiguration_ {};
    // The cluster description. The description must be 1 to 128 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    shared_ptr<string> clusterDescription_ {};
    // The deployment mode of the cluster. Valid values:
    // 
    // *   Integrated
    // *   Hybrid
    // *   Custom
    shared_ptr<string> clusterMode_ {};
    // The cluster name. The name must be 1 to 128 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    shared_ptr<string> clusterName_ {};
    // The ID of the vSwitch that you want the cluster to use. The vSwitch must reside in the VPC that is specified by the `ClusterVpcId` parameter.
    // 
    // You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/448581.html) operation to query information about the created VPCs and vSwitches.
    shared_ptr<string> clusterVSwitchId_ {};
    // The ID of the virtual private cloud (VPC) in which the cluster resides.
    shared_ptr<string> clusterVpcId_ {};
    // Specifies whether to enable deletion protection for the cluster. Deletion protection decides whether the cluster can be deleted in the console or by calling the [DeleteCluster](https://help.aliyun.com/document_detail/424406.html) operation. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> deletionProtection_ {};
    // Specifies whether to use an advanced security group. Valid values:
    // 
    // *   true: automatically creates and uses an advanced security group.
    // *   false: automatically creates and uses a basic security group.
    // 
    // For more information, see [Basic security groups and advanced security groups](https://help.aliyun.com/document_detail/605897.html).
    shared_ptr<bool> isEnterpriseSecurityGroup_ {};
    // The configurations of the cluster management node.
    shared_ptr<CreateClusterRequest::Manager> manager_ {};
    // The maximum number of vCPUs that can be used by compute nodes in the cluster. Valid values: 0 to 100,000.
    shared_ptr<int32_t> maxCoreCount_ {};
    // The maximum number of compute nodes that the cluster can manage. Valid values: 0 to 5,000.
    shared_ptr<int32_t> maxCount_ {};
    // The queues in the cluster. The number of queues can be 0 to 8.
    shared_ptr<vector<QueueTemplate>> queues_ {};
    // The ID of the resource group to which the cluster belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to obtain the IDs of the resource groups.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the security group to which the cluster belongs.
    // 
    // You can call the [DescribeSecurityGroups](https://help.aliyun.com/document_detail/25556.html) operation to query available security groups in the current region.
    shared_ptr<string> securityGroupId_ {};
    // The shared storage resources of the cluster.
    shared_ptr<vector<SharedStorageTemplate>> sharedStorages_ {};
    // The tags of the cluster.
    shared_ptr<vector<CreateClusterRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
