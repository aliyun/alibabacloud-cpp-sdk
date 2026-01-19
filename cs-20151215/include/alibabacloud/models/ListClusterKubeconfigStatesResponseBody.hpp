// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERKUBECONFIGSTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERKUBECONFIGSTATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterKubeconfigStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterKubeconfigStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(states, states_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterKubeconfigStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(states, states_);
    };
    ListClusterKubeconfigStatesResponseBody() = default ;
    ListClusterKubeconfigStatesResponseBody(const ListClusterKubeconfigStatesResponseBody &) = default ;
    ListClusterKubeconfigStatesResponseBody(ListClusterKubeconfigStatesResponseBody &&) = default ;
    ListClusterKubeconfigStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterKubeconfigStatesResponseBody() = default ;
    ListClusterKubeconfigStatesResponseBody& operator=(const ListClusterKubeconfigStatesResponseBody &) = default ;
    ListClusterKubeconfigStatesResponseBody& operator=(ListClusterKubeconfigStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class States : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const States& obj) { 
        DARABONBA_PTR_TO_JSON(account_display_name, accountDisplayName_);
        DARABONBA_PTR_TO_JSON(account_id, accountId_);
        DARABONBA_PTR_TO_JSON(account_name, accountName_);
        DARABONBA_PTR_TO_JSON(account_state, accountState_);
        DARABONBA_PTR_TO_JSON(account_type, accountType_);
        DARABONBA_PTR_TO_JSON(cert_expire_time, certExpireTime_);
        DARABONBA_PTR_TO_JSON(cert_state, certState_);
        DARABONBA_PTR_TO_JSON(cloud_service_name, cloudServiceName_);
        DARABONBA_PTR_TO_JSON(cloud_service_roles, cloudServiceRoles_);
        DARABONBA_PTR_TO_JSON(revokable, revokable_);
      };
      friend void from_json(const Darabonba::Json& j, States& obj) { 
        DARABONBA_PTR_FROM_JSON(account_display_name, accountDisplayName_);
        DARABONBA_PTR_FROM_JSON(account_id, accountId_);
        DARABONBA_PTR_FROM_JSON(account_name, accountName_);
        DARABONBA_PTR_FROM_JSON(account_state, accountState_);
        DARABONBA_PTR_FROM_JSON(account_type, accountType_);
        DARABONBA_PTR_FROM_JSON(cert_expire_time, certExpireTime_);
        DARABONBA_PTR_FROM_JSON(cert_state, certState_);
        DARABONBA_PTR_FROM_JSON(cloud_service_name, cloudServiceName_);
        DARABONBA_PTR_FROM_JSON(cloud_service_roles, cloudServiceRoles_);
        DARABONBA_PTR_FROM_JSON(revokable, revokable_);
      };
      States() = default ;
      States(const States &) = default ;
      States(States &&) = default ;
      States(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~States() = default ;
      States& operator=(const States &) = default ;
      States& operator=(States &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudServiceRoles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudServiceRoles& obj) { 
          DARABONBA_PTR_TO_JSON(is_default_template, isDefaultTemplate_);
          DARABONBA_PTR_TO_JSON(role_name, roleName_);
          DARABONBA_PTR_TO_JSON(role_namespace, roleNamespace_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, CloudServiceRoles& obj) { 
          DARABONBA_PTR_FROM_JSON(is_default_template, isDefaultTemplate_);
          DARABONBA_PTR_FROM_JSON(role_name, roleName_);
          DARABONBA_PTR_FROM_JSON(role_namespace, roleNamespace_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        CloudServiceRoles() = default ;
        CloudServiceRoles(const CloudServiceRoles &) = default ;
        CloudServiceRoles(CloudServiceRoles &&) = default ;
        CloudServiceRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudServiceRoles() = default ;
        CloudServiceRoles& operator=(const CloudServiceRoles &) = default ;
        CloudServiceRoles& operator=(CloudServiceRoles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isDefaultTemplate_ == nullptr
        && this->roleName_ == nullptr && this->roleNamespace_ == nullptr && this->type_ == nullptr; };
        // isDefaultTemplate Field Functions 
        bool hasIsDefaultTemplate() const { return this->isDefaultTemplate_ != nullptr;};
        void deleteIsDefaultTemplate() { this->isDefaultTemplate_ = nullptr;};
        inline bool getIsDefaultTemplate() const { DARABONBA_PTR_GET_DEFAULT(isDefaultTemplate_, false) };
        inline CloudServiceRoles& setIsDefaultTemplate(bool isDefaultTemplate) { DARABONBA_PTR_SET_VALUE(isDefaultTemplate_, isDefaultTemplate) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline CloudServiceRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // roleNamespace Field Functions 
        bool hasRoleNamespace() const { return this->roleNamespace_ != nullptr;};
        void deleteRoleNamespace() { this->roleNamespace_ = nullptr;};
        inline string getRoleNamespace() const { DARABONBA_PTR_GET_DEFAULT(roleNamespace_, "") };
        inline CloudServiceRoles& setRoleNamespace(string roleNamespace) { DARABONBA_PTR_SET_VALUE(roleNamespace_, roleNamespace) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CloudServiceRoles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<bool> isDefaultTemplate_ {};
        shared_ptr<string> roleName_ {};
        shared_ptr<string> roleNamespace_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->accountDisplayName_ == nullptr
        && this->accountId_ == nullptr && this->accountName_ == nullptr && this->accountState_ == nullptr && this->accountType_ == nullptr && this->certExpireTime_ == nullptr
        && this->certState_ == nullptr && this->cloudServiceName_ == nullptr && this->cloudServiceRoles_ == nullptr && this->revokable_ == nullptr; };
      // accountDisplayName Field Functions 
      bool hasAccountDisplayName() const { return this->accountDisplayName_ != nullptr;};
      void deleteAccountDisplayName() { this->accountDisplayName_ = nullptr;};
      inline string getAccountDisplayName() const { DARABONBA_PTR_GET_DEFAULT(accountDisplayName_, "") };
      inline States& setAccountDisplayName(string accountDisplayName) { DARABONBA_PTR_SET_VALUE(accountDisplayName_, accountDisplayName) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline States& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline States& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // accountState Field Functions 
      bool hasAccountState() const { return this->accountState_ != nullptr;};
      void deleteAccountState() { this->accountState_ = nullptr;};
      inline string getAccountState() const { DARABONBA_PTR_GET_DEFAULT(accountState_, "") };
      inline States& setAccountState(string accountState) { DARABONBA_PTR_SET_VALUE(accountState_, accountState) };


      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline States& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // certExpireTime Field Functions 
      bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
      void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
      inline string getCertExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
      inline States& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


      // certState Field Functions 
      bool hasCertState() const { return this->certState_ != nullptr;};
      void deleteCertState() { this->certState_ = nullptr;};
      inline string getCertState() const { DARABONBA_PTR_GET_DEFAULT(certState_, "") };
      inline States& setCertState(string certState) { DARABONBA_PTR_SET_VALUE(certState_, certState) };


      // cloudServiceName Field Functions 
      bool hasCloudServiceName() const { return this->cloudServiceName_ != nullptr;};
      void deleteCloudServiceName() { this->cloudServiceName_ = nullptr;};
      inline string getCloudServiceName() const { DARABONBA_PTR_GET_DEFAULT(cloudServiceName_, "") };
      inline States& setCloudServiceName(string cloudServiceName) { DARABONBA_PTR_SET_VALUE(cloudServiceName_, cloudServiceName) };


      // cloudServiceRoles Field Functions 
      bool hasCloudServiceRoles() const { return this->cloudServiceRoles_ != nullptr;};
      void deleteCloudServiceRoles() { this->cloudServiceRoles_ = nullptr;};
      inline const vector<States::CloudServiceRoles> & getCloudServiceRoles() const { DARABONBA_PTR_GET_CONST(cloudServiceRoles_, vector<States::CloudServiceRoles>) };
      inline vector<States::CloudServiceRoles> getCloudServiceRoles() { DARABONBA_PTR_GET(cloudServiceRoles_, vector<States::CloudServiceRoles>) };
      inline States& setCloudServiceRoles(const vector<States::CloudServiceRoles> & cloudServiceRoles) { DARABONBA_PTR_SET_VALUE(cloudServiceRoles_, cloudServiceRoles) };
      inline States& setCloudServiceRoles(vector<States::CloudServiceRoles> && cloudServiceRoles) { DARABONBA_PTR_SET_RVALUE(cloudServiceRoles_, cloudServiceRoles) };


      // revokable Field Functions 
      bool hasRevokable() const { return this->revokable_ != nullptr;};
      void deleteRevokable() { this->revokable_ = nullptr;};
      inline bool getRevokable() const { DARABONBA_PTR_GET_DEFAULT(revokable_, false) };
      inline States& setRevokable(bool revokable) { DARABONBA_PTR_SET_VALUE(revokable_, revokable) };


    protected:
      // The displayed name or role name of the RAM user.
      shared_ptr<string> accountDisplayName_ {};
      // The ID of an Alibaba Cloud account, RAM user, or RAM role.
      shared_ptr<string> accountId_ {};
      // The logon name or role name of the RAM user.
      shared_ptr<string> accountName_ {};
      // The status of the account.
      // 
      // *   Active: The account is active.
      // *   InActive: The account is locked.
      // *   Deleted: The account is deleted.
      shared_ptr<string> accountState_ {};
      // The type of the account.
      // 
      // *   RootAccount: Alibaba Cloud account.
      // *   RamUser: RAM user.
      // *   RamRole: RAM role.
      shared_ptr<string> accountType_ {};
      // The expiration time of the client certificate for the kubeconfig file.
      shared_ptr<string> certExpireTime_ {};
      // The status of the client certificate for the kubeconfig file.
      // 
      // *   Unexpired: The certificate is not expired.
      // *   Expired: The certificate is expired.
      // *   Unknown: The status of the certificate is unknown.
      shared_ptr<string> certState_ {};
      shared_ptr<string> cloudServiceName_ {};
      shared_ptr<vector<States::CloudServiceRoles>> cloudServiceRoles_ {};
      // Indicates whether the client certificate for the kubeconfig file can be revoked.
      shared_ptr<bool> revokable_ {};
    };

    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(total_count, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Page& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->states_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListClusterKubeconfigStatesResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListClusterKubeconfigStatesResponseBody::Page) };
    inline ListClusterKubeconfigStatesResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, ListClusterKubeconfigStatesResponseBody::Page) };
    inline ListClusterKubeconfigStatesResponseBody& setPage(const ListClusterKubeconfigStatesResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListClusterKubeconfigStatesResponseBody& setPage(ListClusterKubeconfigStatesResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<ListClusterKubeconfigStatesResponseBody::States> & getStates() const { DARABONBA_PTR_GET_CONST(states_, vector<ListClusterKubeconfigStatesResponseBody::States>) };
    inline vector<ListClusterKubeconfigStatesResponseBody::States> getStates() { DARABONBA_PTR_GET(states_, vector<ListClusterKubeconfigStatesResponseBody::States>) };
    inline ListClusterKubeconfigStatesResponseBody& setStates(const vector<ListClusterKubeconfigStatesResponseBody::States> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline ListClusterKubeconfigStatesResponseBody& setStates(vector<ListClusterKubeconfigStatesResponseBody::States> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


  protected:
    // The pagination information.
    shared_ptr<ListClusterKubeconfigStatesResponseBody::Page> page_ {};
    // The status list of the kubeconfig files associated with the cluster.
    shared_ptr<vector<ListClusterKubeconfigStatesResponseBody::States>> states_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
