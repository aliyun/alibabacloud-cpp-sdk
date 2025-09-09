// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKGTMRECOVERYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKGTMRECOVERYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class RollbackGtmRecoveryPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackGtmRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RecoveryPlanId, recoveryPlanId_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackGtmRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RecoveryPlanId, recoveryPlanId_);
    };
    RollbackGtmRecoveryPlanRequest() = default ;
    RollbackGtmRecoveryPlanRequest(const RollbackGtmRecoveryPlanRequest &) = default ;
    RollbackGtmRecoveryPlanRequest(RollbackGtmRecoveryPlanRequest &&) = default ;
    RollbackGtmRecoveryPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackGtmRecoveryPlanRequest() = default ;
    RollbackGtmRecoveryPlanRequest& operator=(const RollbackGtmRecoveryPlanRequest &) = default ;
    RollbackGtmRecoveryPlanRequest& operator=(RollbackGtmRecoveryPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->recoveryPlanId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RollbackGtmRecoveryPlanRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // recoveryPlanId Field Functions 
    bool hasRecoveryPlanId() const { return this->recoveryPlanId_ != nullptr;};
    void deleteRecoveryPlanId() { this->recoveryPlanId_ = nullptr;};
    inline int64_t recoveryPlanId() const { DARABONBA_PTR_GET_DEFAULT(recoveryPlanId_, 0L) };
    inline RollbackGtmRecoveryPlanRequest& setRecoveryPlanId(int64_t recoveryPlanId) { DARABONBA_PTR_SET_VALUE(recoveryPlanId_, recoveryPlanId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the disaster recovery plan.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> recoveryPlanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
