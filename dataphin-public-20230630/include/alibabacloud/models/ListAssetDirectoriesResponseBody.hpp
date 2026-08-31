// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETDIRECTORIESRESPONSEBODY_HPP_
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
  class ListAssetDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAssetDirectoriesResponseBody() = default ;
    ListAssetDirectoriesResponseBody(const ListAssetDirectoriesResponseBody &) = default ;
    ListAssetDirectoriesResponseBody(ListAssetDirectoriesResponseBody &&) = default ;
    ListAssetDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetDirectoriesResponseBody() = default ;
    ListAssetDirectoriesResponseBody& operator=(const ListAssetDirectoriesResponseBody &) = default ;
    ListAssetDirectoriesResponseBody& operator=(ListAssetDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DirectoryList, directoryList_);
        DARABONBA_PTR_TO_JSON(TopicId, topicId_);
        DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DirectoryList, directoryList_);
        DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
        DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
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
      class DirectoryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DirectoryList& obj) { 
          DARABONBA_PTR_TO_JSON(DirectoryDescription, directoryDescription_);
          DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
          DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
          DARABONBA_PTR_TO_JSON(FullPath, fullPath_);
          DARABONBA_PTR_TO_JSON(FullPathIds, fullPathIds_);
          DARABONBA_PTR_TO_JSON(FullPathNames, fullPathNames_);
          DARABONBA_PTR_TO_JSON(HasChildren, hasChildren_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ParentDirectoryId, parentDirectoryId_);
        };
        friend void from_json(const Darabonba::Json& j, DirectoryList& obj) { 
          DARABONBA_PTR_FROM_JSON(DirectoryDescription, directoryDescription_);
          DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
          DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
          DARABONBA_PTR_FROM_JSON(FullPath, fullPath_);
          DARABONBA_PTR_FROM_JSON(FullPathIds, fullPathIds_);
          DARABONBA_PTR_FROM_JSON(FullPathNames, fullPathNames_);
          DARABONBA_PTR_FROM_JSON(HasChildren, hasChildren_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ParentDirectoryId, parentDirectoryId_);
        };
        DirectoryList() = default ;
        DirectoryList(const DirectoryList &) = default ;
        DirectoryList(DirectoryList &&) = default ;
        DirectoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DirectoryList() = default ;
        DirectoryList& operator=(const DirectoryList &) = default ;
        DirectoryList& operator=(DirectoryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Modifier : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Modifier& obj) { 
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, Modifier& obj) { 
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          Modifier() = default ;
          Modifier(const Modifier &) = default ;
          Modifier(Modifier &&) = default ;
          Modifier(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Modifier() = default ;
          Modifier& operator=(const Modifier &) = default ;
          Modifier& operator=(Modifier &&) = default ;
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
          inline Modifier& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline Modifier& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The user ID.
          shared_ptr<string> userId_ {};
          // The username.
          shared_ptr<string> userName_ {};
        };

        virtual bool empty() const override { return this->directoryDescription_ == nullptr
        && this->directoryId_ == nullptr && this->directoryName_ == nullptr && this->fullPath_ == nullptr && this->fullPathIds_ == nullptr && this->fullPathNames_ == nullptr
        && this->hasChildren_ == nullptr && this->level_ == nullptr && this->modifier_ == nullptr && this->modifyTime_ == nullptr && this->parentDirectoryId_ == nullptr; };
        // directoryDescription Field Functions 
        bool hasDirectoryDescription() const { return this->directoryDescription_ != nullptr;};
        void deleteDirectoryDescription() { this->directoryDescription_ = nullptr;};
        inline string getDirectoryDescription() const { DARABONBA_PTR_GET_DEFAULT(directoryDescription_, "") };
        inline DirectoryList& setDirectoryDescription(string directoryDescription) { DARABONBA_PTR_SET_VALUE(directoryDescription_, directoryDescription) };


        // directoryId Field Functions 
        bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
        void deleteDirectoryId() { this->directoryId_ = nullptr;};
        inline int64_t getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, 0L) };
        inline DirectoryList& setDirectoryId(int64_t directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


        // directoryName Field Functions 
        bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
        void deleteDirectoryName() { this->directoryName_ = nullptr;};
        inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
        inline DirectoryList& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


        // fullPath Field Functions 
        bool hasFullPath() const { return this->fullPath_ != nullptr;};
        void deleteFullPath() { this->fullPath_ = nullptr;};
        inline string getFullPath() const { DARABONBA_PTR_GET_DEFAULT(fullPath_, "") };
        inline DirectoryList& setFullPath(string fullPath) { DARABONBA_PTR_SET_VALUE(fullPath_, fullPath) };


        // fullPathIds Field Functions 
        bool hasFullPathIds() const { return this->fullPathIds_ != nullptr;};
        void deleteFullPathIds() { this->fullPathIds_ = nullptr;};
        inline const vector<int64_t> & getFullPathIds() const { DARABONBA_PTR_GET_CONST(fullPathIds_, vector<int64_t>) };
        inline vector<int64_t> getFullPathIds() { DARABONBA_PTR_GET(fullPathIds_, vector<int64_t>) };
        inline DirectoryList& setFullPathIds(const vector<int64_t> & fullPathIds) { DARABONBA_PTR_SET_VALUE(fullPathIds_, fullPathIds) };
        inline DirectoryList& setFullPathIds(vector<int64_t> && fullPathIds) { DARABONBA_PTR_SET_RVALUE(fullPathIds_, fullPathIds) };


        // fullPathNames Field Functions 
        bool hasFullPathNames() const { return this->fullPathNames_ != nullptr;};
        void deleteFullPathNames() { this->fullPathNames_ = nullptr;};
        inline const vector<string> & getFullPathNames() const { DARABONBA_PTR_GET_CONST(fullPathNames_, vector<string>) };
        inline vector<string> getFullPathNames() { DARABONBA_PTR_GET(fullPathNames_, vector<string>) };
        inline DirectoryList& setFullPathNames(const vector<string> & fullPathNames) { DARABONBA_PTR_SET_VALUE(fullPathNames_, fullPathNames) };
        inline DirectoryList& setFullPathNames(vector<string> && fullPathNames) { DARABONBA_PTR_SET_RVALUE(fullPathNames_, fullPathNames) };


        // hasChildren Field Functions 
        bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
        void deleteHasChildren() { this->hasChildren_ = nullptr;};
        inline bool getHasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
        inline DirectoryList& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline DirectoryList& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline const DirectoryList::Modifier & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, DirectoryList::Modifier) };
        inline DirectoryList::Modifier getModifier() { DARABONBA_PTR_GET(modifier_, DirectoryList::Modifier) };
        inline DirectoryList& setModifier(const DirectoryList::Modifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
        inline DirectoryList& setModifier(DirectoryList::Modifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline DirectoryList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // parentDirectoryId Field Functions 
        bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
        void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
        inline int64_t getParentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, 0L) };
        inline DirectoryList& setParentDirectoryId(int64_t parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


      protected:
        // The folder description.
        shared_ptr<string> directoryDescription_ {};
        // The folder ID.
        shared_ptr<int64_t> directoryId_ {};
        // The folder name.
        shared_ptr<string> directoryName_ {};
        // The display path.
        shared_ptr<string> fullPath_ {};
        // The ID path from the top level to the current folder.
        shared_ptr<vector<int64_t>> fullPathIds_ {};
        // The name path from the top level to the current folder.
        shared_ptr<vector<string>> fullPathNames_ {};
        // Indicates whether published direct child folders exist.
        shared_ptr<bool> hasChildren_ {};
        // The absolute level of the folder.
        shared_ptr<int32_t> level_ {};
        // The last modifier.
        shared_ptr<DirectoryList::Modifier> modifier_ {};
        // The last modified time.
        shared_ptr<string> modifyTime_ {};
        // The parent folder ID.
        shared_ptr<int64_t> parentDirectoryId_ {};
      };

      virtual bool empty() const override { return this->directoryList_ == nullptr
        && this->topicId_ == nullptr && this->topicName_ == nullptr && this->totalCount_ == nullptr; };
      // directoryList Field Functions 
      bool hasDirectoryList() const { return this->directoryList_ != nullptr;};
      void deleteDirectoryList() { this->directoryList_ = nullptr;};
      inline const vector<Data::DirectoryList> & getDirectoryList() const { DARABONBA_PTR_GET_CONST(directoryList_, vector<Data::DirectoryList>) };
      inline vector<Data::DirectoryList> getDirectoryList() { DARABONBA_PTR_GET(directoryList_, vector<Data::DirectoryList>) };
      inline Data& setDirectoryList(const vector<Data::DirectoryList> & directoryList) { DARABONBA_PTR_SET_VALUE(directoryList_, directoryList) };
      inline Data& setDirectoryList(vector<Data::DirectoryList> && directoryList) { DARABONBA_PTR_SET_RVALUE(directoryList_, directoryList) };


      // topicId Field Functions 
      bool hasTopicId() const { return this->topicId_ != nullptr;};
      void deleteTopicId() { this->topicId_ = nullptr;};
      inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
      inline Data& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The folder list.
      shared_ptr<vector<Data::DirectoryList>> directoryList_ {};
      // The topic ID.
      shared_ptr<int64_t> topicId_ {};
      // The topic name.
      shared_ptr<string> topicName_ {};
      // The total number of records that match the conditions.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAssetDirectoriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAssetDirectoriesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAssetDirectoriesResponseBody::Data) };
    inline ListAssetDirectoriesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAssetDirectoriesResponseBody::Data) };
    inline ListAssetDirectoriesResponseBody& setData(const ListAssetDirectoriesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAssetDirectoriesResponseBody& setData(ListAssetDirectoriesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAssetDirectoriesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAssetDirectoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAssetDirectoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The paginated result of asset topic folders.
    shared_ptr<ListAssetDirectoriesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
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
