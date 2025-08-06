// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEFORMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEFORMDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateOrUpdateFormDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateFormDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormDataJson, formDataJson_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_TO_JSON(SearchCondition, searchCondition_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateFormDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormDataJson, formDataJson_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(NoExecuteExpression, noExecuteExpression_);
      DARABONBA_PTR_FROM_JSON(SearchCondition, searchCondition_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateOrUpdateFormDataRequest() = default ;
    CreateOrUpdateFormDataRequest(const CreateOrUpdateFormDataRequest &) = default ;
    CreateOrUpdateFormDataRequest(CreateOrUpdateFormDataRequest &&) = default ;
    CreateOrUpdateFormDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateFormDataRequest() = default ;
    CreateOrUpdateFormDataRequest& operator=(const CreateOrUpdateFormDataRequest &) = default ;
    CreateOrUpdateFormDataRequest& operator=(CreateOrUpdateFormDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->formDataJson_ != nullptr && this->formUuid_ != nullptr && this->noExecuteExpression_ != nullptr && this->searchCondition_ != nullptr && this->systemToken_ != nullptr
        && this->userId_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CreateOrUpdateFormDataRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formDataJson Field Functions 
    bool hasFormDataJson() const { return this->formDataJson_ != nullptr;};
    void deleteFormDataJson() { this->formDataJson_ = nullptr;};
    inline string formDataJson() const { DARABONBA_PTR_GET_DEFAULT(formDataJson_, "") };
    inline CreateOrUpdateFormDataRequest& setFormDataJson(string formDataJson) { DARABONBA_PTR_SET_VALUE(formDataJson_, formDataJson) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline CreateOrUpdateFormDataRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // noExecuteExpression Field Functions 
    bool hasNoExecuteExpression() const { return this->noExecuteExpression_ != nullptr;};
    void deleteNoExecuteExpression() { this->noExecuteExpression_ = nullptr;};
    inline bool noExecuteExpression() const { DARABONBA_PTR_GET_DEFAULT(noExecuteExpression_, false) };
    inline CreateOrUpdateFormDataRequest& setNoExecuteExpression(bool noExecuteExpression) { DARABONBA_PTR_SET_VALUE(noExecuteExpression_, noExecuteExpression) };


    // searchCondition Field Functions 
    bool hasSearchCondition() const { return this->searchCondition_ != nullptr;};
    void deleteSearchCondition() { this->searchCondition_ = nullptr;};
    inline string searchCondition() const { DARABONBA_PTR_GET_DEFAULT(searchCondition_, "") };
    inline CreateOrUpdateFormDataRequest& setSearchCondition(string searchCondition) { DARABONBA_PTR_SET_VALUE(searchCondition_, searchCondition) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline CreateOrUpdateFormDataRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateOrUpdateFormDataRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> formDataJson_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<bool> noExecuteExpression_ = nullptr;
    std::shared_ptr<string> searchCondition_ = nullptr;
    std::shared_ptr<string> systemToken_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
