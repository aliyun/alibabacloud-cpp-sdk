// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEMULTIZONECLUSTERDISKSIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESIZEMULTIZONECLUSTERDISKSIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ResizeMultiZoneClusterDiskSizeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeMultiZoneClusterDiskSizeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeMultiZoneClusterDiskSizeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ResizeMultiZoneClusterDiskSizeResponseBody() = default ;
    ResizeMultiZoneClusterDiskSizeResponseBody(const ResizeMultiZoneClusterDiskSizeResponseBody &) = default ;
    ResizeMultiZoneClusterDiskSizeResponseBody(ResizeMultiZoneClusterDiskSizeResponseBody &&) = default ;
    ResizeMultiZoneClusterDiskSizeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeMultiZoneClusterDiskSizeResponseBody() = default ;
    ResizeMultiZoneClusterDiskSizeResponseBody& operator=(const ResizeMultiZoneClusterDiskSizeResponseBody &) = default ;
    ResizeMultiZoneClusterDiskSizeResponseBody& operator=(ResizeMultiZoneClusterDiskSizeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ResizeMultiZoneClusterDiskSizeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResizeMultiZoneClusterDiskSizeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
