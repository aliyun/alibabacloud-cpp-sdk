// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREMOVALBYFORMINSTANCEIDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREMOVALBYFORMINSTANCEIDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchRemovalByFormInstanceIdListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRemovalByFormInstanceIdListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_TO_JSON(ExecuteExpression, executeExpression_);
      DARABONBA_PTR_TO_JSON(FormInstanceIdList, formInstanceIdList_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRemovalByFormInstanceIdListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_FROM_JSON(ExecuteExpression, executeExpression_);
      DARABONBA_PTR_FROM_JSON(FormInstanceIdList, formInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    BatchRemovalByFormInstanceIdListRequest() = default ;
    BatchRemovalByFormInstanceIdListRequest(const BatchRemovalByFormInstanceIdListRequest &) = default ;
    BatchRemovalByFormInstanceIdListRequest(BatchRemovalByFormInstanceIdListRequest &&) = default ;
    BatchRemovalByFormInstanceIdListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRemovalByFormInstanceIdListRequest() = default ;
    BatchRemovalByFormInstanceIdListRequest& operator=(const BatchRemovalByFormInstanceIdListRequest &) = default ;
    BatchRemovalByFormInstanceIdListRequest& operator=(BatchRemovalByFormInstanceIdListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->asynchronousExecution_ == nullptr && this->executeExpression_ == nullptr && this->formInstanceIdList_ == nullptr && this->formUuid_ == nullptr && this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline BatchRemovalByFormInstanceIdListRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // asynchronousExecution Field Functions 
    bool hasAsynchronousExecution() const { return this->asynchronousExecution_ != nullptr;};
    void deleteAsynchronousExecution() { this->asynchronousExecution_ = nullptr;};
    inline bool getAsynchronousExecution() const { DARABONBA_PTR_GET_DEFAULT(asynchronousExecution_, false) };
    inline BatchRemovalByFormInstanceIdListRequest& setAsynchronousExecution(bool asynchronousExecution) { DARABONBA_PTR_SET_VALUE(asynchronousExecution_, asynchronousExecution) };


    // executeExpression Field Functions 
    bool hasExecuteExpression() const { return this->executeExpression_ != nullptr;};
    void deleteExecuteExpression() { this->executeExpression_ = nullptr;};
    inline bool getExecuteExpression() const { DARABONBA_PTR_GET_DEFAULT(executeExpression_, false) };
    inline BatchRemovalByFormInstanceIdListRequest& setExecuteExpression(bool executeExpression) { DARABONBA_PTR_SET_VALUE(executeExpression_, executeExpression) };


    // formInstanceIdList Field Functions 
    bool hasFormInstanceIdList() const { return this->formInstanceIdList_ != nullptr;};
    void deleteFormInstanceIdList() { this->formInstanceIdList_ = nullptr;};
    inline const vector<string> & getFormInstanceIdList() const { DARABONBA_PTR_GET_CONST(formInstanceIdList_, vector<string>) };
    inline vector<string> getFormInstanceIdList() { DARABONBA_PTR_GET(formInstanceIdList_, vector<string>) };
    inline BatchRemovalByFormInstanceIdListRequest& setFormInstanceIdList(const vector<string> & formInstanceIdList) { DARABONBA_PTR_SET_VALUE(formInstanceIdList_, formInstanceIdList) };
    inline BatchRemovalByFormInstanceIdListRequest& setFormInstanceIdList(vector<string> && formInstanceIdList) { DARABONBA_PTR_SET_RVALUE(formInstanceIdList_, formInstanceIdList) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchRemovalByFormInstanceIdListRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline BatchRemovalByFormInstanceIdListRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> appType_ {};
    shared_ptr<bool> asynchronousExecution_ {};
    shared_ptr<bool> executeExpression_ {};
    // This parameter is required.
    shared_ptr<vector<string>> formInstanceIdList_ {};
    // This parameter is required.
    shared_ptr<string> formUuid_ {};
    // This parameter is required.
    shared_ptr<string> systemToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
