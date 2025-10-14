// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGTMRECOVERYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGTMRECOVERYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddGtmRecoveryPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGtmRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FaultAddrPool, faultAddrPool_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, AddGtmRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FaultAddrPool, faultAddrPool_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    AddGtmRecoveryPlanRequest() = default ;
    AddGtmRecoveryPlanRequest(const AddGtmRecoveryPlanRequest &) = default ;
    AddGtmRecoveryPlanRequest(AddGtmRecoveryPlanRequest &&) = default ;
    AddGtmRecoveryPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGtmRecoveryPlanRequest() = default ;
    AddGtmRecoveryPlanRequest& operator=(const AddGtmRecoveryPlanRequest &) = default ;
    AddGtmRecoveryPlanRequest& operator=(AddGtmRecoveryPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faultAddrPool_ == nullptr
        && return this->lang_ == nullptr && return this->name_ == nullptr && return this->remark_ == nullptr; };
    // faultAddrPool Field Functions 
    bool hasFaultAddrPool() const { return this->faultAddrPool_ != nullptr;};
    void deleteFaultAddrPool() { this->faultAddrPool_ = nullptr;};
    inline string faultAddrPool() const { DARABONBA_PTR_GET_DEFAULT(faultAddrPool_, "") };
    inline AddGtmRecoveryPlanRequest& setFaultAddrPool(string faultAddrPool) { DARABONBA_PTR_SET_VALUE(faultAddrPool_, faultAddrPool) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddGtmRecoveryPlanRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGtmRecoveryPlanRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddGtmRecoveryPlanRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The IDs of faulty address pools.
    // 
    // This parameter is required.
    std::shared_ptr<string> faultAddrPool_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the disaster recovery plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The description of the disaster recovery plan.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
