// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAclGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAclGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclGroupList, aclGroupList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAclGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclGroupList, aclGroupList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcFirewallAclGroupListResponseBody() = default ;
    DescribeVpcFirewallAclGroupListResponseBody(const DescribeVpcFirewallAclGroupListResponseBody &) = default ;
    DescribeVpcFirewallAclGroupListResponseBody(DescribeVpcFirewallAclGroupListResponseBody &&) = default ;
    DescribeVpcFirewallAclGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAclGroupListResponseBody() = default ;
    DescribeVpcFirewallAclGroupListResponseBody& operator=(const DescribeVpcFirewallAclGroupListResponseBody &) = default ;
    DescribeVpcFirewallAclGroupListResponseBody& operator=(DescribeVpcFirewallAclGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AclGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(AclConfig, aclConfig_);
        DARABONBA_PTR_TO_JSON(AclGroupId, aclGroupId_);
        DARABONBA_PTR_TO_JSON(AclGroupName, aclGroupName_);
        DARABONBA_PTR_TO_JSON(AclRuleCount, aclRuleCount_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      };
      friend void from_json(const Darabonba::Json& j, AclGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(AclConfig, aclConfig_);
        DARABONBA_PTR_FROM_JSON(AclGroupId, aclGroupId_);
        DARABONBA_PTR_FROM_JSON(AclGroupName, aclGroupName_);
        DARABONBA_PTR_FROM_JSON(AclRuleCount, aclRuleCount_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      };
      AclGroupList() = default ;
      AclGroupList(const AclGroupList &) = default ;
      AclGroupList(AclGroupList &&) = default ;
      AclGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclGroupList() = default ;
      AclGroupList& operator=(const AclGroupList &) = default ;
      AclGroupList& operator=(AclGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AclConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclConfig& obj) { 
          DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
        };
        friend void from_json(const Darabonba::Json& j, AclConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
        };
        AclConfig() = default ;
        AclConfig(const AclConfig &) = default ;
        AclConfig(AclConfig &&) = default ;
        AclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclConfig() = default ;
        AclConfig& operator=(const AclConfig &) = default ;
        AclConfig& operator=(AclConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->strictMode_ == nullptr; };
        // strictMode Field Functions 
        bool hasStrictMode() const { return this->strictMode_ != nullptr;};
        void deleteStrictMode() { this->strictMode_ = nullptr;};
        inline int32_t getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
        inline AclConfig& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


      protected:
        // Specifies Whether strict mode is enabled. Valid values:
        // *   1: yes
        // *   0: no
        shared_ptr<int32_t> strictMode_ {};
      };

      virtual bool empty() const override { return this->aclConfig_ == nullptr
        && this->aclGroupId_ == nullptr && this->aclGroupName_ == nullptr && this->aclRuleCount_ == nullptr && this->isDefault_ == nullptr && this->memberUid_ == nullptr; };
      // aclConfig Field Functions 
      bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
      void deleteAclConfig() { this->aclConfig_ = nullptr;};
      inline const AclGroupList::AclConfig & getAclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, AclGroupList::AclConfig) };
      inline AclGroupList::AclConfig getAclConfig() { DARABONBA_PTR_GET(aclConfig_, AclGroupList::AclConfig) };
      inline AclGroupList& setAclConfig(const AclGroupList::AclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
      inline AclGroupList& setAclConfig(AclGroupList::AclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


      // aclGroupId Field Functions 
      bool hasAclGroupId() const { return this->aclGroupId_ != nullptr;};
      void deleteAclGroupId() { this->aclGroupId_ = nullptr;};
      inline string getAclGroupId() const { DARABONBA_PTR_GET_DEFAULT(aclGroupId_, "") };
      inline AclGroupList& setAclGroupId(string aclGroupId) { DARABONBA_PTR_SET_VALUE(aclGroupId_, aclGroupId) };


      // aclGroupName Field Functions 
      bool hasAclGroupName() const { return this->aclGroupName_ != nullptr;};
      void deleteAclGroupName() { this->aclGroupName_ = nullptr;};
      inline string getAclGroupName() const { DARABONBA_PTR_GET_DEFAULT(aclGroupName_, "") };
      inline AclGroupList& setAclGroupName(string aclGroupName) { DARABONBA_PTR_SET_VALUE(aclGroupName_, aclGroupName) };


      // aclRuleCount Field Functions 
      bool hasAclRuleCount() const { return this->aclRuleCount_ != nullptr;};
      void deleteAclRuleCount() { this->aclRuleCount_ = nullptr;};
      inline int32_t getAclRuleCount() const { DARABONBA_PTR_GET_DEFAULT(aclRuleCount_, 0) };
      inline AclGroupList& setAclRuleCount(int32_t aclRuleCount) { DARABONBA_PTR_SET_VALUE(aclRuleCount_, aclRuleCount) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline AclGroupList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline AclGroupList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    protected:
      // ACL engine mode.
      shared_ptr<AclGroupList::AclConfig> aclConfig_ {};
      // The ID of the policy group.
      // 
      // Valid values:
      // 
      // *   If the VPC firewall is used to protect a Cloud Enterprise Network (CEN) instance, the value of this parameter is the ID of the CEN instance.
      // 
      //     Example: cen-ervw0g12b5jbw\\*\\*\\*\\*
      // 
      // *   If the VPC firewall is used to protect an Express Connect circuit, the value of this parameter is the instance ID of the VPC firewall.
      // 
      //     Example: vfw-a42bbb7b887148c9\\*\\*\\*\\*
      shared_ptr<string> aclGroupId_ {};
      // The name of the policy group. Valid values:
      // 
      // *   If the VPC firewall is used to protect a CEN instance, the value of this parameter is the name of the CEN instance.
      // *   If the VPC firewall is used to protect an Express Connect circuit, the value of this parameter is the instance name of the VPC firewall.
      shared_ptr<string> aclGroupName_ {};
      // The number of access control policies in the policy group.
      shared_ptr<int32_t> aclRuleCount_ {};
      // Whether it is the default firewall. Values:
      // 
      // *   **true**: It is the default firewall.
      // *   **false**: It is not the default firewall.
      shared_ptr<bool> isDefault_ {};
      // The UID of the member that is managed by your Alibaba Cloud account.
      shared_ptr<string> memberUid_ {};
    };

    virtual bool empty() const override { return this->aclGroupList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // aclGroupList Field Functions 
    bool hasAclGroupList() const { return this->aclGroupList_ != nullptr;};
    void deleteAclGroupList() { this->aclGroupList_ = nullptr;};
    inline const vector<DescribeVpcFirewallAclGroupListResponseBody::AclGroupList> & getAclGroupList() const { DARABONBA_PTR_GET_CONST(aclGroupList_, vector<DescribeVpcFirewallAclGroupListResponseBody::AclGroupList>) };
    inline vector<DescribeVpcFirewallAclGroupListResponseBody::AclGroupList> getAclGroupList() { DARABONBA_PTR_GET(aclGroupList_, vector<DescribeVpcFirewallAclGroupListResponseBody::AclGroupList>) };
    inline DescribeVpcFirewallAclGroupListResponseBody& setAclGroupList(const vector<DescribeVpcFirewallAclGroupListResponseBody::AclGroupList> & aclGroupList) { DARABONBA_PTR_SET_VALUE(aclGroupList_, aclGroupList) };
    inline DescribeVpcFirewallAclGroupListResponseBody& setAclGroupList(vector<DescribeVpcFirewallAclGroupListResponseBody::AclGroupList> && aclGroupList) { DARABONBA_PTR_SET_RVALUE(aclGroupList_, aclGroupList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallAclGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallAclGroupListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the access control policy groups.
    shared_ptr<vector<DescribeVpcFirewallAclGroupListResponseBody::AclGroupList>> aclGroupList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the policy groups that are returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
