// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYRESPONSEBODYBACKUPPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYRESPONSEBODYBACKUPPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateBackupPolicyResponseBodyBackupPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupPolicyResponseBodyBackupPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPolicyResponseBodyBackupPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateBackupPolicyResponseBodyBackupPolicy() = default ;
    CreateBackupPolicyResponseBodyBackupPolicy(const CreateBackupPolicyResponseBodyBackupPolicy &) = default ;
    CreateBackupPolicyResponseBodyBackupPolicy(CreateBackupPolicyResponseBodyBackupPolicy &&) = default ;
    CreateBackupPolicyResponseBodyBackupPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupPolicyResponseBodyBackupPolicy() = default ;
    CreateBackupPolicyResponseBodyBackupPolicy& operator=(const CreateBackupPolicyResponseBodyBackupPolicy &) = default ;
    CreateBackupPolicyResponseBodyBackupPolicy& operator=(CreateBackupPolicyResponseBodyBackupPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->status_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateBackupPolicyResponseBodyBackupPolicy& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateBackupPolicyResponseBodyBackupPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the anti-ransomware policy.
    std::shared_ptr<string> id_ = nullptr;
    // The status of the anti-ransomware policy. Valid values:
    // 
    // *   **enabled**
    // *   **disabled**
    // 
    // >  After you create an anti-ransomware policy, the policy is enabled by default.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
