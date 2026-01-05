// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseResourceGroupsResponseBody() = default ;
    DescribeDefenseResourceGroupsResponseBody(const DescribeDefenseResourceGroupsResponseBody &) = default ;
    DescribeDefenseResourceGroupsResponseBody(DescribeDefenseResourceGroupsResponseBody &&) = default ;
    DescribeDefenseResourceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceGroupsResponseBody() = default ;
    DescribeDefenseResourceGroupsResponseBody& operator=(const DescribeDefenseResourceGroupsResponseBody &) = default ;
    DescribeDefenseResourceGroupsResponseBody& operator=(DescribeDefenseResourceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->groupName_ == nullptr && this->resourceList_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Groups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Groups& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Groups& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline string getResourceList() const { DARABONBA_PTR_GET_DEFAULT(resourceList_, "") };
      inline Groups& setResourceList(string resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };


    protected:
      // The description of the protected object group.
      shared_ptr<string> description_ {};
      // The time when the protected object group was created. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The most recent time when the protected object group was modified. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The name of the protected object group.
      shared_ptr<string> groupName_ {};
      // The names of the protected objects that are added to the protected object group. Separate multiple protected objects with commas (,).
      shared_ptr<string> resourceList_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeDefenseResourceGroupsResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeDefenseResourceGroupsResponseBody::Groups>) };
    inline vector<DescribeDefenseResourceGroupsResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<DescribeDefenseResourceGroupsResponseBody::Groups>) };
    inline DescribeDefenseResourceGroupsResponseBody& setGroups(const vector<DescribeDefenseResourceGroupsResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeDefenseResourceGroupsResponseBody& setGroups(vector<DescribeDefenseResourceGroupsResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseResourceGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of protected object groups.
    shared_ptr<vector<DescribeDefenseResourceGroupsResponseBody::Groups>> groups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
