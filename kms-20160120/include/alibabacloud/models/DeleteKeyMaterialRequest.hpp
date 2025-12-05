// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKEYMATERIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKEYMATERIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DeleteKeyMaterialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKeyMaterialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKeyMaterialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
    };
    DeleteKeyMaterialRequest() = default ;
    DeleteKeyMaterialRequest(const DeleteKeyMaterialRequest &) = default ;
    DeleteKeyMaterialRequest(DeleteKeyMaterialRequest &&) = default ;
    DeleteKeyMaterialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKeyMaterialRequest() = default ;
    DeleteKeyMaterialRequest& operator=(const DeleteKeyMaterialRequest &) = default ;
    DeleteKeyMaterialRequest& operator=(DeleteKeyMaterialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DeleteKeyMaterialRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


  protected:
    // The globally unique ID of the CMK.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
