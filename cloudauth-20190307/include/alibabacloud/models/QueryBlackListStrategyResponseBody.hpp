// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBLACKLISTSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBLACKLISTSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryBlackListStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBlackListStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBlackListStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    QueryBlackListStrategyResponseBody() = default ;
    QueryBlackListStrategyResponseBody(const QueryBlackListStrategyResponseBody &) = default ;
    QueryBlackListStrategyResponseBody(QueryBlackListStrategyResponseBody &&) = default ;
    QueryBlackListStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBlackListStrategyResponseBody() = default ;
    QueryBlackListStrategyResponseBody& operator=(const QueryBlackListStrategyResponseBody &) = default ;
    QueryBlackListStrategyResponseBody& operator=(QueryBlackListStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BizContent, bizContent_);
        DARABONBA_PTR_TO_JSON(BizKey, bizKey_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BizContent, bizContent_);
        DARABONBA_PTR_FROM_JSON(BizKey, bizKey_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizContent_ == nullptr
        && this->bizKey_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->productName_ == nullptr && this->status_ == nullptr
        && this->userId_ == nullptr; };
      // bizContent Field Functions 
      bool hasBizContent() const { return this->bizContent_ != nullptr;};
      void deleteBizContent() { this->bizContent_ = nullptr;};
      inline string getBizContent() const { DARABONBA_PTR_GET_DEFAULT(bizContent_, "") };
      inline ResultObject& setBizContent(string bizContent) { DARABONBA_PTR_SET_VALUE(bizContent_, bizContent) };


      // bizKey Field Functions 
      bool hasBizKey() const { return this->bizKey_ != nullptr;};
      void deleteBizKey() { this->bizKey_ = nullptr;};
      inline string getBizKey() const { DARABONBA_PTR_GET_DEFAULT(bizKey_, "") };
      inline ResultObject& setBizKey(string bizKey) { DARABONBA_PTR_SET_VALUE(bizKey_, bizKey) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ResultObject& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Blacklist string, separated by **commas**.
      shared_ptr<string> bizContent_ {};
      // List type:
      // - mobile: Phone number blacklist
      // - ip: IP blacklist
      // - identifyNum: ID number blacklist
      // - bankCard: Bank card blacklist
      shared_ptr<string> bizKey_ {};
      // Modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // Rule ID.
      shared_ptr<int64_t> id_ {};
      // Product name:
      // - id2meta: ID number two-factor verification
      // - mobile3Meta: Phone number factor verification
      // - bankcardMeta: Bank card factor verification
      shared_ptr<string> productName_ {};
      // Status:
      // - **disabled**: Disabled
      // - **normal**: Enabled
      shared_ptr<string> status_ {};
      // User ID.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryBlackListStrategyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryBlackListStrategyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBlackListStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<QueryBlackListStrategyResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<QueryBlackListStrategyResponseBody::ResultObject>) };
    inline vector<QueryBlackListStrategyResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<QueryBlackListStrategyResponseBody::ResultObject>) };
    inline QueryBlackListStrategyResponseBody& setResultObject(const vector<QueryBlackListStrategyResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline QueryBlackListStrategyResponseBody& setResultObject(vector<QueryBlackListStrategyResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code, **200** indicates successful API response.
    shared_ptr<string> code_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Returned result information.
    shared_ptr<vector<QueryBlackListStrategyResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
