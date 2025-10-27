// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESASTRIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESASTRIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSasTrialRequestRequestForm.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSasTrialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSasTrialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromEcs, fromEcs_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RequestForm, requestForm_);
      DARABONBA_PTR_TO_JSON(TryType, tryType_);
      DARABONBA_PTR_TO_JSON(TryVersion, tryVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSasTrialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromEcs, fromEcs_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RequestForm, requestForm_);
      DARABONBA_PTR_FROM_JSON(TryType, tryType_);
      DARABONBA_PTR_FROM_JSON(TryVersion, tryVersion_);
    };
    CreateSasTrialRequest() = default ;
    CreateSasTrialRequest(const CreateSasTrialRequest &) = default ;
    CreateSasTrialRequest(CreateSasTrialRequest &&) = default ;
    CreateSasTrialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSasTrialRequest() = default ;
    CreateSasTrialRequest& operator=(const CreateSasTrialRequest &) = default ;
    CreateSasTrialRequest& operator=(CreateSasTrialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromEcs_ == nullptr
        && return this->lang_ == nullptr && return this->requestForm_ == nullptr && return this->tryType_ == nullptr && return this->tryVersion_ == nullptr; };
    // fromEcs Field Functions 
    bool hasFromEcs() const { return this->fromEcs_ != nullptr;};
    void deleteFromEcs() { this->fromEcs_ = nullptr;};
    inline bool fromEcs() const { DARABONBA_PTR_GET_DEFAULT(fromEcs_, false) };
    inline CreateSasTrialRequest& setFromEcs(bool fromEcs) { DARABONBA_PTR_SET_VALUE(fromEcs_, fromEcs) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSasTrialRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // requestForm Field Functions 
    bool hasRequestForm() const { return this->requestForm_ != nullptr;};
    void deleteRequestForm() { this->requestForm_ = nullptr;};
    inline const CreateSasTrialRequestRequestForm & requestForm() const { DARABONBA_PTR_GET_CONST(requestForm_, CreateSasTrialRequestRequestForm) };
    inline CreateSasTrialRequestRequestForm requestForm() { DARABONBA_PTR_GET(requestForm_, CreateSasTrialRequestRequestForm) };
    inline CreateSasTrialRequest& setRequestForm(const CreateSasTrialRequestRequestForm & requestForm) { DARABONBA_PTR_SET_VALUE(requestForm_, requestForm) };
    inline CreateSasTrialRequest& setRequestForm(CreateSasTrialRequestRequestForm && requestForm) { DARABONBA_PTR_SET_RVALUE(requestForm_, requestForm) };


    // tryType Field Functions 
    bool hasTryType() const { return this->tryType_ != nullptr;};
    void deleteTryType() { this->tryType_ = nullptr;};
    inline int32_t tryType() const { DARABONBA_PTR_GET_DEFAULT(tryType_, 0) };
    inline CreateSasTrialRequest& setTryType(int32_t tryType) { DARABONBA_PTR_SET_VALUE(tryType_, tryType) };


    // tryVersion Field Functions 
    bool hasTryVersion() const { return this->tryVersion_ != nullptr;};
    void deleteTryVersion() { this->tryVersion_ = nullptr;};
    inline int32_t tryVersion() const { DARABONBA_PTR_GET_DEFAULT(tryVersion_, 0) };
    inline CreateSasTrialRequest& setTryVersion(int32_t tryVersion) { DARABONBA_PTR_SET_VALUE(tryVersion_, tryVersion) };


  protected:
    // Specifies whether the request is redirected from the Elastic Compute Service (ECS) console. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> fromEcs_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The reason why you apply for the trial. You must specify the reason for the second trial.
    std::shared_ptr<CreateSasTrialRequestRequestForm> requestForm_ = nullptr;
    // The trial type. Valid values:
    // 
    // *   **0**: trial prohibited
    // *   **1**: first trial
    // *   **2**: second trial
    // 
    // >  You can call the [GetCanTrySas](https://help.aliyun.com/document_detail/2623574.html) operation to obtain the trial type. You can start a trial only if this parameter is not set to 0.
    std::shared_ptr<int32_t> tryType_ = nullptr;
    // The trial edition. Valid values:
    // 
    // *   **3**: Enterprise
    // *   **7**: Ultimate
    // 
    // >  You can call the [GetCanTrySas](https://help.aliyun.com/document_detail/2623574.html) operation to obtain the trial edition.
    std::shared_ptr<int32_t> tryVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
