// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKEYDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKEYDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateKeyDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKeyDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKeyDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
    };
    UpdateKeyDescriptionRequest() = default ;
    UpdateKeyDescriptionRequest(const UpdateKeyDescriptionRequest &) = default ;
    UpdateKeyDescriptionRequest(UpdateKeyDescriptionRequest &&) = default ;
    UpdateKeyDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKeyDescriptionRequest() = default ;
    UpdateKeyDescriptionRequest& operator=(const UpdateKeyDescriptionRequest &) = default ;
    UpdateKeyDescriptionRequest& operator=(UpdateKeyDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->keyId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKeyDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline UpdateKeyDescriptionRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


  protected:
    // The description of the CMK. This description includes the purpose of the CMK, such as the types of data that you want to protect and applications that can use the CMK.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the CMK. The ID must be globally unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
