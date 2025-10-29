// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAICPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAICPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteAICPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAICPublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAICPublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
    };
    DeleteAICPublicKeyRequest() = default ;
    DeleteAICPublicKeyRequest(const DeleteAICPublicKeyRequest &) = default ;
    DeleteAICPublicKeyRequest(DeleteAICPublicKeyRequest &&) = default ;
    DeleteAICPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAICPublicKeyRequest() = default ;
    DeleteAICPublicKeyRequest& operator=(const DeleteAICPublicKeyRequest &) = default ;
    DeleteAICPublicKeyRequest& operator=(DeleteAICPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyName_ == nullptr; };
    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline DeleteAICPublicKeyRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
