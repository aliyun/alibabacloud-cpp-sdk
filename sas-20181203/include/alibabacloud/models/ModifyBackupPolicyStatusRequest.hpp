// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyBackupPolicyStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyBackupPolicyStatusRequest() = default ;
    ModifyBackupPolicyStatusRequest(const ModifyBackupPolicyStatusRequest &) = default ;
    ModifyBackupPolicyStatusRequest(ModifyBackupPolicyStatusRequest &&) = default ;
    ModifyBackupPolicyStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyStatusRequest() = default ;
    ModifyBackupPolicyStatusRequest& operator=(const ModifyBackupPolicyStatusRequest &) = default ;
    ModifyBackupPolicyStatusRequest& operator=(ModifyBackupPolicyStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->policyVersion_ != nullptr && this->status_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyBackupPolicyStatusRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string policyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline ModifyBackupPolicyStatusRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyBackupPolicyStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the anti-ransomware policy.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The version of the anti-ransomware policy. Set the value to **2.0.0**.
    std::shared_ptr<string> policyVersion_ = nullptr;
    // Specifies whether to enable or disable the anti-ransomware policy. Valid values:
    // 
    // *   **enabled**: enables the anti-ransomware policy. After you enable the anti-ransomware policy, the anti-ransomware feature protects data on your servers. Data on your servers is backed up based on the policy.
    // *   **disabled**: disables the anti-ransomware policy. After you disable the anti-ransomware policy, the data backup task that is running based on the policy stops.
    // 
    // >  When the system runs data backup tasks, your network bandwidth is consumed. We recommend that you enable the anti-ransomware policy during peak-off hours to back up data.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
