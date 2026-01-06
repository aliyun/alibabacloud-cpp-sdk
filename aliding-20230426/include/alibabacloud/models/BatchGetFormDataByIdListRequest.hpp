// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTREQUEST_HPP_
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
  class BatchGetFormDataByIdListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFormDataByIdListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormInstanceIdList, formInstanceIdList_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(NeedFormInstanceValue, needFormInstanceValue_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFormDataByIdListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormInstanceIdList, formInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(NeedFormInstanceValue, needFormInstanceValue_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    BatchGetFormDataByIdListRequest() = default ;
    BatchGetFormDataByIdListRequest(const BatchGetFormDataByIdListRequest &) = default ;
    BatchGetFormDataByIdListRequest(BatchGetFormDataByIdListRequest &&) = default ;
    BatchGetFormDataByIdListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFormDataByIdListRequest() = default ;
    BatchGetFormDataByIdListRequest& operator=(const BatchGetFormDataByIdListRequest &) = default ;
    BatchGetFormDataByIdListRequest& operator=(BatchGetFormDataByIdListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->formInstanceIdList_ == nullptr && this->formUuid_ == nullptr && this->needFormInstanceValue_ == nullptr && this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline BatchGetFormDataByIdListRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formInstanceIdList Field Functions 
    bool hasFormInstanceIdList() const { return this->formInstanceIdList_ != nullptr;};
    void deleteFormInstanceIdList() { this->formInstanceIdList_ = nullptr;};
    inline const vector<string> & getFormInstanceIdList() const { DARABONBA_PTR_GET_CONST(formInstanceIdList_, vector<string>) };
    inline vector<string> getFormInstanceIdList() { DARABONBA_PTR_GET(formInstanceIdList_, vector<string>) };
    inline BatchGetFormDataByIdListRequest& setFormInstanceIdList(const vector<string> & formInstanceIdList) { DARABONBA_PTR_SET_VALUE(formInstanceIdList_, formInstanceIdList) };
    inline BatchGetFormDataByIdListRequest& setFormInstanceIdList(vector<string> && formInstanceIdList) { DARABONBA_PTR_SET_RVALUE(formInstanceIdList_, formInstanceIdList) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchGetFormDataByIdListRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // needFormInstanceValue Field Functions 
    bool hasNeedFormInstanceValue() const { return this->needFormInstanceValue_ != nullptr;};
    void deleteNeedFormInstanceValue() { this->needFormInstanceValue_ = nullptr;};
    inline bool getNeedFormInstanceValue() const { DARABONBA_PTR_GET_DEFAULT(needFormInstanceValue_, false) };
    inline BatchGetFormDataByIdListRequest& setNeedFormInstanceValue(bool needFormInstanceValue) { DARABONBA_PTR_SET_VALUE(needFormInstanceValue_, needFormInstanceValue) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline BatchGetFormDataByIdListRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> appType_ {};
    // This parameter is required.
    shared_ptr<vector<string>> formInstanceIdList_ {};
    // This parameter is required.
    shared_ptr<string> formUuid_ {};
    shared_ptr<bool> needFormInstanceValue_ {};
    // This parameter is required.
    shared_ptr<string> systemToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
