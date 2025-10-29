// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODYDATAAVATARASSETS_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODYDATAAVATARASSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateChatSessionResponseBodyDataAvatarAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatSessionResponseBodyDataAvatarAssets& obj) { 
      DARABONBA_PTR_TO_JSON(md5, md5_);
      DARABONBA_PTR_TO_JSON(minRequiredVersion, minRequiredVersion_);
      DARABONBA_PTR_TO_JSON(secret, secret_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatSessionResponseBodyDataAvatarAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(md5, md5_);
      DARABONBA_PTR_FROM_JSON(minRequiredVersion, minRequiredVersion_);
      DARABONBA_PTR_FROM_JSON(secret, secret_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    CreateChatSessionResponseBodyDataAvatarAssets() = default ;
    CreateChatSessionResponseBodyDataAvatarAssets(const CreateChatSessionResponseBodyDataAvatarAssets &) = default ;
    CreateChatSessionResponseBodyDataAvatarAssets(CreateChatSessionResponseBodyDataAvatarAssets &&) = default ;
    CreateChatSessionResponseBodyDataAvatarAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatSessionResponseBodyDataAvatarAssets() = default ;
    CreateChatSessionResponseBodyDataAvatarAssets& operator=(const CreateChatSessionResponseBodyDataAvatarAssets &) = default ;
    CreateChatSessionResponseBodyDataAvatarAssets& operator=(CreateChatSessionResponseBodyDataAvatarAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->md5_ == nullptr
        && return this->minRequiredVersion_ == nullptr && return this->secret_ == nullptr && return this->type_ == nullptr && return this->url_ == nullptr; };
    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline CreateChatSessionResponseBodyDataAvatarAssets& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // minRequiredVersion Field Functions 
    bool hasMinRequiredVersion() const { return this->minRequiredVersion_ != nullptr;};
    void deleteMinRequiredVersion() { this->minRequiredVersion_ = nullptr;};
    inline string minRequiredVersion() const { DARABONBA_PTR_GET_DEFAULT(minRequiredVersion_, "") };
    inline CreateChatSessionResponseBodyDataAvatarAssets& setMinRequiredVersion(string minRequiredVersion) { DARABONBA_PTR_SET_VALUE(minRequiredVersion_, minRequiredVersion) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline CreateChatSessionResponseBodyDataAvatarAssets& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateChatSessionResponseBodyDataAvatarAssets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateChatSessionResponseBodyDataAvatarAssets& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> minRequiredVersion_ = nullptr;
    std::shared_ptr<string> secret_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
