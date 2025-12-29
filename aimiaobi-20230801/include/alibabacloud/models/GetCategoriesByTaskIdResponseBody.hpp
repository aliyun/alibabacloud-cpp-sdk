// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESBYTASKIDRESPONSEBODY_HPP_
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
  class GetCategoriesByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCategoriesByTaskIdResponseBody() = default ;
    GetCategoriesByTaskIdResponseBody(const GetCategoriesByTaskIdResponseBody &) = default ;
    GetCategoriesByTaskIdResponseBody(GetCategoriesByTaskIdResponseBody &&) = default ;
    GetCategoriesByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesByTaskIdResponseBody() = default ;
    GetCategoriesByTaskIdResponseBody& operator=(const GetCategoriesByTaskIdResponseBody &) = default ;
    GetCategoriesByTaskIdResponseBody& operator=(GetCategoriesByTaskIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Children, children_);
        DARABONBA_PTR_TO_JSON(Count, count_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Children, children_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      class Children : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Children& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
        };
        friend void from_json(const Darabonba::Json& j, Children& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
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
        virtual bool empty() const override { return this->category_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Children& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      protected:
        shared_ptr<string> category_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->children_ == nullptr && this->count_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const vector<Data::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Data::Children>) };
      inline vector<Data::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<Data::Children>) };
      inline Data& setChildren(const vector<Data::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline Data& setChildren(vector<Data::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<vector<Data::Children>> children_ {};
      shared_ptr<int32_t> count_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCategoriesByTaskIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCategoriesByTaskIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCategoriesByTaskIdResponseBody::Data>) };
    inline vector<GetCategoriesByTaskIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCategoriesByTaskIdResponseBody::Data>) };
    inline GetCategoriesByTaskIdResponseBody& setData(const vector<GetCategoriesByTaskIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCategoriesByTaskIdResponseBody& setData(vector<GetCategoriesByTaskIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCategoriesByTaskIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCategoriesByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCategoriesByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCategoriesByTaskIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetCategoriesByTaskIdResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
