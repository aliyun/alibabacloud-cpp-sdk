// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLELEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLELEVELRESPONSEBODY_HPP_
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
  class ListTableLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableLevelInfo, tableLevelInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableLevelInfo, tableLevelInfo_);
    };
    ListTableLevelResponseBody() = default ;
    ListTableLevelResponseBody(const ListTableLevelResponseBody &) = default ;
    ListTableLevelResponseBody(ListTableLevelResponseBody &&) = default ;
    ListTableLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableLevelResponseBody() = default ;
    ListTableLevelResponseBody& operator=(const ListTableLevelResponseBody &) = default ;
    ListTableLevelResponseBody& operator=(ListTableLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableLevelInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableLevelInfo& obj) { 
        DARABONBA_PTR_TO_JSON(LevelList, levelList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, TableLevelInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      TableLevelInfo() = default ;
      TableLevelInfo(const TableLevelInfo &) = default ;
      TableLevelInfo(TableLevelInfo &&) = default ;
      TableLevelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableLevelInfo() = default ;
      TableLevelInfo& operator=(const TableLevelInfo &) = default ;
      TableLevelInfo& operator=(TableLevelInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LevelList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LevelList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(LevelId, levelId_);
          DARABONBA_PTR_TO_JSON(LevelType, levelType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        };
        friend void from_json(const Darabonba::Json& j, LevelList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(LevelId, levelId_);
          DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        };
        LevelList() = default ;
        LevelList(const LevelList &) = default ;
        LevelList(LevelList &&) = default ;
        LevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LevelList() = default ;
        LevelList& operator=(const LevelList &) = default ;
        LevelList& operator=(LevelList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->levelId_ == nullptr && this->levelType_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline LevelList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // levelId Field Functions 
        bool hasLevelId() const { return this->levelId_ != nullptr;};
        void deleteLevelId() { this->levelId_ = nullptr;};
        inline int64_t getLevelId() const { DARABONBA_PTR_GET_DEFAULT(levelId_, 0L) };
        inline LevelList& setLevelId(int64_t levelId) { DARABONBA_PTR_SET_VALUE(levelId_, levelId) };


        // levelType Field Functions 
        bool hasLevelType() const { return this->levelType_ != nullptr;};
        void deleteLevelType() { this->levelType_ = nullptr;};
        inline int32_t getLevelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, 0) };
        inline LevelList& setLevelType(int32_t levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LevelList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline LevelList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      protected:
        // The description of the table level.
        shared_ptr<string> description_ {};
        // The table level ID.
        shared_ptr<int64_t> levelId_ {};
        // The table level type. Valid values: 1 and 2. The value 1 indicates the logical level. The value 2 indicates the physical level.
        shared_ptr<int32_t> levelType_ {};
        // The name of the table level.
        shared_ptr<string> name_ {};
        // The ID of the DataWorks workspace.
        shared_ptr<int64_t> projectId_ {};
      };

      virtual bool empty() const override { return this->levelList_ == nullptr
        && this->totalCount_ == nullptr; };
      // levelList Field Functions 
      bool hasLevelList() const { return this->levelList_ != nullptr;};
      void deleteLevelList() { this->levelList_ = nullptr;};
      inline const vector<TableLevelInfo::LevelList> & getLevelList() const { DARABONBA_PTR_GET_CONST(levelList_, vector<TableLevelInfo::LevelList>) };
      inline vector<TableLevelInfo::LevelList> getLevelList() { DARABONBA_PTR_GET(levelList_, vector<TableLevelInfo::LevelList>) };
      inline TableLevelInfo& setLevelList(const vector<TableLevelInfo::LevelList> & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
      inline TableLevelInfo& setLevelList(vector<TableLevelInfo::LevelList> && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline TableLevelInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of table levels.
      shared_ptr<vector<TableLevelInfo::LevelList>> levelList_ {};
      // The total number of table levels returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tableLevelInfo_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTableLevelResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTableLevelResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTableLevelResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTableLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTableLevelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableLevelInfo Field Functions 
    bool hasTableLevelInfo() const { return this->tableLevelInfo_ != nullptr;};
    void deleteTableLevelInfo() { this->tableLevelInfo_ = nullptr;};
    inline const ListTableLevelResponseBody::TableLevelInfo & getTableLevelInfo() const { DARABONBA_PTR_GET_CONST(tableLevelInfo_, ListTableLevelResponseBody::TableLevelInfo) };
    inline ListTableLevelResponseBody::TableLevelInfo getTableLevelInfo() { DARABONBA_PTR_GET(tableLevelInfo_, ListTableLevelResponseBody::TableLevelInfo) };
    inline ListTableLevelResponseBody& setTableLevelInfo(const ListTableLevelResponseBody::TableLevelInfo & tableLevelInfo) { DARABONBA_PTR_SET_VALUE(tableLevelInfo_, tableLevelInfo) };
    inline ListTableLevelResponseBody& setTableLevelInfo(ListTableLevelResponseBody::TableLevelInfo && tableLevelInfo) { DARABONBA_PTR_SET_RVALUE(tableLevelInfo_, tableLevelInfo) };


  protected:
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
    // The information about the table levels.
    shared_ptr<ListTableLevelResponseBody::TableLevelInfo> tableLevelInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
