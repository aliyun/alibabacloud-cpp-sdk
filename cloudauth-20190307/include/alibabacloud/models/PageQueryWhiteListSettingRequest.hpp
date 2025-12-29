// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEQUERYWHITELISTSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAGEQUERYWHITELISTSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class PageQueryWhiteListSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageQueryWhiteListSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ValidEndDate, validEndDate_);
      DARABONBA_PTR_TO_JSON(ValidStartDate, validStartDate_);
    };
    friend void from_json(const Darabonba::Json& j, PageQueryWhiteListSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ValidEndDate, validEndDate_);
      DARABONBA_PTR_FROM_JSON(ValidStartDate, validStartDate_);
    };
    PageQueryWhiteListSettingRequest() = default ;
    PageQueryWhiteListSettingRequest(const PageQueryWhiteListSettingRequest &) = default ;
    PageQueryWhiteListSettingRequest(PageQueryWhiteListSettingRequest &&) = default ;
    PageQueryWhiteListSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageQueryWhiteListSettingRequest() = default ;
    PageQueryWhiteListSettingRequest& operator=(const PageQueryWhiteListSettingRequest &) = default ;
    PageQueryWhiteListSettingRequest& operator=(PageQueryWhiteListSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNo_ == nullptr
        && this->certifyId_ == nullptr && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->sceneId_ == nullptr && this->serviceCode_ == nullptr
        && this->status_ == nullptr && this->validEndDate_ == nullptr && this->validStartDate_ == nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline PageQueryWhiteListSettingRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline PageQueryWhiteListSettingRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline PageQueryWhiteListSettingRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PageQueryWhiteListSettingRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline PageQueryWhiteListSettingRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline PageQueryWhiteListSettingRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PageQueryWhiteListSettingRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // validEndDate Field Functions 
    bool hasValidEndDate() const { return this->validEndDate_ != nullptr;};
    void deleteValidEndDate() { this->validEndDate_ = nullptr;};
    inline string getValidEndDate() const { DARABONBA_PTR_GET_DEFAULT(validEndDate_, "") };
    inline PageQueryWhiteListSettingRequest& setValidEndDate(string validEndDate) { DARABONBA_PTR_SET_VALUE(validEndDate_, validEndDate) };


    // validStartDate Field Functions 
    bool hasValidStartDate() const { return this->validStartDate_ != nullptr;};
    void deleteValidStartDate() { this->validStartDate_ = nullptr;};
    inline string getValidStartDate() const { DARABONBA_PTR_GET_DEFAULT(validStartDate_, "") };
    inline PageQueryWhiteListSettingRequest& setValidStartDate(string validStartDate) { DARABONBA_PTR_SET_VALUE(validStartDate_, validStartDate) };


  protected:
    // ID number.
    shared_ptr<string> certNo_ {};
    // Unique identifier for real person authentication.
    shared_ptr<string> certifyId_ {};
    // Current page number, default is 1.
    shared_ptr<int32_t> currentPage_ {};
    // Number of items per page, default is 10
    shared_ptr<int32_t> pageSize_ {};
    // Authentication scene ID. This ID is automatically generated after creating an authentication scene in the console. For how to create an authentication scene, see Adding an Authentication Scene.
    shared_ptr<int64_t> sceneId_ {};
    // ServiceCode of the real person cloud product, value: **antcloudauth**.
    shared_ptr<string> serviceCode_ {};
    // Status:
    // 
    // - DELETE: Deleted
    // - VALID: Not deleted and within the validity period, valid
    // - INVALID: Not deleted but outside the validity period, invalid
    shared_ptr<string> status_ {};
    // End date of validity (timestamp in milliseconds)
    shared_ptr<string> validEndDate_ {};
    // Start date of validity (timestamp in milliseconds)
    shared_ptr<string> validStartDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
