// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeletePublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
    };
    DeletePublicKeyRequest() = default ;
    DeletePublicKeyRequest(const DeletePublicKeyRequest &) = default ;
    DeletePublicKeyRequest(DeletePublicKeyRequest &&) = default ;
    DeletePublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePublicKeyRequest() = default ;
    DeletePublicKeyRequest& operator=(const DeletePublicKeyRequest &) = default ;
    DeletePublicKeyRequest& operator=(DeletePublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyName_ != nullptr; };
    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline DeletePublicKeyRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
