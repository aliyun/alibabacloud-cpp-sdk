// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYCLASSIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYCLASSIFYRESPONSEBODY_HPP_
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
  class ListSecurityClassifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityClassifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClassifyListResult, classifyListResult_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityClassifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassifyListResult, classifyListResult_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSecurityClassifyResponseBody() = default ;
    ListSecurityClassifyResponseBody(const ListSecurityClassifyResponseBody &) = default ;
    ListSecurityClassifyResponseBody(ListSecurityClassifyResponseBody &&) = default ;
    ListSecurityClassifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityClassifyResponseBody() = default ;
    ListSecurityClassifyResponseBody& operator=(const ListSecurityClassifyResponseBody &) = default ;
    ListSecurityClassifyResponseBody& operator=(ListSecurityClassifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClassifyListResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClassifyListResult& obj) { 
        DARABONBA_PTR_TO_JSON(ClassifyList, classifyList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ClassifyListResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ClassifyList, classifyList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ClassifyListResult() = default ;
      ClassifyListResult(const ClassifyListResult &) = default ;
      ClassifyListResult(ClassifyListResult &&) = default ;
      ClassifyListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClassifyListResult() = default ;
      ClassifyListResult& operator=(const ClassifyListResult &) = default ;
      ClassifyListResult& operator=(ClassifyListResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClassifyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClassifyList& obj) { 
          DARABONBA_PTR_TO_JSON(CatalogPath, catalogPath_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EffectiveFieldCount, effectiveFieldCount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsBindDesensitizeRule, isBindDesensitizeRule_);
          DARABONBA_PTR_TO_JSON(LevelId, levelId_);
          DARABONBA_PTR_TO_JSON(LevelName, levelName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ShortName, shortName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ClassifyList& obj) { 
          DARABONBA_PTR_FROM_JSON(CatalogPath, catalogPath_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EffectiveFieldCount, effectiveFieldCount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsBindDesensitizeRule, isBindDesensitizeRule_);
          DARABONBA_PTR_FROM_JSON(LevelId, levelId_);
          DARABONBA_PTR_FROM_JSON(LevelName, levelName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ClassifyList() = default ;
        ClassifyList(const ClassifyList &) = default ;
        ClassifyList(ClassifyList &&) = default ;
        ClassifyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClassifyList() = default ;
        ClassifyList& operator=(const ClassifyList &) = default ;
        ClassifyList& operator=(ClassifyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->catalogPath_ == nullptr
        && this->description_ == nullptr && this->effectiveFieldCount_ == nullptr && this->id_ == nullptr && this->isBindDesensitizeRule_ == nullptr && this->levelId_ == nullptr
        && this->levelName_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr && this->shortName_ == nullptr && this->status_ == nullptr; };
        // catalogPath Field Functions 
        bool hasCatalogPath() const { return this->catalogPath_ != nullptr;};
        void deleteCatalogPath() { this->catalogPath_ = nullptr;};
        inline string getCatalogPath() const { DARABONBA_PTR_GET_DEFAULT(catalogPath_, "") };
        inline ClassifyList& setCatalogPath(string catalogPath) { DARABONBA_PTR_SET_VALUE(catalogPath_, catalogPath) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ClassifyList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // effectiveFieldCount Field Functions 
        bool hasEffectiveFieldCount() const { return this->effectiveFieldCount_ != nullptr;};
        void deleteEffectiveFieldCount() { this->effectiveFieldCount_ = nullptr;};
        inline int32_t getEffectiveFieldCount() const { DARABONBA_PTR_GET_DEFAULT(effectiveFieldCount_, 0) };
        inline ClassifyList& setEffectiveFieldCount(int32_t effectiveFieldCount) { DARABONBA_PTR_SET_VALUE(effectiveFieldCount_, effectiveFieldCount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ClassifyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isBindDesensitizeRule Field Functions 
        bool hasIsBindDesensitizeRule() const { return this->isBindDesensitizeRule_ != nullptr;};
        void deleteIsBindDesensitizeRule() { this->isBindDesensitizeRule_ = nullptr;};
        inline bool getIsBindDesensitizeRule() const { DARABONBA_PTR_GET_DEFAULT(isBindDesensitizeRule_, false) };
        inline ClassifyList& setIsBindDesensitizeRule(bool isBindDesensitizeRule) { DARABONBA_PTR_SET_VALUE(isBindDesensitizeRule_, isBindDesensitizeRule) };


        // levelId Field Functions 
        bool hasLevelId() const { return this->levelId_ != nullptr;};
        void deleteLevelId() { this->levelId_ = nullptr;};
        inline int64_t getLevelId() const { DARABONBA_PTR_GET_DEFAULT(levelId_, 0L) };
        inline ClassifyList& setLevelId(int64_t levelId) { DARABONBA_PTR_SET_VALUE(levelId_, levelId) };


        // levelName Field Functions 
        bool hasLevelName() const { return this->levelName_ != nullptr;};
        void deleteLevelName() { this->levelName_ = nullptr;};
        inline string getLevelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
        inline ClassifyList& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ClassifyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline ClassifyList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // shortName Field Functions 
        bool hasShortName() const { return this->shortName_ != nullptr;};
        void deleteShortName() { this->shortName_ = nullptr;};
        inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
        inline ClassifyList& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ClassifyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The catalog path of the classification.
        shared_ptr<string> catalogPath_ {};
        // The classification description.
        shared_ptr<string> description_ {};
        // The number of effective fields.
        shared_ptr<int32_t> effectiveFieldCount_ {};
        // The classification ID.
        shared_ptr<int64_t> id_ {};
        // Indicates whether a masking rule is bound.
        shared_ptr<bool> isBindDesensitizeRule_ {};
        // The level ID.
        shared_ptr<int64_t> levelId_ {};
        // The level name.
        shared_ptr<string> levelName_ {};
        // The classification name.
        shared_ptr<string> name_ {};
        // The priority.
        shared_ptr<int32_t> priority_ {};
        // The short name of the classification.
        shared_ptr<string> shortName_ {};
        // The status.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->classifyList_ == nullptr
        && this->totalCount_ == nullptr; };
      // classifyList Field Functions 
      bool hasClassifyList() const { return this->classifyList_ != nullptr;};
      void deleteClassifyList() { this->classifyList_ = nullptr;};
      inline const vector<ClassifyListResult::ClassifyList> & getClassifyList() const { DARABONBA_PTR_GET_CONST(classifyList_, vector<ClassifyListResult::ClassifyList>) };
      inline vector<ClassifyListResult::ClassifyList> getClassifyList() { DARABONBA_PTR_GET(classifyList_, vector<ClassifyListResult::ClassifyList>) };
      inline ClassifyListResult& setClassifyList(const vector<ClassifyListResult::ClassifyList> & classifyList) { DARABONBA_PTR_SET_VALUE(classifyList_, classifyList) };
      inline ClassifyListResult& setClassifyList(vector<ClassifyListResult::ClassifyList> && classifyList) { DARABONBA_PTR_SET_RVALUE(classifyList_, classifyList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ClassifyListResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of data classifications.
      shared_ptr<vector<ClassifyListResult::ClassifyList>> classifyList_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->classifyListResult_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // classifyListResult Field Functions 
    bool hasClassifyListResult() const { return this->classifyListResult_ != nullptr;};
    void deleteClassifyListResult() { this->classifyListResult_ = nullptr;};
    inline const ListSecurityClassifyResponseBody::ClassifyListResult & getClassifyListResult() const { DARABONBA_PTR_GET_CONST(classifyListResult_, ListSecurityClassifyResponseBody::ClassifyListResult) };
    inline ListSecurityClassifyResponseBody::ClassifyListResult getClassifyListResult() { DARABONBA_PTR_GET(classifyListResult_, ListSecurityClassifyResponseBody::ClassifyListResult) };
    inline ListSecurityClassifyResponseBody& setClassifyListResult(const ListSecurityClassifyResponseBody::ClassifyListResult & classifyListResult) { DARABONBA_PTR_SET_VALUE(classifyListResult_, classifyListResult) };
    inline ListSecurityClassifyResponseBody& setClassifyListResult(ListSecurityClassifyResponseBody::ClassifyListResult && classifyListResult) { DARABONBA_PTR_SET_RVALUE(classifyListResult_, classifyListResult) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSecurityClassifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSecurityClassifyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSecurityClassifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecurityClassifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSecurityClassifyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result of the data classification list.
    shared_ptr<ListSecurityClassifyResponseBody::ClassifyListResult> classifyListResult_ {};
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend error.
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
