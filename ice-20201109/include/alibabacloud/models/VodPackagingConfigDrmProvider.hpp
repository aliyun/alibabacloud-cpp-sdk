// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VODPACKAGINGCONFIGDRMPROVIDER_HPP_
#define ALIBABACLOUD_MODELS_VODPACKAGINGCONFIGDRMPROVIDER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class VodPackagingConfigDrmProvider : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VodPackagingConfigDrmProvider& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptionMethod, encryptionMethod_);
      DARABONBA_PTR_TO_JSON(IV, IV_);
      DARABONBA_PTR_TO_JSON(SystemIds, systemIds_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, VodPackagingConfigDrmProvider& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptionMethod, encryptionMethod_);
      DARABONBA_PTR_FROM_JSON(IV, IV_);
      DARABONBA_PTR_FROM_JSON(SystemIds, systemIds_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    VodPackagingConfigDrmProvider() = default ;
    VodPackagingConfigDrmProvider(const VodPackagingConfigDrmProvider &) = default ;
    VodPackagingConfigDrmProvider(VodPackagingConfigDrmProvider &&) = default ;
    VodPackagingConfigDrmProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VodPackagingConfigDrmProvider() = default ;
    VodPackagingConfigDrmProvider& operator=(const VodPackagingConfigDrmProvider &) = default ;
    VodPackagingConfigDrmProvider& operator=(VodPackagingConfigDrmProvider &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptionMethod_ != nullptr
        && this->IV_ != nullptr && this->systemIds_ != nullptr && this->url_ != nullptr; };
    // encryptionMethod Field Functions 
    bool hasEncryptionMethod() const { return this->encryptionMethod_ != nullptr;};
    void deleteEncryptionMethod() { this->encryptionMethod_ = nullptr;};
    inline string encryptionMethod() const { DARABONBA_PTR_GET_DEFAULT(encryptionMethod_, "") };
    inline VodPackagingConfigDrmProvider& setEncryptionMethod(string encryptionMethod) { DARABONBA_PTR_SET_VALUE(encryptionMethod_, encryptionMethod) };


    // IV Field Functions 
    bool hasIV() const { return this->IV_ != nullptr;};
    void deleteIV() { this->IV_ = nullptr;};
    inline string IV() const { DARABONBA_PTR_GET_DEFAULT(IV_, "") };
    inline VodPackagingConfigDrmProvider& setIV(string IV) { DARABONBA_PTR_SET_VALUE(IV_, IV) };


    // systemIds Field Functions 
    bool hasSystemIds() const { return this->systemIds_ != nullptr;};
    void deleteSystemIds() { this->systemIds_ = nullptr;};
    inline const vector<string> & systemIds() const { DARABONBA_PTR_GET_CONST(systemIds_, vector<string>) };
    inline vector<string> systemIds() { DARABONBA_PTR_GET(systemIds_, vector<string>) };
    inline VodPackagingConfigDrmProvider& setSystemIds(const vector<string> & systemIds) { DARABONBA_PTR_SET_VALUE(systemIds_, systemIds) };
    inline VodPackagingConfigDrmProvider& setSystemIds(vector<string> && systemIds) { DARABONBA_PTR_SET_RVALUE(systemIds_, systemIds) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline VodPackagingConfigDrmProvider& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> encryptionMethod_ = nullptr;
    std::shared_ptr<string> IV_ = nullptr;
    std::shared_ptr<vector<string>> systemIds_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
