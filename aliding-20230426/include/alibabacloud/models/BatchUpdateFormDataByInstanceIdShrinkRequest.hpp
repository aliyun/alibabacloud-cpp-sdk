// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFORMDATABYINSTANCEIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFORMDATABYINSTANCEIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchUpdateFormDataByInstanceIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFormDataByInstanceIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_TO_JSON(FormInstanceIdList, formInstanceIdListShrink_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(IgnoreEmpty, ignoreEmpty_);
      DARABONBA_PTR_TO_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(UpdateFormDataJson, updateFormDataJson_);
      DARABONBA_PTR_TO_JSON(UseLatestFormSchemaVersion, useLatestFormSchemaVersion_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFormDataByInstanceIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_FROM_JSON(FormInstanceIdList, formInstanceIdListShrink_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(IgnoreEmpty, ignoreEmpty_);
      DARABONBA_PTR_FROM_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(UpdateFormDataJson, updateFormDataJson_);
      DARABONBA_PTR_FROM_JSON(UseLatestFormSchemaVersion, useLatestFormSchemaVersion_);
    };
    BatchUpdateFormDataByInstanceIdShrinkRequest() = default ;
    BatchUpdateFormDataByInstanceIdShrinkRequest(const BatchUpdateFormDataByInstanceIdShrinkRequest &) = default ;
    BatchUpdateFormDataByInstanceIdShrinkRequest(BatchUpdateFormDataByInstanceIdShrinkRequest &&) = default ;
    BatchUpdateFormDataByInstanceIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFormDataByInstanceIdShrinkRequest() = default ;
    BatchUpdateFormDataByInstanceIdShrinkRequest& operator=(const BatchUpdateFormDataByInstanceIdShrinkRequest &) = default ;
    BatchUpdateFormDataByInstanceIdShrinkRequest& operator=(BatchUpdateFormDataByInstanceIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->asynchronousExecution_ != nullptr && this->formInstanceIdListShrink_ != nullptr && this->formUuid_ != nullptr && this->ignoreEmpty_ != nullptr && this->noExecuteExpression_ != nullptr
        && this->systemToken_ != nullptr && this->updateFormDataJson_ != nullptr && this->useLatestFormSchemaVersion_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // asynchronousExecution Field Functions 
    bool hasAsynchronousExecution() const { return this->asynchronousExecution_ != nullptr;};
    void deleteAsynchronousExecution() { this->asynchronousExecution_ = nullptr;};
    inline bool asynchronousExecution() const { DARABONBA_PTR_GET_DEFAULT(asynchronousExecution_, false) };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setAsynchronousExecution(bool asynchronousExecution) { DARABONBA_PTR_SET_VALUE(asynchronousExecution_, asynchronousExecution) };


    // formInstanceIdListShrink Field Functions 
    bool hasFormInstanceIdListShrink() const { return this->formInstanceIdListShrink_ != nullptr;};
    void deleteFormInstanceIdListShrink() { this->formInstanceIdListShrink_ = nullptr;};
    inline string formInstanceIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(formInstanceIdListShrink_, "") };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setFormInstanceIdListShrink(string formInstanceIdListShrink) { DARABONBA_PTR_SET_VALUE(formInstanceIdListShrink_, formInstanceIdListShrink) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // ignoreEmpty Field Functions 
    bool hasIgnoreEmpty() const { return this->ignoreEmpty_ != nullptr;};
    void deleteIgnoreEmpty() { this->ignoreEmpty_ = nullptr;};
    inline bool ignoreEmpty() const { DARABONBA_PTR_GET_DEFAULT(ignoreEmpty_, false) };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setIgnoreEmpty(bool ignoreEmpty) { DARABONBA_PTR_SET_VALUE(ignoreEmpty_, ignoreEmpty) };


    // noExecuteExpression Field Functions 
    bool hasNoExecuteExpression() const { return this->noExecuteExpression_ != nullptr;};
    void deleteNoExecuteExpression() { this->noExecuteExpression_ = nullptr;};
    inline bool noExecuteExpression() const { DARABONBA_PTR_GET_DEFAULT(noExecuteExpression_, false) };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setNoExecuteExpression(bool noExecuteExpression) { DARABONBA_PTR_SET_VALUE(noExecuteExpression_, noExecuteExpression) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // updateFormDataJson Field Functions 
    bool hasUpdateFormDataJson() const { return this->updateFormDataJson_ != nullptr;};
    void deleteUpdateFormDataJson() { this->updateFormDataJson_ = nullptr;};
    inline string updateFormDataJson() const { DARABONBA_PTR_GET_DEFAULT(updateFormDataJson_, "") };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setUpdateFormDataJson(string updateFormDataJson) { DARABONBA_PTR_SET_VALUE(updateFormDataJson_, updateFormDataJson) };


    // useLatestFormSchemaVersion Field Functions 
    bool hasUseLatestFormSchemaVersion() const { return this->useLatestFormSchemaVersion_ != nullptr;};
    void deleteUseLatestFormSchemaVersion() { this->useLatestFormSchemaVersion_ = nullptr;};
    inline bool useLatestFormSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(useLatestFormSchemaVersion_, false) };
    inline BatchUpdateFormDataByInstanceIdShrinkRequest& setUseLatestFormSchemaVersion(bool useLatestFormSchemaVersion) { DARABONBA_PTR_SET_VALUE(useLatestFormSchemaVersion_, useLatestFormSchemaVersion) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<bool> asynchronousExecution_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formInstanceIdListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<bool> ignoreEmpty_ = nullptr;
    std::shared_ptr<bool> noExecuteExpression_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> updateFormDataJson_ = nullptr;
    std::shared_ptr<bool> useLatestFormSchemaVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
