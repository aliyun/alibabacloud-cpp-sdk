// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBInstanceClassResponseBody() = default ;
    ModifyDBInstanceClassResponseBody(const ModifyDBInstanceClassResponseBody &) = default ;
    ModifyDBInstanceClassResponseBody(ModifyDBInstanceClassResponseBody &&) = default ;
    ModifyDBInstanceClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceClassResponseBody() = default ;
    ModifyDBInstanceClassResponseBody& operator=(const ModifyDBInstanceClassResponseBody &) = default ;
    ModifyDBInstanceClassResponseBody& operator=(ModifyDBInstanceClassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ComputingGroupId, computingGroupId_);
        DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ComputingGroupId, computingGroupId_);
        DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->computingGroupId_ == nullptr
        && this->DBInstanceID_ == nullptr && this->DBInstanceName_ == nullptr && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr && this->taskId_ == nullptr; };
      // computingGroupId Field Functions 
      bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
      void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
      inline string getComputingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
      inline Data& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


      // DBInstanceID Field Functions 
      bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
      void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
      inline int64_t getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0L) };
      inline Data& setDBInstanceID(int64_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // scaleMax Field Functions 
      bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
      void deleteScaleMax() { this->scaleMax_ = nullptr;};
      inline int64_t getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0L) };
      inline Data& setScaleMax(int64_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


      // scaleMin Field Functions 
      bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
      void deleteScaleMin() { this->scaleMin_ = nullptr;};
      inline int64_t getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0L) };
      inline Data& setScaleMin(int64_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> computingGroupId_ {};
      // The cluster ID.
      shared_ptr<int64_t> DBInstanceID_ {};
      // The cluster name.
      shared_ptr<string> DBInstanceName_ {};
      // The maximum capacity for elastic scaling.
      shared_ptr<int64_t> scaleMax_ {};
      // The minimum capacity for elastic scaling.
      shared_ptr<int64_t> scaleMin_ {};
      // The task ID.
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyDBInstanceClassResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyDBInstanceClassResponseBody::Data) };
    inline ModifyDBInstanceClassResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyDBInstanceClassResponseBody::Data) };
    inline ModifyDBInstanceClassResponseBody& setData(const ModifyDBInstanceClassResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyDBInstanceClassResponseBody& setData(ModifyDBInstanceClassResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBInstanceClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<ModifyDBInstanceClassResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
