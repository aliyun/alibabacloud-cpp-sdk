// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePendingMaintenanceActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePendingMaintenanceActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TypeList, typeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePendingMaintenanceActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
    };
    DescribePendingMaintenanceActionsResponseBody() = default ;
    DescribePendingMaintenanceActionsResponseBody(const DescribePendingMaintenanceActionsResponseBody &) = default ;
    DescribePendingMaintenanceActionsResponseBody(DescribePendingMaintenanceActionsResponseBody &&) = default ;
    DescribePendingMaintenanceActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePendingMaintenanceActionsResponseBody() = default ;
    DescribePendingMaintenanceActionsResponseBody& operator=(const DescribePendingMaintenanceActionsResponseBody &) = default ;
    DescribePendingMaintenanceActionsResponseBody& operator=(DescribePendingMaintenanceActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TypeList& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, TypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      TypeList() = default ;
      TypeList(const TypeList &) = default ;
      TypeList(TypeList &&) = default ;
      TypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TypeList() = default ;
      TypeList& operator=(const TypeList &) = default ;
      TypeList& operator=(TypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->taskType_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline TypeList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TypeList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The number of pending events.
      shared_ptr<int32_t> count_ {};
      // The task type of pending events. Valid values:
      // 
      // *   **DatabaseSoftwareUpgrading**: database software upgrades
      // *   **DatabaseHardwareMaintenance**: hardware maintenance and upgrades
      // *   **DatabaseStorageUpgrading**: database storage upgrades
      // *   **DatabaseProxyUpgrading**: minor version upgrades of the proxy
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->typeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePendingMaintenanceActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<DescribePendingMaintenanceActionsResponseBody::TypeList> & getTypeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<DescribePendingMaintenanceActionsResponseBody::TypeList>) };
    inline vector<DescribePendingMaintenanceActionsResponseBody::TypeList> getTypeList() { DARABONBA_PTR_GET(typeList_, vector<DescribePendingMaintenanceActionsResponseBody::TypeList>) };
    inline DescribePendingMaintenanceActionsResponseBody& setTypeList(const vector<DescribePendingMaintenanceActionsResponseBody::TypeList> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline DescribePendingMaintenanceActionsResponseBody& setTypeList(vector<DescribePendingMaintenanceActionsResponseBody::TypeList> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of pending events.
    shared_ptr<vector<DescribePendingMaintenanceActionsResponseBody::TypeList>> typeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
