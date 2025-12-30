// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWDESKTOPOVERSOLDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENEWDESKTOPOVERSOLDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RenewDesktopOversoldGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewDesktopOversoldGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewDesktopOversoldGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RenewDesktopOversoldGroupResponseBody() = default ;
    RenewDesktopOversoldGroupResponseBody(const RenewDesktopOversoldGroupResponseBody &) = default ;
    RenewDesktopOversoldGroupResponseBody(RenewDesktopOversoldGroupResponseBody &&) = default ;
    RenewDesktopOversoldGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewDesktopOversoldGroupResponseBody() = default ;
    RenewDesktopOversoldGroupResponseBody& operator=(const RenewDesktopOversoldGroupResponseBody &) = default ;
    RenewDesktopOversoldGroupResponseBody& operator=(RenewDesktopOversoldGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
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
        && this->oversoldGroupId_ == nullptr; };
      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Data& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // oversoldGroupId Field Functions 
      bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
      void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
      inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
      inline Data& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    protected:
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> oversoldGroupId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RenewDesktopOversoldGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RenewDesktopOversoldGroupResponseBody::Data) };
    inline RenewDesktopOversoldGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RenewDesktopOversoldGroupResponseBody::Data) };
    inline RenewDesktopOversoldGroupResponseBody& setData(const RenewDesktopOversoldGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RenewDesktopOversoldGroupResponseBody& setData(RenewDesktopOversoldGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RenewDesktopOversoldGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RenewDesktopOversoldGroupResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
