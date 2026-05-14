// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAREHOUSESCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAREHOUSESCHEDULETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class CreateWarehouseScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWarehouseScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(elasticCu, elasticCu_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(warehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWarehouseScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(elasticCu, elasticCu_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(warehouseId, warehouseId_);
    };
    CreateWarehouseScheduleTaskRequest() = default ;
    CreateWarehouseScheduleTaskRequest(const CreateWarehouseScheduleTaskRequest &) = default ;
    CreateWarehouseScheduleTaskRequest(CreateWarehouseScheduleTaskRequest &&) = default ;
    CreateWarehouseScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWarehouseScheduleTaskRequest() = default ;
    CreateWarehouseScheduleTaskRequest& operator=(const CreateWarehouseScheduleTaskRequest &) = default ;
    CreateWarehouseScheduleTaskRequest& operator=(CreateWarehouseScheduleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->elasticCu_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr && this->warehouseId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWarehouseScheduleTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elasticCu Field Functions 
    bool hasElasticCu() const { return this->elasticCu_ != nullptr;};
    void deleteElasticCu() { this->elasticCu_ = nullptr;};
    inline int64_t getElasticCu() const { DARABONBA_PTR_GET_DEFAULT(elasticCu_, 0L) };
    inline CreateWarehouseScheduleTaskRequest& setElasticCu(int64_t elasticCu) { DARABONBA_PTR_SET_VALUE(elasticCu_, elasticCu) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateWarehouseScheduleTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateWarehouseScheduleTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline int64_t getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, 0L) };
    inline CreateWarehouseScheduleTaskRequest& setWarehouseId(int64_t warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int64_t> elasticCu_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // This parameter is required.
    shared_ptr<int64_t> warehouseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
