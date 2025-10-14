// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchGetFormDataByIdListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFormDataByIdListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormInstanceIdList, formInstanceIdListShrink_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(NeedFormInstanceValue, needFormInstanceValue_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFormDataByIdListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormInstanceIdList, formInstanceIdListShrink_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(NeedFormInstanceValue, needFormInstanceValue_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    BatchGetFormDataByIdListShrinkRequest() = default ;
    BatchGetFormDataByIdListShrinkRequest(const BatchGetFormDataByIdListShrinkRequest &) = default ;
    BatchGetFormDataByIdListShrinkRequest(BatchGetFormDataByIdListShrinkRequest &&) = default ;
    BatchGetFormDataByIdListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFormDataByIdListShrinkRequest() = default ;
    BatchGetFormDataByIdListShrinkRequest& operator=(const BatchGetFormDataByIdListShrinkRequest &) = default ;
    BatchGetFormDataByIdListShrinkRequest& operator=(BatchGetFormDataByIdListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->formInstanceIdListShrink_ == nullptr && return this->formUuid_ == nullptr && return this->needFormInstanceValue_ == nullptr && return this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline BatchGetFormDataByIdListShrinkRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formInstanceIdListShrink Field Functions 
    bool hasFormInstanceIdListShrink() const { return this->formInstanceIdListShrink_ != nullptr;};
    void deleteFormInstanceIdListShrink() { this->formInstanceIdListShrink_ = nullptr;};
    inline string formInstanceIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(formInstanceIdListShrink_, "") };
    inline BatchGetFormDataByIdListShrinkRequest& setFormInstanceIdListShrink(string formInstanceIdListShrink) { DARABONBA_PTR_SET_VALUE(formInstanceIdListShrink_, formInstanceIdListShrink) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchGetFormDataByIdListShrinkRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // needFormInstanceValue Field Functions 
    bool hasNeedFormInstanceValue() const { return this->needFormInstanceValue_ != nullptr;};
    void deleteNeedFormInstanceValue() { this->needFormInstanceValue_ = nullptr;};
    inline bool needFormInstanceValue() const { DARABONBA_PTR_GET_DEFAULT(needFormInstanceValue_, false) };
    inline BatchGetFormDataByIdListShrinkRequest& setNeedFormInstanceValue(bool needFormInstanceValue) { DARABONBA_PTR_SET_VALUE(needFormInstanceValue_, needFormInstanceValue) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline BatchGetFormDataByIdListShrinkRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formInstanceIdListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<bool> needFormInstanceValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
