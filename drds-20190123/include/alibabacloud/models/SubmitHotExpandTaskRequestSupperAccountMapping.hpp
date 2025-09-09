// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUESTSUPPERACCOUNTMAPPING_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUESTSUPPERACCOUNTMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitHotExpandTaskRequestSupperAccountMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotExpandTaskRequestSupperAccountMapping& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(SupperAccount, supperAccount_);
      DARABONBA_PTR_TO_JSON(SupperPassword, supperPassword_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotExpandTaskRequestSupperAccountMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(SupperAccount, supperAccount_);
      DARABONBA_PTR_FROM_JSON(SupperPassword, supperPassword_);
    };
    SubmitHotExpandTaskRequestSupperAccountMapping() = default ;
    SubmitHotExpandTaskRequestSupperAccountMapping(const SubmitHotExpandTaskRequestSupperAccountMapping &) = default ;
    SubmitHotExpandTaskRequestSupperAccountMapping(SubmitHotExpandTaskRequestSupperAccountMapping &&) = default ;
    SubmitHotExpandTaskRequestSupperAccountMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotExpandTaskRequestSupperAccountMapping() = default ;
    SubmitHotExpandTaskRequestSupperAccountMapping& operator=(const SubmitHotExpandTaskRequestSupperAccountMapping &) = default ;
    SubmitHotExpandTaskRequestSupperAccountMapping& operator=(SubmitHotExpandTaskRequestSupperAccountMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceName_ != nullptr
        && this->supperAccount_ != nullptr && this->supperPassword_ != nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SubmitHotExpandTaskRequestSupperAccountMapping& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // supperAccount Field Functions 
    bool hasSupperAccount() const { return this->supperAccount_ != nullptr;};
    void deleteSupperAccount() { this->supperAccount_ = nullptr;};
    inline string supperAccount() const { DARABONBA_PTR_GET_DEFAULT(supperAccount_, "") };
    inline SubmitHotExpandTaskRequestSupperAccountMapping& setSupperAccount(string supperAccount) { DARABONBA_PTR_SET_VALUE(supperAccount_, supperAccount) };


    // supperPassword Field Functions 
    bool hasSupperPassword() const { return this->supperPassword_ != nullptr;};
    void deleteSupperPassword() { this->supperPassword_ = nullptr;};
    inline string supperPassword() const { DARABONBA_PTR_GET_DEFAULT(supperPassword_, "") };
    inline SubmitHotExpandTaskRequestSupperAccountMapping& setSupperPassword(string supperPassword) { DARABONBA_PTR_SET_VALUE(supperPassword_, supperPassword) };


  protected:
    // The ID of the ApsaraDB RDS instance that has the privileged account.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The name of the privileged account of the ApsaraDB RDS instance.
    std::shared_ptr<string> supperAccount_ = nullptr;
    // The password of the privileged account of the ApsaraDB RDS instance.
    std::shared_ptr<string> supperPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
