// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataCorrectPreCheckDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCorrectPreCheckDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PreCheckDBList, preCheckDBList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCorrectPreCheckDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PreCheckDBList, preCheckDBList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataCorrectPreCheckDBResponseBody() = default ;
    ListDataCorrectPreCheckDBResponseBody(const ListDataCorrectPreCheckDBResponseBody &) = default ;
    ListDataCorrectPreCheckDBResponseBody(ListDataCorrectPreCheckDBResponseBody &&) = default ;
    ListDataCorrectPreCheckDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCorrectPreCheckDBResponseBody() = default ;
    ListDataCorrectPreCheckDBResponseBody& operator=(const ListDataCorrectPreCheckDBResponseBody &) = default ;
    ListDataCorrectPreCheckDBResponseBody& operator=(ListDataCorrectPreCheckDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreCheckDBList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreCheckDBList& obj) { 
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        DARABONBA_PTR_TO_JSON(SqlNum, sqlNum_);
      };
      friend void from_json(const Darabonba::Json& j, PreCheckDBList& obj) { 
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        DARABONBA_PTR_FROM_JSON(SqlNum, sqlNum_);
      };
      PreCheckDBList() = default ;
      PreCheckDBList(const PreCheckDBList &) = default ;
      PreCheckDBList(PreCheckDBList &&) = default ;
      PreCheckDBList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreCheckDBList() = default ;
      PreCheckDBList& operator=(const PreCheckDBList &) = default ;
      PreCheckDBList& operator=(PreCheckDBList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbId_ == nullptr
        && this->searchName_ == nullptr && this->sqlNum_ == nullptr; };
      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline PreCheckDBList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // searchName Field Functions 
      bool hasSearchName() const { return this->searchName_ != nullptr;};
      void deleteSearchName() { this->searchName_ = nullptr;};
      inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
      inline PreCheckDBList& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      // sqlNum Field Functions 
      bool hasSqlNum() const { return this->sqlNum_ != nullptr;};
      void deleteSqlNum() { this->sqlNum_ = nullptr;};
      inline int64_t getSqlNum() const { DARABONBA_PTR_GET_DEFAULT(sqlNum_, 0L) };
      inline PreCheckDBList& setSqlNum(int64_t sqlNum) { DARABONBA_PTR_SET_VALUE(sqlNum_, sqlNum) };


    protected:
      // The ID of the database.
      shared_ptr<int64_t> dbId_ {};
      // The name of the database.
      shared_ptr<string> searchName_ {};
      // The number of SQL statements.
      shared_ptr<int64_t> sqlNum_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->preCheckDBList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataCorrectPreCheckDBResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataCorrectPreCheckDBResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // preCheckDBList Field Functions 
    bool hasPreCheckDBList() const { return this->preCheckDBList_ != nullptr;};
    void deletePreCheckDBList() { this->preCheckDBList_ = nullptr;};
    inline const vector<ListDataCorrectPreCheckDBResponseBody::PreCheckDBList> & getPreCheckDBList() const { DARABONBA_PTR_GET_CONST(preCheckDBList_, vector<ListDataCorrectPreCheckDBResponseBody::PreCheckDBList>) };
    inline vector<ListDataCorrectPreCheckDBResponseBody::PreCheckDBList> getPreCheckDBList() { DARABONBA_PTR_GET(preCheckDBList_, vector<ListDataCorrectPreCheckDBResponseBody::PreCheckDBList>) };
    inline ListDataCorrectPreCheckDBResponseBody& setPreCheckDBList(const vector<ListDataCorrectPreCheckDBResponseBody::PreCheckDBList> & preCheckDBList) { DARABONBA_PTR_SET_VALUE(preCheckDBList_, preCheckDBList) };
    inline ListDataCorrectPreCheckDBResponseBody& setPreCheckDBList(vector<ListDataCorrectPreCheckDBResponseBody::PreCheckDBList> && preCheckDBList) { DARABONBA_PTR_SET_RVALUE(preCheckDBList_, preCheckDBList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCorrectPreCheckDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCorrectPreCheckDBResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The information about the databases that are involved in the precheck.
    shared_ptr<vector<ListDataCorrectPreCheckDBResponseBody::PreCheckDBList>> preCheckDBList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
