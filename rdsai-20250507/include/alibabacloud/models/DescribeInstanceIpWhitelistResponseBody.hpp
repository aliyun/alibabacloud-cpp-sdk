// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceIpWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIpWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(DbIpWhiteListGroups, dbIpWhiteListGroups_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IpWhiteListGroups, ipWhiteListGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIpWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(DbIpWhiteListGroups, dbIpWhiteListGroups_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IpWhiteListGroups, ipWhiteListGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceIpWhitelistResponseBody() = default ;
    DescribeInstanceIpWhitelistResponseBody(const DescribeInstanceIpWhitelistResponseBody &) = default ;
    DescribeInstanceIpWhitelistResponseBody(DescribeInstanceIpWhitelistResponseBody &&) = default ;
    DescribeInstanceIpWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIpWhitelistResponseBody() = default ;
    DescribeInstanceIpWhitelistResponseBody& operator=(const DescribeInstanceIpWhitelistResponseBody &) = default ;
    DescribeInstanceIpWhitelistResponseBody& operator=(DescribeInstanceIpWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpWhiteListGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpWhiteListGroups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
      };
      friend void from_json(const Darabonba::Json& j, IpWhiteListGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
      };
      IpWhiteListGroups() = default ;
      IpWhiteListGroups(const IpWhiteListGroups &) = default ;
      IpWhiteListGroups(IpWhiteListGroups &&) = default ;
      IpWhiteListGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpWhiteListGroups() = default ;
      IpWhiteListGroups& operator=(const IpWhiteListGroups &) = default ;
      IpWhiteListGroups& operator=(IpWhiteListGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ipWhitelist_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline IpWhiteListGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ipWhitelist Field Functions 
      bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
      void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
      inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
      inline IpWhiteListGroups& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    protected:
      // The group name.
      shared_ptr<string> groupName_ {};
      // The list of IP addresses.
      shared_ptr<string> ipWhitelist_ {};
    };

    class DbIpWhiteListGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DbIpWhiteListGroups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
      };
      friend void from_json(const Darabonba::Json& j, DbIpWhiteListGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
      };
      DbIpWhiteListGroups() = default ;
      DbIpWhiteListGroups(const DbIpWhiteListGroups &) = default ;
      DbIpWhiteListGroups(DbIpWhiteListGroups &&) = default ;
      DbIpWhiteListGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DbIpWhiteListGroups() = default ;
      DbIpWhiteListGroups& operator=(const DbIpWhiteListGroups &) = default ;
      DbIpWhiteListGroups& operator=(DbIpWhiteListGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ipWhitelist_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DbIpWhiteListGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ipWhitelist Field Functions 
      bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
      void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
      inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
      inline DbIpWhiteListGroups& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    protected:
      shared_ptr<string> groupName_ {};
      shared_ptr<string> ipWhitelist_ {};
    };

    virtual bool empty() const override { return this->branchName_ == nullptr
        && this->dbIpWhiteListGroups_ == nullptr && this->instanceName_ == nullptr && this->ipWhiteListGroups_ == nullptr && this->requestId_ == nullptr; };
    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline DescribeInstanceIpWhitelistResponseBody& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // dbIpWhiteListGroups Field Functions 
    bool hasDbIpWhiteListGroups() const { return this->dbIpWhiteListGroups_ != nullptr;};
    void deleteDbIpWhiteListGroups() { this->dbIpWhiteListGroups_ = nullptr;};
    inline const vector<DescribeInstanceIpWhitelistResponseBody::DbIpWhiteListGroups> & getDbIpWhiteListGroups() const { DARABONBA_PTR_GET_CONST(dbIpWhiteListGroups_, vector<DescribeInstanceIpWhitelistResponseBody::DbIpWhiteListGroups>) };
    inline vector<DescribeInstanceIpWhitelistResponseBody::DbIpWhiteListGroups> getDbIpWhiteListGroups() { DARABONBA_PTR_GET(dbIpWhiteListGroups_, vector<DescribeInstanceIpWhitelistResponseBody::DbIpWhiteListGroups>) };
    inline DescribeInstanceIpWhitelistResponseBody& setDbIpWhiteListGroups(const vector<DescribeInstanceIpWhitelistResponseBody::DbIpWhiteListGroups> & dbIpWhiteListGroups) { DARABONBA_PTR_SET_VALUE(dbIpWhiteListGroups_, dbIpWhiteListGroups) };
    inline DescribeInstanceIpWhitelistResponseBody& setDbIpWhiteListGroups(vector<DescribeInstanceIpWhitelistResponseBody::DbIpWhiteListGroups> && dbIpWhiteListGroups) { DARABONBA_PTR_SET_RVALUE(dbIpWhiteListGroups_, dbIpWhiteListGroups) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceIpWhitelistResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ipWhiteListGroups Field Functions 
    bool hasIpWhiteListGroups() const { return this->ipWhiteListGroups_ != nullptr;};
    void deleteIpWhiteListGroups() { this->ipWhiteListGroups_ = nullptr;};
    inline const vector<DescribeInstanceIpWhitelistResponseBody::IpWhiteListGroups> & getIpWhiteListGroups() const { DARABONBA_PTR_GET_CONST(ipWhiteListGroups_, vector<DescribeInstanceIpWhitelistResponseBody::IpWhiteListGroups>) };
    inline vector<DescribeInstanceIpWhitelistResponseBody::IpWhiteListGroups> getIpWhiteListGroups() { DARABONBA_PTR_GET(ipWhiteListGroups_, vector<DescribeInstanceIpWhitelistResponseBody::IpWhiteListGroups>) };
    inline DescribeInstanceIpWhitelistResponseBody& setIpWhiteListGroups(const vector<DescribeInstanceIpWhitelistResponseBody::IpWhiteListGroups> & ipWhiteListGroups) { DARABONBA_PTR_SET_VALUE(ipWhiteListGroups_, ipWhiteListGroups) };
    inline DescribeInstanceIpWhitelistResponseBody& setIpWhiteListGroups(vector<DescribeInstanceIpWhitelistResponseBody::IpWhiteListGroups> && ipWhiteListGroups) { DARABONBA_PTR_SET_RVALUE(ipWhiteListGroups_, ipWhiteListGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceIpWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> branchName_ {};
    shared_ptr<vector<DescribeInstanceIpWhitelistResponseBody::DbIpWhiteListGroups>> dbIpWhiteListGroups_ {};
    // The instance ID of the AI application.
    shared_ptr<string> instanceName_ {};
    // The IP whitelist groups.
    shared_ptr<vector<DescribeInstanceIpWhitelistResponseBody::IpWhiteListGroups>> ipWhiteListGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
