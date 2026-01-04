// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecurityGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSecurityGroupsResponseBody() = default ;
    DescribeSecurityGroupsResponseBody(const DescribeSecurityGroupsResponseBody &) = default ;
    DescribeSecurityGroupsResponseBody(DescribeSecurityGroupsResponseBody &&) = default ;
    DescribeSecurityGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupsResponseBody() = default ;
    DescribeSecurityGroupsResponseBody& operator=(const DescribeSecurityGroupsResponseBody &) = default ;
    DescribeSecurityGroupsResponseBody& operator=(DescribeSecurityGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroups& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      };
      SecurityGroups() = default ;
      SecurityGroups(const SecurityGroups &) = default ;
      SecurityGroups(SecurityGroups &&) = default ;
      SecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroups() = default ;
      SecurityGroups& operator=(const SecurityGroups &) = default ;
      SecurityGroups& operator=(SecurityGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecurityGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityGroup& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
        };
        SecurityGroup() = default ;
        SecurityGroup(const SecurityGroup &) = default ;
        SecurityGroup(SecurityGroup &&) = default ;
        SecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityGroup() = default ;
        SecurityGroup& operator=(const SecurityGroup &) = default ;
        SecurityGroup& operator=(SecurityGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NetworkInterfaceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkInterfaceIds& obj) { 
            DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkInterfaceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          };
          NetworkInterfaceIds() = default ;
          NetworkInterfaceIds(const NetworkInterfaceIds &) = default ;
          NetworkInterfaceIds(NetworkInterfaceIds &&) = default ;
          NetworkInterfaceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkInterfaceIds() = default ;
          NetworkInterfaceIds& operator=(const NetworkInterfaceIds &) = default ;
          NetworkInterfaceIds& operator=(NetworkInterfaceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->networkInterfaceId_ == nullptr; };
          // networkInterfaceId Field Functions 
          bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
          void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
          inline const vector<string> & getNetworkInterfaceId() const { DARABONBA_PTR_GET_CONST(networkInterfaceId_, vector<string>) };
          inline vector<string> getNetworkInterfaceId() { DARABONBA_PTR_GET(networkInterfaceId_, vector<string>) };
          inline NetworkInterfaceIds& setNetworkInterfaceId(const vector<string> & networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };
          inline NetworkInterfaceIds& setNetworkInterfaceId(vector<string> && networkInterfaceId) { DARABONBA_PTR_SET_RVALUE(networkInterfaceId_, networkInterfaceId) };


        protected:
          shared_ptr<vector<string>> networkInterfaceId_ {};
        };

        class InstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          };
          InstanceIds() = default ;
          InstanceIds(const InstanceIds &) = default ;
          InstanceIds(InstanceIds &&) = default ;
          InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceIds() = default ;
          InstanceIds& operator=(const InstanceIds &) = default ;
          InstanceIds& operator=(InstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceId_ == nullptr; };
          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
          inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
          inline InstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
          inline InstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


        protected:
          shared_ptr<vector<string>> instanceId_ {};
        };

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->instanceCount_ == nullptr && this->instanceIds_ == nullptr && this->networkInterfaceIds_ == nullptr && this->securityGroupId_ == nullptr
        && this->securityGroupName_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline SecurityGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SecurityGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceCount Field Functions 
        bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
        void deleteInstanceCount() { this->instanceCount_ = nullptr;};
        inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
        inline SecurityGroup& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


        // instanceIds Field Functions 
        bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
        void deleteInstanceIds() { this->instanceIds_ = nullptr;};
        inline const SecurityGroup::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, SecurityGroup::InstanceIds) };
        inline SecurityGroup::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, SecurityGroup::InstanceIds) };
        inline SecurityGroup& setInstanceIds(const SecurityGroup::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
        inline SecurityGroup& setInstanceIds(SecurityGroup::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


        // networkInterfaceIds Field Functions 
        bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
        void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
        inline const SecurityGroup::NetworkInterfaceIds & getNetworkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, SecurityGroup::NetworkInterfaceIds) };
        inline SecurityGroup::NetworkInterfaceIds getNetworkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, SecurityGroup::NetworkInterfaceIds) };
        inline SecurityGroup& setNetworkInterfaceIds(const SecurityGroup::NetworkInterfaceIds & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
        inline SecurityGroup& setNetworkInterfaceIds(SecurityGroup::NetworkInterfaceIds && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // securityGroupName Field Functions 
        bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
        void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
        inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
        inline SecurityGroup& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


      protected:
        // The creation time. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the security group.
        shared_ptr<string> description_ {};
        // The number of associated instances.
        shared_ptr<int32_t> instanceCount_ {};
        // The IDs of the instances that are associated with the security group.
        shared_ptr<SecurityGroup::InstanceIds> instanceIds_ {};
        // The IDs of the ENIs that are associated with the security group.
        shared_ptr<SecurityGroup::NetworkInterfaceIds> networkInterfaceIds_ {};
        // The ID of the security group.
        shared_ptr<string> securityGroupId_ {};
        // The name of the security group.
        shared_ptr<string> securityGroupName_ {};
      };

      virtual bool empty() const override { return this->securityGroup_ == nullptr; };
      // securityGroup Field Functions 
      bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
      void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
      inline const vector<SecurityGroups::SecurityGroup> & getSecurityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, vector<SecurityGroups::SecurityGroup>) };
      inline vector<SecurityGroups::SecurityGroup> getSecurityGroup() { DARABONBA_PTR_GET(securityGroup_, vector<SecurityGroups::SecurityGroup>) };
      inline SecurityGroups& setSecurityGroup(const vector<SecurityGroups::SecurityGroup> & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
      inline SecurityGroups& setSecurityGroup(vector<SecurityGroups::SecurityGroup> && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


    protected:
      shared_ptr<vector<SecurityGroups::SecurityGroup>> securityGroup_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->securityGroups_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSecurityGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSecurityGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const DescribeSecurityGroupsResponseBody::SecurityGroups & getSecurityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, DescribeSecurityGroupsResponseBody::SecurityGroups) };
    inline DescribeSecurityGroupsResponseBody::SecurityGroups getSecurityGroups() { DARABONBA_PTR_GET(securityGroups_, DescribeSecurityGroupsResponseBody::SecurityGroups) };
    inline DescribeSecurityGroupsResponseBody& setSecurityGroups(const DescribeSecurityGroupsResponseBody::SecurityGroups & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline DescribeSecurityGroupsResponseBody& setSecurityGroups(DescribeSecurityGroupsResponseBody::SecurityGroups && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecurityGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about security groups.
    shared_ptr<DescribeSecurityGroupsResponseBody::SecurityGroups> securityGroups_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
