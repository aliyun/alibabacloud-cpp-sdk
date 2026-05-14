// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAREHOUSESCHEDULEEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAREHOUSESCHEDULEEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListWarehouseScheduleEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarehouseScheduleEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(elasticType, elasticType_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarehouseScheduleEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticType, elasticType_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListWarehouseScheduleEventRequest() = default ;
    ListWarehouseScheduleEventRequest(const ListWarehouseScheduleEventRequest &) = default ;
    ListWarehouseScheduleEventRequest(ListWarehouseScheduleEventRequest &&) = default ;
    ListWarehouseScheduleEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarehouseScheduleEventRequest() = default ;
    ListWarehouseScheduleEventRequest& operator=(const ListWarehouseScheduleEventRequest &) = default ;
    ListWarehouseScheduleEventRequest& operator=(ListWarehouseScheduleEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticType_ == nullptr
        && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // elasticType Field Functions 
    bool hasElasticType() const { return this->elasticType_ != nullptr;};
    void deleteElasticType() { this->elasticType_ = nullptr;};
    inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
    inline ListWarehouseScheduleEventRequest& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListWarehouseScheduleEventRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListWarehouseScheduleEventRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWarehouseScheduleEventRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListWarehouseScheduleEventRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> elasticType_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
