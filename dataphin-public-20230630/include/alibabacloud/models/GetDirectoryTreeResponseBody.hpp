// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYTREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYTREERESPONSEBODY_HPP_
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
  class GetDirectoryTreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryTreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryTreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDirectoryTreeResponseBody() = default ;
    GetDirectoryTreeResponseBody(const GetDirectoryTreeResponseBody &) = default ;
    GetDirectoryTreeResponseBody(GetDirectoryTreeResponseBody &&) = default ;
    GetDirectoryTreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryTreeResponseBody() = default ;
    GetDirectoryTreeResponseBody& operator=(const GetDirectoryTreeResponseBody &) = default ;
    GetDirectoryTreeResponseBody& operator=(GetDirectoryTreeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Children, children_);
        DARABONBA_PTR_TO_JSON(Parent, parent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Children, children_);
        DARABONBA_PTR_FROM_JSON(Parent, parent_);
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
      class Parent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parent& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(DataCellId, dataCellId_);
          DARABONBA_PTR_TO_JSON(DirName, dirName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(StringId, stringId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Parent& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(DataCellId, dataCellId_);
          DARABONBA_PTR_FROM_JSON(DirName, dirName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(StringId, stringId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Parent() = default ;
        Parent(const Parent &) = default ;
        Parent(Parent &&) = default ;
        Parent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parent() = default ;
        Parent& operator=(const Parent &) = default ;
        Parent& operator=(Parent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryType_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->dataCellId_ == nullptr && this->dirName_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr && this->lastModifierName_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->stringId_ == nullptr && this->type_ == nullptr; };
        // categoryType Field Functions 
        bool hasCategoryType() const { return this->categoryType_ != nullptr;};
        void deleteCategoryType() { this->categoryType_ = nullptr;};
        inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
        inline Parent& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Parent& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline Parent& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // dataCellId Field Functions 
        bool hasDataCellId() const { return this->dataCellId_ != nullptr;};
        void deleteDataCellId() { this->dataCellId_ = nullptr;};
        inline int64_t getDataCellId() const { DARABONBA_PTR_GET_DEFAULT(dataCellId_, 0L) };
        inline Parent& setDataCellId(int64_t dataCellId) { DARABONBA_PTR_SET_VALUE(dataCellId_, dataCellId) };


        // dirName Field Functions 
        bool hasDirName() const { return this->dirName_ != nullptr;};
        void deleteDirName() { this->dirName_ = nullptr;};
        inline string getDirName() const { DARABONBA_PTR_GET_DEFAULT(dirName_, "") };
        inline Parent& setDirName(string dirName) { DARABONBA_PTR_SET_VALUE(dirName_, dirName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Parent& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Parent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Parent& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline Parent& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // lastModifierName Field Functions 
        bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
        void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
        inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
        inline Parent& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Parent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Parent& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // stringId Field Functions 
        bool hasStringId() const { return this->stringId_ != nullptr;};
        void deleteStringId() { this->stringId_ = nullptr;};
        inline string getStringId() const { DARABONBA_PTR_GET_DEFAULT(stringId_, "") };
        inline Parent& setStringId(string stringId) { DARABONBA_PTR_SET_VALUE(stringId_, stringId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Parent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> categoryType_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<int64_t> dataCellId_ {};
        shared_ptr<string> dirName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> lastModifier_ {};
        shared_ptr<string> lastModifierName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> stringId_ {};
        shared_ptr<string> type_ {};
      };

      class Children : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Children& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(DataCellId, dataCellId_);
          DARABONBA_PTR_TO_JSON(DirName, dirName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(StringId, stringId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Children& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(DataCellId, dataCellId_);
          DARABONBA_PTR_FROM_JSON(DirName, dirName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(StringId, stringId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Children() = default ;
        Children(const Children &) = default ;
        Children(Children &&) = default ;
        Children(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Children() = default ;
        Children& operator=(const Children &) = default ;
        Children& operator=(Children &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryType_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->dataCellId_ == nullptr && this->dirName_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr && this->lastModifierName_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->stringId_ == nullptr && this->type_ == nullptr; };
        // categoryType Field Functions 
        bool hasCategoryType() const { return this->categoryType_ != nullptr;};
        void deleteCategoryType() { this->categoryType_ = nullptr;};
        inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
        inline Children& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Children& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline Children& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // dataCellId Field Functions 
        bool hasDataCellId() const { return this->dataCellId_ != nullptr;};
        void deleteDataCellId() { this->dataCellId_ = nullptr;};
        inline int64_t getDataCellId() const { DARABONBA_PTR_GET_DEFAULT(dataCellId_, 0L) };
        inline Children& setDataCellId(int64_t dataCellId) { DARABONBA_PTR_SET_VALUE(dataCellId_, dataCellId) };


        // dirName Field Functions 
        bool hasDirName() const { return this->dirName_ != nullptr;};
        void deleteDirName() { this->dirName_ = nullptr;};
        inline string getDirName() const { DARABONBA_PTR_GET_DEFAULT(dirName_, "") };
        inline Children& setDirName(string dirName) { DARABONBA_PTR_SET_VALUE(dirName_, dirName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Children& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Children& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Children& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline Children& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // lastModifierName Field Functions 
        bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
        void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
        inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
        inline Children& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Children& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Children& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // stringId Field Functions 
        bool hasStringId() const { return this->stringId_ != nullptr;};
        void deleteStringId() { this->stringId_ = nullptr;};
        inline string getStringId() const { DARABONBA_PTR_GET_DEFAULT(stringId_, "") };
        inline Children& setStringId(string stringId) { DARABONBA_PTR_SET_VALUE(stringId_, stringId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Children& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> categoryType_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<int64_t> dataCellId_ {};
        shared_ptr<string> dirName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> lastModifier_ {};
        shared_ptr<string> lastModifierName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> stringId_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->children_ == nullptr
        && this->parent_ == nullptr; };
      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const Data::Children & getChildren() const { DARABONBA_PTR_GET_CONST(children_, Data::Children) };
      inline Data::Children getChildren() { DARABONBA_PTR_GET(children_, Data::Children) };
      inline Data& setChildren(const Data::Children & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline Data& setChildren(Data::Children && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // parent Field Functions 
      bool hasParent() const { return this->parent_ != nullptr;};
      void deleteParent() { this->parent_ = nullptr;};
      inline const Data::Parent & getParent() const { DARABONBA_PTR_GET_CONST(parent_, Data::Parent) };
      inline Data::Parent getParent() { DARABONBA_PTR_GET(parent_, Data::Parent) };
      inline Data& setParent(const Data::Parent & parent) { DARABONBA_PTR_SET_VALUE(parent_, parent) };
      inline Data& setParent(Data::Parent && parent) { DARABONBA_PTR_SET_RVALUE(parent_, parent) };


    protected:
      shared_ptr<Data::Children> children_ {};
      shared_ptr<Data::Parent> parent_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDirectoryTreeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDirectoryTreeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDirectoryTreeResponseBody::Data>) };
    inline vector<GetDirectoryTreeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetDirectoryTreeResponseBody::Data>) };
    inline GetDirectoryTreeResponseBody& setData(const vector<GetDirectoryTreeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDirectoryTreeResponseBody& setData(vector<GetDirectoryTreeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDirectoryTreeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDirectoryTreeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDirectoryTreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDirectoryTreeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetDirectoryTreeResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
