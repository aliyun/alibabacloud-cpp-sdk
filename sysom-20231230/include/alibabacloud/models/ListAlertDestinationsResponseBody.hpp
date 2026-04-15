// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTDESTINATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTDESTINATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAlertDestinationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertDestinationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertDestinationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAlertDestinationsResponseBody() = default ;
    ListAlertDestinationsResponseBody(const ListAlertDestinationsResponseBody &) = default ;
    ListAlertDestinationsResponseBody(ListAlertDestinationsResponseBody &&) = default ;
    ListAlertDestinationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertDestinationsResponseBody() = default ;
    ListAlertDestinationsResponseBody& operator=(const ListAlertDestinationsResponseBody &) = default ;
    ListAlertDestinationsResponseBody& operator=(ListAlertDestinationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAlertDestinationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline ListAlertDestinationsResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline ListAlertDestinationsResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAlertDestinationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAlertDestinationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAlertDestinationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertDestinationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAlertDestinationsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    Darabonba::Json data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
