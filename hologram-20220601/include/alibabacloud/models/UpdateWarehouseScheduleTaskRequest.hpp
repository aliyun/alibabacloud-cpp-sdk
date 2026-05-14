// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWAREHOUSESCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWAREHOUSESCHEDULETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateWarehouseScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWarehouseScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(elasticCu, elasticCu_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(warehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWarehouseScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticCu, elasticCu_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(warehouseId, warehouseId_);
    };
    UpdateWarehouseScheduleTaskRequest() = default ;
    UpdateWarehouseScheduleTaskRequest(const UpdateWarehouseScheduleTaskRequest &) = default ;
    UpdateWarehouseScheduleTaskRequest(UpdateWarehouseScheduleTaskRequest &&) = default ;
    UpdateWarehouseScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWarehouseScheduleTaskRequest() = default ;
    UpdateWarehouseScheduleTaskRequest& operator=(const UpdateWarehouseScheduleTaskRequest &) = default ;
    UpdateWarehouseScheduleTaskRequest& operator=(UpdateWarehouseScheduleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticCu_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->startTime_ == nullptr && this->warehouseId_ == nullptr; };
    // elasticCu Field Functions 
    bool hasElasticCu() const { return this->elasticCu_ != nullptr;};
    void deleteElasticCu() { this->elasticCu_ = nullptr;};
    inline int64_t getElasticCu() const { DARABONBA_PTR_GET_DEFAULT(elasticCu_, 0L) };
    inline UpdateWarehouseScheduleTaskRequest& setElasticCu(int64_t elasticCu) { DARABONBA_PTR_SET_VALUE(elasticCu_, elasticCu) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateWarehouseScheduleTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateWarehouseScheduleTaskRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateWarehouseScheduleTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline int64_t getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, 0L) };
    inline UpdateWarehouseScheduleTaskRequest& setWarehouseId(int64_t warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


  protected:
    shared_ptr<int64_t> elasticCu_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> startTime_ {};
    // This parameter is required.
    shared_ptr<int64_t> warehouseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
