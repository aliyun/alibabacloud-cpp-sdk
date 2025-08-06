// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEENCRYPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEENCRYPTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DecryptKeyUri, decryptKeyUri_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(KeyEncryptMethod, keyEncryptMethod_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DecryptKeyUri, decryptKeyUri_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(KeyEncryptMethod, keyEncryptMethod_);
    };
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig &&) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig& operator=(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig& operator=(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->decryptKeyUri_ != nullptr
        && this->encryptType_ != nullptr && this->keyEncryptMethod_ != nullptr; };
    // decryptKeyUri Field Functions 
    bool hasDecryptKeyUri() const { return this->decryptKeyUri_ != nullptr;};
    void deleteDecryptKeyUri() { this->decryptKeyUri_ = nullptr;};
    inline string decryptKeyUri() const { DARABONBA_PTR_GET_DEFAULT(decryptKeyUri_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig& setDecryptKeyUri(string decryptKeyUri) { DARABONBA_PTR_SET_VALUE(decryptKeyUri_, decryptKeyUri) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // keyEncryptMethod Field Functions 
    bool hasKeyEncryptMethod() const { return this->keyEncryptMethod_ != nullptr;};
    void deleteKeyEncryptMethod() { this->keyEncryptMethod_ = nullptr;};
    inline string keyEncryptMethod() const { DARABONBA_PTR_GET_DEFAULT(keyEncryptMethod_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig& setKeyEncryptMethod(string keyEncryptMethod) { DARABONBA_PTR_SET_VALUE(keyEncryptMethod_, keyEncryptMethod) };


  protected:
    std::shared_ptr<string> decryptKeyUri_ = nullptr;
    std::shared_ptr<string> encryptType_ = nullptr;
    std::shared_ptr<string> keyEncryptMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
