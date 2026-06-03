// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class ListDataSourceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourceAttributeResponseBody() = default ;
    ListDataSourceAttributeResponseBody(const ListDataSourceAttributeResponseBody &) = default ;
    ListDataSourceAttributeResponseBody(ListDataSourceAttributeResponseBody &&) = default ;
    ListDataSourceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceAttributeResponseBody() = default ;
    ListDataSourceAttributeResponseBody& operator=(const ListDataSourceAttributeResponseBody &) = default ;
    ListDataSourceAttributeResponseBody& operator=(ListDataSourceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DbList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DbList& obj) { 
        DARABONBA_PTR_TO_JSON(AuditMode, auditMode_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(FreqAuditMode, freqAuditMode_);
        DARABONBA_PTR_TO_JSON(ResultAuditMaxLine, resultAuditMaxLine_);
        DARABONBA_PTR_TO_JSON(ResultAuditMaxSize, resultAuditMaxSize_);
        DARABONBA_PTR_TO_JSON(ResultAuditMode, resultAuditMode_);
      };
      friend void from_json(const Darabonba::Json& j, DbList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditMode, auditMode_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(FreqAuditMode, freqAuditMode_);
        DARABONBA_PTR_FROM_JSON(ResultAuditMaxLine, resultAuditMaxLine_);
        DARABONBA_PTR_FROM_JSON(ResultAuditMaxSize, resultAuditMaxSize_);
        DARABONBA_PTR_FROM_JSON(ResultAuditMode, resultAuditMode_);
      };
      DbList() = default ;
      DbList(const DbList &) = default ;
      DbList(DbList &&) = default ;
      DbList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DbList() = default ;
      DbList& operator=(const DbList &) = default ;
      DbList& operator=(DbList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditMode_ == nullptr
        && this->dbId_ == nullptr && this->freqAuditMode_ == nullptr && this->resultAuditMaxLine_ == nullptr && this->resultAuditMaxSize_ == nullptr && this->resultAuditMode_ == nullptr; };
      // auditMode Field Functions 
      bool hasAuditMode() const { return this->auditMode_ != nullptr;};
      void deleteAuditMode() { this->auditMode_ = nullptr;};
      inline string getAuditMode() const { DARABONBA_PTR_GET_DEFAULT(auditMode_, "") };
      inline DbList& setAuditMode(string auditMode) { DARABONBA_PTR_SET_VALUE(auditMode_, auditMode) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
      inline DbList& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // freqAuditMode Field Functions 
      bool hasFreqAuditMode() const { return this->freqAuditMode_ != nullptr;};
      void deleteFreqAuditMode() { this->freqAuditMode_ = nullptr;};
      inline string getFreqAuditMode() const { DARABONBA_PTR_GET_DEFAULT(freqAuditMode_, "") };
      inline DbList& setFreqAuditMode(string freqAuditMode) { DARABONBA_PTR_SET_VALUE(freqAuditMode_, freqAuditMode) };


      // resultAuditMaxLine Field Functions 
      bool hasResultAuditMaxLine() const { return this->resultAuditMaxLine_ != nullptr;};
      void deleteResultAuditMaxLine() { this->resultAuditMaxLine_ = nullptr;};
      inline int32_t getResultAuditMaxLine() const { DARABONBA_PTR_GET_DEFAULT(resultAuditMaxLine_, 0) };
      inline DbList& setResultAuditMaxLine(int32_t resultAuditMaxLine) { DARABONBA_PTR_SET_VALUE(resultAuditMaxLine_, resultAuditMaxLine) };


      // resultAuditMaxSize Field Functions 
      bool hasResultAuditMaxSize() const { return this->resultAuditMaxSize_ != nullptr;};
      void deleteResultAuditMaxSize() { this->resultAuditMaxSize_ = nullptr;};
      inline int32_t getResultAuditMaxSize() const { DARABONBA_PTR_GET_DEFAULT(resultAuditMaxSize_, 0) };
      inline DbList& setResultAuditMaxSize(int32_t resultAuditMaxSize) { DARABONBA_PTR_SET_VALUE(resultAuditMaxSize_, resultAuditMaxSize) };


      // resultAuditMode Field Functions 
      bool hasResultAuditMode() const { return this->resultAuditMode_ != nullptr;};
      void deleteResultAuditMode() { this->resultAuditMode_ = nullptr;};
      inline string getResultAuditMode() const { DARABONBA_PTR_GET_DEFAULT(resultAuditMode_, "") };
      inline DbList& setResultAuditMode(string resultAuditMode) { DARABONBA_PTR_SET_VALUE(resultAuditMode_, resultAuditMode) };


    protected:
      shared_ptr<string> auditMode_ {};
      shared_ptr<int32_t> dbId_ {};
      shared_ptr<string> freqAuditMode_ {};
      shared_ptr<int32_t> resultAuditMaxLine_ {};
      shared_ptr<int32_t> resultAuditMaxSize_ {};
      shared_ptr<string> resultAuditMode_ {};
    };

    virtual bool empty() const override { return this->dbList_ == nullptr
        && this->requestId_ == nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline const vector<ListDataSourceAttributeResponseBody::DbList> & getDbList() const { DARABONBA_PTR_GET_CONST(dbList_, vector<ListDataSourceAttributeResponseBody::DbList>) };
    inline vector<ListDataSourceAttributeResponseBody::DbList> getDbList() { DARABONBA_PTR_GET(dbList_, vector<ListDataSourceAttributeResponseBody::DbList>) };
    inline ListDataSourceAttributeResponseBody& setDbList(const vector<ListDataSourceAttributeResponseBody::DbList> & dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };
    inline ListDataSourceAttributeResponseBody& setDbList(vector<ListDataSourceAttributeResponseBody::DbList> && dbList) { DARABONBA_PTR_SET_RVALUE(dbList_, dbList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDataSourceAttributeResponseBody::DbList>> dbList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
