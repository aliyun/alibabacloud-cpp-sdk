// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFORMDATABYINSTANCEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFORMDATABYINSTANCEIDREQUEST_HPP_
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
  class BatchUpdateFormDataByInstanceIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFormDataByInstanceIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_TO_JSON(FormInstanceIdList, formInstanceIdList_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(IgnoreEmpty, ignoreEmpty_);
      DARABONBA_PTR_TO_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(UpdateFormDataJson, updateFormDataJson_);
      DARABONBA_PTR_TO_JSON(UseLatestFormSchemaVersion, useLatestFormSchemaVersion_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFormDataByInstanceIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AsynchronousExecution, asynchronousExecution_);
      DARABONBA_PTR_FROM_JSON(FormInstanceIdList, formInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(IgnoreEmpty, ignoreEmpty_);
      DARABONBA_PTR_FROM_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(UpdateFormDataJson, updateFormDataJson_);
      DARABONBA_PTR_FROM_JSON(UseLatestFormSchemaVersion, useLatestFormSchemaVersion_);
    };
    BatchUpdateFormDataByInstanceIdRequest() = default ;
    BatchUpdateFormDataByInstanceIdRequest(const BatchUpdateFormDataByInstanceIdRequest &) = default ;
    BatchUpdateFormDataByInstanceIdRequest(BatchUpdateFormDataByInstanceIdRequest &&) = default ;
    BatchUpdateFormDataByInstanceIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFormDataByInstanceIdRequest() = default ;
    BatchUpdateFormDataByInstanceIdRequest& operator=(const BatchUpdateFormDataByInstanceIdRequest &) = default ;
    BatchUpdateFormDataByInstanceIdRequest& operator=(BatchUpdateFormDataByInstanceIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->asynchronousExecution_ == nullptr && return this->formInstanceIdList_ == nullptr && return this->formUuid_ == nullptr && return this->ignoreEmpty_ == nullptr && return this->noExecuteExpression_ == nullptr
        && return this->systemToken_ == nullptr && return this->updateFormDataJson_ == nullptr && return this->useLatestFormSchemaVersion_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline BatchUpdateFormDataByInstanceIdRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // asynchronousExecution Field Functions 
    bool hasAsynchronousExecution() const { return this->asynchronousExecution_ != nullptr;};
    void deleteAsynchronousExecution() { this->asynchronousExecution_ = nullptr;};
    inline bool asynchronousExecution() const { DARABONBA_PTR_GET_DEFAULT(asynchronousExecution_, false) };
    inline BatchUpdateFormDataByInstanceIdRequest& setAsynchronousExecution(bool asynchronousExecution) { DARABONBA_PTR_SET_VALUE(asynchronousExecution_, asynchronousExecution) };


    // formInstanceIdList Field Functions 
    bool hasFormInstanceIdList() const { return this->formInstanceIdList_ != nullptr;};
    void deleteFormInstanceIdList() { this->formInstanceIdList_ = nullptr;};
    inline const vector<string> & formInstanceIdList() const { DARABONBA_PTR_GET_CONST(formInstanceIdList_, vector<string>) };
    inline vector<string> formInstanceIdList() { DARABONBA_PTR_GET(formInstanceIdList_, vector<string>) };
    inline BatchUpdateFormDataByInstanceIdRequest& setFormInstanceIdList(const vector<string> & formInstanceIdList) { DARABONBA_PTR_SET_VALUE(formInstanceIdList_, formInstanceIdList) };
    inline BatchUpdateFormDataByInstanceIdRequest& setFormInstanceIdList(vector<string> && formInstanceIdList) { DARABONBA_PTR_SET_RVALUE(formInstanceIdList_, formInstanceIdList) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchUpdateFormDataByInstanceIdRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // ignoreEmpty Field Functions 
    bool hasIgnoreEmpty() const { return this->ignoreEmpty_ != nullptr;};
    void deleteIgnoreEmpty() { this->ignoreEmpty_ = nullptr;};
    inline bool ignoreEmpty() const { DARABONBA_PTR_GET_DEFAULT(ignoreEmpty_, false) };
    inline BatchUpdateFormDataByInstanceIdRequest& setIgnoreEmpty(bool ignoreEmpty) { DARABONBA_PTR_SET_VALUE(ignoreEmpty_, ignoreEmpty) };


    // noExecuteExpression Field Functions 
    bool hasNoExecuteExpression() const { return this->noExecuteExpression_ != nullptr;};
    void deleteNoExecuteExpression() { this->noExecuteExpression_ = nullptr;};
    inline bool noExecuteExpression() const { DARABONBA_PTR_GET_DEFAULT(noExecuteExpression_, false) };
    inline BatchUpdateFormDataByInstanceIdRequest& setNoExecuteExpression(bool noExecuteExpression) { DARABONBA_PTR_SET_VALUE(noExecuteExpression_, noExecuteExpression) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline BatchUpdateFormDataByInstanceIdRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // updateFormDataJson Field Functions 
    bool hasUpdateFormDataJson() const { return this->updateFormDataJson_ != nullptr;};
    void deleteUpdateFormDataJson() { this->updateFormDataJson_ = nullptr;};
    inline string updateFormDataJson() const { DARABONBA_PTR_GET_DEFAULT(updateFormDataJson_, "") };
    inline BatchUpdateFormDataByInstanceIdRequest& setUpdateFormDataJson(string updateFormDataJson) { DARABONBA_PTR_SET_VALUE(updateFormDataJson_, updateFormDataJson) };


    // useLatestFormSchemaVersion Field Functions 
    bool hasUseLatestFormSchemaVersion() const { return this->useLatestFormSchemaVersion_ != nullptr;};
    void deleteUseLatestFormSchemaVersion() { this->useLatestFormSchemaVersion_ = nullptr;};
    inline bool useLatestFormSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(useLatestFormSchemaVersion_, false) };
    inline BatchUpdateFormDataByInstanceIdRequest& setUseLatestFormSchemaVersion(bool useLatestFormSchemaVersion) { DARABONBA_PTR_SET_VALUE(useLatestFormSchemaVersion_, useLatestFormSchemaVersion) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<bool> asynchronousExecution_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> formInstanceIdList_ = nullptr;
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
