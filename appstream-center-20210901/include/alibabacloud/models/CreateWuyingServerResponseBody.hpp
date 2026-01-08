// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWUYINGSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWUYINGSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateWuyingServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWuyingServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWuyingServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateWuyingServerResponseBody() = default ;
    CreateWuyingServerResponseBody(const CreateWuyingServerResponseBody &) = default ;
    CreateWuyingServerResponseBody(CreateWuyingServerResponseBody &&) = default ;
    CreateWuyingServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWuyingServerResponseBody() = default ;
    CreateWuyingServerResponseBody& operator=(const CreateWuyingServerResponseBody &) = default ;
    CreateWuyingServerResponseBody& operator=(CreateWuyingServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(WuyingServerIdList, wuyingServerIdList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(WuyingServerIdList, wuyingServerIdList_);
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
      virtual bool empty() const override { return this->orderId_ == nullptr
        && this->wuyingServerIdList_ == nullptr; };
      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Data& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // wuyingServerIdList Field Functions 
      bool hasWuyingServerIdList() const { return this->wuyingServerIdList_ != nullptr;};
      void deleteWuyingServerIdList() { this->wuyingServerIdList_ = nullptr;};
      inline const vector<string> & getWuyingServerIdList() const { DARABONBA_PTR_GET_CONST(wuyingServerIdList_, vector<string>) };
      inline vector<string> getWuyingServerIdList() { DARABONBA_PTR_GET(wuyingServerIdList_, vector<string>) };
      inline Data& setWuyingServerIdList(const vector<string> & wuyingServerIdList) { DARABONBA_PTR_SET_VALUE(wuyingServerIdList_, wuyingServerIdList) };
      inline Data& setWuyingServerIdList(vector<string> && wuyingServerIdList) { DARABONBA_PTR_SET_RVALUE(wuyingServerIdList_, wuyingServerIdList) };


    protected:
      // The order ID.
      shared_ptr<string> orderId_ {};
      // The list of workstation IDs.
      shared_ptr<vector<string>> wuyingServerIdList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateWuyingServerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateWuyingServerResponseBody::Data) };
    inline CreateWuyingServerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateWuyingServerResponseBody::Data) };
    inline CreateWuyingServerResponseBody& setData(const CreateWuyingServerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateWuyingServerResponseBody& setData(CreateWuyingServerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWuyingServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data.
    shared_ptr<CreateWuyingServerResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
