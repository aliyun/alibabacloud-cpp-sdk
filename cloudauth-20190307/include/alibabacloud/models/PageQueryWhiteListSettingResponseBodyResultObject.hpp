// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEQUERYWHITELISTSETTINGRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_PAGEQUERYWHITELISTSETTINGRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class PageQueryWhiteListSettingResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageQueryWhiteListSettingResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ValidEndDate, validEndDate_);
      DARABONBA_PTR_TO_JSON(ValidStartDate, validStartDate_);
    };
    friend void from_json(const Darabonba::Json& j, PageQueryWhiteListSettingResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ValidEndDate, validEndDate_);
      DARABONBA_PTR_FROM_JSON(ValidStartDate, validStartDate_);
    };
    PageQueryWhiteListSettingResponseBodyResultObject() = default ;
    PageQueryWhiteListSettingResponseBodyResultObject(const PageQueryWhiteListSettingResponseBodyResultObject &) = default ;
    PageQueryWhiteListSettingResponseBodyResultObject(PageQueryWhiteListSettingResponseBodyResultObject &&) = default ;
    PageQueryWhiteListSettingResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageQueryWhiteListSettingResponseBodyResultObject() = default ;
    PageQueryWhiteListSettingResponseBodyResultObject& operator=(const PageQueryWhiteListSettingResponseBodyResultObject &) = default ;
    PageQueryWhiteListSettingResponseBodyResultObject& operator=(PageQueryWhiteListSettingResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNo_ == nullptr
        && return this->certifyId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->remark_ == nullptr
        && return this->sceneId_ == nullptr && return this->serviceCode_ == nullptr && return this->status_ == nullptr && return this->validEndDate_ == nullptr && return this->validStartDate_ == nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // validEndDate Field Functions 
    bool hasValidEndDate() const { return this->validEndDate_ != nullptr;};
    void deleteValidEndDate() { this->validEndDate_ = nullptr;};
    inline string validEndDate() const { DARABONBA_PTR_GET_DEFAULT(validEndDate_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setValidEndDate(string validEndDate) { DARABONBA_PTR_SET_VALUE(validEndDate_, validEndDate) };


    // validStartDate Field Functions 
    bool hasValidStartDate() const { return this->validStartDate_ != nullptr;};
    void deleteValidStartDate() { this->validStartDate_ = nullptr;};
    inline string validStartDate() const { DARABONBA_PTR_GET_DEFAULT(validStartDate_, "") };
    inline PageQueryWhiteListSettingResponseBodyResultObject& setValidStartDate(string validStartDate) { DARABONBA_PTR_SET_VALUE(validStartDate_, validStartDate) };


  protected:
    // ID number.
    std::shared_ptr<string> certNo_ = nullptr;
    // Unique identifier for real person authentication.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Whitelist ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Remark information.
    std::shared_ptr<string> remark_ = nullptr;
    // Authentication scene ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // ServiceCode of the real person cloud product
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Status:
    // 
    // - DELETE: Deleted
    // - VALID: Not deleted and within the validity period, valid
    // - INVALID: Not deleted but outside the validity period, invalid
    std::shared_ptr<string> status_ = nullptr;
    // End date of validity
    std::shared_ptr<string> validEndDate_ = nullptr;
    // Start date of validity
    std::shared_ptr<string> validStartDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
