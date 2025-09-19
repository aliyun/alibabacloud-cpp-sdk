// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTINSTANCELOGININFOENCRYPTIONOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTINSTANCELOGININFOENCRYPTIONOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequestInstanceLoginInfoEncryptionOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequestInstanceLoginInfoEncryptionOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequestInstanceLoginInfoEncryptionOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    LoginInstanceRequestInstanceLoginInfoEncryptionOptions() = default ;
    LoginInstanceRequestInstanceLoginInfoEncryptionOptions(const LoginInstanceRequestInstanceLoginInfoEncryptionOptions &) = default ;
    LoginInstanceRequestInstanceLoginInfoEncryptionOptions(LoginInstanceRequestInstanceLoginInfoEncryptionOptions &&) = default ;
    LoginInstanceRequestInstanceLoginInfoEncryptionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequestInstanceLoginInfoEncryptionOptions() = default ;
    LoginInstanceRequestInstanceLoginInfoEncryptionOptions& operator=(const LoginInstanceRequestInstanceLoginInfoEncryptionOptions &) = default ;
    LoginInstanceRequestInstanceLoginInfoEncryptionOptions& operator=(LoginInstanceRequestInstanceLoginInfoEncryptionOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->KMSKeyId_ != nullptr && this->mode_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline LoginInstanceRequestInstanceLoginInfoEncryptionOptions& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline LoginInstanceRequestInstanceLoginInfoEncryptionOptions& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline LoginInstanceRequestInstanceLoginInfoEncryptionOptions& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
