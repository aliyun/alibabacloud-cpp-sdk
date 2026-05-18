// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListAccessGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroups, accessGroups_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroups, accessGroups_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAccessGroupsResponseBody() = default ;
    ListAccessGroupsResponseBody(const ListAccessGroupsResponseBody &) = default ;
    ListAccessGroupsResponseBody(ListAccessGroupsResponseBody &&) = default ;
    ListAccessGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessGroupsResponseBody() = default ;
    ListAccessGroupsResponseBody& operator=(const ListAccessGroupsResponseBody &) = default ;
    ListAccessGroupsResponseBody& operator=(ListAccessGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
        DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(MountPointCount, mountPointCount_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      };
      friend void from_json(const Darabonba::Json& j, AccessGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
        DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(MountPointCount, mountPointCount_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      };
      AccessGroups() = default ;
      AccessGroups(const AccessGroups &) = default ;
      AccessGroups(AccessGroups &&) = default ;
      AccessGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessGroups() = default ;
      AccessGroups& operator=(const AccessGroups &) = default ;
      AccessGroups& operator=(AccessGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && this->accessGroupName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->isDefault_ == nullptr && this->mountPointCount_ == nullptr
        && this->networkType_ == nullptr && this->regionId_ == nullptr && this->ruleCount_ == nullptr; };
      // accessGroupId Field Functions 
      bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
      void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
      inline string getAccessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
      inline AccessGroups& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


      // accessGroupName Field Functions 
      bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
      void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
      inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
      inline AccessGroups& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AccessGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline AccessGroups& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // mountPointCount Field Functions 
      bool hasMountPointCount() const { return this->mountPointCount_ != nullptr;};
      void deleteMountPointCount() { this->mountPointCount_ = nullptr;};
      inline int32_t getMountPointCount() const { DARABONBA_PTR_GET_DEFAULT(mountPointCount_, 0) };
      inline AccessGroups& setMountPointCount(int32_t mountPointCount) { DARABONBA_PTR_SET_VALUE(mountPointCount_, mountPointCount) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline AccessGroups& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AccessGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline AccessGroups& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    protected:
      shared_ptr<string> accessGroupId_ {};
      shared_ptr<string> accessGroupName_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> isDefault_ {};
      shared_ptr<int32_t> mountPointCount_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int32_t> ruleCount_ {};
    };

    virtual bool empty() const override { return this->accessGroups_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessGroups Field Functions 
    bool hasAccessGroups() const { return this->accessGroups_ != nullptr;};
    void deleteAccessGroups() { this->accessGroups_ = nullptr;};
    inline const vector<ListAccessGroupsResponseBody::AccessGroups> & getAccessGroups() const { DARABONBA_PTR_GET_CONST(accessGroups_, vector<ListAccessGroupsResponseBody::AccessGroups>) };
    inline vector<ListAccessGroupsResponseBody::AccessGroups> getAccessGroups() { DARABONBA_PTR_GET(accessGroups_, vector<ListAccessGroupsResponseBody::AccessGroups>) };
    inline ListAccessGroupsResponseBody& setAccessGroups(const vector<ListAccessGroupsResponseBody::AccessGroups> & accessGroups) { DARABONBA_PTR_SET_VALUE(accessGroups_, accessGroups) };
    inline ListAccessGroupsResponseBody& setAccessGroups(vector<ListAccessGroupsResponseBody::AccessGroups> && accessGroups) { DARABONBA_PTR_SET_RVALUE(accessGroups_, accessGroups) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAccessGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAccessGroupsResponseBody::AccessGroups>> accessGroups_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
