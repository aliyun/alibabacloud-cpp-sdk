// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESASTRIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESASTRIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class CreateSasTrialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSasTrialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdkRequest, sdkRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSasTrialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdkRequest, sdkRequest_);
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
    class SdkRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdkRequest& obj) { 
        DARABONBA_PTR_TO_JSON(FromEcs, fromEcs_);
        DARABONBA_PTR_TO_JSON(Lang, lang_);
        DARABONBA_PTR_TO_JSON(RequestForm, requestForm_);
        DARABONBA_PTR_TO_JSON(TryType, tryType_);
        DARABONBA_PTR_TO_JSON(TryVersion, tryVersion_);
      };
      friend void from_json(const Darabonba::Json& j, SdkRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(FromEcs, fromEcs_);
        DARABONBA_PTR_FROM_JSON(Lang, lang_);
        DARABONBA_PTR_FROM_JSON(RequestForm, requestForm_);
        DARABONBA_PTR_FROM_JSON(TryType, tryType_);
        DARABONBA_PTR_FROM_JSON(TryVersion, tryVersion_);
      };
      SdkRequest() = default ;
      SdkRequest(const SdkRequest &) = default ;
      SdkRequest(SdkRequest &&) = default ;
      SdkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdkRequest() = default ;
      SdkRequest& operator=(const SdkRequest &) = default ;
      SdkRequest& operator=(SdkRequest &&) = default ;
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
        shared_ptr<string> tryReason_ {};
      };

      virtual bool empty() const override { return this->fromEcs_ == nullptr
        && this->lang_ == nullptr && this->requestForm_ == nullptr && this->tryType_ == nullptr && this->tryVersion_ == nullptr; };
      // fromEcs Field Functions 
      bool hasFromEcs() const { return this->fromEcs_ != nullptr;};
      void deleteFromEcs() { this->fromEcs_ = nullptr;};
      inline bool getFromEcs() const { DARABONBA_PTR_GET_DEFAULT(fromEcs_, false) };
      inline SdkRequest& setFromEcs(bool fromEcs) { DARABONBA_PTR_SET_VALUE(fromEcs_, fromEcs) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline SdkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // requestForm Field Functions 
      bool hasRequestForm() const { return this->requestForm_ != nullptr;};
      void deleteRequestForm() { this->requestForm_ = nullptr;};
      inline const SdkRequest::RequestForm & getRequestForm() const { DARABONBA_PTR_GET_CONST(requestForm_, SdkRequest::RequestForm) };
      inline SdkRequest::RequestForm getRequestForm() { DARABONBA_PTR_GET(requestForm_, SdkRequest::RequestForm) };
      inline SdkRequest& setRequestForm(const SdkRequest::RequestForm & requestForm) { DARABONBA_PTR_SET_VALUE(requestForm_, requestForm) };
      inline SdkRequest& setRequestForm(SdkRequest::RequestForm && requestForm) { DARABONBA_PTR_SET_RVALUE(requestForm_, requestForm) };


      // tryType Field Functions 
      bool hasTryType() const { return this->tryType_ != nullptr;};
      void deleteTryType() { this->tryType_ = nullptr;};
      inline int32_t getTryType() const { DARABONBA_PTR_GET_DEFAULT(tryType_, 0) };
      inline SdkRequest& setTryType(int32_t tryType) { DARABONBA_PTR_SET_VALUE(tryType_, tryType) };


      // tryVersion Field Functions 
      bool hasTryVersion() const { return this->tryVersion_ != nullptr;};
      void deleteTryVersion() { this->tryVersion_ = nullptr;};
      inline int32_t getTryVersion() const { DARABONBA_PTR_GET_DEFAULT(tryVersion_, 0) };
      inline SdkRequest& setTryVersion(int32_t tryVersion) { DARABONBA_PTR_SET_VALUE(tryVersion_, tryVersion) };


    protected:
      shared_ptr<bool> fromEcs_ {};
      shared_ptr<string> lang_ {};
      shared_ptr<SdkRequest::RequestForm> requestForm_ {};
      shared_ptr<int32_t> tryType_ {};
      shared_ptr<int32_t> tryVersion_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sdkRequest_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSasTrialRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdkRequest Field Functions 
    bool hasSdkRequest() const { return this->sdkRequest_ != nullptr;};
    void deleteSdkRequest() { this->sdkRequest_ = nullptr;};
    inline const CreateSasTrialRequest::SdkRequest & getSdkRequest() const { DARABONBA_PTR_GET_CONST(sdkRequest_, CreateSasTrialRequest::SdkRequest) };
    inline CreateSasTrialRequest::SdkRequest getSdkRequest() { DARABONBA_PTR_GET(sdkRequest_, CreateSasTrialRequest::SdkRequest) };
    inline CreateSasTrialRequest& setSdkRequest(const CreateSasTrialRequest::SdkRequest & sdkRequest) { DARABONBA_PTR_SET_VALUE(sdkRequest_, sdkRequest) };
    inline CreateSasTrialRequest& setSdkRequest(CreateSasTrialRequest::SdkRequest && sdkRequest) { DARABONBA_PTR_SET_RVALUE(sdkRequest_, sdkRequest) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<CreateSasTrialRequest::SdkRequest> sdkRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
