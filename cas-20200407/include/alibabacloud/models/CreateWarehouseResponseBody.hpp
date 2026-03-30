// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAREHOUSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAREHOUSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateWarehouseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWarehouseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WarehouseInstanceId, warehouseInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWarehouseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WarehouseInstanceId, warehouseInstanceId_);
    };
    CreateWarehouseResponseBody() = default ;
    CreateWarehouseResponseBody(const CreateWarehouseResponseBody &) = default ;
    CreateWarehouseResponseBody(CreateWarehouseResponseBody &&) = default ;
    CreateWarehouseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWarehouseResponseBody() = default ;
    CreateWarehouseResponseBody& operator=(const CreateWarehouseResponseBody &) = default ;
    CreateWarehouseResponseBody& operator=(CreateWarehouseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->warehouseInstanceId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWarehouseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warehouseInstanceId Field Functions 
    bool hasWarehouseInstanceId() const { return this->warehouseInstanceId_ != nullptr;};
    void deleteWarehouseInstanceId() { this->warehouseInstanceId_ = nullptr;};
    inline string getWarehouseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(warehouseInstanceId_, "") };
    inline CreateWarehouseResponseBody& setWarehouseInstanceId(string warehouseInstanceId) { DARABONBA_PTR_SET_VALUE(warehouseInstanceId_, warehouseInstanceId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> warehouseInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
