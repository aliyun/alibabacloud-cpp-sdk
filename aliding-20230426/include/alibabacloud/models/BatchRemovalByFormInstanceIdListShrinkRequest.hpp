// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREMOVALBYFORMINSTANCEIDLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREMOVALBYFORMINSTANCEIDLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchRemovalByFormInstanceIdListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRemovalByFormInstanceIdListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_TO_JSON(ExecuteExpression, executeExpression_);
      DARABONBA_PTR_TO_JSON(FormInstanceIdList, formInstanceIdListShrink_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRemovalByFormInstanceIdListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_FROM_JSON(ExecuteExpression, executeExpression_);
      DARABONBA_PTR_FROM_JSON(FormInstanceIdList, formInstanceIdListShrink_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    BatchRemovalByFormInstanceIdListShrinkRequest() = default ;
    BatchRemovalByFormInstanceIdListShrinkRequest(const BatchRemovalByFormInstanceIdListShrinkRequest &) = default ;
    BatchRemovalByFormInstanceIdListShrinkRequest(BatchRemovalByFormInstanceIdListShrinkRequest &&) = default ;
    BatchRemovalByFormInstanceIdListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRemovalByFormInstanceIdListShrinkRequest() = default ;
    BatchRemovalByFormInstanceIdListShrinkRequest& operator=(const BatchRemovalByFormInstanceIdListShrinkRequest &) = default ;
    BatchRemovalByFormInstanceIdListShrinkRequest& operator=(BatchRemovalByFormInstanceIdListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->asynchronousExecution_ != nullptr && this->executeExpression_ != nullptr && this->formInstanceIdListShrink_ != nullptr && this->formUuid_ != nullptr && this->systemToken_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline BatchRemovalByFormInstanceIdListShrinkRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // asynchronousExecution Field Functions 
    bool hasAsynchronousExecution() const { return this->asynchronousExecution_ != nullptr;};
    void deleteAsynchronousExecution() { this->asynchronousExecution_ = nullptr;};
    inline bool asynchronousExecution() const { DARABONBA_PTR_GET_DEFAULT(asynchronousExecution_, false) };
    inline BatchRemovalByFormInstanceIdListShrinkRequest& setAsynchronousExecution(bool asynchronousExecution) { DARABONBA_PTR_SET_VALUE(asynchronousExecution_, asynchronousExecution) };


    // executeExpression Field Functions 
    bool hasExecuteExpression() const { return this->executeExpression_ != nullptr;};
    void deleteExecuteExpression() { this->executeExpression_ = nullptr;};
    inline bool executeExpression() const { DARABONBA_PTR_GET_DEFAULT(executeExpression_, false) };
    inline BatchRemovalByFormInstanceIdListShrinkRequest& setExecuteExpression(bool executeExpression) { DARABONBA_PTR_SET_VALUE(executeExpression_, executeExpression) };


    // formInstanceIdListShrink Field Functions 
    bool hasFormInstanceIdListShrink() const { return this->formInstanceIdListShrink_ != nullptr;};
    void deleteFormInstanceIdListShrink() { this->formInstanceIdListShrink_ = nullptr;};
    inline string formInstanceIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(formInstanceIdListShrink_, "") };
    inline BatchRemovalByFormInstanceIdListShrinkRequest& setFormInstanceIdListShrink(string formInstanceIdListShrink) { DARABONBA_PTR_SET_VALUE(formInstanceIdListShrink_, formInstanceIdListShrink) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchRemovalByFormInstanceIdListShrinkRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline BatchRemovalByFormInstanceIdListShrinkRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<bool> asynchronousExecution_ = nullptr;
    std::shared_ptr<bool> executeExpression_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formInstanceIdListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
