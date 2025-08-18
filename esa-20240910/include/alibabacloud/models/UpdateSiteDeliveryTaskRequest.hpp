// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESITEDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESITEDELIVERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSiteDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSiteDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSiteDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    UpdateSiteDeliveryTaskRequest() = default ;
    UpdateSiteDeliveryTaskRequest(const UpdateSiteDeliveryTaskRequest &) = default ;
    UpdateSiteDeliveryTaskRequest(UpdateSiteDeliveryTaskRequest &&) = default ;
    UpdateSiteDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSiteDeliveryTaskRequest() = default ;
    UpdateSiteDeliveryTaskRequest& operator=(const UpdateSiteDeliveryTaskRequest &) = default ;
    UpdateSiteDeliveryTaskRequest& operator=(UpdateSiteDeliveryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->discardRate_ != nullptr && this->fieldName_ != nullptr && this->filterVer_ != nullptr && this->siteId_ != nullptr && this->taskName_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline UpdateSiteDeliveryTaskRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // discardRate Field Functions 
    bool hasDiscardRate() const { return this->discardRate_ != nullptr;};
    void deleteDiscardRate() { this->discardRate_ = nullptr;};
    inline float discardRate() const { DARABONBA_PTR_GET_DEFAULT(discardRate_, 0.0) };
    inline UpdateSiteDeliveryTaskRequest& setDiscardRate(float discardRate) { DARABONBA_PTR_SET_VALUE(discardRate_, discardRate) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline UpdateSiteDeliveryTaskRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // filterVer Field Functions 
    bool hasFilterVer() const { return this->filterVer_ != nullptr;};
    void deleteFilterVer() { this->filterVer_ = nullptr;};
    inline string filterVer() const { DARABONBA_PTR_GET_DEFAULT(filterVer_, "") };
    inline UpdateSiteDeliveryTaskRequest& setFilterVer(string filterVer) { DARABONBA_PTR_SET_VALUE(filterVer_, filterVer) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateSiteDeliveryTaskRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateSiteDeliveryTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The log category. Valid values:
    // 
    // *   dcdn_log_access_l1 (default): access logs.
    // *   dcdn_log_er: Edge Routine logs.
    // *   dcdn_log_waf: firewall logs.
    // *   dcdn_log_ipa: TCP/UDP proxy logs.
    std::shared_ptr<string> businessType_ = nullptr;
    // The discard rate.
    std::shared_ptr<float> discardRate_ = nullptr;
    // The log fields that you want to include in real-time logs to be delivered. Separate the log fields with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> filterVer_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The name of the delivery task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
