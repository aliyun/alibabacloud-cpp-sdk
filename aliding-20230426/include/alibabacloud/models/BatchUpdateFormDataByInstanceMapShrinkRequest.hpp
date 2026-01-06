// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFORMDATABYINSTANCEMAPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFORMDATABYINSTANCEMAPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchUpdateFormDataByInstanceMapShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFormDataByInstanceMapShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(IgnoreEmpty, ignoreEmpty_);
      DARABONBA_PTR_TO_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(UpdateFormDataJsonMap, updateFormDataJsonMapShrink_);
      DARABONBA_PTR_TO_JSON(UseLatestFormSchemaVersion, useLatestFormSchemaVersion_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFormDataByInstanceMapShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(IgnoreEmpty, ignoreEmpty_);
      DARABONBA_PTR_FROM_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(UpdateFormDataJsonMap, updateFormDataJsonMapShrink_);
      DARABONBA_PTR_FROM_JSON(UseLatestFormSchemaVersion, useLatestFormSchemaVersion_);
    };
    BatchUpdateFormDataByInstanceMapShrinkRequest() = default ;
    BatchUpdateFormDataByInstanceMapShrinkRequest(const BatchUpdateFormDataByInstanceMapShrinkRequest &) = default ;
    BatchUpdateFormDataByInstanceMapShrinkRequest(BatchUpdateFormDataByInstanceMapShrinkRequest &&) = default ;
    BatchUpdateFormDataByInstanceMapShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFormDataByInstanceMapShrinkRequest() = default ;
    BatchUpdateFormDataByInstanceMapShrinkRequest& operator=(const BatchUpdateFormDataByInstanceMapShrinkRequest &) = default ;
    BatchUpdateFormDataByInstanceMapShrinkRequest& operator=(BatchUpdateFormDataByInstanceMapShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->asynchronousExecution_ == nullptr && this->formUuid_ == nullptr && this->ignoreEmpty_ == nullptr && this->noExecuteExpression_ == nullptr && this->systemToken_ == nullptr
        && this->updateFormDataJsonMapShrink_ == nullptr && this->useLatestFormSchemaVersion_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline BatchUpdateFormDataByInstanceMapShrinkRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // asynchronousExecution Field Functions 
    bool hasAsynchronousExecution() const { return this->asynchronousExecution_ != nullptr;};
    void deleteAsynchronousExecution() { this->asynchronousExecution_ = nullptr;};
    inline bool getAsynchronousExecution() const { DARABONBA_PTR_GET_DEFAULT(asynchronousExecution_, false) };
    inline BatchUpdateFormDataByInstanceMapShrinkRequest& setAsynchronousExecution(bool asynchronousExecution) { DARABONBA_PTR_SET_VALUE(asynchronousExecution_, asynchronousExecution) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchUpdateFormDataByInstanceMapShrinkRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // ignoreEmpty Field Functions 
    bool hasIgnoreEmpty() const { return this->ignoreEmpty_ != nullptr;};
    void deleteIgnoreEmpty() { this->ignoreEmpty_ = nullptr;};
    inline bool getIgnoreEmpty() const { DARABONBA_PTR_GET_DEFAULT(ignoreEmpty_, false) };
    inline BatchUpdateFormDataByInstanceMapShrinkRequest& setIgnoreEmpty(bool ignoreEmpty) { DARABONBA_PTR_SET_VALUE(ignoreEmpty_, ignoreEmpty) };


    // noExecuteExpression Field Functions 
    bool hasNoExecuteExpression() const { return this->noExecuteExpression_ != nullptr;};
    void deleteNoExecuteExpression() { this->noExecuteExpression_ = nullptr;};
    inline bool getNoExecuteExpression() const { DARABONBA_PTR_GET_DEFAULT(noExecuteExpression_, false) };
    inline BatchUpdateFormDataByInstanceMapShrinkRequest& setNoExecuteExpression(bool noExecuteExpression) { DARABONBA_PTR_SET_VALUE(noExecuteExpression_, noExecuteExpression) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline BatchUpdateFormDataByInstanceMapShrinkRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // updateFormDataJsonMapShrink Field Functions 
    bool hasUpdateFormDataJsonMapShrink() const { return this->updateFormDataJsonMapShrink_ != nullptr;};
    void deleteUpdateFormDataJsonMapShrink() { this->updateFormDataJsonMapShrink_ = nullptr;};
    inline string getUpdateFormDataJsonMapShrink() const { DARABONBA_PTR_GET_DEFAULT(updateFormDataJsonMapShrink_, "") };
    inline BatchUpdateFormDataByInstanceMapShrinkRequest& setUpdateFormDataJsonMapShrink(string updateFormDataJsonMapShrink) { DARABONBA_PTR_SET_VALUE(updateFormDataJsonMapShrink_, updateFormDataJsonMapShrink) };


    // useLatestFormSchemaVersion Field Functions 
    bool hasUseLatestFormSchemaVersion() const { return this->useLatestFormSchemaVersion_ != nullptr;};
    void deleteUseLatestFormSchemaVersion() { this->useLatestFormSchemaVersion_ = nullptr;};
    inline bool getUseLatestFormSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(useLatestFormSchemaVersion_, false) };
    inline BatchUpdateFormDataByInstanceMapShrinkRequest& setUseLatestFormSchemaVersion(bool useLatestFormSchemaVersion) { DARABONBA_PTR_SET_VALUE(useLatestFormSchemaVersion_, useLatestFormSchemaVersion) };


  protected:
    shared_ptr<string> appType_ {};
    shared_ptr<bool> asynchronousExecution_ {};
    shared_ptr<string> formUuid_ {};
    shared_ptr<bool> ignoreEmpty_ {};
    shared_ptr<bool> noExecuteExpression_ {};
    shared_ptr<string> systemToken_ {};
    shared_ptr<string> updateFormDataJsonMapShrink_ {};
    shared_ptr<bool> useLatestFormSchemaVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
