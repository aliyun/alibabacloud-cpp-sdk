// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeIpWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIpWhitelistResponseBody() = default ;
    DescribeIpWhitelistResponseBody(const DescribeIpWhitelistResponseBody &) = default ;
    DescribeIpWhitelistResponseBody(DescribeIpWhitelistResponseBody &&) = default ;
    DescribeIpWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpWhitelistResponseBody() = default ;
    DescribeIpWhitelistResponseBody& operator=(const DescribeIpWhitelistResponseBody &) = default ;
    DescribeIpWhitelistResponseBody& operator=(DescribeIpWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(Group, group_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(Group, group_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Group : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Group& obj) { 
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(IpList, ipList_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        };
        friend void from_json(const Darabonba::Json& j, Group& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(IpList, ipList_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        };
        Group() = default ;
        Group(const Group &) = default ;
        Group(Group &&) = default ;
        Group(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Group() = default ;
        Group& operator=(const Group &) = default ;
        Group& operator=(Group &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IpList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IpList& obj) { 
            DARABONBA_PTR_TO_JSON(Ip, ip_);
          };
          friend void from_json(const Darabonba::Json& j, IpList& obj) { 
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
          };
          IpList() = default ;
          IpList(const IpList &) = default ;
          IpList(IpList &&) = default ;
          IpList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IpList() = default ;
          IpList& operator=(const IpList &) = default ;
          IpList& operator=(IpList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ip_ == nullptr; };
          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline const vector<string> & getIp() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
          inline vector<string> getIp() { DARABONBA_PTR_GET(ip_, vector<string>) };
          inline IpList& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
          inline IpList& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


        protected:
          shared_ptr<vector<string>> ip_ {};
        };

        virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ipList_ == nullptr && this->ipVersion_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Group& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // ipList Field Functions 
        bool hasIpList() const { return this->ipList_ != nullptr;};
        void deleteIpList() { this->ipList_ = nullptr;};
        inline const Group::IpList & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, Group::IpList) };
        inline Group::IpList getIpList() { DARABONBA_PTR_GET(ipList_, Group::IpList) };
        inline Group& setIpList(const Group::IpList & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
        inline Group& setIpList(Group::IpList && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline int32_t getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
        inline Group& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      protected:
        shared_ptr<string> groupName_ {};
        shared_ptr<Group::IpList> ipList_ {};
        shared_ptr<int32_t> ipVersion_ {};
      };

      virtual bool empty() const override { return this->group_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline const vector<Groups::Group> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<Groups::Group>) };
      inline vector<Groups::Group> getGroup() { DARABONBA_PTR_GET(group_, vector<Groups::Group>) };
      inline Groups& setGroup(const vector<Groups::Group> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
      inline Groups& setGroup(vector<Groups::Group> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    protected:
      shared_ptr<vector<Groups::Group>> group_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->requestId_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const DescribeIpWhitelistResponseBody::Groups & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, DescribeIpWhitelistResponseBody::Groups) };
    inline DescribeIpWhitelistResponseBody::Groups getGroups() { DARABONBA_PTR_GET(groups_, DescribeIpWhitelistResponseBody::Groups) };
    inline DescribeIpWhitelistResponseBody& setGroups(const DescribeIpWhitelistResponseBody::Groups & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeIpWhitelistResponseBody& setGroups(DescribeIpWhitelistResponseBody::Groups && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeIpWhitelistResponseBody::Groups> groups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
