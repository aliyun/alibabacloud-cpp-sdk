// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCHANGELOGLISTRESPONSEBODYDATACHANGELOG_HPP_
#define ALIBABACLOUD_MODELS_QUERYCHANGELOGLISTRESPONSEBODYDATACHANGELOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryChangeLogListResponseBodyDataChangeLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryChangeLogListResponseBodyDataChangeLog& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(OperationIPAddress, operationIPAddress_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, QueryChangeLogListResponseBodyDataChangeLog& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(OperationIPAddress, operationIPAddress_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    QueryChangeLogListResponseBodyDataChangeLog() = default ;
    QueryChangeLogListResponseBodyDataChangeLog(const QueryChangeLogListResponseBodyDataChangeLog &) = default ;
    QueryChangeLogListResponseBodyDataChangeLog(QueryChangeLogListResponseBodyDataChangeLog &&) = default ;
    QueryChangeLogListResponseBodyDataChangeLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryChangeLogListResponseBodyDataChangeLog() = default ;
    QueryChangeLogListResponseBodyDataChangeLog& operator=(const QueryChangeLogListResponseBodyDataChangeLog &) = default ;
    QueryChangeLogListResponseBodyDataChangeLog& operator=(QueryChangeLogListResponseBodyDataChangeLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && return this->domainName_ == nullptr && return this->operation_ == nullptr && return this->operationIPAddress_ == nullptr && return this->remark_ == nullptr && return this->result_ == nullptr
        && return this->time_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string details() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline QueryChangeLogListResponseBodyDataChangeLog& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryChangeLogListResponseBodyDataChangeLog& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline QueryChangeLogListResponseBodyDataChangeLog& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // operationIPAddress Field Functions 
    bool hasOperationIPAddress() const { return this->operationIPAddress_ != nullptr;};
    void deleteOperationIPAddress() { this->operationIPAddress_ = nullptr;};
    inline string operationIPAddress() const { DARABONBA_PTR_GET_DEFAULT(operationIPAddress_, "") };
    inline QueryChangeLogListResponseBodyDataChangeLog& setOperationIPAddress(string operationIPAddress) { DARABONBA_PTR_SET_VALUE(operationIPAddress_, operationIPAddress) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryChangeLogListResponseBodyDataChangeLog& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline QueryChangeLogListResponseBodyDataChangeLog& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryChangeLogListResponseBodyDataChangeLog& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> details_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> operationIPAddress_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
