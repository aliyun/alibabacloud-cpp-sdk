// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESASTRIALSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESASTRIALSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSasTrialShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSasTrialShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FromEcs, fromEcs_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RequestForm, requestFormShrink_);
      DARABONBA_PTR_TO_JSON(TryType, tryType_);
      DARABONBA_PTR_TO_JSON(TryVersion, tryVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSasTrialShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FromEcs, fromEcs_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RequestForm, requestFormShrink_);
      DARABONBA_PTR_FROM_JSON(TryType, tryType_);
      DARABONBA_PTR_FROM_JSON(TryVersion, tryVersion_);
    };
    CreateSasTrialShrinkRequest() = default ;
    CreateSasTrialShrinkRequest(const CreateSasTrialShrinkRequest &) = default ;
    CreateSasTrialShrinkRequest(CreateSasTrialShrinkRequest &&) = default ;
    CreateSasTrialShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSasTrialShrinkRequest() = default ;
    CreateSasTrialShrinkRequest& operator=(const CreateSasTrialShrinkRequest &) = default ;
    CreateSasTrialShrinkRequest& operator=(CreateSasTrialShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->fromEcs_ == nullptr && this->lang_ == nullptr && this->requestFormShrink_ == nullptr && this->tryType_ == nullptr && this->tryVersion_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSasTrialShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fromEcs Field Functions 
    bool hasFromEcs() const { return this->fromEcs_ != nullptr;};
    void deleteFromEcs() { this->fromEcs_ = nullptr;};
    inline bool getFromEcs() const { DARABONBA_PTR_GET_DEFAULT(fromEcs_, false) };
    inline CreateSasTrialShrinkRequest& setFromEcs(bool fromEcs) { DARABONBA_PTR_SET_VALUE(fromEcs_, fromEcs) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSasTrialShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // requestFormShrink Field Functions 
    bool hasRequestFormShrink() const { return this->requestFormShrink_ != nullptr;};
    void deleteRequestFormShrink() { this->requestFormShrink_ = nullptr;};
    inline string getRequestFormShrink() const { DARABONBA_PTR_GET_DEFAULT(requestFormShrink_, "") };
    inline CreateSasTrialShrinkRequest& setRequestFormShrink(string requestFormShrink) { DARABONBA_PTR_SET_VALUE(requestFormShrink_, requestFormShrink) };


    // tryType Field Functions 
    bool hasTryType() const { return this->tryType_ != nullptr;};
    void deleteTryType() { this->tryType_ = nullptr;};
    inline int32_t getTryType() const { DARABONBA_PTR_GET_DEFAULT(tryType_, 0) };
    inline CreateSasTrialShrinkRequest& setTryType(int32_t tryType) { DARABONBA_PTR_SET_VALUE(tryType_, tryType) };


    // tryVersion Field Functions 
    bool hasTryVersion() const { return this->tryVersion_ != nullptr;};
    void deleteTryVersion() { this->tryVersion_ = nullptr;};
    inline int32_t getTryVersion() const { DARABONBA_PTR_GET_DEFAULT(tryVersion_, 0) };
    inline CreateSasTrialShrinkRequest& setTryVersion(int32_t tryVersion) { DARABONBA_PTR_SET_VALUE(tryVersion_, tryVersion) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Different requests should use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether the request is from the ECS console. Valid values:
    // - **true**: yes.
    // - **false**: no.
    shared_ptr<bool> fromEcs_ {};
    // The language of the request and response. Valid values:
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The reason for applying for a trial. This parameter is required for a second trial.
    shared_ptr<string> requestFormShrink_ {};
    // The trial type. Valid values:
    // - **0**: trial not allowed.
    // - **1**: first trial.
    // - **2**: second trial.
    // 
    // 
    // > Call the [GetCanTrySas](https://help.aliyun.com/document_detail/2623574.html) operation to obtain this parameter. A trial can be started only when the value is not 0.
    shared_ptr<int32_t> tryType_ {};
    // The trial version. Valid values:
    // - **3**: Enterprise Edition.
    // - **7**: Ultimate Edition.
    // 
    // >Call the [GetCanTrySas](https://help.aliyun.com/document_detail/2623574.html) operation to obtain this parameter.
    shared_ptr<int32_t> tryVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
