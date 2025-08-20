// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDPCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIDPCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetIdpConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdpConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GetGroupUrl, getGroupUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdpMetadata, idpMetadata_);
      DARABONBA_PTR_TO_JSON(MfaConfigType, mfaConfigType_);
      DARABONBA_PTR_TO_JSON(MobileLoginType, mobileLoginType_);
      DARABONBA_PTR_TO_JSON(MobileMfaConfigType, mobileMfaConfigType_);
      DARABONBA_PTR_TO_JSON(MultiIdpInfo, multiIdpInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PcLoginType, pcLoginType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VerifyAesKey, verifyAesKey_);
      DARABONBA_PTR_TO_JSON(VerifyToken, verifyToken_);
      DARABONBA_PTR_TO_JSON(VerifyUrl, verifyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdpConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GetGroupUrl, getGroupUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdpMetadata, idpMetadata_);
      DARABONBA_PTR_FROM_JSON(MfaConfigType, mfaConfigType_);
      DARABONBA_PTR_FROM_JSON(MobileLoginType, mobileLoginType_);
      DARABONBA_PTR_FROM_JSON(MobileMfaConfigType, mobileMfaConfigType_);
      DARABONBA_PTR_FROM_JSON(MultiIdpInfo, multiIdpInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PcLoginType, pcLoginType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VerifyAesKey, verifyAesKey_);
      DARABONBA_PTR_FROM_JSON(VerifyToken, verifyToken_);
      DARABONBA_PTR_FROM_JSON(VerifyUrl, verifyUrl_);
    };
    GetIdpConfigResponseBodyData() = default ;
    GetIdpConfigResponseBodyData(const GetIdpConfigResponseBodyData &) = default ;
    GetIdpConfigResponseBodyData(GetIdpConfigResponseBodyData &&) = default ;
    GetIdpConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdpConfigResponseBodyData() = default ;
    GetIdpConfigResponseBodyData& operator=(const GetIdpConfigResponseBodyData &) = default ;
    GetIdpConfigResponseBodyData& operator=(GetIdpConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->accessKeySecret_ != nullptr && this->description_ != nullptr && this->getGroupUrl_ != nullptr && this->id_ != nullptr && this->idpMetadata_ != nullptr
        && this->mfaConfigType_ != nullptr && this->mobileLoginType_ != nullptr && this->mobileMfaConfigType_ != nullptr && this->multiIdpInfo_ != nullptr && this->name_ != nullptr
        && this->pcLoginType_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr && this->verifyAesKey_ != nullptr
        && this->verifyToken_ != nullptr && this->verifyUrl_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline GetIdpConfigResponseBodyData& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline GetIdpConfigResponseBodyData& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetIdpConfigResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // getGroupUrl Field Functions 
    bool hasGetGroupUrl() const { return this->getGroupUrl_ != nullptr;};
    void deleteGetGroupUrl() { this->getGroupUrl_ = nullptr;};
    inline string getGroupUrl() const { DARABONBA_PTR_GET_DEFAULT(getGroupUrl_, "") };
    inline GetIdpConfigResponseBodyData& setGetGroupUrl(string getGroupUrl) { DARABONBA_PTR_SET_VALUE(getGroupUrl_, getGroupUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetIdpConfigResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idpMetadata Field Functions 
    bool hasIdpMetadata() const { return this->idpMetadata_ != nullptr;};
    void deleteIdpMetadata() { this->idpMetadata_ = nullptr;};
    inline string idpMetadata() const { DARABONBA_PTR_GET_DEFAULT(idpMetadata_, "") };
    inline GetIdpConfigResponseBodyData& setIdpMetadata(string idpMetadata) { DARABONBA_PTR_SET_VALUE(idpMetadata_, idpMetadata) };


    // mfaConfigType Field Functions 
    bool hasMfaConfigType() const { return this->mfaConfigType_ != nullptr;};
    void deleteMfaConfigType() { this->mfaConfigType_ = nullptr;};
    inline string mfaConfigType() const { DARABONBA_PTR_GET_DEFAULT(mfaConfigType_, "") };
    inline GetIdpConfigResponseBodyData& setMfaConfigType(string mfaConfigType) { DARABONBA_PTR_SET_VALUE(mfaConfigType_, mfaConfigType) };


    // mobileLoginType Field Functions 
    bool hasMobileLoginType() const { return this->mobileLoginType_ != nullptr;};
    void deleteMobileLoginType() { this->mobileLoginType_ = nullptr;};
    inline string mobileLoginType() const { DARABONBA_PTR_GET_DEFAULT(mobileLoginType_, "") };
    inline GetIdpConfigResponseBodyData& setMobileLoginType(string mobileLoginType) { DARABONBA_PTR_SET_VALUE(mobileLoginType_, mobileLoginType) };


    // mobileMfaConfigType Field Functions 
    bool hasMobileMfaConfigType() const { return this->mobileMfaConfigType_ != nullptr;};
    void deleteMobileMfaConfigType() { this->mobileMfaConfigType_ = nullptr;};
    inline string mobileMfaConfigType() const { DARABONBA_PTR_GET_DEFAULT(mobileMfaConfigType_, "") };
    inline GetIdpConfigResponseBodyData& setMobileMfaConfigType(string mobileMfaConfigType) { DARABONBA_PTR_SET_VALUE(mobileMfaConfigType_, mobileMfaConfigType) };


    // multiIdpInfo Field Functions 
    bool hasMultiIdpInfo() const { return this->multiIdpInfo_ != nullptr;};
    void deleteMultiIdpInfo() { this->multiIdpInfo_ = nullptr;};
    inline string multiIdpInfo() const { DARABONBA_PTR_GET_DEFAULT(multiIdpInfo_, "") };
    inline GetIdpConfigResponseBodyData& setMultiIdpInfo(string multiIdpInfo) { DARABONBA_PTR_SET_VALUE(multiIdpInfo_, multiIdpInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetIdpConfigResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pcLoginType Field Functions 
    bool hasPcLoginType() const { return this->pcLoginType_ != nullptr;};
    void deletePcLoginType() { this->pcLoginType_ = nullptr;};
    inline string pcLoginType() const { DARABONBA_PTR_GET_DEFAULT(pcLoginType_, "") };
    inline GetIdpConfigResponseBodyData& setPcLoginType(string pcLoginType) { DARABONBA_PTR_SET_VALUE(pcLoginType_, pcLoginType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetIdpConfigResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetIdpConfigResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetIdpConfigResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // verifyAesKey Field Functions 
    bool hasVerifyAesKey() const { return this->verifyAesKey_ != nullptr;};
    void deleteVerifyAesKey() { this->verifyAesKey_ = nullptr;};
    inline string verifyAesKey() const { DARABONBA_PTR_GET_DEFAULT(verifyAesKey_, "") };
    inline GetIdpConfigResponseBodyData& setVerifyAesKey(string verifyAesKey) { DARABONBA_PTR_SET_VALUE(verifyAesKey_, verifyAesKey) };


    // verifyToken Field Functions 
    bool hasVerifyToken() const { return this->verifyToken_ != nullptr;};
    void deleteVerifyToken() { this->verifyToken_ = nullptr;};
    inline string verifyToken() const { DARABONBA_PTR_GET_DEFAULT(verifyToken_, "") };
    inline GetIdpConfigResponseBodyData& setVerifyToken(string verifyToken) { DARABONBA_PTR_SET_VALUE(verifyToken_, verifyToken) };


    // verifyUrl Field Functions 
    bool hasVerifyUrl() const { return this->verifyUrl_ != nullptr;};
    void deleteVerifyUrl() { this->verifyUrl_ = nullptr;};
    inline string verifyUrl() const { DARABONBA_PTR_GET_DEFAULT(verifyUrl_, "") };
    inline GetIdpConfigResponseBodyData& setVerifyUrl(string verifyUrl) { DARABONBA_PTR_SET_VALUE(verifyUrl_, verifyUrl) };


  protected:
    // AccessKey ID
    std::shared_ptr<string> accessKey_ = nullptr;
    // AccessKey Secret
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> getGroupUrl_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> idpMetadata_ = nullptr;
    std::shared_ptr<string> mfaConfigType_ = nullptr;
    std::shared_ptr<string> mobileLoginType_ = nullptr;
    std::shared_ptr<string> mobileMfaConfigType_ = nullptr;
    std::shared_ptr<string> multiIdpInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> pcLoginType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> verifyAesKey_ = nullptr;
    std::shared_ptr<string> verifyToken_ = nullptr;
    std::shared_ptr<string> verifyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
