// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWAREHOUSESCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWAREHOUSESCHEDULETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class DeleteWarehouseScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWarehouseScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(warehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWarehouseScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(warehouseId, warehouseId_);
    };
    DeleteWarehouseScheduleTaskRequest() = default ;
    DeleteWarehouseScheduleTaskRequest(const DeleteWarehouseScheduleTaskRequest &) = default ;
    DeleteWarehouseScheduleTaskRequest(DeleteWarehouseScheduleTaskRequest &&) = default ;
    DeleteWarehouseScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWarehouseScheduleTaskRequest() = default ;
    DeleteWarehouseScheduleTaskRequest& operator=(const DeleteWarehouseScheduleTaskRequest &) = default ;
    DeleteWarehouseScheduleTaskRequest& operator=(DeleteWarehouseScheduleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->warehouseId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteWarehouseScheduleTaskRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline string getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, "") };
    inline DeleteWarehouseScheduleTaskRequest& setWarehouseId(string warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


  protected:
    // This parameter is required.
    shared_ptr<string> id_ {};
    shared_ptr<string> warehouseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
