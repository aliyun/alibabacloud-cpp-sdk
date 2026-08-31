// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETTOPICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETTOPICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAssetTopicsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetTopicsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetTopicsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAssetTopicsResponseBody() = default ;
    ListAssetTopicsResponseBody(const ListAssetTopicsResponseBody &) = default ;
    ListAssetTopicsResponseBody(ListAssetTopicsResponseBody &&) = default ;
    ListAssetTopicsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetTopicsResponseBody() = default ;
    ListAssetTopicsResponseBody& operator=(const ListAssetTopicsResponseBody &) = default ;
    ListAssetTopicsResponseBody& operator=(ListAssetTopicsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TopicList, topicList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TopicList, topicList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class TopicList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopicList& obj) { 
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Owners, owners_);
          DARABONBA_PTR_TO_JSON(TopicDescription, topicDescription_);
          DARABONBA_PTR_TO_JSON(TopicId, topicId_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
          DARABONBA_PTR_TO_JSON(VisibilityType, visibilityType_);
          DARABONBA_PTR_TO_JSON(VisibleUserGroups, visibleUserGroups_);
          DARABONBA_PTR_TO_JSON(VisibleUsers, visibleUsers_);
        };
        friend void from_json(const Darabonba::Json& j, TopicList& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Owners, owners_);
          DARABONBA_PTR_FROM_JSON(TopicDescription, topicDescription_);
          DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
          DARABONBA_PTR_FROM_JSON(VisibilityType, visibilityType_);
          DARABONBA_PTR_FROM_JSON(VisibleUserGroups, visibleUserGroups_);
          DARABONBA_PTR_FROM_JSON(VisibleUsers, visibleUsers_);
        };
        TopicList() = default ;
        TopicList(const TopicList &) = default ;
        TopicList(TopicList &&) = default ;
        TopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopicList() = default ;
        TopicList& operator=(const TopicList &) = default ;
        TopicList& operator=(TopicList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VisibleUsers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VisibleUsers& obj) { 
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, VisibleUsers& obj) { 
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          VisibleUsers() = default ;
          VisibleUsers(const VisibleUsers &) = default ;
          VisibleUsers(VisibleUsers &&) = default ;
          VisibleUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VisibleUsers() = default ;
          VisibleUsers& operator=(const VisibleUsers &) = default ;
          VisibleUsers& operator=(VisibleUsers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr; };
          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline VisibleUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline VisibleUsers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The user ID.
          shared_ptr<string> userId_ {};
          // The username.
          shared_ptr<string> userName_ {};
        };

        class VisibleUserGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VisibleUserGroups& obj) { 
            DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
            DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
          };
          friend void from_json(const Darabonba::Json& j, VisibleUserGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
            DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
          };
          VisibleUserGroups() = default ;
          VisibleUserGroups(const VisibleUserGroups &) = default ;
          VisibleUserGroups(VisibleUserGroups &&) = default ;
          VisibleUserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VisibleUserGroups() = default ;
          VisibleUserGroups& operator=(const VisibleUserGroups &) = default ;
          VisibleUserGroups& operator=(VisibleUserGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->userGroupId_ == nullptr
        && this->userGroupName_ == nullptr; };
          // userGroupId Field Functions 
          bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
          void deleteUserGroupId() { this->userGroupId_ = nullptr;};
          inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
          inline VisibleUserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


          // userGroupName Field Functions 
          bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
          void deleteUserGroupName() { this->userGroupName_ = nullptr;};
          inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
          inline VisibleUserGroups& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


        protected:
          // The user group ID.
          shared_ptr<string> userGroupId_ {};
          // The user group name.
          shared_ptr<string> userGroupName_ {};
        };

        class Owners : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Owners& obj) { 
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, Owners& obj) { 
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          Owners() = default ;
          Owners(const Owners &) = default ;
          Owners(Owners &&) = default ;
          Owners(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Owners() = default ;
          Owners& operator=(const Owners &) = default ;
          Owners& operator=(Owners &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr; };
          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline Owners& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline Owners& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The user ID.
          shared_ptr<string> userId_ {};
          // The username.
          shared_ptr<string> userName_ {};
        };

        virtual bool empty() const override { return this->assetType_ == nullptr
        && this->modifyTime_ == nullptr && this->owners_ == nullptr && this->topicDescription_ == nullptr && this->topicId_ == nullptr && this->topicName_ == nullptr
        && this->visibilityType_ == nullptr && this->visibleUserGroups_ == nullptr && this->visibleUsers_ == nullptr; };
        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
        inline TopicList& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline TopicList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // owners Field Functions 
        bool hasOwners() const { return this->owners_ != nullptr;};
        void deleteOwners() { this->owners_ = nullptr;};
        inline const vector<TopicList::Owners> & getOwners() const { DARABONBA_PTR_GET_CONST(owners_, vector<TopicList::Owners>) };
        inline vector<TopicList::Owners> getOwners() { DARABONBA_PTR_GET(owners_, vector<TopicList::Owners>) };
        inline TopicList& setOwners(const vector<TopicList::Owners> & owners) { DARABONBA_PTR_SET_VALUE(owners_, owners) };
        inline TopicList& setOwners(vector<TopicList::Owners> && owners) { DARABONBA_PTR_SET_RVALUE(owners_, owners) };


        // topicDescription Field Functions 
        bool hasTopicDescription() const { return this->topicDescription_ != nullptr;};
        void deleteTopicDescription() { this->topicDescription_ = nullptr;};
        inline string getTopicDescription() const { DARABONBA_PTR_GET_DEFAULT(topicDescription_, "") };
        inline TopicList& setTopicDescription(string topicDescription) { DARABONBA_PTR_SET_VALUE(topicDescription_, topicDescription) };


        // topicId Field Functions 
        bool hasTopicId() const { return this->topicId_ != nullptr;};
        void deleteTopicId() { this->topicId_ = nullptr;};
        inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
        inline TopicList& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline TopicList& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // visibilityType Field Functions 
        bool hasVisibilityType() const { return this->visibilityType_ != nullptr;};
        void deleteVisibilityType() { this->visibilityType_ = nullptr;};
        inline string getVisibilityType() const { DARABONBA_PTR_GET_DEFAULT(visibilityType_, "") };
        inline TopicList& setVisibilityType(string visibilityType) { DARABONBA_PTR_SET_VALUE(visibilityType_, visibilityType) };


        // visibleUserGroups Field Functions 
        bool hasVisibleUserGroups() const { return this->visibleUserGroups_ != nullptr;};
        void deleteVisibleUserGroups() { this->visibleUserGroups_ = nullptr;};
        inline const vector<TopicList::VisibleUserGroups> & getVisibleUserGroups() const { DARABONBA_PTR_GET_CONST(visibleUserGroups_, vector<TopicList::VisibleUserGroups>) };
        inline vector<TopicList::VisibleUserGroups> getVisibleUserGroups() { DARABONBA_PTR_GET(visibleUserGroups_, vector<TopicList::VisibleUserGroups>) };
        inline TopicList& setVisibleUserGroups(const vector<TopicList::VisibleUserGroups> & visibleUserGroups) { DARABONBA_PTR_SET_VALUE(visibleUserGroups_, visibleUserGroups) };
        inline TopicList& setVisibleUserGroups(vector<TopicList::VisibleUserGroups> && visibleUserGroups) { DARABONBA_PTR_SET_RVALUE(visibleUserGroups_, visibleUserGroups) };


        // visibleUsers Field Functions 
        bool hasVisibleUsers() const { return this->visibleUsers_ != nullptr;};
        void deleteVisibleUsers() { this->visibleUsers_ = nullptr;};
        inline const vector<TopicList::VisibleUsers> & getVisibleUsers() const { DARABONBA_PTR_GET_CONST(visibleUsers_, vector<TopicList::VisibleUsers>) };
        inline vector<TopicList::VisibleUsers> getVisibleUsers() { DARABONBA_PTR_GET(visibleUsers_, vector<TopicList::VisibleUsers>) };
        inline TopicList& setVisibleUsers(const vector<TopicList::VisibleUsers> & visibleUsers) { DARABONBA_PTR_SET_VALUE(visibleUsers_, visibleUsers) };
        inline TopicList& setVisibleUsers(vector<TopicList::VisibleUsers> && visibleUsers) { DARABONBA_PTR_SET_RVALUE(visibleUsers_, visibleUsers) };


      protected:
        // The asset type.
        shared_ptr<string> assetType_ {};
        // The last modified time.
        shared_ptr<string> modifyTime_ {};
        // The topic administrators.
        shared_ptr<vector<TopicList::Owners>> owners_ {};
        // The topic description.
        shared_ptr<string> topicDescription_ {};
        // The topic ID.
        shared_ptr<int64_t> topicId_ {};
        // The topic name.
        shared_ptr<string> topicName_ {};
        // The visibility scope. Valid values: PUBLIC, SPECIFIED.
        shared_ptr<string> visibilityType_ {};
        // The explicitly visible user groups. Returns null for PUBLIC topics.
        shared_ptr<vector<TopicList::VisibleUserGroups>> visibleUserGroups_ {};
        // The explicitly visible users. Returns null for PUBLIC topics.
        shared_ptr<vector<TopicList::VisibleUsers>> visibleUsers_ {};
      };

      virtual bool empty() const override { return this->topicList_ == nullptr
        && this->totalCount_ == nullptr; };
      // topicList Field Functions 
      bool hasTopicList() const { return this->topicList_ != nullptr;};
      void deleteTopicList() { this->topicList_ = nullptr;};
      inline const vector<Data::TopicList> & getTopicList() const { DARABONBA_PTR_GET_CONST(topicList_, vector<Data::TopicList>) };
      inline vector<Data::TopicList> getTopicList() { DARABONBA_PTR_GET(topicList_, vector<Data::TopicList>) };
      inline Data& setTopicList(const vector<Data::TopicList> & topicList) { DARABONBA_PTR_SET_VALUE(topicList_, topicList) };
      inline Data& setTopicList(vector<Data::TopicList> && topicList) { DARABONBA_PTR_SET_RVALUE(topicList_, topicList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of topics.
      shared_ptr<vector<Data::TopicList>> topicList_ {};
      // The total number of records that match the query conditions.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAssetTopicsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAssetTopicsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAssetTopicsResponseBody::Data) };
    inline ListAssetTopicsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAssetTopicsResponseBody::Data) };
    inline ListAssetTopicsResponseBody& setData(const ListAssetTopicsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAssetTopicsResponseBody& setData(ListAssetTopicsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAssetTopicsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAssetTopicsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetTopicsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAssetTopicsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The paginated result of asset topics.
    shared_ptr<ListAssetTopicsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
