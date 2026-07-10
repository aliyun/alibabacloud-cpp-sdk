// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeWhitelistSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhitelistSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ValidEndDate, validEndDate_);
      DARABONBA_PTR_TO_JSON(ValidStartDate, validStartDate_);
      DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhitelistSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ValidEndDate, validEndDate_);
      DARABONBA_PTR_FROM_JSON(ValidStartDate, validStartDate_);
      DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
    };
    DescribeWhitelistSettingRequest() = default ;
    DescribeWhitelistSettingRequest(const DescribeWhitelistSettingRequest &) = default ;
    DescribeWhitelistSettingRequest(DescribeWhitelistSettingRequest &&) = default ;
    DescribeWhitelistSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhitelistSettingRequest() = default ;
    DescribeWhitelistSettingRequest& operator=(const DescribeWhitelistSettingRequest &) = default ;
    DescribeWhitelistSettingRequest& operator=(DescribeWhitelistSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNo_ == nullptr
        && this->certifyId_ == nullptr && this->currentPage_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->sceneId_ == nullptr
        && this->serviceCode_ == nullptr && this->sourceIp_ == nullptr && this->status_ == nullptr && this->validEndDate_ == nullptr && this->validStartDate_ == nullptr
        && this->whitelistType_ == nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline DescribeWhitelistSettingRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeWhitelistSettingRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhitelistSettingRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWhitelistSettingRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhitelistSettingRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeWhitelistSettingRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeWhitelistSettingRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWhitelistSettingRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeWhitelistSettingRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // validEndDate Field Functions 
    bool hasValidEndDate() const { return this->validEndDate_ != nullptr;};
    void deleteValidEndDate() { this->validEndDate_ = nullptr;};
    inline int64_t getValidEndDate() const { DARABONBA_PTR_GET_DEFAULT(validEndDate_, 0L) };
    inline DescribeWhitelistSettingRequest& setValidEndDate(int64_t validEndDate) { DARABONBA_PTR_SET_VALUE(validEndDate_, validEndDate) };


    // validStartDate Field Functions 
    bool hasValidStartDate() const { return this->validStartDate_ != nullptr;};
    void deleteValidStartDate() { this->validStartDate_ = nullptr;};
    inline int64_t getValidStartDate() const { DARABONBA_PTR_GET_DEFAULT(validStartDate_, 0L) };
    inline DescribeWhitelistSettingRequest& setValidStartDate(int64_t validStartDate) { DARABONBA_PTR_SET_VALUE(validStartDate_, validStartDate) };


    // whitelistType Field Functions 
    bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
    void deleteWhitelistType() { this->whitelistType_ = nullptr;};
    inline string getWhitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
    inline DescribeWhitelistSettingRequest& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


  protected:
    // The ID card number.
    shared_ptr<string> certNo_ {};
    // The certification ID.
    shared_ptr<string> certifyId_ {};
    // The current page number. Default value: 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The language of the query result. Valid values:
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The number of entries per page in a paged query.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The scene ID.
    shared_ptr<int64_t> sceneId_ {};
    // The service code. Valid values:
    // - **cloudauthst**: enhanced financial-grade edition.
    // - **antcloudauth**: financial-grade edition.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
    // The source IP address of the visitor.
    shared_ptr<string> sourceIp_ {};
    // The whitelist status. Valid values:
    // - **VALID**: valid.
    // - **INVALID**: invalid.
    // - **DELETED**: deleted.
    shared_ptr<string> status_ {};
    // The end time of the validity period.
    shared_ptr<int64_t> validEndDate_ {};
    // The start time of the validity period. The value is a UNIX timestamp in seconds.
    shared_ptr<int64_t> validStartDate_ {};
    shared_ptr<string> whitelistType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
