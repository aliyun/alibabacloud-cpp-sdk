// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListGroupsResponseBody() = default ;
    ListGroupsResponseBody(const ListGroupsResponseBody &) = default ;
    ListGroupsResponseBody(ListGroupsResponseBody &&) = default ;
    ListGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsResponseBody() = default ;
    ListGroupsResponseBody& operator=(const ListGroupsResponseBody &) = default ;
    ListGroupsResponseBody& operator=(ListGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(groupExternalId, groupExternalId_);
        DARABONBA_PTR_TO_JSON(groupId, groupId_);
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(groupSourceId, groupSourceId_);
        DARABONBA_PTR_TO_JSON(groupSourceType, groupSourceType_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(groupExternalId, groupExternalId_);
        DARABONBA_PTR_FROM_JSON(groupId, groupId_);
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(groupSourceId, groupSourceId_);
        DARABONBA_PTR_FROM_JSON(groupSourceType, groupSourceType_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->groupExternalId_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->groupSourceId_ == nullptr
        && this->groupSourceType_ == nullptr && this->instanceId_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupExternalId Field Functions 
      bool hasGroupExternalId() const { return this->groupExternalId_ != nullptr;};
      void deleteGroupExternalId() { this->groupExternalId_ = nullptr;};
      inline string getGroupExternalId() const { DARABONBA_PTR_GET_DEFAULT(groupExternalId_, "") };
      inline Data& setGroupExternalId(string groupExternalId) { DARABONBA_PTR_SET_VALUE(groupExternalId_, groupExternalId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupSourceId Field Functions 
      bool hasGroupSourceId() const { return this->groupSourceId_ != nullptr;};
      void deleteGroupSourceId() { this->groupSourceId_ = nullptr;};
      inline string getGroupSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupSourceId_, "") };
      inline Data& setGroupSourceId(string groupSourceId) { DARABONBA_PTR_SET_VALUE(groupSourceId_, groupSourceId) };


      // groupSourceType Field Functions 
      bool hasGroupSourceType() const { return this->groupSourceType_ != nullptr;};
      void deleteGroupSourceType() { this->groupSourceType_ = nullptr;};
      inline string getGroupSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupSourceType_, "") };
      inline Data& setGroupSourceType(string groupSourceType) { DARABONBA_PTR_SET_VALUE(groupSourceType_, groupSourceType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the group was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The group description.
      shared_ptr<string> description_ {};
      // The external ID of the group.
      shared_ptr<string> groupExternalId_ {};
      // The group ID.
      shared_ptr<string> groupId_ {};
      // The group name.
      shared_ptr<string> groupName_ {};
      // The source ID of the group.
      shared_ptr<string> groupSourceId_ {};
      // The source type of the group. Valid values: build_in, ding_talk, ad, and ldap.
      shared_ptr<string> groupSourceType_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The time when the group was last updated. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListGroupsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListGroupsResponseBody::Data>) };
    inline vector<ListGroupsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListGroupsResponseBody::Data>) };
    inline ListGroupsResponseBody& setData(const vector<ListGroupsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGroupsResponseBody& setData(vector<ListGroupsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned data.
    shared_ptr<vector<ListGroupsResponseBody::Data>> data_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The start position of the query. If this parameter is left empty, the query starts from the beginning.
    shared_ptr<string> nextToken_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
