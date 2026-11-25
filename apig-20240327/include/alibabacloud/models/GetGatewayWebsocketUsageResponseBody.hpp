// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYWEBSOCKETUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYWEBSOCKETUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayWebsocketUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayWebsocketUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayWebsocketUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGatewayWebsocketUsageResponseBody() = default ;
    GetGatewayWebsocketUsageResponseBody(const GetGatewayWebsocketUsageResponseBody &) = default ;
    GetGatewayWebsocketUsageResponseBody(GetGatewayWebsocketUsageResponseBody &&) = default ;
    GetGatewayWebsocketUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayWebsocketUsageResponseBody() = default ;
    GetGatewayWebsocketUsageResponseBody& operator=(const GetGatewayWebsocketUsageResponseBody &) = default ;
    GetGatewayWebsocketUsageResponseBody& operator=(GetGatewayWebsocketUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(basis, basis_);
        DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(basis, basis_);
        DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(items, items_);
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
      virtual bool empty() const override { return this->basis_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr; };
      // basis Field Functions 
      bool hasBasis() const { return this->basis_ != nullptr;};
      void deleteBasis() { this->basis_ = nullptr;};
      inline string getBasis() const { DARABONBA_PTR_GET_DEFAULT(basis_, "") };
      inline Data& setBasis(string basis) { DARABONBA_PTR_SET_VALUE(basis_, basis) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Data& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Darabonba::Json> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getItems() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
      inline Data& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The data basis.
      shared_ptr<string> basis_ {};
      // Indicates whether there is a next page.
      shared_ptr<bool> hasMore_ {};
      // The cycle usage.
      shared_ptr<vector<Darabonba::Json>> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGatewayWebsocketUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayWebsocketUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayWebsocketUsageResponseBody::Data) };
    inline GetGatewayWebsocketUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayWebsocketUsageResponseBody::Data) };
    inline GetGatewayWebsocketUsageResponseBody& setData(const GetGatewayWebsocketUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayWebsocketUsageResponseBody& setData(GetGatewayWebsocketUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayWebsocketUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayWebsocketUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business response code.
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<GetGatewayWebsocketUsageResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
