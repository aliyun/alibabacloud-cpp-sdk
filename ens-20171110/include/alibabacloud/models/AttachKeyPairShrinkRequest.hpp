// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHKEYPAIRSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHKEYPAIRSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AttachKeyPairShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachKeyPairShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
    };
    friend void from_json(const Darabonba::Json& j, AttachKeyPairShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
    };
    AttachKeyPairShrinkRequest() = default ;
    AttachKeyPairShrinkRequest(const AttachKeyPairShrinkRequest &) = default ;
    AttachKeyPairShrinkRequest(AttachKeyPairShrinkRequest &&) = default ;
    AttachKeyPairShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachKeyPairShrinkRequest() = default ;
    AttachKeyPairShrinkRequest& operator=(const AttachKeyPairShrinkRequest &) = default ;
    AttachKeyPairShrinkRequest& operator=(AttachKeyPairShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr
        && this->keyPairId_ == nullptr && this->keyPairName_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline AttachKeyPairShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline AttachKeyPairShrinkRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline AttachKeyPairShrinkRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


  protected:
    // The instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
    // The key pair ID.
    shared_ptr<string> keyPairId_ {};
    // The name of the SSH key pair.
    shared_ptr<string> keyPairName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
