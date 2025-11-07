// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTWHITELISTSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTWHITELISTSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class InsertWhiteListSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertWhiteListSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ValidDay, validDay_);
    };
    friend void from_json(const Darabonba::Json& j, InsertWhiteListSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ValidDay, validDay_);
    };
    InsertWhiteListSettingRequest() = default ;
    InsertWhiteListSettingRequest(const InsertWhiteListSettingRequest &) = default ;
    InsertWhiteListSettingRequest(InsertWhiteListSettingRequest &&) = default ;
    InsertWhiteListSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertWhiteListSettingRequest() = default ;
    InsertWhiteListSettingRequest& operator=(const InsertWhiteListSettingRequest &) = default ;
    InsertWhiteListSettingRequest& operator=(InsertWhiteListSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNo_ == nullptr
        && return this->certifyId_ == nullptr && return this->remark_ == nullptr && return this->sceneId_ == nullptr && return this->serviceCode_ == nullptr && return this->validDay_ == nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline InsertWhiteListSettingRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline InsertWhiteListSettingRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline InsertWhiteListSettingRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline InsertWhiteListSettingRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline InsertWhiteListSettingRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // validDay Field Functions 
    bool hasValidDay() const { return this->validDay_ != nullptr;};
    void deleteValidDay() { this->validDay_ = nullptr;};
    inline int32_t validDay() const { DARABONBA_PTR_GET_DEFAULT(validDay_, 0) };
    inline InsertWhiteListSettingRequest& setValidDay(int32_t validDay) { DARABONBA_PTR_SET_VALUE(validDay_, validDay) };


  protected:
    // ID number.
    std::shared_ptr<string> certNo_ = nullptr;
    // Unique identifier for real person authentication.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Remark, with a length less than 32 characters.
    std::shared_ptr<string> remark_ = nullptr;
    // Authentication scene ID. This ID is automatically generated after creating an authentication scene in the console. For instructions on how to create an authentication scene, see Adding an Authentication Scene.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // ServiceCode for the real person cloud product, value: **antcloudauth**.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Whitelist validity period in days (only supports 3, 7, 30).
    std::shared_ptr<int32_t> validDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
