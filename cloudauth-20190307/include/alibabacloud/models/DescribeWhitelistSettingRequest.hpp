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
        && return this->certifyId_ == nullptr && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->sceneId_ == nullptr
        && return this->serviceCode_ == nullptr && return this->sourceIp_ == nullptr && return this->status_ == nullptr && return this->validEndDate_ == nullptr && return this->validStartDate_ == nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline DescribeWhitelistSettingRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeWhitelistSettingRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhitelistSettingRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWhitelistSettingRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhitelistSettingRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeWhitelistSettingRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeWhitelistSettingRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWhitelistSettingRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeWhitelistSettingRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // validEndDate Field Functions 
    bool hasValidEndDate() const { return this->validEndDate_ != nullptr;};
    void deleteValidEndDate() { this->validEndDate_ = nullptr;};
    inline int64_t validEndDate() const { DARABONBA_PTR_GET_DEFAULT(validEndDate_, 0L) };
    inline DescribeWhitelistSettingRequest& setValidEndDate(int64_t validEndDate) { DARABONBA_PTR_SET_VALUE(validEndDate_, validEndDate) };


    // validStartDate Field Functions 
    bool hasValidStartDate() const { return this->validStartDate_ != nullptr;};
    void deleteValidStartDate() { this->validStartDate_ = nullptr;};
    inline int64_t validStartDate() const { DARABONBA_PTR_GET_DEFAULT(validStartDate_, 0L) };
    inline DescribeWhitelistSettingRequest& setValidStartDate(int64_t validStartDate) { DARABONBA_PTR_SET_VALUE(validStartDate_, validStartDate) };


  protected:
    // ID Number
    std::shared_ptr<string> certNo_ = nullptr;
    // Certification ID
    std::shared_ptr<string> certifyId_ = nullptr;
    // Pagination parameter: current page number, default value is 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specify the language to query. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Number of items per page for pagination.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Scene ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Service Code:
    // - **Enhanced Financial Grade**: cloudauthst
    // - **Financial Grade**: antcloudauth
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Visitor\\"s source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // Whitelist status:
    // - **VALID**: Valid
    // - **INVALID**: Invalid
    // - **DELETED**: Deleted
    std::shared_ptr<string> status_ = nullptr;
    // Expiration date.
    std::shared_ptr<int64_t> validEndDate_ = nullptr;
    // Effective start time (in seconds timestamp).
    std::shared_ptr<int64_t> validStartDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
