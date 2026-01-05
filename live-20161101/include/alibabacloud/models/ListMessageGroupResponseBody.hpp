// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListMessageGroupResponseBody() = default ;
    ListMessageGroupResponseBody(const ListMessageGroupResponseBody &) = default ;
    ListMessageGroupResponseBody(ListMessageGroupResponseBody &&) = default ;
    ListMessageGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupResponseBody() = default ;
    ListMessageGroupResponseBody& operator=(const ListMessageGroupResponseBody &) = default ;
    ListMessageGroupResponseBody& operator=(ListMessageGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(GroupList, groupList_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupList& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, GroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        GroupList() = default ;
        GroupList(const GroupList &) = default ;
        GroupList(GroupList &&) = default ;
        GroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupList() = default ;
        GroupList& operator=(const GroupList &) = default ;
        GroupList& operator=(GroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->extension_ == nullptr && this->groupId_ == nullptr && this->status_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline GroupList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline GroupList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline GroupList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline const map<string, string> & getExtension() const { DARABONBA_PTR_GET_CONST(extension_, map<string, string>) };
        inline map<string, string> getExtension() { DARABONBA_PTR_GET(extension_, map<string, string>) };
        inline GroupList& setExtension(const map<string, string> & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
        inline GroupList& setExtension(map<string, string> && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline GroupList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline GroupList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the interactive messaging application.
        shared_ptr<string> appId_ {};
        // The time when the message group was created. The time is displayed in UTC.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the creator.
        shared_ptr<string> creatorId_ {};
        // The extended field.
        shared_ptr<map<string, string>> extension_ {};
        // The ID of the message group.
        shared_ptr<string> groupId_ {};
        // The status of the message group. The default value is **1**, which indicates that the status of the message group is normal.
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->groupList_ == nullptr
        && this->hasMore_ == nullptr && this->total_ == nullptr; };
      // groupList Field Functions 
      bool hasGroupList() const { return this->groupList_ != nullptr;};
      void deleteGroupList() { this->groupList_ = nullptr;};
      inline const vector<Result::GroupList> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<Result::GroupList>) };
      inline vector<Result::GroupList> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<Result::GroupList>) };
      inline Result& setGroupList(const vector<Result::GroupList> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
      inline Result& setGroupList(vector<Result::GroupList> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Result& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Result& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of message groups.
      shared_ptr<vector<Result::GroupList>> groupList_ {};
      // Indicates whether the current page is followed by another page. Valid values:
      // 
      // *   true: The current page is followed by another page.
      // *   false: The current page is not followed by another page.
      shared_ptr<bool> hasMore_ {};
      // The total number of message groups.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListMessageGroupResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListMessageGroupResponseBody::Result) };
    inline ListMessageGroupResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListMessageGroupResponseBody::Result) };
    inline ListMessageGroupResponseBody& setResult(const ListMessageGroupResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListMessageGroupResponseBody& setResult(ListMessageGroupResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<ListMessageGroupResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
