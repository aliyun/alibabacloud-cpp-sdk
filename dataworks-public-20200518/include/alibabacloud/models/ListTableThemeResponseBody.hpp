// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLETHEMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLETHEMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTableThemeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableThemeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableThemeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTableThemeResponseBody() = default ;
    ListTableThemeResponseBody(const ListTableThemeResponseBody &) = default ;
    ListTableThemeResponseBody(ListTableThemeResponseBody &&) = default ;
    ListTableThemeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableThemeResponseBody() = default ;
    ListTableThemeResponseBody& operator=(const ListTableThemeResponseBody &) = default ;
    ListTableThemeResponseBody& operator=(ListTableThemeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ThemeList, themeList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ThemeList, themeList_);
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
      class ThemeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ThemeList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
        };
        friend void from_json(const Darabonba::Json& j, ThemeList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
        };
        ThemeList() = default ;
        ThemeList(const ThemeList &) = default ;
        ThemeList(ThemeList &&) = default ;
        ThemeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ThemeList() = default ;
        ThemeList& operator=(const ThemeList &) = default ;
        ThemeList& operator=(ThemeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTimeStamp_ == nullptr
        && this->creator_ == nullptr && this->level_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr && this->projectId_ == nullptr
        && this->themeId_ == nullptr; };
        // createTimeStamp Field Functions 
        bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
        void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
        inline int64_t getCreateTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
        inline ThemeList& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline ThemeList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline ThemeList& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ThemeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline ThemeList& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline ThemeList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // themeId Field Functions 
        bool hasThemeId() const { return this->themeId_ != nullptr;};
        void deleteThemeId() { this->themeId_ = nullptr;};
        inline int64_t getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, 0L) };
        inline ThemeList& setThemeId(int64_t themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


      protected:
        // The time when the table level was created.
        shared_ptr<int64_t> createTimeStamp_ {};
        // The creator of the table level.
        shared_ptr<string> creator_ {};
        // The level of the table folder. Valid values: 1 and 2. The value 1 indicates the first level. The value 2 indicates the second level.
        shared_ptr<int32_t> level_ {};
        // The name of the table level.
        shared_ptr<string> name_ {};
        // The ancestor node ID.
        shared_ptr<int64_t> parentId_ {};
        // The DataWorks workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The table theme ID.
        shared_ptr<int64_t> themeId_ {};
      };

      virtual bool empty() const override { return this->themeList_ == nullptr
        && this->totalCount_ == nullptr; };
      // themeList Field Functions 
      bool hasThemeList() const { return this->themeList_ != nullptr;};
      void deleteThemeList() { this->themeList_ = nullptr;};
      inline const vector<Data::ThemeList> & getThemeList() const { DARABONBA_PTR_GET_CONST(themeList_, vector<Data::ThemeList>) };
      inline vector<Data::ThemeList> getThemeList() { DARABONBA_PTR_GET(themeList_, vector<Data::ThemeList>) };
      inline Data& setThemeList(const vector<Data::ThemeList> & themeList) { DARABONBA_PTR_SET_VALUE(themeList_, themeList) };
      inline Data& setThemeList(vector<Data::ThemeList> && themeList) { DARABONBA_PTR_SET_RVALUE(themeList_, themeList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of table levels.
      shared_ptr<vector<Data::ThemeList>> themeList_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTableThemeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTableThemeResponseBody::Data) };
    inline ListTableThemeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTableThemeResponseBody::Data) };
    inline ListTableThemeResponseBody& setData(const ListTableThemeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTableThemeResponseBody& setData(ListTableThemeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTableThemeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTableThemeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTableThemeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTableThemeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTableThemeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned result.
    shared_ptr<ListTableThemeResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
