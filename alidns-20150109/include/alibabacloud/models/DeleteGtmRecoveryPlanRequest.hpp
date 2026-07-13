// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGTMRECOVERYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGTMRECOVERYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DeleteGtmRecoveryPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGtmRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RecoveryPlanId, recoveryPlanId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGtmRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RecoveryPlanId, recoveryPlanId_);
    };
    DeleteGtmRecoveryPlanRequest() = default ;
    DeleteGtmRecoveryPlanRequest(const DeleteGtmRecoveryPlanRequest &) = default ;
    DeleteGtmRecoveryPlanRequest(DeleteGtmRecoveryPlanRequest &&) = default ;
    DeleteGtmRecoveryPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGtmRecoveryPlanRequest() = default ;
    DeleteGtmRecoveryPlanRequest& operator=(const DeleteGtmRecoveryPlanRequest &) = default ;
    DeleteGtmRecoveryPlanRequest& operator=(DeleteGtmRecoveryPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->recoveryPlanId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteGtmRecoveryPlanRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // recoveryPlanId Field Functions 
    bool hasRecoveryPlanId() const { return this->recoveryPlanId_ != nullptr;};
    void deleteRecoveryPlanId() { this->recoveryPlanId_ = nullptr;};
    inline int64_t getRecoveryPlanId() const { DARABONBA_PTR_GET_DEFAULT(recoveryPlanId_, 0L) };
    inline DeleteGtmRecoveryPlanRequest& setRecoveryPlanId(int64_t recoveryPlanId) { DARABONBA_PTR_SET_VALUE(recoveryPlanId_, recoveryPlanId) };


  protected:
    // The language of the response. The default value is **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the disaster recovery plan.<props="intl"> To obtain the ID, call [DescribeGtmRecoveryPlans](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describegtmrecoveryplans?spm=a2c63.p38356.help-menu-search-29697.d_0).
    // 
    // This parameter is required.
    shared_ptr<int64_t> recoveryPlanId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
