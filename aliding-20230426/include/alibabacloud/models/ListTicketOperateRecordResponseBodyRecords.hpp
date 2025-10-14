// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTicketOperateRecordResponseBodyRecordsOperator.hpp>
#include <alibabacloud/models/ListTicketOperateRecordResponseBodyRecordsTicketMemo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTicketOperateRecordResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketOperateRecordResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(OperateData, operateData_);
      DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(OperationDisplayName, operationDisplayName_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemo_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketOperateRecordResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(OperateData, operateData_);
      DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(OperationDisplayName, operationDisplayName_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemo_);
    };
    ListTicketOperateRecordResponseBodyRecords() = default ;
    ListTicketOperateRecordResponseBodyRecords(const ListTicketOperateRecordResponseBodyRecords &) = default ;
    ListTicketOperateRecordResponseBodyRecords(ListTicketOperateRecordResponseBodyRecords &&) = default ;
    ListTicketOperateRecordResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketOperateRecordResponseBodyRecords() = default ;
    ListTicketOperateRecordResponseBodyRecords& operator=(const ListTicketOperateRecordResponseBodyRecords &) = default ;
    ListTicketOperateRecordResponseBodyRecords& operator=(ListTicketOperateRecordResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openTicketId_ == nullptr
        && return this->operateData_ == nullptr && return this->operateTime_ == nullptr && return this->operation_ == nullptr && return this->operationDisplayName_ == nullptr && return this->operator_ == nullptr
        && return this->ticketMemo_ == nullptr; };
    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline ListTicketOperateRecordResponseBodyRecords& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // operateData Field Functions 
    bool hasOperateData() const { return this->operateData_ != nullptr;};
    void deleteOperateData() { this->operateData_ = nullptr;};
    inline string operateData() const { DARABONBA_PTR_GET_DEFAULT(operateData_, "") };
    inline ListTicketOperateRecordResponseBodyRecords& setOperateData(string operateData) { DARABONBA_PTR_SET_VALUE(operateData_, operateData) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline ListTicketOperateRecordResponseBodyRecords& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ListTicketOperateRecordResponseBodyRecords& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // operationDisplayName Field Functions 
    bool hasOperationDisplayName() const { return this->operationDisplayName_ != nullptr;};
    void deleteOperationDisplayName() { this->operationDisplayName_ = nullptr;};
    inline string operationDisplayName() const { DARABONBA_PTR_GET_DEFAULT(operationDisplayName_, "") };
    inline ListTicketOperateRecordResponseBodyRecords& setOperationDisplayName(string operationDisplayName) { DARABONBA_PTR_SET_VALUE(operationDisplayName_, operationDisplayName) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline const Models::ListTicketOperateRecordResponseBodyRecordsOperator & _operator() const { DARABONBA_PTR_GET_CONST(operator_, Models::ListTicketOperateRecordResponseBodyRecordsOperator) };
    inline Models::ListTicketOperateRecordResponseBodyRecordsOperator _operator() { DARABONBA_PTR_GET(operator_, Models::ListTicketOperateRecordResponseBodyRecordsOperator) };
    inline ListTicketOperateRecordResponseBodyRecords& setOperator(const Models::ListTicketOperateRecordResponseBodyRecordsOperator & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
    inline ListTicketOperateRecordResponseBodyRecords& setOperator(Models::ListTicketOperateRecordResponseBodyRecordsOperator && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


    // ticketMemo Field Functions 
    bool hasTicketMemo() const { return this->ticketMemo_ != nullptr;};
    void deleteTicketMemo() { this->ticketMemo_ = nullptr;};
    inline const Models::ListTicketOperateRecordResponseBodyRecordsTicketMemo & ticketMemo() const { DARABONBA_PTR_GET_CONST(ticketMemo_, Models::ListTicketOperateRecordResponseBodyRecordsTicketMemo) };
    inline Models::ListTicketOperateRecordResponseBodyRecordsTicketMemo ticketMemo() { DARABONBA_PTR_GET(ticketMemo_, Models::ListTicketOperateRecordResponseBodyRecordsTicketMemo) };
    inline ListTicketOperateRecordResponseBodyRecords& setTicketMemo(const Models::ListTicketOperateRecordResponseBodyRecordsTicketMemo & ticketMemo) { DARABONBA_PTR_SET_VALUE(ticketMemo_, ticketMemo) };
    inline ListTicketOperateRecordResponseBodyRecords& setTicketMemo(Models::ListTicketOperateRecordResponseBodyRecordsTicketMemo && ticketMemo) { DARABONBA_PTR_SET_RVALUE(ticketMemo_, ticketMemo) };


  protected:
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<string> operateData_ = nullptr;
    std::shared_ptr<string> operateTime_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> operationDisplayName_ = nullptr;
    std::shared_ptr<Models::ListTicketOperateRecordResponseBodyRecordsOperator> operator_ = nullptr;
    std::shared_ptr<Models::ListTicketOperateRecordResponseBodyRecordsTicketMemo> ticketMemo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
