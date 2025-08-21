// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateKeyPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
    };
    CreateKeyPairRequest() = default ;
    CreateKeyPairRequest(const CreateKeyPairRequest &) = default ;
    CreateKeyPairRequest(CreateKeyPairRequest &&) = default ;
    CreateKeyPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyPairRequest() = default ;
    CreateKeyPairRequest& operator=(const CreateKeyPairRequest &) = default ;
    CreateKeyPairRequest& operator=(CreateKeyPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPairName_ != nullptr; };
    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateKeyPairRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


  protected:
    // The name of the key pair. The name must conform to the following naming conventions:
    // 
    // *   The name must be 2 to 128 characters in length, and can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // *   It must start with a letter but cannot start with `http://` or `https://`.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyPairName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
