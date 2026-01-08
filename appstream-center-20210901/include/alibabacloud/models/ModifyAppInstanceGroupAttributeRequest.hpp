// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
      DARABONBA_PTR_TO_JSON(PerSessionPerApp, perSessionPerApp_);
      DARABONBA_PTR_TO_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_TO_JSON(PreOpenMode, preOpenMode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
      DARABONBA_PTR_FROM_JSON(PerSessionPerApp, perSessionPerApp_);
      DARABONBA_PTR_FROM_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_FROM_JSON(PreOpenMode, preOpenMode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicy_);
    };
    ModifyAppInstanceGroupAttributeRequest() = default ;
    ModifyAppInstanceGroupAttributeRequest(const ModifyAppInstanceGroupAttributeRequest &) = default ;
    ModifyAppInstanceGroupAttributeRequest(ModifyAppInstanceGroupAttributeRequest &&) = default ;
    ModifyAppInstanceGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequest() = default ;
    ModifyAppInstanceGroupAttributeRequest& operator=(const ModifyAppInstanceGroupAttributeRequest &) = default ;
    ModifyAppInstanceGroupAttributeRequest& operator=(ModifyAppInstanceGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StoragePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StoragePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(StorageTypeList, storageTypeList_);
        DARABONBA_PTR_TO_JSON(UserProfile, userProfile_);
        DARABONBA_PTR_TO_JSON(UserProfileFollow, userProfileFollow_);
      };
      friend void from_json(const Darabonba::Json& j, StoragePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(StorageTypeList, storageTypeList_);
        DARABONBA_PTR_FROM_JSON(UserProfile, userProfile_);
        DARABONBA_PTR_FROM_JSON(UserProfileFollow, userProfileFollow_);
      };
      StoragePolicy() = default ;
      StoragePolicy(const StoragePolicy &) = default ;
      StoragePolicy(StoragePolicy &&) = default ;
      StoragePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StoragePolicy() = default ;
      StoragePolicy& operator=(const StoragePolicy &) = default ;
      StoragePolicy& operator=(StoragePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserProfileFollow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserProfileFollow& obj) { 
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(ProfileFollowSwitch, profileFollowSwitch_);
        };
        friend void from_json(const Darabonba::Json& j, UserProfileFollow& obj) { 
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(ProfileFollowSwitch, profileFollowSwitch_);
        };
        UserProfileFollow() = default ;
        UserProfileFollow(const UserProfileFollow &) = default ;
        UserProfileFollow(UserProfileFollow &&) = default ;
        UserProfileFollow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserProfileFollow() = default ;
        UserProfileFollow& operator=(const UserProfileFollow &) = default ;
        UserProfileFollow& operator=(UserProfileFollow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->profileFollowSwitch_ == nullptr; };
        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline UserProfileFollow& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // profileFollowSwitch Field Functions 
        bool hasProfileFollowSwitch() const { return this->profileFollowSwitch_ != nullptr;};
        void deleteProfileFollowSwitch() { this->profileFollowSwitch_ = nullptr;};
        inline bool getProfileFollowSwitch() const { DARABONBA_PTR_GET_DEFAULT(profileFollowSwitch_, false) };
        inline UserProfileFollow& setProfileFollowSwitch(bool profileFollowSwitch) { DARABONBA_PTR_SET_VALUE(profileFollowSwitch_, profileFollowSwitch) };


      protected:
        shared_ptr<string> fileSystemId_ {};
        shared_ptr<bool> profileFollowSwitch_ {};
      };

      class UserProfile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserProfile& obj) { 
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(UserProfileSwitch, userProfileSwitch_);
        };
        friend void from_json(const Darabonba::Json& j, UserProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(UserProfileSwitch, userProfileSwitch_);
        };
        UserProfile() = default ;
        UserProfile(const UserProfile &) = default ;
        UserProfile(UserProfile &&) = default ;
        UserProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserProfile() = default ;
        UserProfile& operator=(const UserProfile &) = default ;
        UserProfile& operator=(UserProfile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->userProfileSwitch_ == nullptr; };
        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline UserProfile& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // userProfileSwitch Field Functions 
        bool hasUserProfileSwitch() const { return this->userProfileSwitch_ != nullptr;};
        void deleteUserProfileSwitch() { this->userProfileSwitch_ = nullptr;};
        inline bool getUserProfileSwitch() const { DARABONBA_PTR_GET_DEFAULT(userProfileSwitch_, false) };
        inline UserProfile& setUserProfileSwitch(bool userProfileSwitch) { DARABONBA_PTR_SET_VALUE(userProfileSwitch_, userProfileSwitch) };


      protected:
        // The ID of the File Storage NAS (NAS) file system used to store user data.
        shared_ptr<string> fileSystemId_ {};
        // Specifies whether user data roaming is enabled.
        // 
        // Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> userProfileSwitch_ {};
      };

      virtual bool empty() const override { return this->storageTypeList_ == nullptr
        && this->userProfile_ == nullptr && this->userProfileFollow_ == nullptr; };
      // storageTypeList Field Functions 
      bool hasStorageTypeList() const { return this->storageTypeList_ != nullptr;};
      void deleteStorageTypeList() { this->storageTypeList_ = nullptr;};
      inline const vector<string> & getStorageTypeList() const { DARABONBA_PTR_GET_CONST(storageTypeList_, vector<string>) };
      inline vector<string> getStorageTypeList() { DARABONBA_PTR_GET(storageTypeList_, vector<string>) };
      inline StoragePolicy& setStorageTypeList(const vector<string> & storageTypeList) { DARABONBA_PTR_SET_VALUE(storageTypeList_, storageTypeList) };
      inline StoragePolicy& setStorageTypeList(vector<string> && storageTypeList) { DARABONBA_PTR_SET_RVALUE(storageTypeList_, storageTypeList) };


      // userProfile Field Functions 
      bool hasUserProfile() const { return this->userProfile_ != nullptr;};
      void deleteUserProfile() { this->userProfile_ = nullptr;};
      inline const StoragePolicy::UserProfile & getUserProfile() const { DARABONBA_PTR_GET_CONST(userProfile_, StoragePolicy::UserProfile) };
      inline StoragePolicy::UserProfile getUserProfile() { DARABONBA_PTR_GET(userProfile_, StoragePolicy::UserProfile) };
      inline StoragePolicy& setUserProfile(const StoragePolicy::UserProfile & userProfile) { DARABONBA_PTR_SET_VALUE(userProfile_, userProfile) };
      inline StoragePolicy& setUserProfile(StoragePolicy::UserProfile && userProfile) { DARABONBA_PTR_SET_RVALUE(userProfile_, userProfile) };


      // userProfileFollow Field Functions 
      bool hasUserProfileFollow() const { return this->userProfileFollow_ != nullptr;};
      void deleteUserProfileFollow() { this->userProfileFollow_ = nullptr;};
      inline const StoragePolicy::UserProfileFollow & getUserProfileFollow() const { DARABONBA_PTR_GET_CONST(userProfileFollow_, StoragePolicy::UserProfileFollow) };
      inline StoragePolicy::UserProfileFollow getUserProfileFollow() { DARABONBA_PTR_GET(userProfileFollow_, StoragePolicy::UserProfileFollow) };
      inline StoragePolicy& setUserProfileFollow(const StoragePolicy::UserProfileFollow & userProfileFollow) { DARABONBA_PTR_SET_VALUE(userProfileFollow_, userProfileFollow) };
      inline StoragePolicy& setUserProfileFollow(StoragePolicy::UserProfileFollow && userProfileFollow) { DARABONBA_PTR_SET_RVALUE(userProfileFollow_, userProfileFollow) };


    protected:
      // The storage types.
      shared_ptr<vector<string>> storageTypeList_ {};
      // The configurations of user data roaming.
      shared_ptr<StoragePolicy::UserProfile> userProfile_ {};
      shared_ptr<StoragePolicy::UserProfileFollow> userProfileFollow_ {};
    };

    class SecurityPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(ResetAfterUnbind, resetAfterUnbind_);
        DARABONBA_PTR_TO_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(ResetAfterUnbind, resetAfterUnbind_);
        DARABONBA_PTR_FROM_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      };
      SecurityPolicy() = default ;
      SecurityPolicy(const SecurityPolicy &) = default ;
      SecurityPolicy(SecurityPolicy &&) = default ;
      SecurityPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityPolicy() = default ;
      SecurityPolicy& operator=(const SecurityPolicy &) = default ;
      SecurityPolicy& operator=(SecurityPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resetAfterUnbind_ == nullptr
        && this->skipUserAuthCheck_ == nullptr; };
      // resetAfterUnbind Field Functions 
      bool hasResetAfterUnbind() const { return this->resetAfterUnbind_ != nullptr;};
      void deleteResetAfterUnbind() { this->resetAfterUnbind_ = nullptr;};
      inline bool getResetAfterUnbind() const { DARABONBA_PTR_GET_DEFAULT(resetAfterUnbind_, false) };
      inline SecurityPolicy& setResetAfterUnbind(bool resetAfterUnbind) { DARABONBA_PTR_SET_VALUE(resetAfterUnbind_, resetAfterUnbind) };


      // skipUserAuthCheck Field Functions 
      bool hasSkipUserAuthCheck() const { return this->skipUserAuthCheck_ != nullptr;};
      void deleteSkipUserAuthCheck() { this->skipUserAuthCheck_ = nullptr;};
      inline bool getSkipUserAuthCheck() const { DARABONBA_PTR_GET_DEFAULT(skipUserAuthCheck_, false) };
      inline SecurityPolicy& setSkipUserAuthCheck(bool skipUserAuthCheck) { DARABONBA_PTR_SET_VALUE(skipUserAuthCheck_, skipUserAuthCheck) };


    protected:
      // Specifies whether to reset after unbinding from a delivery group.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> resetAfterUnbind_ {};
      // Specifies whether to skip user permission verification.
      // 
      // Valid values:
      // 
      // *   true
      // *   false: This is the default value.
      shared_ptr<bool> skipUserAuthCheck_ {};
    };

    class NodePool : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodePool& obj) { 
        DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
        DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      };
      friend void from_json(const Darabonba::Json& j, NodePool& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
        DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      };
      NodePool() = default ;
      NodePool(const NodePool &) = default ;
      NodePool(NodePool &&) = default ;
      NodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodePool() = default ;
      NodePool& operator=(const NodePool &) = default ;
      NodePool& operator=(NodePool &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeCapacity_ == nullptr
        && this->nodePoolId_ == nullptr; };
      // nodeCapacity Field Functions 
      bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
      void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
      inline int32_t getNodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
      inline NodePool& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


      // nodePoolId Field Functions 
      bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
      void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
      inline string getNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
      inline NodePool& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    protected:
      // The maximum number of sessions to which a resource can connect at the same time. If a resource connects to a large number of sessions at the same time, user experience can be compromised. The value range varies based on the resource type. The following items describe the value ranges of different resource types:
      // 
      // *   appstreaming.general.4c8g: 1 to 2
      // *   appstreaming.general.8c16g: 1 to 4
      // *   appstreaming.vgpu.8c16g.4g: 1 to 4
      // *   appstreaming.vgpu.8c31g.16g: 1 to 4
      // *   appstreaming.vgpu.14c93g.12g: 1 to 6
      shared_ptr<int32_t> nodeCapacity_ {};
      // The ID of the resource group.
      shared_ptr<string> nodePoolId_ {};
    };

    class Network : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Network& obj) { 
        DARABONBA_PTR_TO_JSON(DomainRules, domainRules_);
      };
      friend void from_json(const Darabonba::Json& j, Network& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainRules, domainRules_);
      };
      Network() = default ;
      Network(const Network &) = default ;
      Network(Network &&) = default ;
      Network(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Network() = default ;
      Network& operator=(const Network &) = default ;
      Network& operator=(Network &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainRules& obj) { 
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
        };
        friend void from_json(const Darabonba::Json& j, DomainRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
        };
        DomainRules() = default ;
        DomainRules(const DomainRules &) = default ;
        DomainRules(DomainRules &&) = default ;
        DomainRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainRules() = default ;
        DomainRules& operator=(const DomainRules &) = default ;
        DomainRules& operator=(DomainRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domain_ == nullptr
        && this->policy_ == nullptr; };
        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DomainRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline DomainRules& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      protected:
        // The domain name.
        shared_ptr<string> domain_ {};
        // The policy used for the domain name.
        // 
        // Valid values:
        // 
        // *   allow
        // *   block
        shared_ptr<string> policy_ {};
      };

      virtual bool empty() const override { return this->domainRules_ == nullptr; };
      // domainRules Field Functions 
      bool hasDomainRules() const { return this->domainRules_ != nullptr;};
      void deleteDomainRules() { this->domainRules_ = nullptr;};
      inline const vector<Network::DomainRules> & getDomainRules() const { DARABONBA_PTR_GET_CONST(domainRules_, vector<Network::DomainRules>) };
      inline vector<Network::DomainRules> getDomainRules() { DARABONBA_PTR_GET(domainRules_, vector<Network::DomainRules>) };
      inline Network& setDomainRules(const vector<Network::DomainRules> & domainRules) { DARABONBA_PTR_SET_VALUE(domainRules_, domainRules) };
      inline Network& setDomainRules(vector<Network::DomainRules> && domainRules) { DARABONBA_PTR_SET_RVALUE(domainRules_, domainRules) };


    protected:
      // The domain name rules.
      shared_ptr<vector<Network::DomainRules>> domainRules_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupName_ == nullptr && this->network_ == nullptr && this->nodePool_ == nullptr && this->perSessionPerApp_ == nullptr && this->preOpenAppId_ == nullptr
        && this->preOpenMode_ == nullptr && this->productType_ == nullptr && this->securityPolicy_ == nullptr && this->sessionTimeout_ == nullptr && this->storagePolicy_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const ModifyAppInstanceGroupAttributeRequest::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, ModifyAppInstanceGroupAttributeRequest::Network) };
    inline ModifyAppInstanceGroupAttributeRequest::Network getNetwork() { DARABONBA_PTR_GET(network_, ModifyAppInstanceGroupAttributeRequest::Network) };
    inline ModifyAppInstanceGroupAttributeRequest& setNetwork(const ModifyAppInstanceGroupAttributeRequest::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline ModifyAppInstanceGroupAttributeRequest& setNetwork(ModifyAppInstanceGroupAttributeRequest::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const ModifyAppInstanceGroupAttributeRequest::NodePool & getNodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, ModifyAppInstanceGroupAttributeRequest::NodePool) };
    inline ModifyAppInstanceGroupAttributeRequest::NodePool getNodePool() { DARABONBA_PTR_GET(nodePool_, ModifyAppInstanceGroupAttributeRequest::NodePool) };
    inline ModifyAppInstanceGroupAttributeRequest& setNodePool(const ModifyAppInstanceGroupAttributeRequest::NodePool & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline ModifyAppInstanceGroupAttributeRequest& setNodePool(ModifyAppInstanceGroupAttributeRequest::NodePool && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // perSessionPerApp Field Functions 
    bool hasPerSessionPerApp() const { return this->perSessionPerApp_ != nullptr;};
    void deletePerSessionPerApp() { this->perSessionPerApp_ = nullptr;};
    inline bool getPerSessionPerApp() const { DARABONBA_PTR_GET_DEFAULT(perSessionPerApp_, false) };
    inline ModifyAppInstanceGroupAttributeRequest& setPerSessionPerApp(bool perSessionPerApp) { DARABONBA_PTR_SET_VALUE(perSessionPerApp_, perSessionPerApp) };


    // preOpenAppId Field Functions 
    bool hasPreOpenAppId() const { return this->preOpenAppId_ != nullptr;};
    void deletePreOpenAppId() { this->preOpenAppId_ = nullptr;};
    inline string getPreOpenAppId() const { DARABONBA_PTR_GET_DEFAULT(preOpenAppId_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setPreOpenAppId(string preOpenAppId) { DARABONBA_PTR_SET_VALUE(preOpenAppId_, preOpenAppId) };


    // preOpenMode Field Functions 
    bool hasPreOpenMode() const { return this->preOpenMode_ != nullptr;};
    void deletePreOpenMode() { this->preOpenMode_ = nullptr;};
    inline string getPreOpenMode() const { DARABONBA_PTR_GET_DEFAULT(preOpenMode_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setPreOpenMode(string preOpenMode) { DARABONBA_PTR_SET_VALUE(preOpenMode_, preOpenMode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // securityPolicy Field Functions 
    bool hasSecurityPolicy() const { return this->securityPolicy_ != nullptr;};
    void deleteSecurityPolicy() { this->securityPolicy_ = nullptr;};
    inline const ModifyAppInstanceGroupAttributeRequest::SecurityPolicy & getSecurityPolicy() const { DARABONBA_PTR_GET_CONST(securityPolicy_, ModifyAppInstanceGroupAttributeRequest::SecurityPolicy) };
    inline ModifyAppInstanceGroupAttributeRequest::SecurityPolicy getSecurityPolicy() { DARABONBA_PTR_GET(securityPolicy_, ModifyAppInstanceGroupAttributeRequest::SecurityPolicy) };
    inline ModifyAppInstanceGroupAttributeRequest& setSecurityPolicy(const ModifyAppInstanceGroupAttributeRequest::SecurityPolicy & securityPolicy) { DARABONBA_PTR_SET_VALUE(securityPolicy_, securityPolicy) };
    inline ModifyAppInstanceGroupAttributeRequest& setSecurityPolicy(ModifyAppInstanceGroupAttributeRequest::SecurityPolicy && securityPolicy) { DARABONBA_PTR_SET_RVALUE(securityPolicy_, securityPolicy) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline ModifyAppInstanceGroupAttributeRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // storagePolicy Field Functions 
    bool hasStoragePolicy() const { return this->storagePolicy_ != nullptr;};
    void deleteStoragePolicy() { this->storagePolicy_ = nullptr;};
    inline const ModifyAppInstanceGroupAttributeRequest::StoragePolicy & getStoragePolicy() const { DARABONBA_PTR_GET_CONST(storagePolicy_, ModifyAppInstanceGroupAttributeRequest::StoragePolicy) };
    inline ModifyAppInstanceGroupAttributeRequest::StoragePolicy getStoragePolicy() { DARABONBA_PTR_GET(storagePolicy_, ModifyAppInstanceGroupAttributeRequest::StoragePolicy) };
    inline ModifyAppInstanceGroupAttributeRequest& setStoragePolicy(const ModifyAppInstanceGroupAttributeRequest::StoragePolicy & storagePolicy) { DARABONBA_PTR_SET_VALUE(storagePolicy_, storagePolicy) };
    inline ModifyAppInstanceGroupAttributeRequest& setStoragePolicy(ModifyAppInstanceGroupAttributeRequest::StoragePolicy && storagePolicy) { DARABONBA_PTR_SET_RVALUE(storagePolicy_, storagePolicy) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The name of the delivery group.
    shared_ptr<string> appInstanceGroupName_ {};
    // The network settings.
    // 
    // >  If you want to use this parameter, submit a ticket.
    shared_ptr<ModifyAppInstanceGroupAttributeRequest::Network> network_ {};
    // The information about the resource group.
    shared_ptr<ModifyAppInstanceGroupAttributeRequest::NodePool> nodePool_ {};
    // Specifies whether only one application can be opened in a session.
    // 
    // *   After you enable this feature, the system assigns a session to each application if you open multiple applications in a delivery group. This consumes a larger number of sessions.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> perSessionPerApp_ {};
    // The application ID of the pre-open application. If you set `PreOpenMode` to `SINGLE_APP`, you cannot leave this parameter empty.``
    shared_ptr<string> preOpenAppId_ {};
    // The pre-open mode.
    // 
    // Valid values:
    // 
    // *   SINGLE_APP: enables the pre-open mode for a single application.
    // *   OFF: disables the pre-open mode. This is the default value.
    shared_ptr<string> preOpenMode_ {};
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The security policy.
    shared_ptr<ModifyAppInstanceGroupAttributeRequest::SecurityPolicy> securityPolicy_ {};
    // The duration for which sessions are retained after disconnection. Unit: minutes. After an end user disconnects from a session, the session is closed only after the specified duration elapses. If you want to permanently retain sessions, set this parameter to `-1`. Valid values:-1 and 3 to 300. Default value: `15`.
    shared_ptr<int32_t> sessionTimeout_ {};
    // The storage policy.
    shared_ptr<ModifyAppInstanceGroupAttributeRequest::StoragePolicy> storagePolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
