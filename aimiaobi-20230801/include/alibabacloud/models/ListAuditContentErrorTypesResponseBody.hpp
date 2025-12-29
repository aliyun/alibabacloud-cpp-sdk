// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITCONTENTERRORTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITCONTENTERRORTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListAuditContentErrorTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditContentErrorTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuditContentErrorTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuditContentErrorTypesResponseBody() = default ;
    ListAuditContentErrorTypesResponseBody(const ListAuditContentErrorTypesResponseBody &) = default ;
    ListAuditContentErrorTypesResponseBody(ListAuditContentErrorTypesResponseBody &&) = default ;
    ListAuditContentErrorTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditContentErrorTypesResponseBody() = default ;
    ListAuditContentErrorTypesResponseBody& operator=(const ListAuditContentErrorTypesResponseBody &) = default ;
    ListAuditContentErrorTypesResponseBody& operator=(ListAuditContentErrorTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MajorClassCode, majorClassCode_);
        DARABONBA_PTR_TO_JSON(MajorClassName, majorClassName_);
        DARABONBA_PTR_TO_JSON(SubClasses, subClasses_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MajorClassCode, majorClassCode_);
        DARABONBA_PTR_FROM_JSON(MajorClassName, majorClassName_);
        DARABONBA_PTR_FROM_JSON(SubClasses, subClasses_);
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
      class SubClasses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubClasses& obj) { 
          DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
          DARABONBA_PTR_TO_JSON(ClassName, className_);
        };
        friend void from_json(const Darabonba::Json& j, SubClasses& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
          DARABONBA_PTR_FROM_JSON(ClassName, className_);
        };
        SubClasses() = default ;
        SubClasses(const SubClasses &) = default ;
        SubClasses(SubClasses &&) = default ;
        SubClasses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubClasses() = default ;
        SubClasses& operator=(const SubClasses &) = default ;
        SubClasses& operator=(SubClasses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->classCode_ == nullptr
        && this->className_ == nullptr; };
        // classCode Field Functions 
        bool hasClassCode() const { return this->classCode_ != nullptr;};
        void deleteClassCode() { this->classCode_ = nullptr;};
        inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
        inline SubClasses& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


        // className Field Functions 
        bool hasClassName() const { return this->className_ != nullptr;};
        void deleteClassName() { this->className_ = nullptr;};
        inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
        inline SubClasses& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


      protected:
        shared_ptr<string> classCode_ {};
        shared_ptr<string> className_ {};
      };

      virtual bool empty() const override { return this->majorClassCode_ == nullptr
        && this->majorClassName_ == nullptr && this->subClasses_ == nullptr; };
      // majorClassCode Field Functions 
      bool hasMajorClassCode() const { return this->majorClassCode_ != nullptr;};
      void deleteMajorClassCode() { this->majorClassCode_ = nullptr;};
      inline string getMajorClassCode() const { DARABONBA_PTR_GET_DEFAULT(majorClassCode_, "") };
      inline Data& setMajorClassCode(string majorClassCode) { DARABONBA_PTR_SET_VALUE(majorClassCode_, majorClassCode) };


      // majorClassName Field Functions 
      bool hasMajorClassName() const { return this->majorClassName_ != nullptr;};
      void deleteMajorClassName() { this->majorClassName_ = nullptr;};
      inline string getMajorClassName() const { DARABONBA_PTR_GET_DEFAULT(majorClassName_, "") };
      inline Data& setMajorClassName(string majorClassName) { DARABONBA_PTR_SET_VALUE(majorClassName_, majorClassName) };


      // subClasses Field Functions 
      bool hasSubClasses() const { return this->subClasses_ != nullptr;};
      void deleteSubClasses() { this->subClasses_ = nullptr;};
      inline const vector<Data::SubClasses> & getSubClasses() const { DARABONBA_PTR_GET_CONST(subClasses_, vector<Data::SubClasses>) };
      inline vector<Data::SubClasses> getSubClasses() { DARABONBA_PTR_GET(subClasses_, vector<Data::SubClasses>) };
      inline Data& setSubClasses(const vector<Data::SubClasses> & subClasses) { DARABONBA_PTR_SET_VALUE(subClasses_, subClasses) };
      inline Data& setSubClasses(vector<Data::SubClasses> && subClasses) { DARABONBA_PTR_SET_RVALUE(subClasses_, subClasses) };


    protected:
      shared_ptr<string> majorClassCode_ {};
      shared_ptr<string> majorClassName_ {};
      shared_ptr<vector<Data::SubClasses>> subClasses_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAuditContentErrorTypesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAuditContentErrorTypesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAuditContentErrorTypesResponseBody::Data>) };
    inline vector<ListAuditContentErrorTypesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAuditContentErrorTypesResponseBody::Data>) };
    inline ListAuditContentErrorTypesResponseBody& setData(const vector<ListAuditContentErrorTypesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAuditContentErrorTypesResponseBody& setData(vector<ListAuditContentErrorTypesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAuditContentErrorTypesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAuditContentErrorTypesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuditContentErrorTypesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuditContentErrorTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuditContentErrorTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAuditContentErrorTypesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAuditContentErrorTypesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAuditContentErrorTypesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
