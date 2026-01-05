// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefenseResourceGroupResponseBody() = default ;
    DescribeDefenseResourceGroupResponseBody(const DescribeDefenseResourceGroupResponseBody &) = default ;
    DescribeDefenseResourceGroupResponseBody(DescribeDefenseResourceGroupResponseBody &&) = default ;
    DescribeDefenseResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceGroupResponseBody() = default ;
    DescribeDefenseResourceGroupResponseBody& operator=(const DescribeDefenseResourceGroupResponseBody &) = default ;
    DescribeDefenseResourceGroupResponseBody& operator=(DescribeDefenseResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Group : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Group& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      };
      friend void from_json(const Darabonba::Json& j, Group& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->groupName_ == nullptr && this->resourceList_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Group& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Group& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Group& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Group& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline string getResourceList() const { DARABONBA_PTR_GET_DEFAULT(resourceList_, "") };
      inline Group& setResourceList(string resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };


    protected:
      // The description of the protected object group.
      shared_ptr<string> description_ {};
      // The time when the protected object group was created.
      shared_ptr<int64_t> gmtCreate_ {};
      // The most recent time when the protected object group was modified.
      shared_ptr<int64_t> gmtModified_ {};
      // The name of the protected object group.
      shared_ptr<string> groupName_ {};
      // The protected objects in the protected object group. The protected objects are separated with commas (,).
      shared_ptr<string> resourceList_ {};
    };

    virtual bool empty() const override { return this->group_ == nullptr
        && this->requestId_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const DescribeDefenseResourceGroupResponseBody::Group & getGroup() const { DARABONBA_PTR_GET_CONST(group_, DescribeDefenseResourceGroupResponseBody::Group) };
    inline DescribeDefenseResourceGroupResponseBody::Group getGroup() { DARABONBA_PTR_GET(group_, DescribeDefenseResourceGroupResponseBody::Group) };
    inline DescribeDefenseResourceGroupResponseBody& setGroup(const DescribeDefenseResourceGroupResponseBody::Group & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline DescribeDefenseResourceGroupResponseBody& setGroup(DescribeDefenseResourceGroupResponseBody::Group && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the protected object group.
    shared_ptr<DescribeDefenseResourceGroupResponseBody::Group> group_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
