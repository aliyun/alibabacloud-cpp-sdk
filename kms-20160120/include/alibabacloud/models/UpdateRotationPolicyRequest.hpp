// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROTATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROTATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateRotationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRotationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRotationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
    };
    UpdateRotationPolicyRequest() = default ;
    UpdateRotationPolicyRequest(const UpdateRotationPolicyRequest &) = default ;
    UpdateRotationPolicyRequest(UpdateRotationPolicyRequest &&) = default ;
    UpdateRotationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRotationPolicyRequest() = default ;
    UpdateRotationPolicyRequest& operator=(const UpdateRotationPolicyRequest &) = default ;
    UpdateRotationPolicyRequest& operator=(UpdateRotationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAutomaticRotation_ == nullptr
        && return this->keyId_ == nullptr && return this->rotationInterval_ == nullptr; };
    // enableAutomaticRotation Field Functions 
    bool hasEnableAutomaticRotation() const { return this->enableAutomaticRotation_ != nullptr;};
    void deleteEnableAutomaticRotation() { this->enableAutomaticRotation_ = nullptr;};
    inline bool enableAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(enableAutomaticRotation_, false) };
    inline UpdateRotationPolicyRequest& setEnableAutomaticRotation(bool enableAutomaticRotation) { DARABONBA_PTR_SET_VALUE(enableAutomaticRotation_, enableAutomaticRotation) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline UpdateRotationPolicyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline UpdateRotationPolicyRequest& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


  protected:
    // Specifies whether to enable automatic key rotation. Valid values:
    // 
    // *   true: enables automatic key rotation.
    // *   false: disables automatic key rotation.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableAutomaticRotation_ = nullptr;
    // The ID of the customer master key (CMK). The ID must be globally unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
    // The period of automatic key rotation. Specify the value in the integer[unit] format. The following units are supported: d (day), h (hour), m (minute), and s (second). For example, you can use either 7d or 604800s to specify a seven-day period. The period can range from 7 days to 730 days.
    // 
    // >  If you set the EnableAutomaticRotation parameter to true, you must also specify this parameter. If you set the EnableAutomaticRotation parameter to false, you can leave this parameter unspecified.
    std::shared_ptr<string> rotationInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
