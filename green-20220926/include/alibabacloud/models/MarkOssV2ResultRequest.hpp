// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MARKOSSV2RESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MARKOSSV2RESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class MarkOssV2ResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MarkOssV2ResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(RequestIds, requestIds_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, MarkOssV2ResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(RequestIds, requestIds_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    MarkOssV2ResultRequest() = default ;
    MarkOssV2ResultRequest(const MarkOssV2ResultRequest &) = default ;
    MarkOssV2ResultRequest(MarkOssV2ResultRequest &&) = default ;
    MarkOssV2ResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MarkOssV2ResultRequest() = default ;
    MarkOssV2ResultRequest& operator=(const MarkOssV2ResultRequest &) = default ;
    MarkOssV2ResultRequest& operator=(MarkOssV2ResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->freezeType_ == nullptr && this->operation_ == nullptr && this->requestIds_ == nullptr && this->startDate_ == nullptr && this->taskName_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline MarkOssV2ResultRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // freezeType Field Functions 
    bool hasFreezeType() const { return this->freezeType_ != nullptr;};
    void deleteFreezeType() { this->freezeType_ = nullptr;};
    inline string getFreezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
    inline MarkOssV2ResultRequest& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline MarkOssV2ResultRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // requestIds Field Functions 
    bool hasRequestIds() const { return this->requestIds_ != nullptr;};
    void deleteRequestIds() { this->requestIds_ = nullptr;};
    inline string getRequestIds() const { DARABONBA_PTR_GET_DEFAULT(requestIds_, "") };
    inline MarkOssV2ResultRequest& setRequestIds(string requestIds) { DARABONBA_PTR_SET_VALUE(requestIds_, requestIds) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline MarkOssV2ResultRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline MarkOssV2ResultRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    shared_ptr<string> endDate_ {};
    shared_ptr<string> freezeType_ {};
    shared_ptr<string> operation_ {};
    shared_ptr<string> requestIds_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
