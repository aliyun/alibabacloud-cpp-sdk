// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWHITELISTSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWHITELISTSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateWhitelistSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWhitelistSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(ValidDay, validDay_);
      DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWhitelistSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(ValidDay, validDay_);
      DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
    };
    CreateWhitelistSettingRequest() = default ;
    CreateWhitelistSettingRequest(const CreateWhitelistSettingRequest &) = default ;
    CreateWhitelistSettingRequest(CreateWhitelistSettingRequest &&) = default ;
    CreateWhitelistSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWhitelistSettingRequest() = default ;
    CreateWhitelistSettingRequest& operator=(const CreateWhitelistSettingRequest &) = default ;
    CreateWhitelistSettingRequest& operator=(CreateWhitelistSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNo_ == nullptr
        && this->certifyId_ == nullptr && this->lang_ == nullptr && this->remark_ == nullptr && this->sceneId_ == nullptr && this->serviceCode_ == nullptr
        && this->sourceIp_ == nullptr && this->validDay_ == nullptr && this->whitelistType_ == nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline CreateWhitelistSettingRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline CreateWhitelistSettingRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateWhitelistSettingRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateWhitelistSettingRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline CreateWhitelistSettingRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline CreateWhitelistSettingRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateWhitelistSettingRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // validDay Field Functions 
    bool hasValidDay() const { return this->validDay_ != nullptr;};
    void deleteValidDay() { this->validDay_ = nullptr;};
    inline int32_t getValidDay() const { DARABONBA_PTR_GET_DEFAULT(validDay_, 0) };
    inline CreateWhitelistSettingRequest& setValidDay(int32_t validDay) { DARABONBA_PTR_SET_VALUE(validDay_, validDay) };


    // whitelistType Field Functions 
    bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
    void deleteWhitelistType() { this->whitelistType_ = nullptr;};
    inline string getWhitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
    inline CreateWhitelistSettingRequest& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


  protected:
    // The ID card number to add to the whitelist.
    shared_ptr<string> certNo_ {};
    // The certificate ID. The user associated with this authentication is added to the whitelist.
    shared_ptr<string> certifyId_ {};
    // The user language.
    shared_ptr<string> lang_ {};
    // The remarks for the whitelist.
    shared_ptr<string> remark_ {};
    // The scene ID.
    shared_ptr<int64_t> sceneId_ {};
    // The service type. Valid values:
    // - **antcloudauth**: Financial-grade ID Verification.
    // - **cloudauthst** (discontinued): ID Verification Enhanced Edition.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
    // The source IP address of the visitor. You do not need to specify this parameter. The system automatically obtains the value.
    shared_ptr<string> sourceIp_ {};
    // The number of valid days after the whitelist is created.
    // 
    // This parameter is required.
    shared_ptr<int32_t> validDay_ {};
    shared_ptr<string> whitelistType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
