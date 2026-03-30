// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWAREHOUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DeleteWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WarehouseInstanceId, warehouseInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WarehouseInstanceId, warehouseInstanceId_);
    };
    DeleteWarehouseRequest() = default ;
    DeleteWarehouseRequest(const DeleteWarehouseRequest &) = default ;
    DeleteWarehouseRequest(DeleteWarehouseRequest &&) = default ;
    DeleteWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWarehouseRequest() = default ;
    DeleteWarehouseRequest& operator=(const DeleteWarehouseRequest &) = default ;
    DeleteWarehouseRequest& operator=(DeleteWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->warehouseInstanceId_ == nullptr; };
    // warehouseInstanceId Field Functions 
    bool hasWarehouseInstanceId() const { return this->warehouseInstanceId_ != nullptr;};
    void deleteWarehouseInstanceId() { this->warehouseInstanceId_ = nullptr;};
    inline string getWarehouseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(warehouseInstanceId_, "") };
    inline DeleteWarehouseRequest& setWarehouseInstanceId(string warehouseInstanceId) { DARABONBA_PTR_SET_VALUE(warehouseInstanceId_, warehouseInstanceId) };


  protected:
    shared_ptr<string> warehouseInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
