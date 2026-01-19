// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODY_HPP_
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
  class ListGroupsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListGroupsForUserResponseBody() = default ;
    ListGroupsForUserResponseBody(const ListGroupsForUserResponseBody &) = default ;
    ListGroupsForUserResponseBody(ListGroupsForUserResponseBody &&) = default ;
    ListGroupsForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForUserResponseBody() = default ;
    ListGroupsForUserResponseBody& operator=(const ListGroupsForUserResponseBody &) = default ;
    ListGroupsForUserResponseBody& operator=(ListGroupsForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(groupId, groupId_);
        DARABONBA_PTR_TO_JSON(groupMemberRelationSourceId, groupMemberRelationSourceId_);
        DARABONBA_PTR_TO_JSON(groupMemberRelationSourceType, groupMemberRelationSourceType_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(groupId, groupId_);
        DARABONBA_PTR_FROM_JSON(groupMemberRelationSourceId, groupMemberRelationSourceId_);
        DARABONBA_PTR_FROM_JSON(groupMemberRelationSourceType, groupMemberRelationSourceType_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
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
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupMemberRelationSourceId_ == nullptr && this->groupMemberRelationSourceType_ == nullptr && this->instanceId_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupMemberRelationSourceId Field Functions 
      bool hasGroupMemberRelationSourceId() const { return this->groupMemberRelationSourceId_ != nullptr;};
      void deleteGroupMemberRelationSourceId() { this->groupMemberRelationSourceId_ = nullptr;};
      inline string getGroupMemberRelationSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceId_, "") };
      inline Data& setGroupMemberRelationSourceId(string groupMemberRelationSourceId) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceId_, groupMemberRelationSourceId) };


      // groupMemberRelationSourceType Field Functions 
      bool hasGroupMemberRelationSourceType() const { return this->groupMemberRelationSourceType_ != nullptr;};
      void deleteGroupMemberRelationSourceType() { this->groupMemberRelationSourceType_ = nullptr;};
      inline string getGroupMemberRelationSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceType_, "") };
      inline Data& setGroupMemberRelationSourceType(string groupMemberRelationSourceType) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceType_, groupMemberRelationSourceType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<string> groupId_ {};
      shared_ptr<string> groupMemberRelationSourceId_ {};
      shared_ptr<string> groupMemberRelationSourceType_ {};
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListGroupsForUserResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListGroupsForUserResponseBody::Data>) };
    inline vector<ListGroupsForUserResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListGroupsForUserResponseBody::Data>) };
    inline ListGroupsForUserResponseBody& setData(const vector<ListGroupsForUserResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGroupsForUserResponseBody& setData(vector<ListGroupsForUserResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListGroupsForUserResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGroupsForUserResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupsForUserResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListGroupsForUserResponseBody::Data>> data_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
