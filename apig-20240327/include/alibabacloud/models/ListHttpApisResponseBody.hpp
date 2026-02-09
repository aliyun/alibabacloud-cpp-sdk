// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiInfoByName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListHttpApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListHttpApisResponseBody() = default ;
    ListHttpApisResponseBody(const ListHttpApisResponseBody &) = default ;
    ListHttpApisResponseBody(ListHttpApisResponseBody &&) = default ;
    ListHttpApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpApisResponseBody() = default ;
    ListHttpApisResponseBody& operator=(const ListHttpApisResponseBody &) = default ;
    ListHttpApisResponseBody& operator=(ListHttpApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<HttpApiInfoByName> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<HttpApiInfoByName>) };
      inline vector<HttpApiInfoByName> getItems() { DARABONBA_PTR_GET(items_, vector<HttpApiInfoByName>) };
      inline Data& setItems(const vector<HttpApiInfoByName> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<HttpApiInfoByName> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // object
      shared_ptr<vector<HttpApiInfoByName>> items_ {};
      // Page number.
      shared_ptr<int32_t> pageNumber_ {};
      // Page size.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of items.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHttpApisResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListHttpApisResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListHttpApisResponseBody::Data) };
    inline ListHttpApisResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListHttpApisResponseBody::Data) };
    inline ListHttpApisResponseBody& setData(const ListHttpApisResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListHttpApisResponseBody& setData(ListHttpApisResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHttpApisResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHttpApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // Response data.
    shared_ptr<ListHttpApisResponseBody::Data> data_ {};
    // Response message.
    shared_ptr<string> message_ {};
    // Get HTTP API List
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
