// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
    };
    UpdateAliasRequest() = default ;
    UpdateAliasRequest(const UpdateAliasRequest &) = default ;
    UpdateAliasRequest(UpdateAliasRequest &&) = default ;
    UpdateAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAliasRequest() = default ;
    UpdateAliasRequest& operator=(const UpdateAliasRequest &) = default ;
    UpdateAliasRequest& operator=(UpdateAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->keyId_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline UpdateAliasRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline UpdateAliasRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


  protected:
    // The alias that you want to bind.
    // 
    // The value must be 1 to 255 characters in length and must include the alias/ prefix.
    // 
    // This parameter is required.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The ID of the CMK. The ID must be globally unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
