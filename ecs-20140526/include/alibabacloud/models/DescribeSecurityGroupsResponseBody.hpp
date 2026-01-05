// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
          DARABONBA_PTR_TO_JSON(AvailableInstanceAmount, availableInstanceAmount_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_TO_JSON(GroupToGroupRuleCount, groupToGroupRuleCount_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
          DARABONBA_PTR_TO_JSON(SecurityGroupType, securityGroupType_);
          DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
          DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableInstanceAmount, availableInstanceAmount_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_FROM_JSON(GroupToGroupRuleCount, groupToGroupRuleCount_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupType, securityGroupType_);
          DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
          DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The key of the tag.
            shared_ptr<string> tagKey_ {};
            // The value of the tag.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->availableInstanceAmount_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->ecsCount_ == nullptr && this->groupToGroupRuleCount_ == nullptr && this->resourceGroupId_ == nullptr
        && this->ruleCount_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupName_ == nullptr && this->securityGroupType_ == nullptr && this->serviceID_ == nullptr
        && this->serviceManaged_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
        // availableInstanceAmount Field Functions 
        bool hasAvailableInstanceAmount() const { return this->availableInstanceAmount_ != nullptr;};
        void deleteAvailableInstanceAmount() { this->availableInstanceAmount_ = nullptr;};
        inline int32_t getAvailableInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(availableInstanceAmount_, 0) };
        inline SecurityGroup& setAvailableInstanceAmount(int32_t availableInstanceAmount) { DARABONBA_PTR_SET_VALUE(availableInstanceAmount_, availableInstanceAmount) };


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


        // ecsCount Field Functions 
        bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
        void deleteEcsCount() { this->ecsCount_ = nullptr;};
        inline int32_t getEcsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
        inline SecurityGroup& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


        // groupToGroupRuleCount Field Functions 
        bool hasGroupToGroupRuleCount() const { return this->groupToGroupRuleCount_ != nullptr;};
        void deleteGroupToGroupRuleCount() { this->groupToGroupRuleCount_ = nullptr;};
        inline int32_t getGroupToGroupRuleCount() const { DARABONBA_PTR_GET_DEFAULT(groupToGroupRuleCount_, 0) };
        inline SecurityGroup& setGroupToGroupRuleCount(int32_t groupToGroupRuleCount) { DARABONBA_PTR_SET_VALUE(groupToGroupRuleCount_, groupToGroupRuleCount) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline SecurityGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // ruleCount Field Functions 
        bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
        void deleteRuleCount() { this->ruleCount_ = nullptr;};
        inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
        inline SecurityGroup& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


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


        // securityGroupType Field Functions 
        bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
        void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
        inline string getSecurityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
        inline SecurityGroup& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


        // serviceID Field Functions 
        bool hasServiceID() const { return this->serviceID_ != nullptr;};
        void deleteServiceID() { this->serviceID_ = nullptr;};
        inline int64_t getServiceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
        inline SecurityGroup& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


        // serviceManaged Field Functions 
        bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
        void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
        inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
        inline SecurityGroup& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const SecurityGroup::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, SecurityGroup::Tags) };
        inline SecurityGroup::Tags getTags() { DARABONBA_PTR_GET(tags_, SecurityGroup::Tags) };
        inline SecurityGroup& setTags(const SecurityGroup::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline SecurityGroup& setTags(SecurityGroup::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SecurityGroup& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The number of private IP addresses that can be added to the security group. For more information, see the "Security group capacity" section in [Basic security groups and advanced security groups](~~605897#section-kj9-e46-6v5~~).
        // 
        // If you set IsQueryEcsCount to True, the return value of AvailableInstanceAmount is valid.
        // 
        // >  This parameter is deprecated. The returned quantity is provided only for reference. The actual quantity may differ from the returned quantity.
        shared_ptr<int32_t> availableInstanceAmount_ {};
        // The time when the security group was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the security group.
        shared_ptr<string> description_ {};
        // The number of private IP addresses that are contained in the security group. For more information, see the "Security group capacity" section in [Basic security groups and advanced security groups](~~605897#section-kj9-e46-6v5~~).
        // 
        // If you set IsQueryEcsCount to True, the return value of EcsCount is valid.
        // 
        // >  This parameter is deprecated. The returned quantity is provided only for reference. The actual quantity may differ from the returned quantity.
        shared_ptr<int32_t> ecsCount_ {};
        // The number of rules that reference security groups in the security group.
        shared_ptr<int32_t> groupToGroupRuleCount_ {};
        // The ID of the resource group to which the security group belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The number of rules in the security group.
        shared_ptr<int32_t> ruleCount_ {};
        // The ID of the security group.
        shared_ptr<string> securityGroupId_ {};
        // The name of the security group.
        shared_ptr<string> securityGroupName_ {};
        // The type of the security group. Valid values:
        // 
        // *   normal: basic security group
        // *   enterprise: advanced security group
        shared_ptr<string> securityGroupType_ {};
        // The ID of the distributor to which the security group belongs.
        shared_ptr<int64_t> serviceID_ {};
        // Indicates whether the user of the security group is an Alibaba Cloud service or a distributor.
        shared_ptr<bool> serviceManaged_ {};
        // The tags of the security group.
        shared_ptr<SecurityGroup::Tags> tags_ {};
        // The ID of the VPC to which the security group belongs.
        shared_ptr<string> vpcId_ {};
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

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->securityGroups_ == nullptr
        && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSecurityGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityGroupsResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    // A pagination token. If the return value of this parameter is empty when MaxResults and NextToken are used for a paged query, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The page number.
    // 
    // > This parameter will be deprecated in the future. We recommend that you use NextToken and MaxResults for a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // > This parameter will be deprecated in the future. We recommend that you use NextToken and MaxResults for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the security group.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the security groups.
    shared_ptr<DescribeSecurityGroupsResponseBody::SecurityGroups> securityGroups_ {};
    // The total number of security groups returned. If `MaxResults` and `NextToken` are specified in the request, the value of this parameter is not returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
