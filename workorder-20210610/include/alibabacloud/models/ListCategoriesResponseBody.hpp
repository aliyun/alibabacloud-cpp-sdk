// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCategoriesResponseBody() = default ;
    ListCategoriesResponseBody(const ListCategoriesResponseBody &) = default ;
    ListCategoriesResponseBody(ListCategoriesResponseBody &&) = default ;
    ListCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoriesResponseBody() = default ;
    ListCategoriesResponseBody& operator=(const ListCategoriesResponseBody &) = default ;
    ListCategoriesResponseBody& operator=(ListCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
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
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryName_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline Data& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Data& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    protected:
      // The ID of the ticket issue category.
      shared_ptr<int64_t> categoryId_ {};
      // The name of the ticket issue category.
      shared_ptr<string> categoryName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListCategoriesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCategoriesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCategoriesResponseBody::Data>) };
    inline vector<ListCategoriesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCategoriesResponseBody::Data>) };
    inline ListCategoriesResponseBody& setData(const vector<ListCategoriesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCategoriesResponseBody& setData(vector<ListCategoriesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCategoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCategoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int32_t> code_ {};
    // The return value, which is a list of question categories
    shared_ptr<vector<ListCategoriesResponseBody::Data>> data_ {};
    // The error message. If success is set to false, the message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: The value true indicates a success. The value false indicates a failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
