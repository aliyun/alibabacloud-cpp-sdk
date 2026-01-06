// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGSQLCONCURRENCYCONTROLRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGSQLCONCURRENCYCONTROLRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRunningSqlConcurrencyControlRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningSqlConcurrencyControlRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningSqlConcurrencyControlRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetRunningSqlConcurrencyControlRulesRequest() = default ;
    GetRunningSqlConcurrencyControlRulesRequest(const GetRunningSqlConcurrencyControlRulesRequest &) = default ;
    GetRunningSqlConcurrencyControlRulesRequest(GetRunningSqlConcurrencyControlRulesRequest &&) = default ;
    GetRunningSqlConcurrencyControlRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningSqlConcurrencyControlRulesRequest() = default ;
    GetRunningSqlConcurrencyControlRulesRequest& operator=(const GetRunningSqlConcurrencyControlRulesRequest &) = default ;
    GetRunningSqlConcurrencyControlRulesRequest& operator=(GetRunningSqlConcurrencyControlRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && this->instanceId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline GetRunningSqlConcurrencyControlRulesRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRunningSqlConcurrencyControlRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetRunningSqlConcurrencyControlRulesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetRunningSqlConcurrencyControlRulesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The instance ID.
    // 
    // >  You must specify this parameter only if your database instance is an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number. The value must be a positive integer. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. The value must be a positive integer. Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
