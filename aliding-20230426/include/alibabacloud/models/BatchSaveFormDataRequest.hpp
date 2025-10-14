// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSAVEFORMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSAVEFORMDATAREQUEST_HPP_
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
  class BatchSaveFormDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSaveFormDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_TO_JSON(FormDataJsonList, formDataJsonList_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(KeepRunningAfterException, keepRunningAfterException_);
      DARABONBA_PTR_TO_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSaveFormDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_FROM_JSON(FormDataJsonList, formDataJsonList_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(KeepRunningAfterException, keepRunningAfterException_);
      DARABONBA_PTR_FROM_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    BatchSaveFormDataRequest() = default ;
    BatchSaveFormDataRequest(const BatchSaveFormDataRequest &) = default ;
    BatchSaveFormDataRequest(BatchSaveFormDataRequest &&) = default ;
    BatchSaveFormDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSaveFormDataRequest() = default ;
    BatchSaveFormDataRequest& operator=(const BatchSaveFormDataRequest &) = default ;
    BatchSaveFormDataRequest& operator=(BatchSaveFormDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->asynchronousExecution_ == nullptr && return this->formDataJsonList_ == nullptr && return this->formUuid_ == nullptr && return this->keepRunningAfterException_ == nullptr && return this->noExecuteExpression_ == nullptr
        && return this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline BatchSaveFormDataRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // asynchronousExecution Field Functions 
    bool hasAsynchronousExecution() const { return this->asynchronousExecution_ != nullptr;};
    void deleteAsynchronousExecution() { this->asynchronousExecution_ = nullptr;};
    inline bool asynchronousExecution() const { DARABONBA_PTR_GET_DEFAULT(asynchronousExecution_, false) };
    inline BatchSaveFormDataRequest& setAsynchronousExecution(bool asynchronousExecution) { DARABONBA_PTR_SET_VALUE(asynchronousExecution_, asynchronousExecution) };


    // formDataJsonList Field Functions 
    bool hasFormDataJsonList() const { return this->formDataJsonList_ != nullptr;};
    void deleteFormDataJsonList() { this->formDataJsonList_ = nullptr;};
    inline const vector<string> & formDataJsonList() const { DARABONBA_PTR_GET_CONST(formDataJsonList_, vector<string>) };
    inline vector<string> formDataJsonList() { DARABONBA_PTR_GET(formDataJsonList_, vector<string>) };
    inline BatchSaveFormDataRequest& setFormDataJsonList(const vector<string> & formDataJsonList) { DARABONBA_PTR_SET_VALUE(formDataJsonList_, formDataJsonList) };
    inline BatchSaveFormDataRequest& setFormDataJsonList(vector<string> && formDataJsonList) { DARABONBA_PTR_SET_RVALUE(formDataJsonList_, formDataJsonList) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchSaveFormDataRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // keepRunningAfterException Field Functions 
    bool hasKeepRunningAfterException() const { return this->keepRunningAfterException_ != nullptr;};
    void deleteKeepRunningAfterException() { this->keepRunningAfterException_ = nullptr;};
    inline bool keepRunningAfterException() const { DARABONBA_PTR_GET_DEFAULT(keepRunningAfterException_, false) };
    inline BatchSaveFormDataRequest& setKeepRunningAfterException(bool keepRunningAfterException) { DARABONBA_PTR_SET_VALUE(keepRunningAfterException_, keepRunningAfterException) };


    // noExecuteExpression Field Functions 
    bool hasNoExecuteExpression() const { return this->noExecuteExpression_ != nullptr;};
    void deleteNoExecuteExpression() { this->noExecuteExpression_ = nullptr;};
    inline bool noExecuteExpression() const { DARABONBA_PTR_GET_DEFAULT(noExecuteExpression_, false) };
    inline BatchSaveFormDataRequest& setNoExecuteExpression(bool noExecuteExpression) { DARABONBA_PTR_SET_VALUE(noExecuteExpression_, noExecuteExpression) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline BatchSaveFormDataRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<bool> asynchronousExecution_ = nullptr;
    std::shared_ptr<vector<string>> formDataJsonList_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<bool> keepRunningAfterException_ = nullptr;
    std::shared_ptr<bool> noExecuteExpression_ = nullptr;
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
