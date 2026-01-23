// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYCLASSIFYCATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYCLASSIFYCATALOGRESPONSEBODY_HPP_
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
  class DeleteSecurityClassifyCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityClassifyCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityClassifyCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteSecurityClassifyCatalogResponseBody() = default ;
    DeleteSecurityClassifyCatalogResponseBody(const DeleteSecurityClassifyCatalogResponseBody &) = default ;
    DeleteSecurityClassifyCatalogResponseBody(DeleteSecurityClassifyCatalogResponseBody &&) = default ;
    DeleteSecurityClassifyCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityClassifyCatalogResponseBody() = default ;
    DeleteSecurityClassifyCatalogResponseBody& operator=(const DeleteSecurityClassifyCatalogResponseBody &) = default ;
    DeleteSecurityClassifyCatalogResponseBody& operator=(DeleteSecurityClassifyCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChildCatalogFullPathList, childCatalogFullPathList_);
        DARABONBA_PTR_TO_JSON(ClassifyIdList, classifyIdList_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChildCatalogFullPathList, childCatalogFullPathList_);
        DARABONBA_PTR_FROM_JSON(ClassifyIdList, classifyIdList_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->childCatalogFullPathList_ == nullptr
        && this->classifyIdList_ == nullptr && this->success_ == nullptr; };
      // childCatalogFullPathList Field Functions 
      bool hasChildCatalogFullPathList() const { return this->childCatalogFullPathList_ != nullptr;};
      void deleteChildCatalogFullPathList() { this->childCatalogFullPathList_ = nullptr;};
      inline const vector<string> & getChildCatalogFullPathList() const { DARABONBA_PTR_GET_CONST(childCatalogFullPathList_, vector<string>) };
      inline vector<string> getChildCatalogFullPathList() { DARABONBA_PTR_GET(childCatalogFullPathList_, vector<string>) };
      inline Data& setChildCatalogFullPathList(const vector<string> & childCatalogFullPathList) { DARABONBA_PTR_SET_VALUE(childCatalogFullPathList_, childCatalogFullPathList) };
      inline Data& setChildCatalogFullPathList(vector<string> && childCatalogFullPathList) { DARABONBA_PTR_SET_RVALUE(childCatalogFullPathList_, childCatalogFullPathList) };


      // classifyIdList Field Functions 
      bool hasClassifyIdList() const { return this->classifyIdList_ != nullptr;};
      void deleteClassifyIdList() { this->classifyIdList_ = nullptr;};
      inline const vector<int64_t> & getClassifyIdList() const { DARABONBA_PTR_GET_CONST(classifyIdList_, vector<int64_t>) };
      inline vector<int64_t> getClassifyIdList() { DARABONBA_PTR_GET(classifyIdList_, vector<int64_t>) };
      inline Data& setClassifyIdList(const vector<int64_t> & classifyIdList) { DARABONBA_PTR_SET_VALUE(classifyIdList_, classifyIdList) };
      inline Data& setClassifyIdList(vector<int64_t> && classifyIdList) { DARABONBA_PTR_SET_RVALUE(classifyIdList_, classifyIdList) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<vector<string>> childCatalogFullPathList_ {};
      shared_ptr<vector<int64_t>> classifyIdList_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteSecurityClassifyCatalogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteSecurityClassifyCatalogResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteSecurityClassifyCatalogResponseBody::Data) };
    inline DeleteSecurityClassifyCatalogResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteSecurityClassifyCatalogResponseBody::Data) };
    inline DeleteSecurityClassifyCatalogResponseBody& setData(const DeleteSecurityClassifyCatalogResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteSecurityClassifyCatalogResponseBody& setData(DeleteSecurityClassifyCatalogResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteSecurityClassifyCatalogResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteSecurityClassifyCatalogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSecurityClassifyCatalogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteSecurityClassifyCatalogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DeleteSecurityClassifyCatalogResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
