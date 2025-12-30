// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class PreviewGtmRecoveryPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewGtmRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecoveryPlanId, recoveryPlanId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewGtmRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecoveryPlanId, recoveryPlanId_);
    };
    PreviewGtmRecoveryPlanRequest() = default ;
    PreviewGtmRecoveryPlanRequest(const PreviewGtmRecoveryPlanRequest &) = default ;
    PreviewGtmRecoveryPlanRequest(PreviewGtmRecoveryPlanRequest &&) = default ;
    PreviewGtmRecoveryPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewGtmRecoveryPlanRequest() = default ;
    PreviewGtmRecoveryPlanRequest& operator=(const PreviewGtmRecoveryPlanRequest &) = default ;
    PreviewGtmRecoveryPlanRequest& operator=(PreviewGtmRecoveryPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->recoveryPlanId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PreviewGtmRecoveryPlanRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline PreviewGtmRecoveryPlanRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PreviewGtmRecoveryPlanRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recoveryPlanId Field Functions 
    bool hasRecoveryPlanId() const { return this->recoveryPlanId_ != nullptr;};
    void deleteRecoveryPlanId() { this->recoveryPlanId_ = nullptr;};
    inline int64_t getRecoveryPlanId() const { DARABONBA_PTR_GET_DEFAULT(recoveryPlanId_, 0L) };
    inline PreviewGtmRecoveryPlanRequest& setRecoveryPlanId(int64_t recoveryPlanId) { DARABONBA_PTR_SET_VALUE(recoveryPlanId_, recoveryPlanId) };


  protected:
    // The language used by the user.
    shared_ptr<string> lang_ {};
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on per page. Maximum value: **20**. Default value: **5**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the disaster recovery plan that you want to preview.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recoveryPlanId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
