// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetDirectoryStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryStatistics, directoryStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryStatistics, directoryStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDirectoryStatisticsResponseBody() = default ;
    GetDirectoryStatisticsResponseBody(const GetDirectoryStatisticsResponseBody &) = default ;
    GetDirectoryStatisticsResponseBody(GetDirectoryStatisticsResponseBody &&) = default ;
    GetDirectoryStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryStatisticsResponseBody() = default ;
    GetDirectoryStatisticsResponseBody& operator=(const GetDirectoryStatisticsResponseBody &) = default ;
    GetDirectoryStatisticsResponseBody& operator=(GetDirectoryStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DirectoryStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DirectoryStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(AccessAssignmentCount, accessAssignmentCount_);
        DARABONBA_PTR_TO_JSON(AccessConfigurationCount, accessConfigurationCount_);
        DARABONBA_PTR_TO_JSON(AccessConfigurationQuota, accessConfigurationQuota_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
        DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
        DARABONBA_PTR_TO_JSON(GroupQuota, groupQuota_);
        DARABONBA_PTR_TO_JSON(InProgressTaskCount, inProgressTaskCount_);
        DARABONBA_PTR_TO_JSON(InlinePolicyPerAccessConfigurationQuota, inlinePolicyPerAccessConfigurationQuota_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SCIMServerCredentialCount, SCIMServerCredentialCount_);
        DARABONBA_PTR_TO_JSON(SCIMSyncEnabled, SCIMSyncEnabled_);
        DARABONBA_PTR_TO_JSON(SSOEnabled, SSOEnabled_);
        DARABONBA_PTR_TO_JSON(SystemPolicyPerAccessConfigurationQuota, systemPolicyPerAccessConfigurationQuota_);
        DARABONBA_PTR_TO_JSON(UserCount, userCount_);
        DARABONBA_PTR_TO_JSON(UserQuota, userQuota_);
      };
      friend void from_json(const Darabonba::Json& j, DirectoryStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessAssignmentCount, accessAssignmentCount_);
        DARABONBA_PTR_FROM_JSON(AccessConfigurationCount, accessConfigurationCount_);
        DARABONBA_PTR_FROM_JSON(AccessConfigurationQuota, accessConfigurationQuota_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
        DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
        DARABONBA_PTR_FROM_JSON(GroupQuota, groupQuota_);
        DARABONBA_PTR_FROM_JSON(InProgressTaskCount, inProgressTaskCount_);
        DARABONBA_PTR_FROM_JSON(InlinePolicyPerAccessConfigurationQuota, inlinePolicyPerAccessConfigurationQuota_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SCIMServerCredentialCount, SCIMServerCredentialCount_);
        DARABONBA_PTR_FROM_JSON(SCIMSyncEnabled, SCIMSyncEnabled_);
        DARABONBA_PTR_FROM_JSON(SSOEnabled, SSOEnabled_);
        DARABONBA_PTR_FROM_JSON(SystemPolicyPerAccessConfigurationQuota, systemPolicyPerAccessConfigurationQuota_);
        DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
        DARABONBA_PTR_FROM_JSON(UserQuota, userQuota_);
      };
      DirectoryStatistics() = default ;
      DirectoryStatistics(const DirectoryStatistics &) = default ;
      DirectoryStatistics(DirectoryStatistics &&) = default ;
      DirectoryStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DirectoryStatistics() = default ;
      DirectoryStatistics& operator=(const DirectoryStatistics &) = default ;
      DirectoryStatistics& operator=(DirectoryStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessAssignmentCount_ == nullptr
        && this->accessConfigurationCount_ == nullptr && this->accessConfigurationQuota_ == nullptr && this->directoryId_ == nullptr && this->directoryName_ == nullptr && this->groupCount_ == nullptr
        && this->groupQuota_ == nullptr && this->inProgressTaskCount_ == nullptr && this->inlinePolicyPerAccessConfigurationQuota_ == nullptr && this->region_ == nullptr && this->SCIMServerCredentialCount_ == nullptr
        && this->SCIMSyncEnabled_ == nullptr && this->SSOEnabled_ == nullptr && this->systemPolicyPerAccessConfigurationQuota_ == nullptr && this->userCount_ == nullptr && this->userQuota_ == nullptr; };
      // accessAssignmentCount Field Functions 
      bool hasAccessAssignmentCount() const { return this->accessAssignmentCount_ != nullptr;};
      void deleteAccessAssignmentCount() { this->accessAssignmentCount_ = nullptr;};
      inline int32_t getAccessAssignmentCount() const { DARABONBA_PTR_GET_DEFAULT(accessAssignmentCount_, 0) };
      inline DirectoryStatistics& setAccessAssignmentCount(int32_t accessAssignmentCount) { DARABONBA_PTR_SET_VALUE(accessAssignmentCount_, accessAssignmentCount) };


      // accessConfigurationCount Field Functions 
      bool hasAccessConfigurationCount() const { return this->accessConfigurationCount_ != nullptr;};
      void deleteAccessConfigurationCount() { this->accessConfigurationCount_ = nullptr;};
      inline int32_t getAccessConfigurationCount() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationCount_, 0) };
      inline DirectoryStatistics& setAccessConfigurationCount(int32_t accessConfigurationCount) { DARABONBA_PTR_SET_VALUE(accessConfigurationCount_, accessConfigurationCount) };


      // accessConfigurationQuota Field Functions 
      bool hasAccessConfigurationQuota() const { return this->accessConfigurationQuota_ != nullptr;};
      void deleteAccessConfigurationQuota() { this->accessConfigurationQuota_ = nullptr;};
      inline int32_t getAccessConfigurationQuota() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationQuota_, 0) };
      inline DirectoryStatistics& setAccessConfigurationQuota(int32_t accessConfigurationQuota) { DARABONBA_PTR_SET_VALUE(accessConfigurationQuota_, accessConfigurationQuota) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline DirectoryStatistics& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryName Field Functions 
      bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
      void deleteDirectoryName() { this->directoryName_ = nullptr;};
      inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
      inline DirectoryStatistics& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


      // groupCount Field Functions 
      bool hasGroupCount() const { return this->groupCount_ != nullptr;};
      void deleteGroupCount() { this->groupCount_ = nullptr;};
      inline int32_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
      inline DirectoryStatistics& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


      // groupQuota Field Functions 
      bool hasGroupQuota() const { return this->groupQuota_ != nullptr;};
      void deleteGroupQuota() { this->groupQuota_ = nullptr;};
      inline int32_t getGroupQuota() const { DARABONBA_PTR_GET_DEFAULT(groupQuota_, 0) };
      inline DirectoryStatistics& setGroupQuota(int32_t groupQuota) { DARABONBA_PTR_SET_VALUE(groupQuota_, groupQuota) };


      // inProgressTaskCount Field Functions 
      bool hasInProgressTaskCount() const { return this->inProgressTaskCount_ != nullptr;};
      void deleteInProgressTaskCount() { this->inProgressTaskCount_ = nullptr;};
      inline int32_t getInProgressTaskCount() const { DARABONBA_PTR_GET_DEFAULT(inProgressTaskCount_, 0) };
      inline DirectoryStatistics& setInProgressTaskCount(int32_t inProgressTaskCount) { DARABONBA_PTR_SET_VALUE(inProgressTaskCount_, inProgressTaskCount) };


      // inlinePolicyPerAccessConfigurationQuota Field Functions 
      bool hasInlinePolicyPerAccessConfigurationQuota() const { return this->inlinePolicyPerAccessConfigurationQuota_ != nullptr;};
      void deleteInlinePolicyPerAccessConfigurationQuota() { this->inlinePolicyPerAccessConfigurationQuota_ = nullptr;};
      inline int32_t getInlinePolicyPerAccessConfigurationQuota() const { DARABONBA_PTR_GET_DEFAULT(inlinePolicyPerAccessConfigurationQuota_, 0) };
      inline DirectoryStatistics& setInlinePolicyPerAccessConfigurationQuota(int32_t inlinePolicyPerAccessConfigurationQuota) { DARABONBA_PTR_SET_VALUE(inlinePolicyPerAccessConfigurationQuota_, inlinePolicyPerAccessConfigurationQuota) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DirectoryStatistics& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // SCIMServerCredentialCount Field Functions 
      bool hasSCIMServerCredentialCount() const { return this->SCIMServerCredentialCount_ != nullptr;};
      void deleteSCIMServerCredentialCount() { this->SCIMServerCredentialCount_ = nullptr;};
      inline int32_t getSCIMServerCredentialCount() const { DARABONBA_PTR_GET_DEFAULT(SCIMServerCredentialCount_, 0) };
      inline DirectoryStatistics& setSCIMServerCredentialCount(int32_t SCIMServerCredentialCount) { DARABONBA_PTR_SET_VALUE(SCIMServerCredentialCount_, SCIMServerCredentialCount) };


      // SCIMSyncEnabled Field Functions 
      bool hasSCIMSyncEnabled() const { return this->SCIMSyncEnabled_ != nullptr;};
      void deleteSCIMSyncEnabled() { this->SCIMSyncEnabled_ = nullptr;};
      inline bool getSCIMSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(SCIMSyncEnabled_, false) };
      inline DirectoryStatistics& setSCIMSyncEnabled(bool SCIMSyncEnabled) { DARABONBA_PTR_SET_VALUE(SCIMSyncEnabled_, SCIMSyncEnabled) };


      // SSOEnabled Field Functions 
      bool hasSSOEnabled() const { return this->SSOEnabled_ != nullptr;};
      void deleteSSOEnabled() { this->SSOEnabled_ = nullptr;};
      inline bool getSSOEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSOEnabled_, false) };
      inline DirectoryStatistics& setSSOEnabled(bool SSOEnabled) { DARABONBA_PTR_SET_VALUE(SSOEnabled_, SSOEnabled) };


      // systemPolicyPerAccessConfigurationQuota Field Functions 
      bool hasSystemPolicyPerAccessConfigurationQuota() const { return this->systemPolicyPerAccessConfigurationQuota_ != nullptr;};
      void deleteSystemPolicyPerAccessConfigurationQuota() { this->systemPolicyPerAccessConfigurationQuota_ = nullptr;};
      inline int32_t getSystemPolicyPerAccessConfigurationQuota() const { DARABONBA_PTR_GET_DEFAULT(systemPolicyPerAccessConfigurationQuota_, 0) };
      inline DirectoryStatistics& setSystemPolicyPerAccessConfigurationQuota(int32_t systemPolicyPerAccessConfigurationQuota) { DARABONBA_PTR_SET_VALUE(systemPolicyPerAccessConfigurationQuota_, systemPolicyPerAccessConfigurationQuota) };


      // userCount Field Functions 
      bool hasUserCount() const { return this->userCount_ != nullptr;};
      void deleteUserCount() { this->userCount_ = nullptr;};
      inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
      inline DirectoryStatistics& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


      // userQuota Field Functions 
      bool hasUserQuota() const { return this->userQuota_ != nullptr;};
      void deleteUserQuota() { this->userQuota_ = nullptr;};
      inline int32_t getUserQuota() const { DARABONBA_PTR_GET_DEFAULT(userQuota_, 0) };
      inline DirectoryStatistics& setUserQuota(int32_t userQuota) { DARABONBA_PTR_SET_VALUE(userQuota_, userQuota) };


    protected:
      // The number of access permissions that are assigned.
      shared_ptr<int32_t> accessAssignmentCount_ {};
      // The number of access configurations.
      shared_ptr<int32_t> accessConfigurationCount_ {};
      // The quota for access configurations.
      shared_ptr<int32_t> accessConfigurationQuota_ {};
      // The ID of the directory.
      shared_ptr<string> directoryId_ {};
      // The name of the directory.
      shared_ptr<string> directoryName_ {};
      // The number of user groups.
      shared_ptr<int32_t> groupCount_ {};
      // The quota for user groups.
      shared_ptr<int32_t> groupQuota_ {};
      // The number of tasks that are being performed.
      shared_ptr<int32_t> inProgressTaskCount_ {};
      // The number of inline policies that can be configured for an access configuration.
      shared_ptr<int32_t> inlinePolicyPerAccessConfigurationQuota_ {};
      // The region ID of the directory.
      shared_ptr<string> region_ {};
      // The number of SCIM credentials.
      shared_ptr<int32_t> SCIMServerCredentialCount_ {};
      // Indicates whether SCIM synchronization is enabled. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> SCIMSyncEnabled_ {};
      // Indicates whether SSO is enabled. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> SSOEnabled_ {};
      // The quota for system policies that can be configured for an access configuration.
      shared_ptr<int32_t> systemPolicyPerAccessConfigurationQuota_ {};
      // The number of users.
      shared_ptr<int32_t> userCount_ {};
      // The quota for users.
      shared_ptr<int32_t> userQuota_ {};
    };

    virtual bool empty() const override { return this->directoryStatistics_ == nullptr
        && this->requestId_ == nullptr; };
    // directoryStatistics Field Functions 
    bool hasDirectoryStatistics() const { return this->directoryStatistics_ != nullptr;};
    void deleteDirectoryStatistics() { this->directoryStatistics_ = nullptr;};
    inline const GetDirectoryStatisticsResponseBody::DirectoryStatistics & getDirectoryStatistics() const { DARABONBA_PTR_GET_CONST(directoryStatistics_, GetDirectoryStatisticsResponseBody::DirectoryStatistics) };
    inline GetDirectoryStatisticsResponseBody::DirectoryStatistics getDirectoryStatistics() { DARABONBA_PTR_GET(directoryStatistics_, GetDirectoryStatisticsResponseBody::DirectoryStatistics) };
    inline GetDirectoryStatisticsResponseBody& setDirectoryStatistics(const GetDirectoryStatisticsResponseBody::DirectoryStatistics & directoryStatistics) { DARABONBA_PTR_SET_VALUE(directoryStatistics_, directoryStatistics) };
    inline GetDirectoryStatisticsResponseBody& setDirectoryStatistics(GetDirectoryStatisticsResponseBody::DirectoryStatistics && directoryStatistics) { DARABONBA_PTR_SET_RVALUE(directoryStatistics_, directoryStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDirectoryStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of the directory.
    shared_ptr<GetDirectoryStatisticsResponseBody::DirectoryStatistics> directoryStatistics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
