// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMDATAFORPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUMDATAFORPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumDataForPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumDataForPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumDataForPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRumDataForPageResponseBody() = default ;
    GetRumDataForPageResponseBody(const GetRumDataForPageResponseBody &) = default ;
    GetRumDataForPageResponseBody(GetRumDataForPageResponseBody &&) = default ;
    GetRumDataForPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumDataForPageResponseBody() = default ;
    GetRumDataForPageResponseBody& operator=(const GetRumDataForPageResponseBody &) = default ;
    GetRumDataForPageResponseBody& operator=(GetRumDataForPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Authentication, authentication_);
        DARABONBA_PTR_TO_JSON(Completion, completion_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Preference, preference_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Authentication, authentication_);
        DARABONBA_PTR_FROM_JSON(Completion, completion_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Preference, preference_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      virtual bool empty() const override { return this->authentication_ == nullptr
        && this->completion_ == nullptr && this->items_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->preference_ == nullptr
        && this->total_ == nullptr; };
      // authentication Field Functions 
      bool hasAuthentication() const { return this->authentication_ != nullptr;};
      void deleteAuthentication() { this->authentication_ = nullptr;};
      inline string getAuthentication() const { DARABONBA_PTR_GET_DEFAULT(authentication_, "") };
      inline Data& setAuthentication(string authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };


      // completion Field Functions 
      bool hasCompletion() const { return this->completion_ != nullptr;};
      void deleteCompletion() { this->completion_ = nullptr;};
      inline string getCompletion() const { DARABONBA_PTR_GET_DEFAULT(completion_, "") };
      inline Data& setCompletion(string completion) { DARABONBA_PTR_SET_VALUE(completion_, completion) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Darabonba::Json> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getItems() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
      inline Data& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline string getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
      inline Data& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // preference Field Functions 
      bool hasPreference() const { return this->preference_ != nullptr;};
      void deletePreference() { this->preference_ = nullptr;};
      inline string getPreference() const { DARABONBA_PTR_GET_DEFAULT(preference_, "") };
      inline Data& setPreference(string preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Data& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // A reserved parameter. Ignore this parameter.
      shared_ptr<string> authentication_ {};
      // Indicates whether the query ends. Valid values: true and false.
      shared_ptr<string> completion_ {};
      // The queried data.
      shared_ptr<vector<Darabonba::Json>> items_ {};
      // The page number.
      shared_ptr<string> page_ {};
      // The number of entries per page.
      shared_ptr<string> pageSize_ {};
      // A reserved parameter. Ignore this parameter.
      shared_ptr<string> preference_ {};
      // The total number of entries returned.
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRumDataForPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRumDataForPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRumDataForPageResponseBody::Data) };
    inline GetRumDataForPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRumDataForPageResponseBody::Data) };
    inline GetRumDataForPageResponseBody& setData(const GetRumDataForPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRumDataForPageResponseBody& setData(GetRumDataForPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetRumDataForPageResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRumDataForPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRumDataForPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetRumDataForPageResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The result of the operation.
    shared_ptr<GetRumDataForPageResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
