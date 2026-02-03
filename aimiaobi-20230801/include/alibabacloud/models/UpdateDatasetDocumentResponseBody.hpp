// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETDOCUMENTRESPONSEBODY_HPP_
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
  class UpdateDatasetDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateDatasetDocumentResponseBody() = default ;
    UpdateDatasetDocumentResponseBody(const UpdateDatasetDocumentResponseBody &) = default ;
    UpdateDatasetDocumentResponseBody(UpdateDatasetDocumentResponseBody &&) = default ;
    UpdateDatasetDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetDocumentResponseBody() = default ;
    UpdateDatasetDocumentResponseBody& operator=(const UpdateDatasetDocumentResponseBody &) = default ;
    UpdateDatasetDocumentResponseBody& operator=(UpdateDatasetDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryUuid, categoryUuid_);
        DARABONBA_PTR_TO_JSON(DocId, docId_);
        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_TO_JSON(Extend1, extend1_);
        DARABONBA_PTR_TO_JSON(Extend2, extend2_);
        DARABONBA_PTR_TO_JSON(Extend3, extend3_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryUuid, categoryUuid_);
        DARABONBA_PTR_FROM_JSON(DocId, docId_);
        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
        DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
        DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      virtual bool empty() const override { return this->categoryUuid_ == nullptr
        && this->docId_ == nullptr && this->docUuid_ == nullptr && this->extend1_ == nullptr && this->extend2_ == nullptr && this->extend3_ == nullptr
        && this->tags_ == nullptr && this->title_ == nullptr; };
      // categoryUuid Field Functions 
      bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
      void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
      inline string getCategoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
      inline Data& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline Data& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // docUuid Field Functions 
      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
      void deleteDocUuid() { this->docUuid_ = nullptr;};
      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
      inline Data& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


      // extend1 Field Functions 
      bool hasExtend1() const { return this->extend1_ != nullptr;};
      void deleteExtend1() { this->extend1_ = nullptr;};
      inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
      inline Data& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


      // extend2 Field Functions 
      bool hasExtend2() const { return this->extend2_ != nullptr;};
      void deleteExtend2() { this->extend2_ = nullptr;};
      inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
      inline Data& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


      // extend3 Field Functions 
      bool hasExtend3() const { return this->extend3_ != nullptr;};
      void deleteExtend3() { this->extend3_ = nullptr;};
      inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
      inline Data& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Data& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> categoryUuid_ {};
      shared_ptr<string> docId_ {};
      shared_ptr<string> docUuid_ {};
      shared_ptr<string> extend1_ {};
      shared_ptr<string> extend2_ {};
      shared_ptr<string> extend3_ {};
      shared_ptr<vector<string>> tags_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateDatasetDocumentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateDatasetDocumentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateDatasetDocumentResponseBody::Data) };
    inline UpdateDatasetDocumentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateDatasetDocumentResponseBody::Data) };
    inline UpdateDatasetDocumentResponseBody& setData(const UpdateDatasetDocumentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateDatasetDocumentResponseBody& setData(UpdateDatasetDocumentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateDatasetDocumentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateDatasetDocumentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDatasetDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateDatasetDocumentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UpdateDatasetDocumentResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
