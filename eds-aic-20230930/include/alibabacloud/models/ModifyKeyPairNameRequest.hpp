// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYKEYPAIRNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYKEYPAIRNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyKeyPairNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyKeyPairNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(NewKeyPairName, newKeyPairName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyKeyPairNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(NewKeyPairName, newKeyPairName_);
    };
    ModifyKeyPairNameRequest() = default ;
    ModifyKeyPairNameRequest(const ModifyKeyPairNameRequest &) = default ;
    ModifyKeyPairNameRequest(ModifyKeyPairNameRequest &&) = default ;
    ModifyKeyPairNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyKeyPairNameRequest() = default ;
    ModifyKeyPairNameRequest& operator=(const ModifyKeyPairNameRequest &) = default ;
    ModifyKeyPairNameRequest& operator=(ModifyKeyPairNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyPairId_ == nullptr
        && return this->newKeyPairName_ == nullptr; };
    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline ModifyKeyPairNameRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // newKeyPairName Field Functions 
    bool hasNewKeyPairName() const { return this->newKeyPairName_ != nullptr;};
    void deleteNewKeyPairName() { this->newKeyPairName_ = nullptr;};
    inline string newKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(newKeyPairName_, "") };
    inline ModifyKeyPairNameRequest& setNewKeyPairName(string newKeyPairName) { DARABONBA_PTR_SET_VALUE(newKeyPairName_, newKeyPairName) };


  protected:
    // The ID of the ADB key pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The name of the ADB key pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> newKeyPairName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
