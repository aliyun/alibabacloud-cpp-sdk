// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCLUSTERCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCLUSTERCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateClusterRequestClusterCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestClusterCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestClusterCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    CreateClusterRequestClusterCredentials() = default ;
    CreateClusterRequestClusterCredentials(const CreateClusterRequestClusterCredentials &) = default ;
    CreateClusterRequestClusterCredentials(CreateClusterRequestClusterCredentials &&) = default ;
    CreateClusterRequestClusterCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestClusterCredentials() = default ;
    CreateClusterRequestClusterCredentials& operator=(const CreateClusterRequestClusterCredentials &) = default ;
    CreateClusterRequestClusterCredentials& operator=(CreateClusterRequestClusterCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyPairName_ == nullptr
        && return this->password_ == nullptr; };
    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateClusterRequestClusterCredentials& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateClusterRequestClusterCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The name of the key pair. The name must be 2 to 128 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain digits, letters, colons (:), underscores (_), and hyphens (-).
    // 
    // >  For more information, see [Create a key pair](https://help.aliyun.com/document_detail/51793.html).
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The password for the root user to log on to the node. The password must be 8 to 20 characters in length, and must contain at least 3 of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported: `() ~ ! @ # $ % ^ & * - = + { } [ ] : ; \\" < > , . ? /`
    // 
    // >  We recommend that you use HTTPS to call the API operation to prevent password leakage.
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
