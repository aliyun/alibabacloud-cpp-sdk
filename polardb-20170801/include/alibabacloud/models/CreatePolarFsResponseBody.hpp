// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARFSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARFSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarFsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarFsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(PolarFsPath, polarFsPath_);
      DARABONBA_PTR_TO_JSON(PolarFsStatus, polarFsStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarFsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PolarFsPath, polarFsPath_);
      DARABONBA_PTR_FROM_JSON(PolarFsStatus, polarFsStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePolarFsResponseBody() = default ;
    CreatePolarFsResponseBody(const CreatePolarFsResponseBody &) = default ;
    CreatePolarFsResponseBody(CreatePolarFsResponseBody &&) = default ;
    CreatePolarFsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarFsResponseBody() = default ;
    CreatePolarFsResponseBody& operator=(const CreatePolarFsResponseBody &) = default ;
    CreatePolarFsResponseBody& operator=(CreatePolarFsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->polarFsPath_ == nullptr && this->polarFsStatus_ == nullptr && this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreatePolarFsResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline CreatePolarFsResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // polarFsPath Field Functions 
    bool hasPolarFsPath() const { return this->polarFsPath_ != nullptr;};
    void deletePolarFsPath() { this->polarFsPath_ = nullptr;};
    inline string getPolarFsPath() const { DARABONBA_PTR_GET_DEFAULT(polarFsPath_, "") };
    inline CreatePolarFsResponseBody& setPolarFsPath(string polarFsPath) { DARABONBA_PTR_SET_VALUE(polarFsPath_, polarFsPath) };


    // polarFsStatus Field Functions 
    bool hasPolarFsStatus() const { return this->polarFsStatus_ != nullptr;};
    void deletePolarFsStatus() { this->polarFsStatus_ = nullptr;};
    inline string getPolarFsStatus() const { DARABONBA_PTR_GET_DEFAULT(polarFsStatus_, "") };
    inline CreatePolarFsResponseBody& setPolarFsStatus(string polarFsStatus) { DARABONBA_PTR_SET_VALUE(polarFsStatus_, polarFsStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePolarFsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The PolarFS instance ID.
    shared_ptr<string> polarFsInstanceId_ {};
    // The PolarFS file system path.
    shared_ptr<string> polarFsPath_ {};
    // The PolarFS instance status.
    shared_ptr<string> polarFsStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
