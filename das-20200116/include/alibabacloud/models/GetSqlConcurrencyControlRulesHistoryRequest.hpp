// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLRULESHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLRULESHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetSqlConcurrencyControlRulesHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConcurrencyControlRulesHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConcurrencyControlRulesHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetSqlConcurrencyControlRulesHistoryRequest() = default ;
    GetSqlConcurrencyControlRulesHistoryRequest(const GetSqlConcurrencyControlRulesHistoryRequest &) = default ;
    GetSqlConcurrencyControlRulesHistoryRequest(GetSqlConcurrencyControlRulesHistoryRequest &&) = default ;
    GetSqlConcurrencyControlRulesHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConcurrencyControlRulesHistoryRequest() = default ;
    GetSqlConcurrencyControlRulesHistoryRequest& operator=(const GetSqlConcurrencyControlRulesHistoryRequest &) = default ;
    GetSqlConcurrencyControlRulesHistoryRequest& operator=(GetSqlConcurrencyControlRulesHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consoleContext_ != nullptr
        && this->instanceId_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string consoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline GetSqlConcurrencyControlRulesHistoryRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSqlConcurrencyControlRulesHistoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetSqlConcurrencyControlRulesHistoryRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetSqlConcurrencyControlRulesHistoryRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The reserved parameter.
    std::shared_ptr<string> consoleContext_ = nullptr;
    // The instance ID.
    // 
    // >  Only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The page number. The value must be an integer that is greater than 0. Default value: 1.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. The value must be an integer that is greater than 0. Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
