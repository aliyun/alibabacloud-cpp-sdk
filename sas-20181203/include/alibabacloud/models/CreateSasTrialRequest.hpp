// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESASTRIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESASTRIALREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FromEcs, fromEcs_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RequestForm, requestForm_);
      DARABONBA_PTR_TO_JSON(TryType, tryType_);
      DARABONBA_PTR_TO_JSON(TryVersion, tryVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSasTrialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
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
    class RequestForm : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestForm& obj) { 
        DARABONBA_PTR_TO_JSON(TryReason, tryReason_);
      };
      friend void from_json(const Darabonba::Json& j, RequestForm& obj) { 
        DARABONBA_PTR_FROM_JSON(TryReason, tryReason_);
      };
      RequestForm() = default ;
      RequestForm(const RequestForm &) = default ;
      RequestForm(RequestForm &&) = default ;
      RequestForm(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestForm() = default ;
      RequestForm& operator=(const RequestForm &) = default ;
      RequestForm& operator=(RequestForm &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tryReason_ == nullptr; };
      // tryReason Field Functions 
      bool hasTryReason() const { return this->tryReason_ != nullptr;};
      void deleteTryReason() { this->tryReason_ = nullptr;};
      inline string getTryReason() const { DARABONBA_PTR_GET_DEFAULT(tryReason_, "") };
      inline RequestForm& setTryReason(string tryReason) { DARABONBA_PTR_SET_VALUE(tryReason_, tryReason) };


    protected:
      // The reason for applying for a trial.
      shared_ptr<string> tryReason_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->fromEcs_ == nullptr && this->lang_ == nullptr && this->requestForm_ == nullptr && this->tryType_ == nullptr && this->tryVersion_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSasTrialRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fromEcs Field Functions 
    bool hasFromEcs() const { return this->fromEcs_ != nullptr;};
    void deleteFromEcs() { this->fromEcs_ = nullptr;};
    inline bool getFromEcs() const { DARABONBA_PTR_GET_DEFAULT(fromEcs_, false) };
    inline CreateSasTrialRequest& setFromEcs(bool fromEcs) { DARABONBA_PTR_SET_VALUE(fromEcs_, fromEcs) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSasTrialRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // requestForm Field Functions 
    bool hasRequestForm() const { return this->requestForm_ != nullptr;};
    void deleteRequestForm() { this->requestForm_ = nullptr;};
    inline const CreateSasTrialRequest::RequestForm & getRequestForm() const { DARABONBA_PTR_GET_CONST(requestForm_, CreateSasTrialRequest::RequestForm) };
    inline CreateSasTrialRequest::RequestForm getRequestForm() { DARABONBA_PTR_GET(requestForm_, CreateSasTrialRequest::RequestForm) };
    inline CreateSasTrialRequest& setRequestForm(const CreateSasTrialRequest::RequestForm & requestForm) { DARABONBA_PTR_SET_VALUE(requestForm_, requestForm) };
    inline CreateSasTrialRequest& setRequestForm(CreateSasTrialRequest::RequestForm && requestForm) { DARABONBA_PTR_SET_RVALUE(requestForm_, requestForm) };


    // tryType Field Functions 
    bool hasTryType() const { return this->tryType_ != nullptr;};
    void deleteTryType() { this->tryType_ = nullptr;};
    inline int32_t getTryType() const { DARABONBA_PTR_GET_DEFAULT(tryType_, 0) };
    inline CreateSasTrialRequest& setTryType(int32_t tryType) { DARABONBA_PTR_SET_VALUE(tryType_, tryType) };


    // tryVersion Field Functions 
    bool hasTryVersion() const { return this->tryVersion_ != nullptr;};
    void deleteTryVersion() { this->tryVersion_ = nullptr;};
    inline int32_t getTryVersion() const { DARABONBA_PTR_GET_DEFAULT(tryVersion_, 0) };
    inline CreateSasTrialRequest& setTryVersion(int32_t tryVersion) { DARABONBA_PTR_SET_VALUE(tryVersion_, tryVersion) };


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
    shared_ptr<CreateSasTrialRequest::RequestForm> requestForm_ {};
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
