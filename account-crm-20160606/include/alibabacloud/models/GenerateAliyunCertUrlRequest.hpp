// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEALIYUNCERTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEALIYUNCERTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GenerateAliyunCertUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAliyunCertUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ApplyChannel, applyChannel_);
      DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(CertWay, certWay_);
      DARABONBA_PTR_TO_JSON(IgnoreAlreadyCert, ignoreAlreadyCert_);
      DARABONBA_PTR_TO_JSON(IsMobile, isMobile_);
      DARABONBA_PTR_TO_JSON(IsOpenApp, isOpenApp_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SubjectType, subjectType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAliyunCertUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ApplyChannel, applyChannel_);
      DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(CertWay, certWay_);
      DARABONBA_PTR_FROM_JSON(IgnoreAlreadyCert, ignoreAlreadyCert_);
      DARABONBA_PTR_FROM_JSON(IsMobile, isMobile_);
      DARABONBA_PTR_FROM_JSON(IsOpenApp, isOpenApp_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SubjectType, subjectType_);
    };
    GenerateAliyunCertUrlRequest() = default ;
    GenerateAliyunCertUrlRequest(const GenerateAliyunCertUrlRequest &) = default ;
    GenerateAliyunCertUrlRequest(GenerateAliyunCertUrlRequest &&) = default ;
    GenerateAliyunCertUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAliyunCertUrlRequest() = default ;
    GenerateAliyunCertUrlRequest& operator=(const GenerateAliyunCertUrlRequest &) = default ;
    GenerateAliyunCertUrlRequest& operator=(GenerateAliyunCertUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && this->appName_ == nullptr && this->applyChannel_ == nullptr && this->applyType_ == nullptr && this->callback_ == nullptr && this->certWay_ == nullptr
        && this->ignoreAlreadyCert_ == nullptr && this->isMobile_ == nullptr && this->isOpenApp_ == nullptr && this->platform_ == nullptr && this->source_ == nullptr
        && this->subjectType_ == nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string getAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline GenerateAliyunCertUrlRequest& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GenerateAliyunCertUrlRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // applyChannel Field Functions 
    bool hasApplyChannel() const { return this->applyChannel_ != nullptr;};
    void deleteApplyChannel() { this->applyChannel_ = nullptr;};
    inline string getApplyChannel() const { DARABONBA_PTR_GET_DEFAULT(applyChannel_, "") };
    inline GenerateAliyunCertUrlRequest& setApplyChannel(string applyChannel) { DARABONBA_PTR_SET_VALUE(applyChannel_, applyChannel) };


    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline GenerateAliyunCertUrlRequest& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline GenerateAliyunCertUrlRequest& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // certWay Field Functions 
    bool hasCertWay() const { return this->certWay_ != nullptr;};
    void deleteCertWay() { this->certWay_ = nullptr;};
    inline string getCertWay() const { DARABONBA_PTR_GET_DEFAULT(certWay_, "") };
    inline GenerateAliyunCertUrlRequest& setCertWay(string certWay) { DARABONBA_PTR_SET_VALUE(certWay_, certWay) };


    // ignoreAlreadyCert Field Functions 
    bool hasIgnoreAlreadyCert() const { return this->ignoreAlreadyCert_ != nullptr;};
    void deleteIgnoreAlreadyCert() { this->ignoreAlreadyCert_ = nullptr;};
    inline bool getIgnoreAlreadyCert() const { DARABONBA_PTR_GET_DEFAULT(ignoreAlreadyCert_, false) };
    inline GenerateAliyunCertUrlRequest& setIgnoreAlreadyCert(bool ignoreAlreadyCert) { DARABONBA_PTR_SET_VALUE(ignoreAlreadyCert_, ignoreAlreadyCert) };


    // isMobile Field Functions 
    bool hasIsMobile() const { return this->isMobile_ != nullptr;};
    void deleteIsMobile() { this->isMobile_ = nullptr;};
    inline bool getIsMobile() const { DARABONBA_PTR_GET_DEFAULT(isMobile_, false) };
    inline GenerateAliyunCertUrlRequest& setIsMobile(bool isMobile) { DARABONBA_PTR_SET_VALUE(isMobile_, isMobile) };


    // isOpenApp Field Functions 
    bool hasIsOpenApp() const { return this->isOpenApp_ != nullptr;};
    void deleteIsOpenApp() { this->isOpenApp_ = nullptr;};
    inline bool getIsOpenApp() const { DARABONBA_PTR_GET_DEFAULT(isOpenApp_, false) };
    inline GenerateAliyunCertUrlRequest& setIsOpenApp(bool isOpenApp) { DARABONBA_PTR_SET_VALUE(isOpenApp_, isOpenApp) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GenerateAliyunCertUrlRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GenerateAliyunCertUrlRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // subjectType Field Functions 
    bool hasSubjectType() const { return this->subjectType_ != nullptr;};
    void deleteSubjectType() { this->subjectType_ = nullptr;};
    inline string getSubjectType() const { DARABONBA_PTR_GET_DEFAULT(subjectType_, "") };
    inline GenerateAliyunCertUrlRequest& setSubjectType(string subjectType) { DARABONBA_PTR_SET_VALUE(subjectType_, subjectType) };


  protected:
    // This parameter is required.
    shared_ptr<string> aliyunPk_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<string> applyChannel_ {};
    shared_ptr<string> applyType_ {};
    shared_ptr<string> callback_ {};
    shared_ptr<string> certWay_ {};
    shared_ptr<bool> ignoreAlreadyCert_ {};
    shared_ptr<bool> isMobile_ {};
    shared_ptr<bool> isOpenApp_ {};
    // This parameter is required.
    shared_ptr<string> platform_ {};
    // This parameter is required.
    shared_ptr<string> source_ {};
    // This parameter is required.
    shared_ptr<string> subjectType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
