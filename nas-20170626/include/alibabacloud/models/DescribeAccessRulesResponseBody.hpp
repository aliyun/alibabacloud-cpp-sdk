// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRules, accessRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRules, accessRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessRulesResponseBody() = default ;
    DescribeAccessRulesResponseBody(const DescribeAccessRulesResponseBody &) = default ;
    DescribeAccessRulesResponseBody(DescribeAccessRulesResponseBody &&) = default ;
    DescribeAccessRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessRulesResponseBody() = default ;
    DescribeAccessRulesResponseBody& operator=(const DescribeAccessRulesResponseBody &) = default ;
    DescribeAccessRulesResponseBody& operator=(DescribeAccessRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessRules& obj) { 
        DARABONBA_PTR_TO_JSON(AccessRule, accessRule_);
      };
      friend void from_json(const Darabonba::Json& j, AccessRules& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessRule, accessRule_);
      };
      AccessRules() = default ;
      AccessRules(const AccessRules &) = default ;
      AccessRules(AccessRules &&) = default ;
      AccessRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessRules() = default ;
      AccessRules& operator=(const AccessRules &) = default ;
      AccessRules& operator=(AccessRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccessRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessRule& obj) { 
          DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
          DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
          DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RWAccess, RWAccess_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
          DARABONBA_PTR_TO_JSON(UserAccess, userAccess_);
        };
        friend void from_json(const Darabonba::Json& j, AccessRule& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
          DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
          DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RWAccess, RWAccess_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
          DARABONBA_PTR_FROM_JSON(UserAccess, userAccess_);
        };
        AccessRule() = default ;
        AccessRule(const AccessRule &) = default ;
        AccessRule(AccessRule &&) = default ;
        AccessRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessRule() = default ;
        AccessRule& operator=(const AccessRule &) = default ;
        AccessRule& operator=(AccessRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->accessRuleId_ == nullptr && this->fileSystemType_ == nullptr && this->ipv6SourceCidrIp_ == nullptr && this->priority_ == nullptr && this->RWAccess_ == nullptr
        && this->regionId_ == nullptr && this->sourceCidrIp_ == nullptr && this->userAccess_ == nullptr; };
        // accessGroupName Field Functions 
        bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
        void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
        inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
        inline AccessRule& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


        // accessRuleId Field Functions 
        bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
        void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
        inline string getAccessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
        inline AccessRule& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


        // fileSystemType Field Functions 
        bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
        void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
        inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
        inline AccessRule& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


        // ipv6SourceCidrIp Field Functions 
        bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
        void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
        inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
        inline AccessRule& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline AccessRule& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // RWAccess Field Functions 
        bool hasRWAccess() const { return this->RWAccess_ != nullptr;};
        void deleteRWAccess() { this->RWAccess_ = nullptr;};
        inline string getRWAccess() const { DARABONBA_PTR_GET_DEFAULT(RWAccess_, "") };
        inline AccessRule& setRWAccess(string RWAccess) { DARABONBA_PTR_SET_VALUE(RWAccess_, RWAccess) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AccessRule& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // sourceCidrIp Field Functions 
        bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
        void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
        inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
        inline AccessRule& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


        // userAccess Field Functions 
        bool hasUserAccess() const { return this->userAccess_ != nullptr;};
        void deleteUserAccess() { this->userAccess_ = nullptr;};
        inline string getUserAccess() const { DARABONBA_PTR_GET_DEFAULT(userAccess_, "") };
        inline AccessRule& setUserAccess(string userAccess) { DARABONBA_PTR_SET_VALUE(userAccess_, userAccess) };


      protected:
        // The name of the permission group.
        shared_ptr<string> accessGroupName_ {};
        // The ID of the rule.
        shared_ptr<string> accessRuleId_ {};
        // The type of the file system.
        // 
        // Valid values:
        // 
        // *   standard: General-purpose File Storage NAS (NAS) file system
        // *   extreme: Extreme NAS file system
        shared_ptr<string> fileSystemType_ {};
        // The IPv6 address or CIDR block of the authorized object.
        shared_ptr<string> ipv6SourceCidrIp_ {};
        // The priority of the rule.
        // 
        // If multiple rules are attached to the authorized object, the rule with the highest priority takes effect.
        // 
        // Valid values: 1 to 100. The value 1 indicates the highest priority.
        shared_ptr<int32_t> priority_ {};
        // The access permissions of the authorized object on the file system.
        // 
        // Valid values:
        // 
        // *   RDWR (default): the read and write permissions
        // *   RDONLY: the read-only permissions
        shared_ptr<string> RWAccess_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The IP address or CIDR block of the authorized object.
        shared_ptr<string> sourceCidrIp_ {};
        // The access permissions for different types of users in the authorized object.
        // 
        // Valid values:
        // 
        // *   no_squash: allows access from root users to the file system.
        // *   root_squash: grants root users the least permissions as the nobody user.
        // *   all_squash: grants all users the least permissions as the nobody user.
        // 
        // The nobody user has the least permissions in Linux and can access only the public content of the file system. This ensures the security of the file system.
        shared_ptr<string> userAccess_ {};
      };

      virtual bool empty() const override { return this->accessRule_ == nullptr; };
      // accessRule Field Functions 
      bool hasAccessRule() const { return this->accessRule_ != nullptr;};
      void deleteAccessRule() { this->accessRule_ = nullptr;};
      inline const vector<AccessRules::AccessRule> & getAccessRule() const { DARABONBA_PTR_GET_CONST(accessRule_, vector<AccessRules::AccessRule>) };
      inline vector<AccessRules::AccessRule> getAccessRule() { DARABONBA_PTR_GET(accessRule_, vector<AccessRules::AccessRule>) };
      inline AccessRules& setAccessRule(const vector<AccessRules::AccessRule> & accessRule) { DARABONBA_PTR_SET_VALUE(accessRule_, accessRule) };
      inline AccessRules& setAccessRule(vector<AccessRules::AccessRule> && accessRule) { DARABONBA_PTR_SET_RVALUE(accessRule_, accessRule) };


    protected:
      shared_ptr<vector<AccessRules::AccessRule>> accessRule_ {};
    };

    virtual bool empty() const override { return this->accessRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessRules Field Functions 
    bool hasAccessRules() const { return this->accessRules_ != nullptr;};
    void deleteAccessRules() { this->accessRules_ = nullptr;};
    inline const DescribeAccessRulesResponseBody::AccessRules & getAccessRules() const { DARABONBA_PTR_GET_CONST(accessRules_, DescribeAccessRulesResponseBody::AccessRules) };
    inline DescribeAccessRulesResponseBody::AccessRules getAccessRules() { DARABONBA_PTR_GET(accessRules_, DescribeAccessRulesResponseBody::AccessRules) };
    inline DescribeAccessRulesResponseBody& setAccessRules(const DescribeAccessRulesResponseBody::AccessRules & accessRules) { DARABONBA_PTR_SET_VALUE(accessRules_, accessRules) };
    inline DescribeAccessRulesResponseBody& setAccessRules(DescribeAccessRulesResponseBody::AccessRules && accessRules) { DARABONBA_PTR_SET_RVALUE(accessRules_, accessRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The rules in the permission group.
    shared_ptr<DescribeAccessRulesResponseBody::AccessRules> accessRules_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of rules.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
